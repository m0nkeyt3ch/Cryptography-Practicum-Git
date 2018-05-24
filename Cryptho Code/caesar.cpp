#include<iostream>
using namespace std;

int main()
{
    int k;
    char c;
    int m,n;
    char s[2];
    int j=0;
    cout<<"choose :\nEncrypt character = 1，Decrypt character = 2\n，Encrypt String = 3，Decrypt String = 4\n INPUT KEY IN NUMBER\n";
    cin>>m;
    switch(m){
        case 1:
            cout<<"Character c：\n";
            cin>>c;
            cout<<"Key k：\n";
            cin>>k;
            cout<<"Encrypted：\n";
            c=c+k;
            cout<<c<<endl;
            break;
        case 2:
            cout<<"Character c：\n";
            cin>>c;
            cout<<"Key k：\n";
            cin>>k;
            cout<<"Decrypted：\n";
            c=c-k;
            cout<<c<<endl;
            break;
        case 3:
            cout<<"Lenght of String：n"<<endl;
            cin>>n;
            cout<<"String c\n";
            for(j=0;j<n;j++){
                cin>>s[j];      }
                cout<<"Key k：\n";
                cin>>k;
                cout<<"Encrypted：\n";
                    for(j=0;j<n;j++){
                        s[j]+=k;
                        cout<<s[j];
                    }
                    cout<<"\n";
            break;
        case 4:
            cout<<"Lenght of string：n"<<endl;
            cin>>n;
            cout<<"String c：\n";
            for(j=0;j<n;j++){
                cin>>s[j];      }
                cout<<"Key k：\n";
                cin>>k;
                cout<<"Decrypted：\n";
                    for(j=0;j<n;j++){
                        s[j]+=k;
                        cout<<s[j];
                    }
                    cout<<"\n";
            break;
        default:
           cout<<"err";
            break;
    }
}
