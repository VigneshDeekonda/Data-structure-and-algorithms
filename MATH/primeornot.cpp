#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    for(int i = 1 ; i<= n;i++){
        if(n%i==0){
            count++;
        }
    }
    if( count == 2){
        cout<<"PRIME NUMBER";
    }else{
        cout<<"NOT A PRIME NUMBER";
    }
    return 0;
}
