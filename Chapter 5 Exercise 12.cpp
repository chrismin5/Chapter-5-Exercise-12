/*  Program File Name: Chapter 5 Exercise 12
    Programmer: Christian Min
    Date: 11/8/26
    Requirements:
    Write a program that generates a random number between 1 and 100 and asks the user to guess what the number is. If the user's guess is higher than the random number,
    the program should display "Too high. Try again." If the user's guess is lower than the random number, the program should display "Too low. Try again." The program
    should use a loop that repeats until the user correctly gusses the random number. Then the program should display "Congratulations. You figured out my number."
*/

#include <iostream>
#include <cstdlib>      //for rand and srand
#include <ctime>        //for the time function
using namespace std;

int main()
{
    const int minValue = 1;         //minimum value for the guess at 1
    const int maxValue = 100;       //maximum value for the guess at 100   

    unsigned seed = time(0);        //get system time
    srand(seed);                    //seed the rng

    int numberAnswer, numberGuess = 0;      //to hold the value for the variable that will be the "answer," and the original guess set at 0 to ensure at least one loop through the while loop
    numberAnswer = (rand() % (maxValue - minValue + 1)) + minValue;     //set the value for the asnwer using the rand function

    while (numberGuess != numberAnswer) {       //while loop to repeated ask the user for an input as long as the answer is not correct
        cout << "Enter a guess for a number between 1 and 100: ";
        cin >> numberGuess;

        if (numberGuess > numberAnswer) {       //checks to see if the entered value is greater than the "answer" value determined by the rand function
            cout << "Too high. Try again." << "\n";
        }
        else if (numberGuess < numberAnswer) {      //checks to see if the entered value is less than the "answer" value determined by the rand function
            cout << "Too low. Try again." << "\n";
        }
    }

    cout << "\n" << "Congratulations. You figured out my number." << endl;
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
