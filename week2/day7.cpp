#include <iostream>
#include <string>
using namespace std;
typedef string st;
int main(){
    int counter = 0;
    cout <<"-------- loopÁøÀÔ"<<"\n" ; 
    loop: counter++;
    cout << "counter = "<<counter<<endl ;
    if (counter<5)
    goto loop;
    cout <<"-------- loopÅ»Ãâ"<<"\n" ; 
    counter=0;
    cout <<"-------- whileÁøÀÔ"<<"\n" ; 
    while(counter<5 && counter>-1)
    {counter++;
    cout << "counter = "<< counter<<endl ;
    }
    cout <<"-------- whileÅ»Ãâ"<<"\n" ; 
    cout <<"-------- doÁøÀÔ"<<"\n" ; 
    do{
        cout << "¹«Á¶°Ç ÁøÇàµÇ´Â do(counter) = "<< "do!("<<counter<<")"<<endl;
        counter--;
    } while(counter>0);
        cout << "counter(while) = "<< counter<<endl;
    cout <<"-------- doÅ»Ãâ"<<"\n" ; 

    cout <<"-------- for ÁøÀÔ"<<"\n" ; 
    for(int i=0; i<5; i++){
        cout << "i = "<< i<<"\n";
    }
    cout <<"-------- forÅ»Ãâ"<<"\n" ; 
    int a= 1;
    int b= 1;
    int c= 2;
    int n = 5;
    cout <<"-------- for ÁøÀÔ"<<"\n" ; 
    for (n -= 3; n; n--) {
        a = b;
        b = c;
        c = a + b;
        cout <<"c(n) = "<< c<<"("<<n<<")"<<endl;
    }
    cout <<"-------- forÅ»Ãâ"<<"\n" ; 
    n = 5;
    cout <<"-------- switchÁøÀÔ"<<"\n" ; 
    switch(n){ 
        case 1: cout <<"n = "<< 1<<endl;
            break;
        case 5: cout <<"n = "<< 5<<endl;
            break;
        case 10: cout <<"n = "<< 10<<endl;
            break;
        default: cout <<"nothing"<<endl;
    }
    cout <<"-------- switchÅ»Ãâ"<<"\n" ; 

    
    return 0;
}