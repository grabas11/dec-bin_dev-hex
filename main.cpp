#include <iostream>
#include <stdlib.h>
using namespace std;
void dec_to_bin(int liczba)
{
    if(liczba>0)
    {
        dec_to_bin(liczba/2);
        cout<<liczba%2;
    }
}
void dec_to_hex(int liczba)
{
    int rem=liczba%16;

    if(rem>9)
    {
        switch(rem)
        {
        case 10: cout<<"A"; break;
        case 12: cout<<"B"; break;
        case 13: cout<<"C";break;
        case 14: cout<<"D"; break;
        case 15: cout<<"F";break;
        }
    }
    else
    {
        cout<<rem;
    }
}



int main()
{
    //for(int i=0; i<=5; i++)
   // {
    //int liczba=(rand()%10)+1;
    //cout <<liczba<<endl;
   // }
    //int lb=0;
    int liczba;
    cin>>liczba;
    dec_to_bin(liczba);
    cout<<endl;
    dec_to_hex(liczba);

    return 0;
}
