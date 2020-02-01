//
//  rotateMatrix.h
//  DataStructureGo
//
//  Created by xingwenpeng on 01/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef rotateMatrix_h
#define rotateMatrix_h

void rotateMatrix(int* arr,int size){
    int fir=0;
    int sec=size-1;
    int middle;
    while(1){
        
        middle=(fir+sec)/2;
        if(arr[middle]>arr[fir]) fir=middle;
        if(arr[middle]<arr[fir]) sec=middle;
        
        if(middle==(fir+sec)/2) break;
        
    }
    
    std::cout<<"the smallest is "<<arr[middle+1];
    
    
}







#endif /* rotateMatrix_h */
