//
//  main.cpp
//  DataStructureGo
//
//  Created by xingwenpeng on 23/12/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//


#include <iostream>
#include "DoubleLinkLIst.h"
/*#include "stack.h"
#include <string>
#include "stdlib.h"
#include "stdio.h"
#include "calculatorWithStack.h"
#include "stackConvert.h"
  */
#include "BST.h"
#include "quickSort.h"
#include "binarySearch.h"
#include "queByStack.h"
#include "rotateMatrix.h"
//#include "hash.h"
#include "Hash2.h"
#include "power.h"
#include "bigNumber.h"
#include "orderM.h"
#include "reverseLinkLIst.h"
using namespace std;

int main(int argc, const char * argv[]) {
  
   /* linkList<int> list(5);
    list.append(6);
    list.append(6);
list.append(7);
     list.show();
   // cout<<list.getPos(5)<<endl;
    //cout<<list.getValue(2)<<endl;
   // list.deleteLink(3);
     
    list.insert(2, 9);
    
    list.show();
    */
    
   /* DlinkLIst<int> list1(1);

    list1.append(2);

    list1.append(3);
    list1.append(4);
    list1.append(5);
    list1.append(6);
    list1.append(7);
    list1.append(8);
    list1.append(9);
     list1.append(10);
     list1.append(19);
    list1.append(20);

   // list1.rShow();
  //  cout<<list1.findValue(4)<<endl;
    
   // list1.insert(3, 99);
      list1.rShow();
   // list1.setPos(2);
          list1.rShow();

*/

/*

    arrStack<int> first(50);
    for(int i=0;i<30;i++){
        
        first.push(i);
        
    }

    for(int i=0;i<30;i++){
           
           first.pop();
       }
    cout<<first.isEmpty();

*/
/*
    linkStack<int> lStack(5);
    for(int i=0;i<50;i++){
        
        lStack.push(i);
        
    }
    for(int i=0;i<51;i++){
        
        lStack.pop();
        
    }
*/
   
  /*  calculator<double> cal;
    cal.input();
    
        */
   /* nonrec test;
    int f=0;
    test.replace1(9, f);
  
    cout<<f<<endl;
  
    
    */
    /*
  bST<int> tree1(100);
   tree1.InsertBST();
       tree1.InsertBST();
       tree1.InsertBST();
    tree1.InsertBST();
     tree1.InsertBST();
     tree1.InsertBST();
     tree1.InsertBST();
    //tree1.showAll();
    //tree1.showAll();
 
   // tree1.del(tree1.root->rChild,tree1.root,1);
        tree1.showAll();
    //tree1.DeleteBST(44);
        tree1.showAll();
    cout<<tree1.SearchBST(tree1.root,44 );
   */
    
 
   /* que<int> myQue;
    myQue.append(10);
    myQue.append(15);
    myQue.append(14);
    myQue.append(16);
    myQue.append(17);
    myQue.append(18);
    myQue.pop();
    myQue.pop();
    myQue.pop();
    myQue.pop();
    myQue.pop();
    myQue.pop();
 */
  /*  int arr[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    
   // binarySearch(arr, 0, 29,-2);
    binarySearchByLoop(arr, 29,4);
   */
    /*
    HashTable<int> ht;
    
    init(10, &ht);
    insert(15, &ht);
    insert(5, &ht);
    insert(6, &ht);
    insert(10, &ht);
    insert(33, &ht);
    insert(44, &ht);
    insert(24, &ht);
    insert(54, &ht);
    insert(66, &ht);
    insert(77, &ht);
    insert(100, &ht);
    std::cout<<search(44,&ht)<<std::endl;
    std::cout<<search(4,&ht)<<std::endl;
    show(&ht);
     */
   /* HashTable<int> ht;
   
     ht.init(10);
     ht.insert(15, &ht);
     ht.insert(5, &ht);
     ht.insert(6, &ht);
     ht.insert(10, &ht);
     ht.insert(33, &ht);
     ht.insert(44, &ht);
     ht.insert(24, &ht);
     ht.insert(54, &ht);
     ht.insert(66, &ht);
     ht.insert(77, &ht);
     ht.insert(100, &ht);
     std::cout<<ht.search(44,&ht)<<std::endl;
     std::cout<<ht.search(4,&ht)<<std::endl;
     ht.show(&ht);
    */
    /*
    int arr[30]={55,6,3,8,44,76,2345,67,78,54,32,67,89,76,34,56,78,36,58,69,36,26,47,59,36,25,47,64,68,79};
   qSort<int>(arr, 0, 29);
    //Qsort(arr, 0, 29);
    for(int i:arr) cout<<i<<" "<<endl;
    */
   /* int arr[30]={36, 44, 47, 47, 54, 55, 56, 58, 59, 64, 67, 67, 68, 69, 76, 76, 78, 78, 79, 340,890, 3, 6, 8, 25, 26, 32, 34, 36, 36 };
   // Qsort(arr, 0, 29);
    //for(int i:arr) cout<<i<<" ";
    rotateMatrix(arr, 30);
    */
    
  //  cout<<power(8, 2);
  // bigNumber(3);
  /*  int arr[30]={36, 44, 47, 47, 54, 55, 56, 58, 59, 64, 67, 67, 68, 69, 76, 76, 78, 78, 79, 340,890, 3, 6, 8, 25, 26, 32, 34, 36, 36 };
    Reorder(arr, 30, isEven);
   */
    
    
    linkList<int> list1(9);
    list1.append(1);
    list1.append(2);
    list1.append(3);
    list1.append(4);
    list1.append(5);
    list1.append(6);
    list1.show();
    reverseLinkList<int>(&list1)->show();
  
    return 0;
}
