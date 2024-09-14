#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
int bin_to_decimal(int n,int len)
{
    int m,power=0,res=0;
    
    
    for(int i=0;i<len;i++)
    {
        m=n%10;
        n=n/10;
        power=pow(2,i);
        res=res+(power*m);
    }
    return res;


    
}
vector<char> dec_to_binary(int n)
{
    int m;
    string st,res;
    vector<char> ch;
    while(n>0)
    {
        m=n%2;
        n=n/2;
        st=to_string(m);
        res.append(st);

    }
    int l=res.length();
    for(int i=l-1;i>=0;i--)
    {
        ch.push_back(res[i]);

    }
    
    return ch;
    
}

int main()
{
    string str1,str2;
    int num1,num2,l1,l2,res_num1,res_num2,dec_res;
    vector<char> binary_res;
    cout<<"enter first bianry num:";
    getline(cin,str1);
    cout<<"your first  binary number:"<<str1<<endl;
    cout<<"enter your second binary num:";
    getline(cin,str2);
    cout<<"your second binary number:"<<str2<<endl;
    num1=stoi(str1);
    num2=stoi(str2);
    //number 1 length
    l1=str1.length();
    //number 2 length
    l2=str2.length();
    res_num1=bin_to_decimal(num1,l1);
    res_num2=bin_to_decimal(num2,l2);
    dec_res=res_num1+res_num2;
    binary_res=dec_to_binary(dec_res);
    cout<<num1<<"+"<<num2<<"=";
    for(int i=0;i<binary_res.size();i++)
    {
        cout<<binary_res[i]<<" ";
    }
    cout<<endl;





    /*int num;
    vector<char> r;
    cout<<"enter a number:";
    cin>>num;
    r=dec_to_binary(num);
    cout<<"decimal to binary:"<<endl;
    for(int i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }*/


    





    return 0;
}