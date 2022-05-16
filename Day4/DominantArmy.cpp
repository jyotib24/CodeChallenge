
/*
In the medieval age, there were 3 kingdoms A, B, and C. The army of these kingdom had NA, NB, and NC soldiers respectively.
You are given that an army with X soldiers can defeat an army with Y soldiers only if X>Y.
An army is said to be dominant if it can defeat both the other armies combined. For example, kingdom C's army will be dominant only if NC>NA+NB.
Determine whether any of the armies is dominant or not.
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n>0){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int sum=a+b+c;
	    int greatest=0;
	    if(a>b && a>c) greatest=a;
	    else if(b>a && b>c) greatest=b;
	    else greatest=c;
	    
	    int sumOfTwo=sum-greatest;
	    if(greatest>sumOfTwo) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    n--;
	}
	return 0;
}
