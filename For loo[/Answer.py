#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b ;
    // Complete the code.
    cin>>a;
    cin>>b;
    for(int i=a; i<=b; i++){
        if(i>=1 && i<=9){
            if(i==1){
                cout<<"one\n";
            }
            if(i==2){
                cout<<"two\n";
            }
            if(i==3){
                cout<<"three\n";
            }
            if(i==4){
                cout<<"four\n";
            }
            if(i==5){
                cout<<"five\n";
            }
            if(i==6){
                cout<<"six\n";
            }
            if(i==7){
                cout<<"seven\n";
            }
            if(i==8){
                cout<<"eight\n";
            }
            if(i==9){
                cout<<"nine\n";
            }
        }
        if(i>9 && i%2==0){
            cout<<"even\n";
        }
        if(i>9 && i%2!=0){
            cout<<"odd\n";
        }
    }
    
    return 0;
}
