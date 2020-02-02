//
//  reverseLinkLIst.h
//  DataStructureGo
//
//  Created by xingwenpeng on 02/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef reverseLinkLIst_h
#define reverseLinkLIst_h


template <class T>
linkList<T>* reverseLinkList(linkList<T>* list){
    
    link<T>* front;
    link<T>* middle;
    link<T>* end;
  
    
    front=list->setPos(0);
    middle=list->setPos(1);
    if(middle==nullptr) {
        std::cout<<"the link list only has a head";
        return list;
    }
    end=list->setPos(2);
    if(end==nullptr){
        list->head=middle;
        middle->next=front;
        front->next=nullptr;
        return list;
    }
     front->next=nullptr;
    while(end!=nullptr){
        
        middle->next=front;
        front=middle;
        middle=end;
        end=end->next;
        
    }
    list->head=middle;
    middle->next=front;
    return list;
    
}








#endif /* reverseLinkLIst_h */
