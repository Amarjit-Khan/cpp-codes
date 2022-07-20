//Class - getting object as a return from the function

#include<iostream>
using namespace std;
class time
{
private:
    int h, m, s;
public:
    void gettime()
    {
        cout<<"Enter the hour ";
        cin>>h;
        cout<<"Enter the minute ";
        cin>>m;
        cout<<"Enter the second ";
        cin>>s;
    }
    time calc(time x, time y){
    	time z;
        z.s=x.s+y.s;
        z.m=x.m+y.m+z.s/(60);
        z.s=z.s%(60);
        z.h=x.h+y.h+z.m/(60);
        z.m=z.m%(60);
        
        return (z);
    }
    void displ(){
        cout<<h<<":"<<m<<":"<<s;
    }
};

int main()
{
    time t1,t2,t3;
    
    t1.gettime();
    t2.gettime();
    
    t3 = t1.calc(t1, t2);
    cout<<"Time 1 is ";
    t1.displ();
    cout<<endl;
    cout<<"Time 2 is ";
    t2.displ();
    cout<<endl;
    cout<<"Time 3 is ";
    t3.displ();
    return 0;
}

