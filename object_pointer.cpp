#include<iostream>
using namespace std;
class volume
{
	int h,b,l;
	public:
		volume()
		{
			cout<<"constructor called "<<endl;
			h=10;
			b=8;
			l=9;
		}
		void vol()
		{
			int a;
			a=l*b*h;
			cout<<"volume= "<<a<<endl;
		}
};
int main()
{
	volume *ptr=new volume;
	ptr->vol();
}
