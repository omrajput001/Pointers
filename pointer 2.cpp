#include<iostream>
using namespace std;
class demo{
	public:
		void show()
		{
			cout<<"\n hii";
		}
		void show1()
		{
			cout<<"\n hello";
		}
};
int main(){
demo obj;
demo *ptr=&obj;
ptr->show();
ptr->show1();
return 0;
}