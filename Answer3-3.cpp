#include <iostream>
using namespace std;

class Car
{
private:
    string company;
    string model;
    int year;

public:
    Car(const string &comp, const string &mdl, int yr) : company(comp), model(mdl), year(yr) {}

    string getCompany()
    {
        return company;
    }

    void setCompany(const string &comp)
    {
        company = comp;
    }

    string getModel()
    {
        return model;
    }

    void setModel(const string &mdl)
    {
        model = mdl;
    }

    int getYear()
    {
        return year;
    }

    void setYear(int yr)
    {
        year = yr;
    }
};

int main()
{

    Car car("HONDA", "A2", 2021);

    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    car.setCompany("BAW");
    car.setModel("M4");
    car.setYear(2023);

    cout << "\nUpdated Company: " << car.getCompany() << endl;
    cout << "Updated Model: " << car.getModel() << endl;
    cout << "Updated Year: " << car.getYear() << endl;

    return 0;
}
