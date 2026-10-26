#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "===== CONTROL STRUCTURES LAB 04 =====" << endl;
    cout << "1. Check Pass or Fail" << endl;
    cout << "2. Check Even or Odd" << endl;
    cout << "3. Find Larger of Two Numbers" << endl;
    cout << "4. Print Numbers 1 to 20" << endl;
    cout << "5. Print Star Pattern" << endl;

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {

        case 1: {
            int marks;
            cout << "Enter marks: ";
            cin >> marks;

            if (marks >= 50)
                cout << "Pass" << endl;
            else
                cout << "Fail" << endl;

            break;
        }

        case 2: {
            int num;
            cout << "Enter a number: ";
            cin >> num;

            if (num % 2 == 0)
                cout << "Even" << endl;
            else
                cout << "Odd" << endl;

            break;
        }

        case 3: {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if (a > b)
                cout << "Larger number: " << a << endl;
            else if (b > a)
                cout << "Larger number: " << b << endl;
            else
                cout << "Both numbers are equal" << endl;

            break;
        }

        case 4: {
            cout << "Using for loop:" << endl;

            for (int i = 1; i <= 20; i++)
                cout << i << " ";

            cout << endl;

            cout << "Using while loop:" << endl;

            int i = 1;
            while (i <= 20) {
                cout << i << " ";
                i++;
            }

            cout << endl;
            break;
        }

        case 5: {
            for (int i = 1; i <= 5; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }

            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}