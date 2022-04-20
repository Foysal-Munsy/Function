/**02. Add two numbers using Function Prototype**/

#include <iostream>

using namespace std;

// function prototype
int add(int, int);

int main() {
    int sum;

    sum = add(10, 50);

    cout << "10 + 50 = " << sum << endl;

    return 0;
}

int add(int a, int b) {
    return (a + b);
}
