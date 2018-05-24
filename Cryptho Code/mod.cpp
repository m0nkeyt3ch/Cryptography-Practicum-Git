#include<iostream>
#include<queue>
using namespace std;
int Mod(int a ,int b)                 //求模
{
    while(a<0)
    {
        a +=b;
    }
    return a%b;
}
void Binary_queue(queue<int>&q , int n)   //将数字转换成二进制，然后写进队列
{
    int yu;
    while( n / 2 != 1)
    {
        yu = n % 2;
        q.push(yu);
        n = n / 2;
    }
    yu=n%2;
    q.push(yu);
    q.push(1);
}
int Result(queue<int>&q ,int b ,int m)          //计算模重复平方的结果
{
    int a=1;
    while( q.size() != 0 )
    {
        int t=q.front();
        q.pop();
        if( t ==1 )
        {
            a= Mod(a * b , m) ;
            b= Mod(b * b , m);
        }
        else
        {
            b=Mod( b * b , m);
        }
    }
    return a;
}

int main()
{
    queue<int> q;
    int n,b,m;
    cout<<"a = ";
    cin>>n;
    cout<<"b = ";
    cin>>b;
    cout<<"mod = ";
    cin>>m;
    Binary_queue(q,n);
    cout<<"结果为："<<Result(q,b,m)<<endl;
}
