//
//  printMatrix.h
//  DataStructureGo
//
//  Created by xingwenpeng on 05/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef printMatrix_h
#define printMatrix_h


void printMatrix(int arr[][5],int row,int column){
    
   int count=0;
    do{
    for(int i=count;i<column-count-1;i++){
        std::cout<<arr[count][i]<<" ";
       }
    std::cout<<std::endl;
        for(int i=count;i<row-count;i++){
           std::cout<<arr[i][column-count-1]<<" ";
        
    }
       std::cout<<std::endl;
        for(int i=column-count-2;i>=count;i--){
         std::cout<<arr[row-count-1][i]<<" ";
        }
       std::cout<<std::endl;
       for(int i=row-count-2;i>count;i--){
           std::cout<<arr[i][count]<<" ";
       
    }
          std::cout<<std::endl;
    count++;
    }while(count<=(column-count)||(row<=(row-count)));

}

#endif /* printMatrix_h */
