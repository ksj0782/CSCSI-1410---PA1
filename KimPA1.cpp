// Created by Sungjoon Kim //
// CSCI 1410 - PA1 //

#include <iostream> // Bring 'iostream' header file.
#include <fstream> // Bring 'fstream' header file to use ifstream function, which can bring a file.

using namespace std; // Use the namespace 'std'.

int menu(); // A prototype of a function for main menu.

int option(); // A prototype of a function for options.

int firstCase(); // A prototype of a function for case 1.

int secondCase(); // A prototype of a function for case 2.

int thirdCase(); // A prototype of a function case 3.

int fourthCase(); // A prototype of a function case 4.

int main() // Start of the program, which prints out only name.
{
    cout << "Sungjoon Kim" << endl; // Print our name.
    menu(); // Call the 'menu' function.
}

int menu() // The definition of 'menu' function, which has the menu and is executed in the 'main' function.
{
    int optionNumber; // Integer type variable for input number.

    option(); // Call the 'option' function.

    cin >> optionNumber; // Get a option number from console (keyboard or user).

    switch (optionNumber) // Use a switch statement with four cases when the input number is 1, 2, 3 or 4.
    {
        case 1: // case 1 --> when the input number is 1.
        firstCase(); // Call the 'firstCase' function.
        break;

        case 2: // case 2 --> when the input number is 2.
        secondCase(); // Call the 'secondCase' function.
        break;

        case 3: // case 3 --> when the input number is 3.
        thirdCase(); // Call the 'thirdCase' function.
        break;

        case 4: // case 4 --> when the input number is 4.
        fourthCase(); // Call the 'fourthCase' function.
        break;

        default: // Except case 1, 2, 3 and 4, go back to the top of the menu.
            return menu(); // Recursion of 'menu' function.
    }
}


int option() // The definition of 'option' function.
{
    cout << "Select an option number" << endl;

    cout << "1. Always 99" << endl // Print out the first option.
         << "2. Always 3" << endl // Print out the second option.
         << "3. exit" << endl // Print out the third option .
         << "4. Always 3 with file" << endl; // Print out the fourth option.
}

int firstCase() // The definition of 'firstCase' function.
{
        int i;

        // 'i' gets the starting value 0, and it increases by 1 every time loop is executed.
        // The loop is repeated until 'i' reaches 9, which is less than 10.
        // Therefore, loop is executed 10 times (i: 0 ~ 9).
        for (i = 0; i < 10; i++)
        {
            int j = i * 10; // Since 'i' is less than 10, it multiplies by 10.
                          // If the number is less than 10, it is automatically reversed when 10 is multiplied.
            int subtractNumber = i - j; // Subtract the reversed number from original number.
            int absoluteNumber = abs(subtractNumber); // If the number is negative, make is as the absolute number.
            int absReverse = (absoluteNumber % 10) * 10 + (absoluteNumber / 10); // Reverse digits of the absolute number.
            int sumNumber = absReverse + absoluteNumber; // Add the reversed number and the absolute number of the reversed number.

            cout << i << " reverse to make " << j << endl;
            cout << "Absolute value of " << i << " - " << j << " = " << absoluteNumber << endl;
            cout << absoluteNumber << " reverse to " << absReverse << endl;

            if (sumNumber == 99) // If the number is 99, print out congratulations message.
           {
               cout << "Congratulations! " << absoluteNumber << "+" << absReverse << " = " << sumNumber << endl;
           }
           else // If the number is not 99, print out a message that you may have done something wrong.
           { cout << "Sorry there must be something wrong with my logic" << endl; }


        }

         // After 'i' escapes the first loop, 'i' get in this loop with the value of 10.
         // This loop is executed until i reaches 99, which is less than 100.
         // Therefore, loop is executed 90 times (i: 10 ~ 99).
         while (i < 100)
         {
            cout << i << endl;
            int tenthDigit = i / 10; // Get the tenth digit.
            int onesDigit = i % 10; // Get the ones digit.
            int reverseDigit = onesDigit * 10 + tenthDigit; // Make the reversed number, by using tenth digit and ones digit.
            int subtractNumber = i - reverseDigit; // Subtract the reversed number from original number.
            int absoluteNumber = abs(subtractNumber); // If the number is negative, make is as the absolute number.
            int absReverse = (absoluteNumber % 10) * 10 + (absoluteNumber / 10); // Reverse digits of the absolute number.
            int sumNumber = absReverse + absoluteNumber; // Add the reversed number and the absolute number of the reversed number.

            cout << i << " reverse to make " << reverseDigit << endl;
            cout << "Absolute value of " << i << " - " << reverseDigit << " = " << absoluteNumber << endl;
            cout << absoluteNumber << " reverse to " << absReverse << endl;

            if (sumNumber == 99) // If the number is 99, print out congratulations message.
            {
            cout << "Congratulations! " << absoluteNumber << "+" << absReverse << " = " << sumNumber << endl;
            }
            else // If the number is not 99, print out a message that you may have done something wrong.
            { cout << "Sorry there must be something wrong with my logic" << endl; }

            i++; // 'i' increases by 1 every time 'i' comes back to the beginning of the loop.
          }

         return menu(); // Recursion of 'menu' function
}


