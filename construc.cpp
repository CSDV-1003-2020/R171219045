#include <iostream>
using namespace std;

class test
{
    
     int x,y;
     
     public :
   test()
     {
          x=0;
          y=0;
          cout<<"Default contructor"<<endl;
     }
     test(int a,int b)
    {
         int c=a+b;
         cout<<"Sum ="<<c<<endl;
     }
};
int main()
{
  test  ob2;
   int x,y;
   cin>>x>>y;
  // ob2(x,y);
   
   test ob3(3,4);
   test ob4=test(x,y);
   return 0;
}
