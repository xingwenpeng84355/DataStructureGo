//
//  treeMirror.h
//  DataStructureGo
//
//  Created by xingwenpeng on 05/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef treeMirror_h
#define treeMirror_h


struct treeNode{
    
    int data;
    treeNode* lChild;
    treeNode* rChild;
};

treeNode* setUpTree(){
    
    
    treeNode* node8=(treeNode*)malloc(sizeof(treeNode));
    treeNode* node10=(treeNode*)malloc(sizeof(treeNode));
    treeNode* node9=(treeNode*)malloc(sizeof(treeNode));
    treeNode* node2=(treeNode*)malloc(sizeof(treeNode));
    treeNode* node7=(treeNode*)malloc(sizeof(treeNode));
    treeNode* node4=(treeNode*)malloc(sizeof(treeNode));
    treeNode* node11=(treeNode*)malloc(sizeof(treeNode));
    
    node8->data=8;
    node8->lChild=node10;
    node8->rChild=node11;
    node10->data=8;
    node10->lChild=node9;
       node10->rChild=node2;
    node9->data=9;
    node9->lChild=node9->rChild=nullptr;
    node2->data=2;
    node2->lChild=node4;
         node2->rChild=node7;
    node7->data=7;
       node7->lChild=node7->rChild=nullptr;
    node4->data=4;
       node4->lChild=node4->rChild=nullptr;
    node11->data=7;
       node11->lChild=node11->rChild=nullptr;
    return node8;
    
}


void treeMirror(treeNode* root){
    
    if(root==nullptr) {
        
        
        return ;
        
    }
    else {
        treeNode* tem;
        tem=root->lChild;
        root->lChild=root->rChild;
        root->rChild=tem;
        treeMirror(root->lChild);
        treeMirror(root->rChild);
        
    }
}


void treeMirrorByLoop(treeNode* root){
    //by oreorder
    treeNode* cur=root;

    linkStack<treeNode*> s;
    
    while(!s.isEmpty()||cur!=nullptr){
        
        if(cur!=nullptr){
            treeNode* tem;
           tem=cur->lChild;
          cur->lChild=cur->rChild;
          cur->rChild=tem;
            s.push(cur);
            cur=cur->lChild;
            
        }
        else{
            cur=s.getTop();
            s.pop();
            cur=cur->rChild;
            
        }
    }
}


void treesByMiddleOrder(treeNode* root){
    
    treeNode* cur=root;

      linkStack<treeNode*> s;
      
      while(!s.isEmpty()||cur!=nullptr){
          
          if(cur!=nullptr){
              std::cout<<cur->data<<std::endl;
              s.push(cur);
              cur=cur->lChild;
              
          }
          else{
              cur=s.getTop();
              s.pop();
                std::cout<<cur->data<<std::endl;
              cur=cur->rChild;
              
          }
      }
    
}


void show(treeNode* root,int side,int level){
       
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

   





#endif /* treeMirror_h */
