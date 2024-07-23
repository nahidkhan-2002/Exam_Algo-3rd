#include<bits/stdc++.h>
using namespace std;
int main() {
    int N = 5;
    int DATA[N] = {7, 9, 8, 4, 6};
    // Step -1 . set : Loc:=1 , K:=1 and MAX : = DATA[1]

    int K = 0, LOC = 0, MAX = DATA[0];

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

    cout << MAX << " " << LOC + 1;
    //step -5 . Exit
    return 0;
}
