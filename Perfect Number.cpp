//To print perfect number from 1 to 500:
#include <iostream>
using namespace std;

void perf(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(n==sum){
            cout<<n<<endl;
    }
    }

int main()
{
    for(int i=1;i<500;i++){
        perf(i);
    }
    
    }
