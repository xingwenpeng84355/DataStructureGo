//
//  binarySearch.h
//  DataStructureGo
//
//  Created by xingwenpeng on 01/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef binarySearch_h
#define binarySearch_h
template <class T>
bool binarySearch(T* arr, int start, int end,int key){
    
    if(key<arr[(start+end)/2]&&(start+end)/2>start) {
        
        std::cout<<"start binarySearch start: "<<start<<"end is:"<<(start+end)/2<<std::endl;
        binarySearch(arr, start,(start+end)/2, key);
    }
    
   else if(key>arr[(start+end)/2]&&(start+end)/2<end)
   {
     std::cout<<"start binarySearch start: "<<(start+end)/2<<"end is:"<<end<<std::endl;
       
       binarySearch(arr, (start+end)/2,end, key);
   }
       
   else {
       
       if(key==arr[(start+end)/2]) {
           std::cout<<"found the number: "<<arr[(start+end)/2]<<std::endl;
           return true;
           }
       else
       {
           std::cout<<"number not found,the closest number is "<<arr[(start+end)/2]<<std::endl;
           return false;
       }
}
    return false;
}

template <class T>
bool binarySearchByLoop(T* arr,int size,int key){
    int low=0;
    int high=size;
    int middle=(low+high)/2;
    while(key!=arr[middle]){
        
        if(key<arr[middle]){
             high=middle;
        }
         if(key>arr[middle]){
            low=middle;
        }
           middle=(high+low)/2;
        if(middle==high||middle==low) return false;
    }
    std::cout<<"number found:"<<arr[middle]<<std::endl;
    return true;
}


#endif /* binarySearch_h */
