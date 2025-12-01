#include<iostream>
using namespace std;
class S{
protected:
int V0;//匀速直线运动、匀变速直线运动和竖直上抛运动的初速度
int a;//匀变速直线运动的加速度
int t;//时间

public:
int SetValueV0(int v0){
    return V0=v0;
}
int SetValuea(int a1){
    return a=a1;
}
int SetValuet(int t1){
    return t=t1;
}
virtual int display()=0;
};

class SCL:public S{
public:
int display(){
   return V0*t+0.5*a*t*t;
}
};
class SAL:public S{
public:
int display(){
   return V0*t+0.5*a*t*t;
}
};
class SVL:public S{
public:
int display(){
   return V0*t+0.5*a*t*t;
}
};
int caculater(S &s){
    s.display();
}
int main(){
    SCL object1;
    object1.SetValueV0(5);
    object1.SetValuea(0);
    object1.SetValuet(10);
    cout<<"SCL的位移为"<<caculater(object1)<<endl;
    SAL object2;
    object2.SetValueV0(10);
    object2.SetValuea(5);
   object2.SetValuet(20);
    cout<<"SAL的位移为"<<caculater(object2)<<endl;
    SVL object3;
    object3.SetValueV0(200);
    object3.SetValuea(-10);
    object3.SetValuet(6);
    cout<<"SVL的位移为"<<caculater(object3)<<endl;

}

