#include <iostream>
using namespace std;

int zeros ( int n){
    if ( n <= 9){
        if ( n == 0){
            return 1;
        }else {
            return 0;
        }
    }

    int smalloutput =  zeros(n / 10);

    if (n % 10 == 0){
        return smalloutput + 1;
    }
    return smalloutput;
}

int main ()
{
    int n;
    cin >> n;
    cout << zeros(n) << endl;
    return 0;
}