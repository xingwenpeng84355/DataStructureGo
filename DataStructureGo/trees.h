//
//  trees.h
//  DataStructureGo
//
//  Created by xingwenpeng on 02/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef trees_h
#define trees_h

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

  treeNode* setUpTree2(){
    
    treeNode* node8=(treeNode*)malloc(sizeof(treeNode));
   
    treeNode* node9=(treeNode*)malloc(sizeof(treeNode));
    treeNode* node2=(treeNode*)malloc(sizeof(treeNode));
    
   
    node8->data=8;
    node8->lChild=node9;
       node8->rChild=node2;
    node9->data=9;
    node9->lChild=node9->rChild=nullptr;
    node2->data=2;
   node2->lChild=node2->rChild=nullptr;
   
    return node8;
    
}

bool findSubTree(treeNode* tree1,treeNode* tree2,treeNode* ori){
    if(tree1==nullptr&&tree2==nullptr) return true;
    if(tree1==nullptr^tree2==nullptr) return false;
    
    if(tree1->data!=tree2->data){
        
        return findSubTree(tree1->lChild,ori,ori)||findSubTree(tree1->rChild,ori,ori);

    }
    
    else{
        
        return findSubTree(tree1->lChild,tree2->lChild,ori)&&findSubTree(tree1->rChild,tree2->rChild,ori) ;
       
        
    }
    
}




#endif /* trees_h */
