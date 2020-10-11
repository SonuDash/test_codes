#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter ur age"<<endl;
	cin>>age;
	if (age<15)
	cout<<"content not for u kid"<<endl;
	switch(age){
	 case 15:
	 	cout<<"whatsapp"<<endl;
	 	break;
	case 17:
	 	cout<<"facebook"<<endl;
	 	break;
	case 20:
	 	cout<<"instagram"<<endl;
	 	break;
	default:
		cout<<"any social media suits u"<<endl;
		 }
	return 0;	
}
