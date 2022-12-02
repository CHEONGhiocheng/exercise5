//
//  Stack.h
//  exercise5
//
//  Created by jane cheong  on 09/11/2022.
//

#ifndef stack_h
#define stack_h
 const int Size = 10;
class stack{
private:
    int top;
    int my_stack[Size];
public:
    stack();
    ~stack();
    void push(int);
    int pop();
    int size();
    int peek();
    bool empty();
    bool full();
    void clear();
};

#endif /* stack_h */
