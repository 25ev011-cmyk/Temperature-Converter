#include <iostream>
using namespace std;

int main()
{
    int choice;
    double temp, result;

    do
    {
        cout << "\n===== Temperature Converter =====\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                result = (temp * 9.0 / 5.0) + 32;
                cout << "Temperature in Fahrenheit: " << result << endl;
                break;

            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temp;
                result = (temp - 32) * 5.0 / 9.0;
                cout << "Temperature in Celsius: " << result << endl;
                break;

            case 3:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}