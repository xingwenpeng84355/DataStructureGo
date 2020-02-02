//
//  bigNumber.h
//  DataStructureGo
//
//  Created by xingwenpeng on 02/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef bigNumber_h
#define bigNumber_h
bool incrent(char * num,int size);
void showNumber(char * num,int size);

void bigNumber(int size){
    
    char* num=new char[size+1];
    num[size]='\0';
    
    while(incrent(num,size)){
        showNumber(num,size);
    }
    
}

bool incrent(char * num,int size){
    
    static int digit=1;
    static int count=0;
    count++;
    int overflow=1;
    if(count==10) {
         num[size-1]='0';
       
        int i=0;
        
        while(1&&overflow){
            i++;
            if(num[size-i-1]=='9'){
                num[size-i-1]='0';
                overflow=1;
            }
            else{
                num[size-i-1]+=1;
                overflow=0;
            }
        }
            count=0;
        
    }
    else {
        num[size-1]+=1;
        
    }
    
    if(digit==size+1) return false;
    return true;
}

void showNumber(char * num,int size){
    int i=0;
    while(num[i]=='0') i++;
    
    for(;i<size;i++){
        
        std::cout<<num[i];
        
    }
    std::cout<<std::endl;
}



#endif /* bigNumber_h */
