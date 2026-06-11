#include<iostream>
using namespace std;
int main ()
{
    int a =5 ;char ch;
    for(int i =1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                ch=j+64;
                cout<<ch;
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
}