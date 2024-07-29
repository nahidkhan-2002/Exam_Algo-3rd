#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int N = 5;
	int DATA[5] = {4, 6, 74, 2, 3};

	//Step 1. set K:=0 , LOC:=0 , MAX:=DATA[0]
	int K = 0, LOC = 0, MAX = DATA[0];

	//Step 2. Repeat step 3 and 4 while K<N
	while (K < N)
	{
		//Step 3. if DATA[K]>MAX , then : set LOC:= k , MAX:=DATA[K]
		if (DATA[K] > MAX)
		{
			LOC = K; MAX = DATA[K];
		}
		//Step 4. set K:=K+1
		K++;
	}

	//Step 5. Write: 'The largest element and it's location' , MAX , LOC
	cerr << "largest element and it's location " << MAX << " " << LOC + 1 << endl;
	//Step 6. Exit
	return 0;
}