#include <iostream>
using namespace std;
int main ()
{
int n;
cout << " enter the choice 1 to get alpha and 2 for numecical" << endl;
cin >> n;
if (n == 1){
    int x;
    cout << "As you have choosed 1 please enter the number" << endl;
    cin >> x;
    char c;
    c = x;
    cout << c << endl;
}
else if (n <= 3){
    cout << "please enter the choice between 1 & 2" << endl;
}
else{
    char d;
    cout << " As you have entered the number 2 please enter the alphabet" << endl;
    cin >> d;
    int y;
    y = d;
    cout << y << endl;
}
return 0;
}