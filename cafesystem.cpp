#include <iostream>
#include <string>
using namespace std;
int main()
{
    int check, total, load;
    string menu;

    cout << "+====+=======+=======+" << endl;
    cout << "| NO | MENU  | HARGA |" << endl;
    cout << "+====+=======+=======+" << endl;
    cout << "| 1  | Latte | RM  7 |" << endl;
    cout << "| 2  | Mocha | RM  8 |" << endl;
    cout << "| 3  | Macha | RM  9 |" << endl;
    cout << "| 4  | Juice | RM 10 |" << endl;
    cout << "+----+-------+-------+\n"<< endl;

    // cout << "Enter the menu number:";
    // cin >> num;
    // cout << "Number is " << (a==b);

    cout << "Choose the Menu: ";
    cin >> check;
    if (check == 1)
    {
        total = 7;
        menu = "Latte";
        cout << "The Menu is " << menu << " & The Price is RM " << total << ".";
    }
    else if (check == 2)
    {
        total = 8;
        menu = "Mocha";
        cout << "The Menu is " << menu << " & The Price is RM " << total << ".";
    }
    else if (check == 3)
    {
        total = 9;
        menu = "Macha";
        cout << "The Menu is " << menu << " & The Price is RM " << total << ".";
    }
    else if (check == 4)
    {
        total = 10;
        menu = "Sky Juice";
        cout << "The Menu is " << menu << " & The Price is RM " << total << ".";
    }
    else  
    {
        cout << "Menu Not Available" << menu <<"!";  
    }

    return 0;
}