#include <iostream>
using namespace std;

class Student
{
public:
    int Roll;
    void getRoll()
    {
        cout << "\nEnter your Roll:";
        cin >> Roll;
    }
};

class Test
{
public:
    float EnglishMarks, GujaratiMarks;
    void getMarks()
    {
        cout << "\nEnter your english Subject Marks:";
        cin >> EnglishMarks;
        cout << "\nEnter your Gujarati subject Marks:";
        cin >> GujaratiMarks;
    }
};

class Result : public Test, public Student
{
public:
    void getResult()
    {
        cout << "\nTotalMarks:" << EnglishMarks + GujaratiMarks << endl;
    }

    void getDisplay()
    {
        cout << "\nRoll:" << Roll;
        cout << "\nEnglish Subject Marks:" << EnglishMarks;
        cout << "\nGujarati subject Marks:" << GujaratiMarks;
        cout << "\nTotalMarks:" << EnglishMarks + GujaratiMarks << endl;
    }
};

int main()
{
    Result R1;
    R1.getRoll();
    R1.getMarks();
    R1.getResult();
    R1.getDisplay();
}
