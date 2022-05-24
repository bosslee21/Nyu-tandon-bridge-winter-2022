/*
p(n) is true for any natural number n

basecase: we prove that p(1) is true.
inductive step: if p is true for all value smaller than n
that implies p(n) is true;
 we show that for any p(k) is true 
for all k < n implies p(n).


claim : every natural number n can be written in form:
n = 2^i * j where i is non -negavie integer and j is odd.

ex = 40 = 2^3 * 5
    6 = 2^1 * 3
    7 = 2^0 * 7

   prrof: we will prove by strong induction:
    n = 2^i * j
   
   Base case : for n = 1
    if we take i = 0 and j = 1;
    we get 1 = 2^0 * 1

inductive stpe:
    we assume that every k (k < n) can be written
    in the fomr k = 2^i *j.
    where i is non negative integer and j is odd
    and now we can show that n can be written as 
    n= 2^i *j


    2 cases: 
    n is odd: 
    in this case if we take i = 0; and j = n we get
    2^0 + and odd number is odd number.

    n is even: 
    in this case: since n/2 < n 
    by the inductive k = n/2

    we get that n/2 = w^i * j


*/