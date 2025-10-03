#include <iostream>
using namespace std;

int main()
{

    float num1, num2, result;

    cout << "Enter the values of 2 numbers: ";
    cin >> num1 >> num2;

    try
    {
        if (num2 == 0)
        {
            throw(num2);
        }

        else
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
    }

    catch (float n)
    {
        cout << "Exception: Division by zero is not allowed!" << endl;
    }

    return 0;
}

/*==========OUTPUTS==========
Enter the values of 2 numbers: 10
20
Result: 0.5

Enter the values of 2 numbers: 1
0
Exception: Division by zero is not allowed!
*/
