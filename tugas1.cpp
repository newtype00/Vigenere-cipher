#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>

using namespace std;
int main()
{
string plaintext,key,Cipher;
int k=0;
cout<<"Masukkan plain text: ";
cin>>plaintext;
cout<<"Masukkan keyword yang akan dipakai: ";
cin>>key;
for(int i=0;i<plaintext.length();i++)
{
    Cipher[i]=(((plaintext[i]-97)+(key[k]-97))%26)+97;
    k++;
    if(k==4)
        k=0;

}
cout<<"   \n\n\n";
for(int i=0;i<plaintext.length();i++)
    cout<<" "<<Cipher[i];
cout<<"\n\n\n\n";
    return 0;
}

