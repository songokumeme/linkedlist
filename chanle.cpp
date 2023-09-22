#include<iostream>
using namespace std;



int checknumber(int a)
{
    if(a == 1 ) return 1;
        else {
            cout<<a<<" ";
            if(a % 2 == 0) return checknumber(a/2);
            else return checknumber(a*3+1);
            }
}
int main()
{
    int a =0;
    cin>>a;
    cout<<checknumber(a);

}


