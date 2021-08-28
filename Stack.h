//
// Created by aless on 28/08/2021.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H

template<typename T>
class Stack {
private:
    int size, top;
    T *stackPtr;
public:
    Stack(int n = 10);

    ~Stack() {
        delete[] stackPtr;
    }

    bool pushValue(const T &value);

    bool popValue(T &popValue);

    bool isEmpty() const {
        return (top == -1);
    }

    bool isFull() const {
        return (top == size - 1);
    }
};

template<typename T>
Stack<T>::Stack(int n) {

    size = n > 0 ? n : 10;
    top = -1;
    stackPtr = new T[size];
}

template<typename T>
bool Stack<T>::pushValue(const T &value) {
    if (!isFull()) {
        stackPtr[++top] = value;
        return true;
    }
    return false;
}

template<typename T>
bool Stack<T>::popValue(T &popValue) {
    if (!isEmpty()) {
        popValue = stackPtr[top--];
        return true;
    }
    return false;
}


#endif //STACK_STACK_H
