#include "EvenStack.h"
#include <iostream>

using namespace std;

EvenStack::EvenStack()
{

}

bool EvenStack::empty() const {
    return evenStack.empty();
}

size_t EvenStack::size() const {
    return evenStack.size();
}

int EvenStack::top() const {
    return evenStack.top();
}

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        evenStack.push(value);
    } else {
        cout << "Error - can only push even numbers" << endl;
    }
}

void EvenStack::pop() {
    if (!empty()) {
        evenStack.pop();
    }
}

void EvenStack::getEvenNumbers(stack<int>& inputStack) {
    stack<int> tempStack;
    while (!inputStack.empty()) {
        int value = inputStack.top();
        inputStack.pop();
        if (value % 2 == 0) {
            evenStack.push(value);
        }
        tempStack.push(value);
    }
    while (!tempStack.empty()) {
        inputStack.push(tempStack.top());
        tempStack.pop();
    }
}

void EvenStack::emptyStack() {
    bool removedElements = false;
    while (!empty()) {
        if (!removedElements) {
            cout << "Remove the following: ";
            removedElements = true;
        }
        cout << top() << " ";
        evenStack.pop();
    }
    cout << endl;
}
