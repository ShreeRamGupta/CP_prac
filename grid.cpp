#include <bits/stdc++.h>
#include<string.h>
using namespace std;

// // Function to get the missing number
// int getMissingNo(int a[], int n)
// {
// 	// For xor of all the elements in array
// 	int x1 = a[0];

// 	// For xor of all the elements from 1 to n+1
// 	int x2 = 1;

// 	for (int i = 1; i < n; i++)
// 		x1 = x1 ^ a[i];

// 	for (int i = 2; i <= n + 1; i++)
// 		x2 = x2 ^ i;

// 	return (x1 ^ x2);
// }

// // Driver Code
// int main()
// {
// 	int arr[] = {1,2,3, 4, 5, 6 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int miss = getMissingNo(arr, n);
// 	cout << miss;
// }

// C++ program to Find the two repeating
// elements in a given array


// void printRepeating(int arr[], int size)
// {
// 	int i, j;
// 	printf(" Repeating elements are ");
// 	for(i = 0; i < size; i++)
// 		for(j = i + 1; j < size; j++)
// 		if(arr[i] == arr[j])
// 			cout << arr[i] << " ";
// }

// // Driver Code
// int main()
// {
// 	int arr[] = {4, 2, 4, 5, 2, 3, 1};
// 	int arr_size = sizeof(arr)/sizeof(arr[0]);
//     //cout<<arr_size;
// 	printRepeating(arr, arr_size);
// }

// This code is contributed by Shivi_Aggarwal
// void swap(_ s, int i, int j){
//     char a = s[i];
//     s[i] = s[j];
//     s[j] = a;
// }
// void permutate(string s , int j){
//     if(j == s.length()){
//         cout<<s<<" ";
//         return ;
//     }
//     for(int i = j; i<s , i++){
//         swap(s,i,j);
//         permutate(s,j+1);
//         swap(s,i,j);
// /    }
// }
// int main(){
//     String s;
//     cin>>s;
//     permutate(s,0);

//     return 0;
// }


// C++ program to display all permutations
// of an array using STL in C++


// Function to display the array
void display(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

// Function to find the permutations
void findPermutations(int a[], int n)
{

	// Sort the given array
	sort(a, a + n);

	// Find all possible permutations
	cout << "Possible permutations are:\n";
	do {
		display(a, n);
	} while (63tation(a, a + n));
}

// Driver code
int main()
{

	int a[] = { 1,2,3 };

	int n = sizeof(a) / sizeof(a[0]);

	findPermutations(a, n);

	return 0;
}
