#include<iostream>
#include<math.h>
using namespace std;
class point
{
    double x,y;
public:
    point(double m=0,double n=0){
    x=m;y=n;
    }
    double getx(){return x;}
    double gety(){return y;}
    double distance(point p)
    {return sqrt(pow((x-p.x),2)+pow((y-p.y),2));}
};
class rectangle{
point a,b,c,d;
public:
    rectangle(point p,point q ,point r, point s){
    a=p;b=q;c=r;d=s;
    }
    double area(){

         cout<<"\ndistance of width="<<a.distance(b)<<endl;
         cout<<"\ndistance of height="<<a.distance(c)<<endl;
         double w=a.distance(b)*a.distance(c);
         cout<<"\nArea of rectangle="<<w<<endl;
         return w;
    }
};
int main(){
point p(-2,3),q(2,3),r(-2,-4),s(2,-4);
cout<<"\ndistance between q&s="<<q.distance(s)<<endl;
cout<<"distance between q&p="<<q.distance(p)<<endl;
cout<<"distance between p&r="<<p.distance(r)<<endl;
cout<<"distance between r&s="<<r.distance(s)<<endl;
rectangle ob(p,q,r,s);
ob.area();
return 0;
}