#include<iostream>

using namespace std;

int tambah(int x,int y){
	int hasil;
	
	hasil=x*y;
	cout<<"hasil:"<<hasil<<endl;
	return hasil;
}
int main()
{
	int f,s,hasil;
	cout<<"masukkan gaya :";
	cin>>f;
	cout<<"masukkan jarak :";
	cin>>s;
	
	hasil=tambah(f,s);
	cout<<"hasil :"<<hasil<<endl;
	
	system("pause");
	return 0;
}
