#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number :-  ";
    cin>>num;
    do {
        cout<<num<<endl;
        num--;
    }
    while(num>=0);
    // for(int i=num;i>=1;--i){
    //     cout<<i<<endl;
    // }

    return 0;
}
