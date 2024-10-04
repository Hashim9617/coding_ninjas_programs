#include <iostream>
using namespace std;

int allindex( int arr[], int n, int x, int output[] ){
    if ( n == 0){
        return 0;
    }

    int ans = allindex( arr, n - 1, x, output);

    if ( arr[n - 1] == x){
        output[ans] = n - 1;
        return ans + 1;
    }
    return ans;
}

int main ()
{
    int n;
    cin >> n;

    int arr[n];
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int output[n];

    int index = allindex( arr, n, x, output);
    for ( int i = 0; i < index; i++){
        cout << output[i] << " ";
    }

    return 0;

}