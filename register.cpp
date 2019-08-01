#include <iostream>
#include <string>
using namespace std;
int main(){
	char menu;
	string name,name2;
	int password,password2;
	cout<<"/////////////Menu//////////"<<endl;
	cout<<"1.Register"<<endl;
	cout<<"2.Login"<<endl;
	cout<<"Q.Exit Program"<<endl;
	do{
		cout<<"Enter Menu : ";
		cin>>menu;
		if(menu=='1'){
			cout<<"********Register**********"<<endl;
			cout<<"input Username : ";
			cin>>name;
			cout<<"input password : ";
			cin>>password;
	}
		else if (menu=='2'){
			cout<<"***********Log in***********"<<endl;

			cout<<"input Username : ";
			cin>>name2;
			cout<<"input password : ";
			cin>>password2;
			if (name==name2&&password==password2){
    cout<<"Username or Password correct ^_^"<<endl;
}
else {
    cout<< "!!!!!Username or Password incorrect Please try again"<<endl;
}

}

}

	while(menu!='Q');

		cout<<"Exit Program....";

		return 0;
}

