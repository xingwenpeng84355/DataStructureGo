//
//  hash.h
//  DataStructureGo
//
//  Created by xingwenpeng on 01/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef hash_h
#define hash_h

#define nullkey -999999
template <class T>
struct HashTable{
    int count;
    T *arr;
};
template <class T> int hash(T val,HashTable<T> *H);

template <class T>
bool init(int size,HashTable<T> *H){
    
    if(size<0)  return false;
    H->arr=(T*)malloc(size*sizeof(T));
    if(H->arr==nullptr) return false;
    H->count=size;
    for(int i=0;i<size;i++){
        
        H->arr[i]=nullkey;
    
    }
    return true;
}

template <class T>
bool insert(T val,HashTable<T> *H){
    
    int addr=hash<T>(val,H);
    int count=0;

    while(H->arr[addr]!=nullkey){
        count++;
        addr++;
        addr%=H->count;
        if(count==H->count) {
            std::cout<<"full"<<std::endl;
            return false;
        }
    }
    H->arr[addr]=val;
    return true;
}

template <class T>
int hash(T val,HashTable<T> *H){
    
    return val%H->count;
    
}

template <class T>
bool search(T val,HashTable<T> *H){
    
  int addr=hash<T>(val,H);
      int count=0;
    while(H->arr[addr]!=val){
        count++;
        addr++;
        addr%=H->count;
        if(count==H->count)
        {
            std::cout<<"unfound"<<std::endl;
            return false;
        }
        
    }
    std::cout<<H->arr[addr]<<" found in addr: "<<addr<<std::endl;
    return true;
}


template <class T>
void show(HashTable<T> *H){

    for(int i=0;i<H->count;i++){
        
        std::cout<<H->arr[i]<<std::endl;
        
    }
    

}






#endif /* hash_h */
