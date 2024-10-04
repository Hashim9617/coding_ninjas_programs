#include <iostream>
using namespace std;
int main ()
{
    int n , x , ans = 1;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << " Enter the exponent value" << endl;
    cin >> x;
    int i = 0;
    if ( n == 0 && x == 0){
        cout << "1" << endl;
    }
    else{
        while (i < x){
            ans = ans * n;
            i = i + 1;
        }
        cout << ans << endl;
    }
    return 0;
}