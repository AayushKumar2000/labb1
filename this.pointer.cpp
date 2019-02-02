#include<iostream>
using namespace std;

class This{
	int a,b;
	public:
		This(int a,int b){
			this->a=a;
			this->b=b;
		}
	void add(){
			cout<<endl<<a+b;
		}
		
		
		void dispaly(){
			cout<<this->a<<","<<this->b;
		}
	
};
int main(){
	This t(2,3);
	t.dispaly();
	t.add();
}
