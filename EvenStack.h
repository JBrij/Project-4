#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <stack>
using namespace std;

class EvenStack {
public:
    EvenStack();

    bool empty() const;
    size_t size() const;
    int top() const;
    void push(int);
    void pop();
    void getEvenNumbers(stack<int>&);
    void emptyStack();

private:
    stack<int> evenStack;
};

#endif // EVENSTACK_H
