#include <iostream>
#include <cstring>
using namespace std;


bool checkab ( const char input[]){
    int length = strlen(input);

    if (length == 0){
        return true;
    }

    if (input[0] == 'a'){
        if (length == 1){
            return true;
        }
        if ( input[1] == 'a'){
            return checkab(input + 1);
        }
        if ( length >= 3 && input[1] == 'b' && input[2] == 'b'){
            return checkab(input + 3);
        }
    }

    return false;
}

int main ()
{
    char input[1000];
    bool ans;
    cin >> input;
    ans = checkab(input);
    if ( ans){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}