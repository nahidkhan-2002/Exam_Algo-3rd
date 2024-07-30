#include<bits/stdc++.h>
using namespace std;
int main() {
	int N = 5;
	int DATA[N];
	for (int i = 1; i <= N; i++) cin >> DATA[i];
	// Step -1 . set : Loc:=1 , K:=1 and MAX : = DATA[1]

	int K = 2, LOC = 1, MAX = DATA[1];

	// step -2 . while K<=N, repeat step 3

	while (K < N) {

		//step -3 . if DATA[K]>MAX , then :

		if (DATA[K] > MAX) {
			LOC = K; MAX = DATA[K]; // set LOC:= K , MAX := DATA[K]
		}

		//else

		else K = K + 1;  //set K:=k+1;

	}

	//step -4. write : MAX , LOC

	cout << MAX << " " << LOC;
	//step -5 . Exit
	return 0;
}
