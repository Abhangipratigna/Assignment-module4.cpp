#include <iostream>
using namespace std;

class calculator
{
    int num1;
    int num2;

public:
    calculator(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    int sum()
    {
        cout << "Sum: ";
        return num1 + num2;
    }
    int mul()
    {
        cout << "Mul: ";
        return num1 * num2;
    }
    int sub()
    {
        cout << "Sub:";
        return num1 - num2;
    }
    int mod()
    {
        cout << "mod:";
        return num1 % num2;
    }
    float div()
    {
        cout << "div:";
        return num1 / num2;
    }
};

int main()
{
    int n1, n2;

    cout << "Enter your number1 =" << endl;
    cin >> n1;
    cout << "Enter your number2 =" << endl;
    cin >> n2;

    cout << "----------------" << endl;

    calculator c1(n1, n2);
    cout << c1.sum() << endl;
    cout << c1.mul() << endl;
    cout << c1.sub() << endl;
    cout << c1.mod() << endl;
    cout << c1.div() << endl;
}
