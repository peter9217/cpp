#include <iostream>
#include <string>
using namespace std;
typedef string st;
int main(){
    int counter = 0;
    loop: counter++;
    cout << counter ;
    if (counter<5)
    goto loop;
    cout << "end\n";
    counter=0;
    while(counter<5 && counter>-1)
    {counter++;
    cout << counter ;
    }
    cout << counter ;
    do{
        cout << "-1!";
        counter--;
    } while(counter>0);
        cout << counter;

    for(int i=0; i<5; i++){
        cout << i<<"\n";
    }
    cout << "end";
    int a= 1;
    int b= 1;
    int c= 2;
    int n = 5;
    for (n -= 3; n; n--) {
        a = b;
        b = c;
        c = a + b;
        cout << c;
    }
    cout << "end";
    n = 6;
    switch(n){ 
        case 1: cout << 1;
            break;
        case 5: cout << 5;
            break;
        case 10: cout << 10;
            break;
        default: cout <<"nothing";
    }

    
    return 0;
}