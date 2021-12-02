#include<iostream>
using namespace std;
class personinfo
{
    string name;
    string address;
    string Telephone;
    string Mobile;
    string hof;
  public:
    void set(){
     cout<<endl;
     cout<<"Enter Name: ";
     cin>>name;
     cout<<"Enter Address: ";
     cin>>address;
     cout<<"Enter Telephone Number: ";
     cin>>Telephone;
     cout<<"Enter Mobile Number: ";
     cin>>Mobile;
     cout<<"Enter head of family: ";
     cin>>hof;
    }
    void get()
    {
     cout<<endl;
     cout<<"Name: ";
     cout<<name<<endl;
     cout<<"Address: ";
     cout<<address<<endl;
     cout<<"Telephone: ";
     cout<<Telephone<<endl;
     cout<<"Mobile number: ";
     cout<<Mobile<<endl;
     cout<<"Head of family: ";
     cout<<hof<<endl; 
    }
};
int main()
{
  int i,n;
  cout<<"Enter the number of people:"<<endl;
  cin>>n;
  personinfo arr[n];
  for(i=0;i<n;i++){
    arr[i].set();
  }
  for(i=0;i<n;i++)
     {arr[i].get();}
   
   return 0;
}
