#include <iostream>
using namespace std;
int main ()
{
    int basic;
    char ch;
    cout << "enter the basic slary" << endl;
    cin >> basic;
    cout << " enter your grade As A B OR C" << endl;
    cin >> ch;

    float hra = (basic * 20)/100;
    float da = ( basic * 50)/100;
    float pf = ( basic * 11)/100;

    int salary;

    if ( ch == 'A'){
        salary = basic + hra + da + 1700 - pf;
        cout << salary << endl;
    }
    else if ( ch == 'B'){
        salary = basic + hra + da + 1500 - pf;
        cout << salary << endl;
    }
    else{
        salary = basic + hra + da + 1300 - pf;
        cout << salary << endl;
    }
    return 0;
}