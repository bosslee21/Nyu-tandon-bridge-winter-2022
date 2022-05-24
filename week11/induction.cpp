#include <iostream>
using namespace std;
// Mathmatical induction is to prove universal statement
//p of (n) is true for any natural number n
// 2 steps.
//base case - we prove p(1) is true
//inductive step. - we prove n >= 2 that p(n-1) is true then p(n) is true.


/*
Q:for any natural number n = 2* n^2 + 5 * n - 6 >= 0
proof: we will prove using induction on n

base case: for (n = 1) = 2* 1^2 + 5 * 1 - 6 = 1 >= 0 


inductive step: p(n-1) is true
we asssume that 2(n-1)^2 + 5 (n-1) - 6 >= 0;
and we will show that 2n^2 + 5n-6 >= 0


2n^2 + 5n- 6 = [2(n-1)^2 + 5(n-1)- 6] + [4n + 3] << now is equal
                (2n^2 + n - 9) 
since n is greater than equal to 0 
we can conclude 2n^2 + 5n -6 >= 0

*/

int main() {

    return 0;
}