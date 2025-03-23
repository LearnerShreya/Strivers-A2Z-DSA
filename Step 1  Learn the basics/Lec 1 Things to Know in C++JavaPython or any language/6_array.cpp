#include<iostream>
using namespace std;

int main() {

    // 1D Array
    int arr[5];
    double arra[5];
    cin>> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[4] += 10;
    cout<< arr[4]<<endl;

    // 2D array
    int arrey[3] [5];  // 3 rows 5 columns
    arrey[0] [1] = 1;
    cout<<arrey[0] [1];


    return 0;
    
}
