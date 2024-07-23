#include<bits/stdc++.h>
using namespace std;
int main() {
    int A, B, C;
    //step -1 . Read : A,B,C;
    cin >> A >> B >> C;
    //step -2 . set D:= B^2 - 4AC ;
    int D = (B * B) - 4 * A * C;
    //step -3 . if D>0 then :
    if (D > 0) {
        int x1 = (-B + D) / 2 * A, x2 = (-B - D) / 2 * A;  //set x1:= (-B+D)/2*A and x2:= (-B-D)/2*A
        cout << "X1 = " << x1 << " " << "X2 = " << x2;    //write: X1 , x2
    }
    //else if D=0 then :
    else if (D == 0) {
        int x = -B / 2 * A ;            //set X:= -B/2*A
        cout << "Unique Solution " << x; //write : 'unique solution' , x
    }
    //else
    else  cout << "No Real Solution !"; //write : 'no real solution'
    //step -4 . Exit
    return 0;
}
