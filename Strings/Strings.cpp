#include <iostream>
#include <string>
using namespace std;

int main() 
{	
    string a,b;
    cin>>a;
    cin>>b;
    int len_a,len_b;
    len_a=a.size();
    len_b=b.size();
    cout<<len_a<<" "<<len_b<<"\n";
    string c=a+b;
    cout<<c<<"\n";
    char t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<a<<" "<<b;
    return 0;
}
