#include<iostream>
using namespace std;
string encodeString(string strg,int Pos){
    string str="";
    for(int i=0;i<strg.length();i++){
       if(int(strg[i])>=97&&strg[i]<=122){
            int ascii_no=int(strg[i])+Pos;
            char ch;
            if(ascii_no>122){
                ch=char(ascii_no-26);
            }else{
                ch=char(ascii_no);
            }
            str=str+ch;
       }else
       {
            int ascii_no=int(strg[i])+Pos;
            char ch;
            if(ascii_no>90){
                ch=char(ascii_no-26);
            }else{
                ch=char(ascii_no);
            }
            str=str+ch;
       }
    }
    return str;
}
string decodeString(string strg,int Pos){
     string str="";
    for(int i=0;i<strg.length();i++){
       if(int(strg[i])>=97&&strg[i]<=122){
            int ascii_no=int(strg[i])-Pos;
            char ch;
            if(ascii_no<97){
                ch=char(ascii_no+26);
            }else{
                ch=char(ascii_no);
            }
            str=str+ch;
       }else
       {
            int ascii_no=int(strg[i])-Pos;
            char ch;
            if(ascii_no<65){
                ch=char(ascii_no+26);
            }else{
                ch=char(ascii_no);
            }
            str=str+ch;
       }
    }
    return str;
}
int main(){
    string strg;
    int Pos;
    cout<<"enter a string:"<<endl;
    cin>>strg;
    cout<<"enter the Pos position:"<<endl;
    cin>>Pos;
    string s1=encodeString(strg,Pos);
    string s2=decodeString(strg,Pos);
    cout<<"encoded string is "<<s1<<endl;
    cout<<"decoded string is "<<s2<<endl;

} 