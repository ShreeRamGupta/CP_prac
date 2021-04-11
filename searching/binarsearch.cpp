#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[],int n,int x){
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(x==A[mid]) return mid;//find X,return (exit)                     
        else if(x<A[mid]) high = mid-1;//x less before mid
        else low = mid+1;//x lies after mid


    }
    return -1;
    
}

int recursBS(int A[],int low,int high,int x){
    if(low>high) return -1;
    int mid = low +(high-low)/2;

    if(x==A[mid])
        return mid;
    else if(x<A[mid])
        return recursBS(A,low,mid-1,x);
    else 
        return recursBS(A,mid+1,high,x);
}

int main(){
    int A[] = {2, 4, 5, 7, 13 , 14, 15, 23};
    cout<<"enter a number\n";
    int x,n;
    n = sizeof(A)/sizeof(A[0]);
    
    cin>>x;
    //int index = binarySearch(A,n,x);
    int index = recursBS(A,0,n-1,x);
    if(index != -1) cout<<"Number"<<x<<"is at index "<<index;


    return 0;
}