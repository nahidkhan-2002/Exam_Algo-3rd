#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int n, int x) // linear search (arr,x)
{
	//step 1. set k:=1

	int k = 1 ;

	//step 2. repeat step 3 while k<n :
	while (k <= n)
	{
		//step 3. if arr[k] == x , then : write : value x at position k and exit
		if (arr[k] == x)
		{
			cerr << "Value " << x << " found at location " << k << endl;
			return;
		}
		//else set k := k+1
		else
		{
			k = k + 1;
		}
	}

	//step 4. write : Element not found
	cerr << "Element not Found !" << endl;
	//step 5. Exit
	return;
}
int main ()
{
	int n = 5;
	int arr[n];
	for (int i = 1; i <= n; i++)cin >> arr[i];
	int  x = 1;
	linearSearch(arr, n, x);
	return 0;
}