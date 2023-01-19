#include<bits/stdc++.h>
using namespace std;

int n;
int x[100];
int check[100];
void print(){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<endl;
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(check[j]==0){
            check[j]=1;
            x[i]=j;
            if(i==n){
                print();
            }else{
                Try(i+1);
            }
            check[j]=0;
        }
    }
}
int main(){
    cin>>n;
    Try(1);
}