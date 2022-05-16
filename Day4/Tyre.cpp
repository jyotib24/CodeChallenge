/*
There are N bikes and M cars on the road.
Each bike has 2 tyres.
Each car has 4 tyres.
Find the total number of tyres on the road.
*/

#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	while(num>0){
	    //n here is bikes with 2 tyre
	    //m here is cars with 4 tyre
	    int n,m;
	    cin>>n>>m;
	    int total=n*2+m*4;
	    cout<<total<<endl;
	    num--;
	    
	}
	
	return 0;
}
