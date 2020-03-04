//a36341 nguyễn quang vinh 
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct danhba
{
	char name[50];
	char phonenumber[20];
	char email[30];
};
int nhapdanhba(int n); // nhap so nguoi vao danh ba
int indanhba();
int arrdanhba(struct danhba nguoi[],int n);
void inarrdanhba(struct danhba nguoi[],int n);
int main()
{
	struct danhba nguoi[100];
	int n;
	nhapdanhba(n);
	return 0;
}
int nhapdanhba(int n)
{
	struct danhba nguoi;
	fstream f;
	f.open("danhba.txt",ios::out);
	if(f.fail())
	{
		cout<<"file bị lỗi";
		return -1;
	}
	//lưu n vào đầu file
	f<<n<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<"nhap ten nguoi thu:"<<i+1<<":";
		cin.getline(nguoi.name,50);
		cout<<"nhap so dien thoai nguoi thu:"<<i+1<<":";
		cin.getline(nguoi.phonenumber,20);
		cout<<"nhap email nguoi thu:"<<i+1<<":";
		cin.getline(nguoi.email,30);
		cin.ignore();
		//ghi vao file
		f<<nguoi.name<<endl;
		f<<nguoi.phonenumber<<endl;
		f<<nguoi.email<<endl;
	}
	f.close();
	return 0;
}
//doc tu danhba.txt in ra man hinh
int indanhba()
{
	struct danhba nguoi;
	fstream f;
	char temp[100];
	int n;
	f.open("danhba.txt".ios::in)
	if(f.fail()){
		cout<<"file bị lỗi";
		return -1;
	}
	f>>n;
	for(int i=0;i<n;i++)
	{
		//doc tu file ra quyen sach
		
		f.getline(nguoi.name,50);
		f.getline(nguoi.phonenumber,20);
		f.getline(nguoi.email,30);
	}

}
