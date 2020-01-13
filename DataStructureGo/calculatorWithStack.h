//
//  calculatorWithStack.h
//  DataStructureGo
//
//  Created by xingwenpeng on 23/12/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef calculatorWithStack_h
#define calculatorWithStack_h
#include "stack.h"

template <class T> class calculator{
public:
   double calculating(const char c){
       
        T right=s->pop();
       if(s->isEmpty()) std::cout<<"the operand is missing"<<std::endl;
        T left=s->pop();
           if(s->isEmpty()) std::cout<<"the operand is missing"<<std::endl;
        T result;
       
     switch (c) {
         case '+':
             result=left+right;
             std::cout<<result<<std::endl;
             s->push(result);
             break;
         case '-':
             result=left-right;
               std::cout<<result<<std::endl;
              s->push(result);
             break;
         case '*':
             result=left*right;
               std::cout<<result<<std::endl;
              s->push(result);
             break;
         case '/':
             if(right==0) std::cerr<<"you are dividing 0 baby"<<std::endl;
             result=left/right;
               std::cout<<result<<std::endl;
              s->push(result);
     }
       return result;
        
    }
    void input(){
        std::cout<<"please starting input"<<std::endl;
        char c;
        T newOpe;
        
        while(std::cin>>c&&c!='='){
            switch (c) {
                case '+':
                case '-':
                case '*':
                case '/':
                    calculating(c);
                    break;
                    
                default:
                    std::cin.putback(c);
                    std::cin>>newOpe;
                    s->push(newOpe);
            }
            
        }
        
    }
    void clear(){
        ~calculator();
        
        calculator();
    }
    ~calculator(){
        
        while(s->pop()){
        }
        delete s;
        
    }
    calculator(){
        s=new linkStack<T> ();
    }
    
    
    
private:
    
    linkStack<T>* s;

    
    
    
};








#endif /* calculatorWithStack_h */
