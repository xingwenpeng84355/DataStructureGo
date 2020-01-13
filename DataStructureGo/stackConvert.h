//
//  stackConvert.h
//  DataStructureGo
//
//  Created by xingwenpeng on 08/01/2020.
//  Copyright © 2020 xingwenpeng. All rights reserved.
//

#ifndef stackConvert_h
#define stackConvert_h

typedef struct elem  //存储递归函数的现场信息
{
    int rd;          //返回语句的标号，rd=0~t+1
    int pn,pf;       //函数形参,pn表示参数n,pf表示参数f
    int q1,q2;       //局部变量,q1表示u1,q2表示u2
    void show(){
        std::cout<<" rd:"<<rd<<"  pn:" <<pn<<"  pf:"<<pf<<"  q1:"<<q1<<"  q2:"<<q2<<std::endl;
    }
}ELEM;

template <class T>
class stackForStruct: public stack<T>,public link<T> {
    
private:
    link<T> *head;
public:
    stackForStruct(){
        head=nullptr;
        link<T>();
    }
    bool pop(){
        if(isEmpty())
            return false;
        link<T> *temp=head;
        head=head->next;
        
        delete temp;
        return true;
    }
    bool push(T &tem){
        try{
        static link<T> *temp=new link<T>(tem,head);
       
            
            head=temp;
            }catch(std::bad_alloc ex){
                       
                       return false;
                   }
        std::cout<<"push success"<<std::endl;
        return true;
        
    }
    bool isEmpty(){
        
        return head==nullptr;
    }
    bool isFull(){
        
        return false;
    }
    T top(){
        
        return head->data;
    }
    T getTop(){
        
        return head->data;
    }
    void show(){
        if(isEmpty()) std::cout<<"the stack is empty"<<std::endl;
        else {
            
            link<T> *temp=head;
            while(temp!=nullptr){
                temp->show();
                temp=temp->next;
                
            }
            
        }
    }
};

class nonrec
{
private:
    stackForStruct<ELEM> S;
public:
    nonrec(void){}
    void replace1(int n,int& f);
  //  void replace2(int n,int& f);
};


void nonrec::replace1(int n,int& f)
{
    ELEM x,tmp;
    x.rd=3;                       //因为exmp内共调用2次递归子函数，t=2，所以td=t+1=3,压到栈底作监视哨
    x.pn=n;
    S.push(x);                    //调用最开始函数,递归的总入口。相当于调用exmp(7,f)
    std::cout<<"label 0: 1st push"<<std::endl;
      S.show();
label0:
    if( (x = S.top()).pn < 2)     //处理递归出口,所有递归出口处需要增加语句goto label t+1。这也是递归语句第一条可执行语句
    {
        S.pop();
        std::cout<<"label 0: pn<2 after pop"<<std::endl;
        S.show();
        
        x.pf = x.pn + 1;         //获得函数的解pf
        S.push(x);
        
        std::cout<<"label 0: pn<2 after push"<<std::endl;
        S.show();
        
        goto label3;             //因为递归出口语句执行完后需要处理函数返回,而lable t+1是用来处理函数返回需要做的工作的，所以需要goto lable3
    }
    
    x.rd = 1;                 //调用第一个递归函数,位于label0的后面，所以如果不满足递归出口会不断调用这里，直到满足递归出口
    x.pn = (int)(x.pn/2);
    S.push(x);
    std::cout<<"label 0: after push"<<std::endl;
    S.show();//一次调用使用一个堆栈数据
    std::cout<<"xxxxxxxxx"<<std::endl;
    goto label0;         //调用后开始进入函数内部，由于函数的第一条执行语句位于lable0，所以需要goto label0
    
    
label1: tmp = S.top();           //label1处理第1个递归函数返回时需要进行的处理，通常是pop自己的数据，然后把计算结果放到调用者对应的数据内
    S.pop();
    std::cout<<"label 1: after pop"<<std::endl;
    S.show();
    
    x = S.top();
    S.pop();
    
    std::cout<<"label 1: after pop"<<std::endl;
    S.show();
    
    x.q1 = tmp.pf;           //获取第1个递归函数计算的结果，并回传给上层函数的q1
    S.push(x);
    std::cout<<"label 1: after push"<<std::endl;
    S.show();
    
    x.rd = 2;                //调用第二个递归函数
    x.pn = (int)(x.pn/4);
    S.push(x);
    std::cout<<"label 1: rd=2 after push"<<std::endl;
    S.show();
    goto label0;
    
label2: tmp = S.top();           //从第二个递归函数中返回
    S.pop();
    std::cout<<"label 2: after pop"<<std::endl;
    S.show();
    
    x = S.top();
    S.pop();
    std::cout<<"label 2: after pop"<<std::endl;
    S.show();
    x.q2 = tmp.pf;
    x.pf = x.q1 * x.q2;
    S.push(x);
    std::cout<<"label 2: after push"<<std::endl;
    S.show();
label3:                          //递归出口（label0)结束后会调用这里
    switch((x=S.top()).rd)
    {
        case 1:
            goto label1;
            break;
        case 2:
            goto label2;
            break;
        case 3:             //t+1处的label：表示整个函数结束
            tmp = S.top();
            S.pop();
            std::cout<<"label 3: after pop"<<std::endl;
            S.show();
            f = tmp.pf;        //最终的计算结果
            break;
        default:
            break;
    }
}











#endif /* stackConvert_h */
