/*
ADMNO- 167077
NAMES-  MEPANI BHAVIN RAMESH
ICS 1C(1.1) JULY 2023
*/
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
        
        void output()
        {

            cout << setw(15) << ename << setw(15) << fixedallowance << setw(15) << salesamount << setw(15)
             << commission << setw(15) << gross << setw(15) << tax << setw(15) << netpay << endl;
        }
};


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
     cout << "================================================================================================================================" << endl;
    cout << "\t\t\tABCD SYSTEMS LIMITED" << endl;
    cout << "=================================================================================================================================" << endl;
    cout << setw(15) << "NAME" << setw(15) << "FIXEDALLOWANCE" << setw(15) << "SALES-AMOUNT" << setw(15)
         << "COMMISSION" << setw(15) << "GROSS" << setw(15) << "TAX" << setw(15) << "NETPAY" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        employees[i].output();
    }
    cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t THANK YOU FOR USING THIS PROGRAM"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------------------"<<endl;
    return 0;
}