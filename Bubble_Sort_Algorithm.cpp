#include<bits/stdc++.h>
using namespace std;
//Algortihm for Bubble Sort (DATA,N) :
void bubbleSort(int DATA[], int N)
{
	// Step 1. Repeat steps 2 and 3 for K=1 to N-1
	for (int K = 0; K < N - 1; K++)
	{
		// Step 2. Set PTR:=1
		int PTR = 0;
		// Step 3. Repeat While PTR < N-K
		while (PTR < N - K)
		{
			// a) if DATA[PTR]>DATA[PTR+1] ,then : swap DATA[PTR] and DATA[PTR+1]
			if (DATA[PTR] > DATA[PTR + 1])
			{
				/*int temp = DATA[PTR];
				DATA[PTR] = DATA[PTR + 1];
				DATA[PTR + 1] = temp;*/
				swap(DATA[PTR], DATA[PTR + 1]);
			}
			// b) set PTR := PTR+1
			PTR ++;
		}
	}
	// Step 4. Exit
}
int main ()
{
	int N = 5;
	int arr[N] = {3, -1, 2, 5, 4};
	bubbleSort(arr, N);
	for (int i = 0; i < N; i++) cerr << arr[i] << " ";
	cerr << endl;
	return 0;
}

/*
[3 , -1 , 2 , 5 , 4]

Ovservation : in this Algortihm, the process is to follow n - 1 steps and every time a variable works as a pointer and compares every adjacent element which is not sorted .

     here N = 5 so, the maximum no. of step is 4

     step 1 .[k = 1] PTR=0 checks every to adjacent element to position N-K-1 :

            PTR=0 to N-K-1 = 3 :

            => (3) , (-1) , 2 , 5 , 4 [PTR=0] [DATA[0] swap DATA[1]]
            => -1 , (3) , (2) , 5 , 4 [PTR=1] [DATA[1] swap DATA[2]]
            => -1 , 2 , 3 , 5 , 4     [PTR=2] [DATA[2] no swap DATA[3]]
            => -1 , 2 , 3 , (5), (4)  [PTR=3] [DATA[3] swap DATA[4]]
            => -1 , 2 , 3 , 4 , 5     [Only swap]
            */


/*
Complexity Analysis :

          In Sorting Algorithm , The Complexity is measured with number of comparsion . in the first step there are (n-1) comparisons which places the maximum element at the last position . so if the Complexity is f(n), then :

     f(n) = (n-1)+(n-2)+(n-3)+......+2+1 = (n*(n-1))/2 = (n^2)/2 + O(n) = O(n^2)
*/