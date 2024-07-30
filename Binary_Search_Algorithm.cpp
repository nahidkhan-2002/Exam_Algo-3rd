#include<bits/stdc++.h>
using namespace std;
//A algorithm for Binary Search , BINARY (DATA,BEG,END,LOC,ITEM) :
int binarySearch(int DATA[], int L, int R, int LOC, int ITEM)
{
	//Step 1. Set L:=LB , R:=UB and MID := INT((L+R)/2)
	int MID = (int)(L + R) / 2;
	//Step 2. Repeat Steps 3 and 4 while L<=R and DATA[MID]!=ITEM
	while (L <= R and DATA[MID] != ITEM)
	{
		//Step 3. Set MID := INT((L+R)/2)
		MID = (int)(L + R) / 2;
		//Step 4. if ITEM<DATA[MID] , then : set R:=MID-1
		if (ITEM < DATA[MID])
		{
			R = MID - 1;
		}
		//else set L:=MID+1
		else
		{
			L = MID + 1;
		}
	}
	//Step 5. if DATA[MID]==ITEM , then : LOC = MID
	if (DATA[MID] == ITEM) LOC = MID;
	//else LOC=-1
	else LOC = -1;
	return LOC;
	//Step 6. Exit
}
//Driver Code
int main ()
{
	int N = 5;
	int DATA[N] ;
	for (int i = 1; i <= N; i++)cin >> DATA[i];
	int LOC = -1 , L = 1 , R = N, ITEM = 80 ;
	cout << binarySearch(DATA, L, R, LOC, ITEM) << endl;
	return 0;
}