#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int N = 5;
	int DATA[N];
	for (int i = 1; i <= N; i++)cin >> DATA[i];
	//Step 1. Set K=0 , LOC = 0 , MIN = DATA[0]
	int K = 2 , LOC = 1 , MIN = DATA[1];
	//Step 2. Repeat Steps 3 and 4 while K<N
	while (K <= N)
	{
		//Step 3. if MIN>DATA[K] , then : set LOC:=K , MIN=DATA[K]
		if (MIN > DATA[K])
		{
			LOC = K; MIN = DATA[K];
		}
		//Step 4. Set K:=K+1
		K = K + 1;
	}

	//Step 5. Write : 'Smallest Element and it's Location' , MIN , LOC
	cerr << "Smallest Element and it's Location : " << MIN << " " << LOC << endl;
	//Step 6. Exit
	return 0;
}