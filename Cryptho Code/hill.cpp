#include <iostream>
#include <string.h>
using namespace std;
#define NUM 1000//定义最大值
int  main ()
{
	int key[2][2];
	char word[NUM];
	int word1[NUM];
	char word2[NUM];
	int num;
	char voa[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	cout<<"Insert Matrix of Encrypt/Decrypt：(Range : 0~25)"<<endl;
	cin>>key[0][0];	cin>>key[0][1];	cin>>key[1][0];	cin>>key[1][1];
	cout<<"Insert Encrypt/Decrypt Word (Must Be Odd)："<<endl;
	cin>>word;
	num=strlen(word);
	for (int i=0;i<num;i++)//将字母转换为数字
	{
		for (int j=0;j<26;j++)
			if ((word[i]==voa[j])||(word[i]==(voa[j]+32)))
				word1[i]=j;
	}
	for (int i=0;i<num;)//加解密算法
	{
		word2[i]=(key[0][0]*word1[i]+key[0][1]*word1[i+1])%26;
		word2[i+1]=(key[1][0]*word1[i]+key[1][1]*word1[i+1])%26;
		i+=2;
	}
	for(int j=0;j<num;j++)
	{
		for(int k=0;k<26;k++)
			if	(word2[j]==k)
				word2[j]=voa[k];
	}
	cout<<"After Encrypted / Decrypted："<<endl;
	for (int i=0;i<num;i++)
		cout<<word2[i];
	cout<<endl;
	//system("pause");
}
