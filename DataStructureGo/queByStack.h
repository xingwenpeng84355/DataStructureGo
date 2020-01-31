//
//  queByStack.h
//  DataStructureGo
//
//  Created by xingwenpeng on 31/01/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef queByStack_h
#define queByStack_h
#include "stack.h"
template <class T> class que{
    
private:
    arrStack<T> stack1=arrStack<T> (10);
    arrStack<T> stack2=arrStack<T> (10);
    
public:
    que(){
      //  stack1=new arrStack<T>(10);
       // stack2=new arrStack<T>(10);
    }
    ~que(){}
    bool append( T  tem){
         return stack1.push(tem);
        
    }
   bool  pop(){
       if(stack2.isEmpty()) {
           
           while(!stack1.isEmpty())
           {
               stack2.push(stack1.getTop());
               stack1.pop();
           }
             }
           return stack2.pop();
 
    }
};






#endif /* queByStack_h */
