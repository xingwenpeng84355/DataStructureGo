//
//  power.h
//  DataStructureGo
//
//  Created by xingwenpeng on 01/02/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef power_h
#define power_h
int status=0;
double power(int exponent, double base){
    
    double result=base;
    
    if(base==0&&exponent<0) {
        status=-1;
        return -1;
    }
    if(base==0&&exponent==0) {
        status=-2;
        return -1;
    }
    if(exponent>0){
        if(exponent==1) return base;
        if(exponent==0) return 1;
       
        if((exponent&(exponent-1))==0){
            
            result=power(exponent>>1, base);
            result=result*result;
            std::cout<<result<<std::endl;
            return result;
        }
        else{
            for(int i=0;i<exponent-1;i++)
            {
                result*=base;
            }
            status=1;
            return result;
            
        }
        
        
    }
    if(exponent<0){
        
        for(int i=0;i<(-exponent)-1;i++)
        {
            result*=base;
        }
        status=1;
        return (double)1/result;
    }
    return -1;
}






#endif /* power_h */
