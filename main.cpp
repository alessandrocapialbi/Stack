#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    Stack<int> stack(5);
    int a = 5;
    while (stack.pushValue(a)) {
        cout << "Pushing values..."<< a << endl << endl;
        a *= 2;
    }
    cout << endl << endl;
    while(stack.popValue(a)){
        cout << "Popping elements... "<< a <<endl << endl;
    }
}
