#include <iostream>
using namespace std;

bool is_sorted ( int arr[] , int size){
    if ( size == 0  || size == 1){
        return true;
    }

    if ( arr[0] > arr[1]){
        return false;
    }

    int is_sortedsmaller = is_sorted(arr + 1 , size - 1);
    return is_sortedsmaller;
}
int main ()
{
    int size;
    cin >> size;

    int arr[size];

    for ( int i = 0; i < size; i++){
        cin >> arr[i];
    }

    if (is_sorted(arr, size)){
        cout << " true " << endl;
    }else{
        cout << " false " << endl;
    }

    return 0;

}