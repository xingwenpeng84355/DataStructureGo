//
//  orderM.h
//  DataStructureGo
//
//  Created by xingwenpeng on 02/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef orderM_h
#define orderM_h

void Reorder(int* arr, int size,bool (*func)(int)){
    int* start=arr;
    int* end=&arr[size-1];
    typedef bool (*pf)(int);
    pf xx=func;
    while(start<end){
        
        while(xx(*start)&& start<end) start++;
        while(!func(*end)&& start<end) end--;
        int tem=*end;
        *end=*start;
        *start=tem;
        
    }
    
    for(int i=0;i<30;i++) std::cout<<arr[i]<<std::endl;
}

bool isEven(int num){
    
    return !(num&0x1);
    
    
    
}




#endif /* orderM_h */
