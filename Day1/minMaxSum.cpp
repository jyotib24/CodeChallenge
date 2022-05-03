#include <iostream>
using namespace std;

void sum(int arr[],int num){
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0],min=arr[0],sum=0,minSum=0;
    for(int i=0;i<num;i++){
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
        sum+=arr[i];
    }//cout<<sum;
    cout<<"Max sum : "<<sum-min<<endl<<"Min sum : "<<sum-max; 
}
int main() {
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);//cout<<n;
    sum(arr,n);
    return 0;
}
