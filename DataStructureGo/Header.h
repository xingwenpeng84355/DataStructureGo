//
//  Header.h
//  DataStructureGo
//
//  Created by xingwenpeng on 23/12/2019.
//  Copyright © 2019 xingwenpeng. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <stdio.h>

#include <iostream>
template <class T> class link{
    
public:
    T data;
    link<T>* next;
    link(const T Info,  link<T>* nextValue=nullptr);
    link(link<T>* nextValue);
};


template <class T> class linkList{
    
private:
    link<T> *head, *tail;
    link<T> *setPos(const int p);
    int length=0;
public:
    linkList(const int s);
    ~linkList();
    bool isEmpty();
    void clear();
    int getLength();
    bool append(const T value);
    bool insert(const int p,const T value);
    bool deleteLink(const int p);
    T getValue(const int p);
    int getPos(const int value);
    void show();
};



template <class T>
link<T>::link(const T Info, link<T>* nextValue){
    data=Info;
    next=nextValue;
}

template <class T>
link<T>::link( link<T>* nextValue){
    
    next=nextValue;
}




template <class T>linkList<T>::linkList(const int s){
   
   head=new link<T> (nullptr);
    head->next=nullptr;
    tail=head;
    append(s);
    length++;
}

template<class T> link<T>* linkList<T>::setPos(const int p){
   
    link<T> *tem=head;
    
    for(int i=0;i<p;i++){
        tem=tem->next;
        
    
        if(tem==nullptr) break;
    }
    
   
      return tem;
}
template<class T> linkList<T>::~linkList(){
    
    
    
}
 template<class T> bool linkList<T>::isEmpty(){
     if(head->next==nullptr) return true;
     else return false;
    
}
template<class T> void linkList<T>::clear(){
    
    link<T> *tem=head;
    link<T> *tem1;
    do{
        tem1=tem;
        tem=tem->next;
        delete tem1;
    }while(tem!=nullptr);
    length=0;
    
}
template<class T> int linkList<T>::getLength(){
     
  /*  if(head->next==nullptr) return 0;
    else {
    link<T> *tem=head;
    int count=0;
    do{
        tem=tem->next;
        count++;
    }while(tem!=nullptr);
    return count;
}
   */
    return length;
}
template<class T> bool  linkList<T>::append(const T value){
  link<T>* tem= new link<T>(value);
    tail->next=tem;
    tail=tem;
    tem->next=nullptr;
    length++;
    return true;
}
  template<class T> bool linkList<T>:: insert(const int p,const T value){
    link<T>* tem2=new link<T> (value);
    link<T>* tem=setPos(p);
    
    tem2->next=tem->next;
      tem->next=tem2;
      length++;
      return true;
}
template<class T> bool  linkList<T>::deleteLink(const int p){
     
    link<T>* tem=setPos(p-1);
    tem->next=setPos(p+1);
    delete setPos(p);
    length--;
    return true;
}
template<class T> T linkList<T>::getValue(const int p){
    if(setPos(p)==nullptr) return false;
    else return setPos(p)->data;
    
}
template<class T> int  linkList<T>::getPos(const int value){
    
    int i=0;
    for(i=0;i<getLength();i++){
        
        if(setPos(i+1)->data==value) return i+1;
        else continue;
        
    }
    if(i==getLength()-1) return -1;
    else return -1;
    
}
template <class T> void linkList<T>::show(){
    
    int i=0;
      for(i=1;i<getLength();i++){
          if(setPos(i)!=nullptr)
          std::cout<<setPos(i)->data<<std::endl;
          else std::cout<<"not available"<<std::endl;
      }
    
}


template <class T> class DNode{
public:
    
    DNode(){
        pre=nullptr;
        next=nullptr;
        data=-1;
    }
    DNode(T value,DNode<T>* prePtr=nullptr,DNode<T>* nexPtr=nullptr):data(value),pre(prePtr),next(nexPtr)
    {
    }
    

    DNode<T>* pre;
    DNode<T>* next;
    T data;
    
};

template<class T> class DlinkLIst{
public:
    DlinkLIst():length(0),pos(nullptr){}
    
    DlinkLIst(T value):length(0){
        pos= new DNode<T> (value);
        pos->next=pos;
        pos->pre=pos;
        length++;
      
    }
    
    bool append(T value){
        
            DNode<T>* tem= new DNode<T> (value);
            pos->next->pre=tem;
            tem->next=pos->next;
            pos->next=tem;
            tem->pre=pos;
       
        length++;
        return true;
    }
    
    bool insert(int p,T value){
        
        for(int i=0;i<p;i++){
            
            pos=pos->next;
            
        }
        DNode<T>* tem= new DNode<T>(value);
        tem->next=pos->next;
        pos->next->pre=tem;
        pos->next=tem;
        tem->pre=pos;
        length++;
       // std::cout<<length<<std::endl;
        return true;
    }
    
    bool setPos(int p){
        
        int count=0;
        while(count<p){
            count++;
            pos=pos->next;
        }
        return true;
    }
    T getValue(int p){
        for(int i=0;i<p;i++){
            pos=pos->next;
        }
        return pos->data;
    }
    
    int findValue(int value ){
        int count=0;
        while(count<length){
            if(pos->data==value)  return count;
            pos=pos->next;
            count++;
        }
      
        return -1;
    }
    void show(){
        int count=0;
        while(count<length){
            std::cout<<pos->data<<std::endl;
            pos=pos->next;
              count++;
        }
        
        
    }
    
    void rShow(){
           int count=0;
           while(count<length){
               std::cout<<pos->data<<std::endl;
               pos=pos->pre;
               count++;
           }
       }
    ~DlinkLIst(){
        int count=0;
        while(pos!=nullptr&&count<length)
        {
            
        DNode<T> *tem=pos;
        pos=pos->next;
 
            
        delete tem;
            count++;
        }
        length=0;
        
    }
    
private:
    int length;
    DNode<T>* pos;
    
};

#endif /* Header_h */
