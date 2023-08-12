#include <iostream>
#include <string>
using namespace std;

int main()
{
    string regno, name,ipta;
    float merits, cgpa, cgpa1, cgpa2, cgpa3, cgpa4, cgpa5;
    
    cout << "Enter Name:";
    getline(cin, name);
    cout << "Enter IPTA:";
    getline(cin, ipta);
    cout << "Enter Registration Number:";
    cin >> regno;
    cout << "Enter the marks for 1st semester:";
    cin >> cgpa1;
    cout << "Enter the marks for 2nd semester:";
    cin >> cgpa2;
    cout << "Enter the marks for 3rd semester:";
    cin >> cgpa3;
    cout << "Enter the marks for 4th semester:";
    cin >> cgpa4;
    cout << "Enter the marks for 5th semester:";
    cin >> cgpa5;

    cgpa = cgpa1 + cgpa2 + cgpa3 + cgpa4 + cgpa5;
    merits = (cgpa /4) * 100;

    cout <<"\n\n"<< endl;
    cout << "Your Name: " << name << endl;
    cout << "Your IPTA: " << ipta << endl;
    cout << "Your Registration Number: " << regno << endl;
    cout << "Percentage score secure:" << cgpa << "%" << endl;
    
    return 0;
}