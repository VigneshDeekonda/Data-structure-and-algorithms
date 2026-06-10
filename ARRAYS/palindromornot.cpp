#include<bits/stdc++.h>
using namespace std;
int main(){
    int revNum = 0;
    int number;
    int og;

    cout<<"ENTER THE NUMBER : ";
    cin>>number;
    og = number;

    while(number>0){
        int digit = number %10;
        revNum = revNum * 10 + digit;
        number = number /10;
    }
    if(og == revNum){
        cout<<"It's a palindrome";
    }
    else{
        cout<<"Its not a plaindrome";
    }
    return 0;
}






// int a = 4554;
// a%10;
// 