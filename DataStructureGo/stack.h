//
//  stack.h
//  DataStructureGo
//
//  Created by xingwenpeng on 23/12/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef stack_h
#define stack_h



template <class T>
class stack {
public:
    
   virtual bool pop()=0;
   virtual bool push(T &tem)=0;
   virtual bool isEmpty()=0;
   virtual bool isFull()=0;
    virtual T getTop()=0;

};


template <class T> class arrStack: public stack<T>{
    
public:
    arrStack(int size){
        top=-1;
        maxSize=size;
        st=new T[size];
    }
    bool pop(){
        
        if(isEmpty()) return false;
        else{
            
            std::cout<<st[top--]<<std::endl;
            return true;
        }
    }
    T getTop(){
        if(isEmpty()) return -1;
        else{
            
            std::cout<<st[top]<<std::endl;
            return st[top];
        }
    }
    bool push( T &tem){
        if(isFull()) return false;
        
        else{
            st[++top]=tem;
            return true;
        }
    }
    
    bool isFull(){
        if(top==maxSize-1) return true;
        else return false;
    }
    bool isEmpty(){
        if(top==-1) return true;
        else return false;
    }
    
private:
    int maxSize;
    T *st;
    int top;
};










#endif /* stack_h */
