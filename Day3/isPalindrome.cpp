// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long int temp,rem,sum=0;
        temp=x;
        while(temp>0){
            rem=temp%10;
            sum=(sum*10)+rem;
            temp=temp/10;
        }
        if(x==sum) return true;
        else return false;
    }
};
int main() {
    Solution obj;
    int x=121;
   bool y= obj.isPalindrome(x);
   if(y==0) cout<<"False";
   else cout<<"True";
    return 0;
}
