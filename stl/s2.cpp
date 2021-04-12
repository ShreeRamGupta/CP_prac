#include <bits/stdc++.h>
using namespace std;

class Calculate{
public:
	long int add(long a,long b){
		return a+b;
	}

	long int sub(long a,long b){
		return a-b;
	}

	int grater(int a,int b){
		return max(a,b);
	}


};
int main()
{
	Calculate obj1;

	cout<<obj1.sub(3,4)<<"\n";
	cout<<obj1.grater(4,5);
	return 0;
}