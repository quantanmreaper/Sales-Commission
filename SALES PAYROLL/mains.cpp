#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int fixedallowance = 5000;

class employee
{
    public:
        string ename;
        int salesamount, commission, gross, tax, netpay;

        void capture()
        {
            cout << "\t\t ENTER THE FIRST NAME OF EMPLOYEE : ";
            cin >> ename;
            cout << "\t\t ENTER SALESAMOUNT ACHIEVED : ";
            cin >> salesamount;
        }

        void computecommission()
        {
            if (salesamount >= 10000 && salesamount < 20000)
            {
                commission = 0.07 * salesamount;
            }
            else if (salesamount >= 20000 && salesamount < 50000)
            {
                commission = 0.09 * salesamount;
            }
            else
            {
                commission = 0.12 * salesamount;
            }
        }

        void computegross()
        {
            gross = (fixedallowance + commission);
        }

        void computetax()
        {
            if (salesamount >= 10000)
            {
                tax = 0.1 * gross;
            }
            else
            {
                tax = 0;
            }
        }

        void computenetincome()
        {
            netpay = gross - tax;
        }
        
};

void output(employee e[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << e[i].ename << setw(9) << fixedallowance << setw(7) << e[i].salesamount << setw(8) << e[i].commission << setw(7) << e[i].gross << setw(8) << e[i].tax << setw(7) << e[i].netpay << endl;
    }
}

int main()
{
    employee employees[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        employees[i].capture();
        employees[i].computecommission();
        employees[i].computegross();
        employees[i].computetax();
        employees[i].computenetincome();
    }

    output(employees, n);

    return 0;
}