int secondCase() // The definition of 'secondCase' function.
{
        int pickNumber;

        cout << "Pick a number" << endl;
        cin >> pickNumber; // Get an another number from the console (user).

        int doubleNumber = pickNumber * 2; //  Double the number....(1)
        int add9 = doubleNumber + 9; // Add 9 to (1)....(2)
        int sub3 = add9 - 3; // Subtract 3 from (2)....(3)
        int div2 = sub3 / 2; // Divide (3) by 2....(4)
        int subOrig = div2 - pickNumber; // subtract the original number from (4).

        cout << "Doubling that number " << "= " << doubleNumber << endl;
        cout << "Now adding 9 = " << add9 << endl;
        cout << "Now subtracting 3 = " << sub3 << endl;
        cout << "Now dividing by 2 = " << div2 << endl;
        cout << "And finally subtracting the original number..." << div2 << endl;

        if (subOrig == 3) // If the number is 3, print out congratulations message.
        {
            cout << "Congratulations, the answer is 3" << endl;
        }
        else // If the number is not 3, print out a message that you may have done something wrong.
        {
            cout << "Sorry there must be something wrong with my logic" << endl;
        }
        return menu(); // Recursion of 'menu' function
}

int thirdCase() // The definition of 'thirdCase' function.
{
        cout << "This program is finished" << endl;

        return 0; // The program ends with the end code 0.
}

int fourthCase() // The definition of 'fourthCase' function.
{
        int textNumber;
        ifstream txtFile; // 'txtFile' is defined as ifstream data type.

        cout << "Opening file myfile.txt..." << endl;

        txtFile.open("myfile.txt"); // Read 'myfile.txt" file.

        cout << "Reading an integer from myfile.txt" << endl;

        txtFile >> textNumber; // Put a value into 'textNumber' from the file.

        cout << "Closing myfile.txt" << endl;

        txtFile.close(); // Stop reading the file.

        cout << "Bring a number" << endl;
        cout << textNumber << endl;

        int doubleNumber = textNumber * 2;
        int add9 = doubleNumber + 9; // Add 9 to (1)....(2)
        int sub3 = add9 - 3; // Subtract 3 from (2)....(3)
        int div2 = sub3 / 2; // Divide (3) by 2....(4)
        int subOrig = div2 - textNumber; // subtract the original number from (4).
        cout << "Doubling that number " << "= " << doubleNumber << endl;
        cout << "Now adding 9 = " << add9 << endl;
        cout << "Now subtracting 3 = " << sub3 << endl;
        cout << "Now dividing by 2 = " << div2 << endl;
        cout << "And finally subtracting the original number..." << div2 << endl;

        if (subOrig == 3) // If the number is 3, print out congratulations message.
        {
            cout << "Congratulations, the answer is 3" << endl;
        }
        else // If the number is not 3, print out a message that you may have done something wrong.
        {
            cout << "Sorry there must be something wrong with my logic" << endl;
        }
        return menu(); // Recursion of 'menu' function
}                                      