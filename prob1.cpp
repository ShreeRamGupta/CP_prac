#include<iostream>

using namespace std;

char str[41];
long long arr[41];
long long arrpoi;
long long num;

long long findNumPos(long long x){
	long long poww = 1;
	long long tempp = arrpoi + 1;
	while(tempp > 0){
		poww *= 2;
		tempp--;
		
	}
	poww--;
	
	long long sum = 0;
	
	for(long long i = 1;i<= poww; i++){
		tempp = i;
		long long product = 1;
		
		long long cou = 0;
		
		for(long long j = 0;j<= arrpoi;j++){
			if(((i >> j)&1)==1){
				cou++;
				product *= arr[j];
			}
		}
		if(cou % 2 == 1){
			sum += (x / product );
			
		}else{
			sum -= (x / product);
		}
	}
	return sum;
}



long long binsearCH(){
	long long s = 1;
	long long e = 100000000000000;
	long long ans;
	
	while(s <= e){
		long long mid = (s + e)/2;
		long long temp = findNumPos(mid);
		if (temp >= num){
			ans = mid;
			e = mid-1;
			
		}else{
			s= mid + 1;
		}
		
	}
	return ans;
}

int main(){
	long long test_case=1;
	
	//cin>>test_case;
	
	for(long long t = 0 ; t<test_case;t++ ){
		cin >> str>> num;
		arrpoi = -1;
		for(long long i = 0; i< 41;i++){
			if(str[i]=='1'){
				long long flagg = 0;
				if(flagg == 0){
					arr[++arrpoi] = i+1;
					
				}
			}
		}
		
		cout<< binsearCH()<<endl;
	}
	return 0;
}
