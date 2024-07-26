#include<bits/stdc++.h>
using namespace std;
void linearSearch(int arr[], int n, int x) // linear search (arr,x)
{
	//step 1. set k:=1

	int k = 0 ;

	//step 2. repeat step 3 while k<n :
	while (k < n)
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
	cerr << "Element not Found" << endl;
	//step 5. Exit
	return;
}
int main ()
{
	int arr[5] = {1, 2, 3, 4, 5};
	int  x = 1;
	linearSearch(arr, 5, x);
	return 0;
}