//
//  main.cpp
//  exercise5
//
//  Created by jane cheong  on 09/11/2022.
//
#include <iostream>
#include "stack.h"
stack::stack(){
    top=-1;
    for (int i=0;i<=Size;i++){
       my_stack[i]=0;
    }
}

stack::~stack(){
}

bool stack::empty(){
    if (top==-1)
        return true;
    else
        return false;
}

bool stack::full(){
    if (top == Size-1){
        return true;
    }
    else{
        return false;
    }
}

void stack::push(int x){
    if (full()){
        std::cout << "stack overflow \n" << std::endl;
    }
    else{
        my_stack[top++]=x;
        std::cout<< x <<std::endl;
    }
}

int stack::pop(){
  if (!empty()){
        int popvalue;
        popvalue = my_stack[top--];
        return popvalue;
    }
    else {
       std::cout<<"stack underflow \n" <<std::endl;
        return 0;
    }
}

int stack::size(){
    return top + 1;
}


int stack::peek(){
    if(!empty()){
        return my_stack[top];
    }
    else{
        std::cout<<"stack underflow \n" <<std::endl;
        return 0;
    }
}

void stack::clear(){
    top = 0;
}


int main(int argc, const char * argv[]) {
    stack s1;
    std::cout<<"The Stack Push "<<std::endl;
     s1.push(1);
     s1.push(2);
     s1.pop();
     s1.push(3);
    std::cout << "The top element is " << s1.peek() << std::endl;
    std::cout << "The stack size is " << s1.size() << std::endl;
 
     s1.pop();
      std::cout<<"The Stack Pop : "<<std::endl;
      while(!s1.empty())
         {
         std::cout<< s1.pop()<<std::endl;
         }
      s1.clear();
      return 0;
   }
