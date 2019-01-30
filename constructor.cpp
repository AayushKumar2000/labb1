#include<iostream>
#include<string.h>
using namespace std;
class student{
   int age;
   char name[30];
   
   public:
   student() {
   age=0; 
   name[0]='\0';
   }
   
   student(int a,char n[]){
   age=a;
   strcpy(name,n);
   }
   
   void display(){
   cout<<"name: "<<name;
   cout<<"\nage: "<<age;
   }
    
};

int main(){
student s1;
student s2(18,"joe");
s1.display();
cout<<endl;
s2.display();
}
