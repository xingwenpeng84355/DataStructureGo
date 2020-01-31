//
//  main.cpp
//  DataStructureGo
//
//  Created by xingwenpeng on 23/12/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//


#include <iostream>
/*#include "DoubleLinkLIst.h"
#include "stack.h"
#include <string>
#include "stdlib.h"
#include "stdio.h"
#include "calculatorWithStack.h"
#include "stackConvert.h"
#include "BST.h"
 */
#include "queByStack.h"
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
  /*  bST<int> tree1(100);
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
    tree1.DeleteBST(44);
        tree1.showAll();
   */
    
 
    que<int> myQue;
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
 
    return 0;
}
