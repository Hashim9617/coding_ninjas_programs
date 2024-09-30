#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++){
        bool prime = true;
        for (int d = 2; d < i; d++){
            if (i % d == 0){
                prime = false;
                break;
            }
        }
        if (prime){
            cout << i << endl;
        }
    }
}