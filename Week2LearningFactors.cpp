// Week2LearningFactors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

unsigned int GetValidNumericalInput();
void DisplayAllFactors(unsigned int number);

unsigned int GetValidNumericalInput()
{
    unsigned int input;

    bool retry;

    do
    {
        retry = false;

        cout << "Please enter a number: ";

        cin >> input;

        if (cin.fail() || input == 0)
        {
            cout << "Input not valid." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            retry = true;
        }
    } while (retry);

    return input;
}

void DisplayAllFactors(unsigned int number)
{
    cout << "Displaying factors..." << endl;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0) cout << i << endl;
    }
}

int main()
{
    int input = GetValidNumericalInput();

    DisplayAllFactors(input);
}

