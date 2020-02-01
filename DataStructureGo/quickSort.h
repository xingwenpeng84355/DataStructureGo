//
//  quickSort.h
//  DataStructureGo
//
//  Created by xingwenpeng on 01/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef quickSort_h
#define quickSort_h

template <class T>
void qSort(T* arr, int start,int end){
    
    if(end<=start) return;
    T key=arr[start];
    int i=start;
    int j=end+1;
    
    std::cout<<"start:"<<start<<" end:"<<end<<std::endl;
    while(true){
        
        while(arr[--j]>key){
            
        }
        while(arr[++i]<key){
            
        }
        if(i>=j) break;
        T tem=arr[i];
        arr[i]=arr[j];
        arr[j]=tem;
    }
    
    T tem=arr[start];
    arr[start]=arr[j];
    arr[j]=tem;
    qSort(arr,start,j-1);
    qSort(arr,j+1,end);
    
    
}


void Qsort(int arr[], int low, int high){
    if (high <= low) return;
    int i = low;
    int j = high + 1;
    int key = arr[low];
    while (true)
    {
        /*从左向右找比key大的值*/
        while (arr[++i] < key)
        {
            if (i == high){
                break;
            }
        }
        /*从右向左找比key小的值*/
        while (arr[--j] > key)
        {
            if (j == low){
                break;
            }
        }
        if (i >= j) break;
        /*交换i,j对应的值*/
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    /*中枢值与j对应值交换*/
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    Qsort(arr, low, j - 1);
    Qsort(arr, j + 1, high);
}






#endif /* quickSort_h */
