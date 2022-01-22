#include<iostream>
using namespace std;

int main(){

    int sum = 0,n;
    
    cin>>n;

    for(int a = 1; a <= n; a++ ){
        sum = sum+a; 
    }

    cout<<sum;

    return 0;

}