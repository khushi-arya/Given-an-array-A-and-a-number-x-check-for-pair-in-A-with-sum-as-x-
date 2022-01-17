#include<iostream>
using namespace std;
int main(){
    int a[5]={1,4,5,6,8};
    int i;
    for(i=0;i<=5;i++){
        cout<<"  "<<a[i];
    }
    cout<<"\n";
    int key,j;
    cout<<"enter sum of any two element of array: \n";
    cin>>key;
    for(i=0;i<=5;i++){
        for(j=i+1;j<=5;j++){
            if(a[i]+a[j]==key){
                cout<<" "<<a[i];
                cout<<" "<<a[j];
            }
        }
    }
    return 0;
}