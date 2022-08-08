#include<iostream>
using namespace std;
int main(){
    int n,fact=1;;
    cout<<"Input a number to find the factorial:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of a given number is:"<<fact;
}