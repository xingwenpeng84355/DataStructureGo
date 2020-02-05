//
//  printTree.h
//  DataStructureGo
//
//  Created by xingwenpeng on 05/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef printTree_h
#define printTree_h
#include <queue>
struct point{
    
    treeNode* root;
    int count;
};


std::queue<point> printTree(treeNode* root){
    static int count=0;
        static std::queue<point> que;
    if(root==nullptr) return que;

    point tem;
    tem.root=root;
    tem.count=count;
    linkStack<point> store;
    while(count<que.back().count){
    
        store.push(que.back());
        que.pop();
    }
    que.push(tem);
    while(!store.isEmpty()){
        
        que.push(store.getTop());
        store.pop();
    }
    
    treeNode* cur=root;
    count++;
    printTree(cur->rChild);
    printTree(cur->lChild);
    return que;
}











#endif /* printTree_h */
