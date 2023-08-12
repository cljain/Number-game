#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // this generates our number
    // cout << "The number is " << number << endl;

    do
    {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess > number)
        {
            cout << "Lower number please!" << endl;
        }
        else if (guess < number)
        {
            cout << "Higher number please!" << endl;
        }
        else
        {
            cout << "You guessed it in " << nguesses << " attempts" << endl;
        }
        nguesses++;

    } while (guess != number);

    return 0;
}
