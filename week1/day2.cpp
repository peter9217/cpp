#include <iostream> 

using namespace std; 

int Function(int a){
    cout << "Function ÇÔ¼ö\n";
    return 2+a;
};
int main() { 
    cout <<"-------- cout"<<"\n" ; 
    cout <<"Hello, World!\n"<<"\n" ; 
    cout <<"-------- ÁÂ¿ì °ø°£ Á¤·Ä"<<"\n" ; 
    cout <<"ÁÂ\t"<<"¿ì\n" ; 
    cout <<"ÁÂÁÂÁÂ\t"<<"¿ì¿ì¿ì\n" ; 
    cout <<"ÁÂÁÂ\t" <<"¿ì¿ì"<<endl; 
    cout <<"-------- ´õºí Å¸ÀÔ ¿¬»ê ÈÄ cout"<<"\n" ; 
    cout <<(double)7000*700 << endl ;
    int  ab = 0;
    cout <<"-------- ÇÔ¼ö È£Ãâ"<<"\n" ; 
    ab=Function(3);
    cout << ab;   
    cout << "end";
    
    return 0;
}
