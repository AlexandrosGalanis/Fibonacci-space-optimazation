#include<iostream>

using namespace std;
//3-Slot Array
int fib(int n){
    //positions 0 and 1 have the starting values of Fibonacci and position 2 is used as a sum variable
    int f[3];
    f[0]=0;
    f[1]=1;
    f[2];

    //
    if(n < 0){
        return -1;
    }
    if(n == 0){
        cout<<f[0];
        return f[0];
    }
    cout<<f[0]<<" "<<f[1];
    for(int i = 2; i <= n; i++){
        f[2] = f[0] + f[1];
        f[0] = f[1];
        f[1] = f[2];
        cout<<" "<<f[1];
    }
    return f[1];
}

int main () {
    int n ;

    cout<<"Give input for fibonacci :";
    cin>>n;
    //the machine works from 0 to n-1
    fib(n-1);

    return 0;
}
