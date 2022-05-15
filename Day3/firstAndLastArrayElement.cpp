#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<arr[0]<<endl;
    cout<<arr[size-1];
    return 0;
}
