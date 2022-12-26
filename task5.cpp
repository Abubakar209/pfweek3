#include<iostream>
using namespace std;
int main()
{
int mega_bytes;
int bits;

cout<<"Enter megabytes: ";
cin>> mega_bytes;

bits = mega_bytes * 1024 * 1024 * 8;
cout<<"Bits Is: "<<bits<<endl;
}