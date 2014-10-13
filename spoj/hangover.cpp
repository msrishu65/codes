#include<iostream>
using namespace std;
int main()
{
    float f;
    cin>>f;
    while(f)
    {
        int c=0;
        float s=0;
        int x=2;
        while(s<f)
        {
            s=(float)s+(float)1/x;
            x++;
            c++;
            //cout<<s<<endl;
        }
        cout<<c<<" card(s)"<<endl;
        cin>>f;
    }
}
