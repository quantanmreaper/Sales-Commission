#include <iostream>
#include <iomanip>
using namespace std;

class employee
{
public:
    string employeename;
    int houseallowance, tax, basicsalary, netsalary;

    void capture()
    {
        cout << "ENTER EMPLOYEE NAME : ";
        cin >> employeename;
        cout << "ENTER THE BASIC SALARY: ";
        cin >> basicsalary;
    }
    void computeallowance()
    {
        houseallowance = (0.2 * basicsalary);
    }
    void computetax()
    {
        if (basicsalary >= 10000)
        {
            tax = 0.1 * basicsalary;
        }
        else
        {
            tax = 0;
        }
    }
    void computenetpay()
    {
        netsalary = basicsalary + (houseallowance - tax);
    }
    void display()
    {
        cout << setw(20) << left << employeename
             << setw(15) << right << basicsalary
             << setw(15) << right << houseallowance
             << setw(10) << right << tax
             << setw(15) << right << netsalary
             << endl;
    }
};
int main()
{
    employee payroll[200]; //total number of employees that can be recorded is 200
    int n;
    cout << "ENTER THE NUMBER OF EMPLOYEES : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        payroll[i].capture();
        payroll[i].computeallowance();
        payroll[i].computetax();
        payroll[i].computenetpay();
    }
    cout << "=============================================================================================================" << endl;
    cout << "\t\t\t  SAMMY TRADERS LIMITED NAIROBI KENYA" << endl;
    cout << "=============================================================================================================" << endl;
    cout << setw(20) << left << "EMPLOYEENAME"
         << setw(15) << right << "BASICSALARY"
         << setw(15) << right << "HOUSEALLOWANCE"
         << setw(10) << right << "TAX"
         << setw(15) << right << "NETSALARY"
         << endl;
    cout << "                                                                                                              " << endl;
    for (int i = 0; i < n; i++)
    {
        payroll[i].display();
    }
    return 0;
}
