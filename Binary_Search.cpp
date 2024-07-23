#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int N = 5;
	int DATA[5] = {1, 2, 3, 4, 5};
	//step -1 . set start:=0,end:=N-1,LOC=-1;
	int START = 0 , END = N - 1, LOC = -1;
	int ITEM = 1;
	//step -2 . repeat steps 3 and 4 while l<=r
	while (START <= END)
	{
		//step -3 . set mid := (START+END)/2;
		int mid = (START + END) / 2;
		//step -4 . if ITEM==DATA[MID], then :
		if (ITEM == DATA[mid])
		{
			//set LOC := mid and go to step 5
			LOC = mid;
			break;
		}
		//else if ITEM>DATA[MID] , then :
		else if (ITEM > DATA[mid])
		{
			//set START:=mid+1
			START = mid + 1;
		}
		//else
		else
		{
			//set END:=mid-1
			END = mid - 1;
		}
	}
	//step -5 . if LOC=-1 ,then :
	if (LOC == -1)
	{
		//write:'ELEMENT NOT EXIST !'
		cout << "ELEMENT NOT EXIST !";
	}
	//else
	else
	{
		//write : 'ELEMENT FOUND !',LOC
		cout << "ELEMENT FOUND ! " << LOC + 1;
	}
	//step -6 . Exit
	return 0;
}