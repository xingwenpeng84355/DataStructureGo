//
//  Hash2.h
//  DataStructureGo
//
//  Created by xingwenpeng on 01/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef Hash2_h
#define Hash2_h
#define nullkey -999999
template <class T>
struct HashTable{
    int count;
    T *arr;
    

    bool init(int size){
        
        if(size<0)  return false;
        this->arr=(T*)malloc(size*sizeof(T));
        if(this->arr==nullptr) return false;
        this->count=size;
        for(int i=0;i<size;i++){
            
            this->arr[i]=nullkey;
        
        }
        return true;
    }


    bool insert(T val,HashTable<T> *H){
        
        int addr=hash(val,H);
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


    int hash(T val,HashTable<T> *H){
        
        return val%H->count;
        
    }


    bool search(T val,HashTable<T> *H){
        
      int addr=hash(val,H);
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



    void show(HashTable<T> *H){

        for(int i=0;i<H->count;i++){
            
            std::cout<<H->arr[i]<<std::endl;
            
        }
        

    }

   
};



#endif /* Hash2_h */
