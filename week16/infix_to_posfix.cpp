/*
2*(3+4) *5 = equation (70)
2*3+4*5 = how computer reads it. (26)

postfix = 2 3 4 * +
ex..(infix -> posfix)
2*(3+4) *5

2 -> output
* -> stack
( -> stack
3 -> output
+ -> stack (anything can be push optop of open parentsis)
4 -> output
) closed parentisis -> forced to be pop + off the stack inside the stack
* -> stack ( but pop the first * in the stack ) pop 1 star already inside and place it
5 -> output 
* -> pop the last * from the stack

final:
2 3 4 + * 5 *


===============

postfix -> value
2 3 4 + * 5 *

2-> operand push to stack
3 -> operrand push to stack
4 -> operand push to stack
+ -> if input is operator pop two item from stack ( 3 and 4 last in first out)
* -> pop two which is (7(from previos pop) , 2)
5 -> push that out to stack
* -> pop two (5, 14)

(second item pop is left side) 3 + 4 = 7 
2 * 7 = 14

5 * 14 =70;





*/