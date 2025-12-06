#include<iostream>
using namespace std;
void display(int num){
    cout<<"1";
    for(int i=2;i<=num;i++){ 
        // cout<<"1";
        cout<<"*"<<i;
        // for(int j=2;j<=i;j++){
        //     cout<<"*"<<j;
        //  }
      
     
     }
 }
int main(){
   cout <<"0! = 1"<<endl;
   cout <<"1! = 1"<<endl;
    int n=1;
    for(int i=2;i<=10;i++){
        n=n*i;
        cout<<i<<"! = ";
        display(i);
        cout<<"="<<n<<endl;
    }
    
    
}