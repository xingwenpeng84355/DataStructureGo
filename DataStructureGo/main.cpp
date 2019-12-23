//
//  main.cpp
//  DataStructureGo
//
//  Created by xingwenpeng on 23/12/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//


#include <iostream>
#include "Header.h"
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
    
    DlinkLIst<int> list1(1);

    list1.append(2);

    list1.append(3);
    list1.append(4);
    list1.append(5);
    list1.append(6);
    list1.append(7);
   // list1.rShow();
  //  cout<<list1.findValue(4)<<endl;
    
   // list1.insert(3, 99);
      list1.rShow();
   // list1.setPos(2);
          list1.rShow();
    return 0;
}
