#include <iostream>
using namespace std;
int main ()
{
    int n , ch;
    cin >> n >> ch;
    int sum = 0, pro = 1;
    if ( ch == 1){
        for ( int i = 1; i <= n; i++){
            sum += i;
        }
        cout << sum << endl;
    }
    else if ( ch == 2){
        for (int i = 1; i <= n; i ++){
            pro *= i;
        }
        cout << pro << endl;
    }
    else{
        cout << " -1 " << endl;
    }
    return 0;
}