#include <iostream>
using namespace std;

int main()
{
    char op;
    cout << "Enter Your Operator [+ , - , / , * , %] :";
    cin >> op;

    if (op == '+' || op == '-' || op == '/' || op == '*' || op == '%')
    {
        switch (op)
        {
            case '+':
            {
                double n1, n2, total;
                cout << "Enter no 1 :"; cin >> n1;
                cout << "Enter no 2 :"; cin >> n2;
                total = n1 + n2;
                cout << "Total is :" << total << endl;
                break;
            }

            case '-':
            {
                double n1, n2, total;
                cout << "Enter no 1 :"; cin >> n1;
                cout << "Enter no 2 :"; cin >> n2;
                total = n1 - n2;
                cout << "Total is :" << total << endl;
                break;
            }

            case '/':
            {
                double n1, n2, total;
                cout << "Enter no 1 :"; cin >> n1;
                cout << "Enter no 2 :"; cin >> n2;
                if (n2 != 0)
                {
                    total = n1 / n2;
                    cout << "Total is :" << total << endl;
                }
                else
                {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            }

            case '*':
            {
                double n1, n2, total;
                cout << "Enter no 1 :"; cin >> n1;
                cout << "Enter no 2 :"; cin >> n2;
                total = n1 * n2;
                cout << "Total is :" << total << endl;
                break;
            }

            case '%':
            {
                int n1, n2, total;
                cout << "Enter no 1 :"; cin >> n1;
                cout << "Enter no 2 :"; cin >> n2;
                if (n2 != 0)
                {
                    total = n1 % n2;
                    cout << "Total is :" << total << endl;
                }
                else
                {
                    cout << "Error: Modulus by zero is not allowed." << endl;
                }
                break;
            }

            default:
                cout << "Invalid operator." << endl;
        }
    }
    else
    {
        cout << "Please enter a valid operator." << endl;
    }

    return 0;
}
