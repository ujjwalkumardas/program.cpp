// static customer
#include <iostream>
using namespace std;
class customer
{
private:
    string name;
    long long int acc_no;
    int amount;
    static int total_customer;
    static int total_bank;

public:
    // constructor
    // opening account in SBI
    customer(string name, long long int acc_no, int amount)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->amount = amount;
        total_customer++;
        total_bank+=amount;
        
    }

public:
    customer(int amoun)
    {
        amount = amount + amoun;
    }
    void display()
    {
        cout << "account holder = " << name << endl;
        cout << "account number = " << acc_no << endl;
        cout << "total amount = " << amount << endl;
    }
    void total_customers()
    {
        cout << "total customer = " << total_customer;
    }
    void abailable_amount_in_bank(){
        cout<<"BALANCE = "<<total_bank;
    }
};
int customer::total_customer = 0;
int customer::total_bank = 0;

int main()
{

    string name;
    long long int acc_no;
    int amount;
    cout << "enter the name of account holder\n == ";
    cin >> name;
    cout << endl
         << "enter the account number of acc_holder\n == ";
    cin >> acc_no;
    cout << "\nhow many amount is added in account\n == ";
    cin >> amount;
    customer c1(name, acc_no, amount);
    customer c2(name, acc_no, 40000);
    customer c3(name, acc_no, 50000);
    customer c4(name, acc_no, 60000);
    customer c5(name, acc_no, 70000);
    c1.display();
    c5.total_customers();
   c5.abailable_amount_in_bank();

}
