//Class - passing objects as arguement of a function

#include<iostream>
using namespace std;
class time
{
private:
    int h, m, s;
public:
    void gettime()
    {
        cout<<"Enter the hour";
        cin>>h;
        cout<<"Enter the minute";
        cin>>m;
        cout<<"Enter the second";
        cin>>s;
    }
    void calc(time x, time y)
	{
        s=x.s+y.s;
        m=x.m+y.m;
        h=x.h+y.h;
    }
    void displ()
	{
        cout<<h<<":"<<m<<":"<<s;
    }
};

int main()
{
    time t1,t2,t3;
    
    t1.gettime();
    t2.gettime();
    
    t3.calc(t1, t2);
    cout<<"Time 1 is ";
    t1.displ();
    cout<<"Time 2 is ";
    t2.displ();
    cout<<"Time 3 is ";
    t3.displ();
    return 0;
}

