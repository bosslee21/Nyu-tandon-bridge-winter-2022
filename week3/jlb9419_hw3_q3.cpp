/* Write a program that does the following:
• Ask user to input three Real numbers a, b and c. They represent the parameters of a
quadratic equation 𝑎𝑥! + 𝑏𝑥 + 𝑐 = 0
• Classify to one of the following:
- ’Infinite number of solutions’ (for example, 0𝑥! + 0𝑥 + 0 = 0 has infinite
number of solutions)
- ’No solution’ (for example, 0𝑥! + 0𝑥 + 4 = 0 has no solution)
- ’No real solution’ (for example, 𝑥! + 4 = 0 has no real solutions)
- ’One real solution’
- ’Two real solutions’
• In cases there are 1 or 2 real solutions, also print the solutions */

#include <iostream>
#include <cmath>


using namespace std;

int main()
{

    double a, b, c, result;

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    double equation = pow(b, 2) - 4 * a * c;
    double solution1, solution2;
    
    cout.setf(ios::fixed);
    cout.precision(1);
    
    if (a == 0 && b == 0 && c == 0) {
        cout << "This equation has infinite number of solutions" << endl;
    } else if (a == 0 && b == 0 && c != 0) {
        cout << "This equation has no solution" << endl;
    } else if (a != 0 && equation < 0) {
        cout << "This equation has no real solution" << endl;
    } else if (a != 0 && equation == 0) {
        solution1 = -b / (2 * a);
        cout << "This equation has a single real solution x=" << solution1 << endl;
    } else if (a != 0 && equation > 0) {
        solution1 = -b + sqrt(equation) / (2 * a);
        solution2 = -b - sqrt(equation) / (2 * a);
        cout << "This equation has two real solutions x=" << solution1 << ", x=" << solution2 << endl;
    }
    // This case is not specified in the question. This case is when a == 0 && b != 0.
    else {
        solution1 = -c / b;
        cout << "This equation is not quadratic but it has the solution x=" << solution1 << endl;
    }
    


    
    

    return 0;
}