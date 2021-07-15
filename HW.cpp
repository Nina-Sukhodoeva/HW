
#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int gcd(int a, int b)
{
    if (a<b)
    swap(a,b);
    if (b==0)
    return a;
    else if (a%b==0)
    return b;
    else return gcd(b,a%b);
}
int roPollard(int n)
{
    int d,y,i=0,k=2;
    vector <int> x;
    x.push_back(1);
    y=1;
    while(i>=0)
    {
        i=i+1;
        x.push_back((x.at(i-1)*x.at(i-1)+1)%n);
        d=gcd(abs(y-x.at(i)),n);
        if (d!=1&&d!=n)
        {cout<<"Iteration count:"<<i<<"\nFactor:";return d;}
        if (i==k)
        {y=x.at(i);k=2*k;}
    }

}




int main()
{
    cout<<roPollard(8051);
    return 0;
}
