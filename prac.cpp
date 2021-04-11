#include <bits/stdc++.h>

using namespace std;


int revers(int n){
    int m=0,rev=0;
    //cout<<n;
    if(0>n){
        return 0;
    }else{
        while (n>0)
        {
            //cout<<n;
            m = n%10;
            n = n/10;
            rev = rev * 10 + m;
        }
    }
    return rev;
}
void swap(int a, int b){
    a = a+b;
    b = a - b;
    a = a - b;

    cout<<a<<"  "<<b;
}

void sequesMatch(int []a){
    
}
    
int main(){

    int a,b,n;
    int r,rev=0;
    n= 3124;
    
    //cout<<rev;
    //swap(10,-5);
    cout<<revers(n);
    return 0;
}