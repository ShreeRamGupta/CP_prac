#include <bits/stdc++.h>
using namespace std;

int binarySearch(int A[],int n,int x,bool searchFirst){
	int result;
	int low = 0, high = n-1;
	int mid=(low+high)/2;
	while(low<=high){
		if(A[mid]==x){
			result = mid;
			if(searchFirst)
				high = mid-1;//go on searching toword left (lower indices)
			else
				low = mid+1;//Go on searching toword right (higher indices)
		} 
		else if(x<A[mid]) high = mid-1;
		else low = mid+1;
	}
	return result;
}
int main(){
	int A[] = {1,1,3,3,5,5,5,5,5,9,9,11};
	int x;
	cout<<"enter numver:";
	cin>>x;
	//cout<<"\n";
	int firstIndex = binarySearch(A,sizeof(A)/sizeof(A[0]),x,true);
	if(firstIndex == -1)
	{
		cout<<"Count of"<<" "<<x<<0;
	}else{
		int lastIndex = binarySearch(A,sizeof(A)/sizeof(A[0]),x,false);
		cout<<"count of "<< x<<(lastIndex-firstIndex +1);
	}
	return 0;
}