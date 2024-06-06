#include <lostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class bank{
    private :
    string name;
    int accnumber;
    char type[10];
    int amount = 0;
    int tot = 0;
    public :
    void setvalue()
    {
        cout << "Enter name\n";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Account Number\n";
        cin >> accnumber;
        cout << "Enter Account Type\n";
        cin >> type;
        cout << "Enter Balance\n";
        cin >> tot;
    }
    void showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Account No" << accnumber << endl; 
        cout << "Account type" << type << endl;
        cout << "Balance" << tot << endl;
    
    }
    void deposit()
    {
        cout << "\nEnter amount to deposited\n";
        cin >> amount;
    }
    void showbal()
    {
        tot= tot + amount;
        cout << "\nTotal balance is: " << tot;
    }
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdrawl\n";
        cin >> a;
        avai_balance = tot - a;
        cout << "Available Balance is" << avai_balance;
    }
};