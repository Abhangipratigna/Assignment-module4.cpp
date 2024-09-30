#include <iostream>

using namespace std;

class overloading
{
public:
    int A, B;

    void Add(int A, int B)
    {
        cout << "Addition " << A + B << endl;
    }
    void sub(int A, int B)
    {
        cout << "Subtraction " << A - B << endl;
    }
    void mul(int A, int B)
    {
        cout << "multiplication " << A * B << endl;
    }
    void div(int A, int B)
    {
        cout << " Division " << A / B << endl;
    }
};

int main()
{
    int A, B;
    cout << "Enter 1st number =";
    cin >> A;
    cout << "Enter 2nd number =";
    cin >> B;

    cout << "\nAddition = " << A + B;
    cout << "\nSubtraction = " << A - B;
    cout << "\nmultiplication = " << A * B;
    cout << "\nDivision = " << A / B;

    return 0;
}
