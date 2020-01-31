//
//  BST.h
//  DataStructureGo
//
//  Created by xingwenpeng on 31/01/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef BST_h
#define BST_h

template <class T>
class node{
public:
    T data;
    node<T> * lChild, *rChild;
    node(){
        lChild=rChild=nullptr;
    }
    node(T data1){
        data=data1;
        lChild=rChild=nullptr;
    }
    
};
template <class T>
class bST{
public:
    node<T>* root;
    node<T>* par;
    int depth;
    node<T>** ptr;

    bST(){
        node<T> rootNode;
        root=rootNode;
        depth=0;
    }
    bST(T data){
       root = (node<T>* )malloc(sizeof(node<T>));
        root->data=data;
        root->lChild=root->rChild=nullptr;
        depth=1;
    }
    ~bST(){
       
    }
    bool del(node<T>* tem){
     //  if(tem!=nullptr){
       /*     if(tem->lChild!=nullptr) {
                
                
              return  del(tem->lChild, tem,0);
              
                
                
            }
           if(tem->rChild!=nullptr) {
               return del(tem->rChild,tem,1);
         
            }
        if(tem->rChild==nullptr&&tem->rChild==nullptr){
               free(tem);
            if(side) parent->lChild=nullptr;
            else parent->rChild=nullptr;
                return true;
        }
        */
        
        if(tem==nullptr) {
            return true;
        }
        del(tem->lChild);
        del(tem->rChild);
        delete tem;
        tem=nullptr;
        return true;

    }

    void show(node<T>* root,int side,int level){
        
        std::cout<<"level "<<level<<":"<<std::endl;
        if(side==1){
            std::cout<<"left: ";
            
        }
        else if(side==2){
                   std::cout<<"right: ";
                   
               }
        else {
            std::cout<<"start: ";
            
        }
         std::cout<<root->data<<std::endl;
        
        if(root->lChild!=nullptr) show(root->lChild,1,level+1);
         if(root->rChild!=nullptr) show(root->rChild,2,level+1);
        
    }
 /*   void show(node<T>* root){
        
        
    std::cout<<root->data<<" ";
        if(root->lChild==nullptr) std::cout<<"null ";
        else show(root->lChild);
        if(root->rChild==nullptr) std::cout<<"null ";
        else  show(root->rChild);
      
        
    }*/
    
    void showAll(){
        
        show(root,3,0);
        
    }
    bool DeleteNode(node<T>* node) {
        
    }
    bool DeleteBST(int key){
        if( ! SearchBST(root,root,key,3 )) return false;
        node<T>* tem=*ptr;
        if(tem->lChild==nullptr&&tem->rChild==nullptr) {
            if(par->lChild==tem) par->lChild=nullptr;
            else  par->rChild=nullptr;
            delete tem;
            return true;
    }
       else if(tem->lChild==nullptr^tem->rChild==nullptr){
            if(tem->lChild==nullptr) {
                if(par->lChild==tem)
                par->lChild =tem->rChild;
                else par->rChild =tem->rChild;
            }
            else{
                if(par->lChild==tem)
                par->lChild =tem->lChild;
                else par->rChild =tem->lChild;
            }
           
           return true;
        }
       else{
           
           tem->data=minimum(tem->rChild);
           if(par->lChild!=nullptr&&par->lChild->data==tem->data) {
               delete par->lChild;
               par->lChild=nullptr;
           }
           else {
               delete par->rChild;
               par->rChild=nullptr;
           }
           return true;
       }
        
        
    }

    bool InsertBST(){
      
            int num;
            std::cout<<"please input the number "<<std::endl;
            std::cin>>num;
        if( SearchBST(root,root,num,3 )){
            
            std::cout<<"same data found in trees!"<<std::endl;
             return false;
            
        }
            node<T>* newNode = (node<T>* )malloc(sizeof(node<T>));
            if(newNode==nullptr) {
                std::cout<<"memory allocating failed"<<std::endl;
                return false;
            }
       
            newNode->data=num;
            newNode->lChild=newNode->rChild=nullptr;
            *ptr=newNode;
        
        
        
            return true;
      
    }
    bool SearchBST(node<T>* root,node<T>* parent,int key,int side ){
       
        if(root == nullptr) {
            if(side==1) {
                ptr=&parent->lChild;
                 std::cout<<"found place on the left"<<std::endl;
                return false;
                
            }
            if(side==2){
                ptr=&parent->rChild;
                    std::cout<<"found place on the right"<<std::endl;
                return false;
                
            }
            return false;
            
        }
        else if(root->data>key) {
              std::cout<<"data is smaller,check the left now"<<std::endl;
            return SearchBST(root->lChild,root,key,1 );
          
            
        }
  
        else if(root->data<key) {
             std::cout<<"data is bigger,check the right now"<<std::endl;
            return SearchBST(root->rChild,root,key, 2 );
        }
      
        else {
            ptr=&root;
            par=parent;
            return true;
            
        }
        
    }
    void inOrder(node<T>* root){
        if(root!=nullptr){
            inOrder(root->lChild);
        std::cout<<root->data<<std::endl;
         inOrder(root->rChild);
        }
    }
    void preOrder(node<T>* root){
          if(root!=nullptr){
              std::cout<<root->data<<std::endl;
              preOrder(root->lChild);
           preOrder(root->rChild);
          }
      }
    void postOrder(node<T>* root){
        if(root!=nullptr){
            postOrder(root->lChild);
            postOrder(root->rChild);
            std::cout<<root->data<<std::endl;
            
        }
    }
    
    int minimum(node<T>* root){
        node<T>* cur;
        cur=root;
        while(cur->lChild!=nullptr) {
            par=cur;
            cur=cur->lChild;
        }
            
            return cur->data;
    }
    int maximum(node<T>* root){
        node<T>* cur;
        cur=root;
        while(cur->rChild!=nullptr) {
            par=cur;
            cur=cur->rChild;
            
        }
        return cur->data;
    }
    };
#endif /* BST_h */
