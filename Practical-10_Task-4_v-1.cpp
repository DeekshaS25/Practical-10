#include<iostream>
using namespace std;

class abc {
  private:
    int a;
   
  public:
  abc(int a){
     this->a=a;
   }
    friend void operator<(abc &obj,abc &obj1);
};
void operator<(abc &obj,abc &obj1)
{
  if(obj.a<obj1.a)
    cout<<"true"<<endl;
  else
     cout<<"false"<<endl;
}
int main()
{
  abc obj(56);
  abc obj1(5);
  obj<obj1;
}
