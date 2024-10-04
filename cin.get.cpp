#include <iostream>
using namespace std;
int main ()
{
    char c;
    c = cin.get();
    int count = 0;
    int space = 0;
    int num = 0;
    while ( c != '%' ){
        if ( c == ' ' || c == '\n' || c == '\t'){
            space++;
        }
        else if ( c >= 'a' && c <= 'z'){
            count++;
        }
        else {
            num++;
        }
        c = cin.get();
    } 
    cout << count << " " << num << " " << space << endl;
}
