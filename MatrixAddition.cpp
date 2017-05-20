#include<iostream>
using namespace std;
int main()
{
    int a[4][4],b[4][4],c[4][4],i,j;
    cout<<"Enter your first matrix"<<endl;
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    cin>>a[i][j];
    }
    }
    cout<<"Enter your seceond matrix"<<endl;
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    cin>>b[i][j];
    }
    }
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    c[i][j]=a[i][j]+b[i][j];
    }
    }
    cout<<"Your result"<<endl;
    for(i=0;i<4;i++){
    for(j=0;j<4;j++){
    cout<<c[i][j];
    cout<<" ";
    }
    cout<<"\n";
    }
    return 0;
}
