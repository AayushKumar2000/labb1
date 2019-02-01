#include<iostream>
using namespace std;

class This{
	int a,b;
	public:
		This(int a,int b){
			this->a=a;
			this->b=b;
		}
		
		void dispaly(){
			cout<<this->a<<","<<this->b;
		}
	
};

