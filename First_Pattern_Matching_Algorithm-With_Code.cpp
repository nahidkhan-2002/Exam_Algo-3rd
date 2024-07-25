[see the preliminaries to find out more]

P and T are strings with length R and S and are stored in array with 1 character per element.This Algorithm find the INDEX of P in T .

step 1. Set K:=1 and MAX:= S - R + 1 .

step 2. Repeat Steps 3 to 5 while K <= MAX :

step 3. Repeat for L = 1 to R :
      if P[L] != T[K + L - 1],then : Go to Step 5.

step 4.Set INDEX : = K and Exit

step 5.Set K := K + 1

step 6.[Failure] Set INDEX := 0

step 7. Exit 
