#include<iostream>

using namespace std;

void tambah(int x,int y){
	int hasil;
	
	hasil=x*y;
	cout<<"hasil :"<<hasil<<endl;
}
int main()
{
	int f,s;
	
	cout<<"masukkan gaya :";
	cin>>f;
	cout<<"masukkan jarak :";
	cin>>s;
	tambah(f,s);
	
	system ("pause");
	return 0;
	
}
