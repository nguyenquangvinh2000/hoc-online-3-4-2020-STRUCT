//a36341-Nguyễn Quang Vinh-Version 1.0
#include <iostream>
using namespace std;
struct danhba
{
   char hoten[30];
   char phonenumber[20];
   char email[30];
};
int main()
{
  struct danhba nguoi1;
  struct danhba nguoi2;
  struct danhba nguoi3;
  //nhap danh ba:
  cout<<"ho ten nguoi thu nhat: ";
  cin.getline(nguoi1.hoten,30);
  cout<<"dien thoai nguoi thu nhat: ";
  cin.getline(nguoi1.phonenumber,20);
  cout<<"email nguoi thu nhat: ";
  cin.getline(nguoi1.email,30);
  cout<<"ho ten nguoi thu 2: ";
  cin.getline(nguoi2.hoten,30);
  cout<<"dien thoai nguoi thu 2: ";cout
  cin.getline(nguoi2.phonenumber,11);
  cout<<"email nguoi thu 2: ";
  cin.getline(nguoi2.email,50);
  cout<<"ho ten nguoi thu 3: ";
  cin.getline(nguoi3.hoten,50);
  cout<<"dien thoai nguoi thu 3: ";
  cin.getline(nguoi3.phonenumber,11);
  cout<<"email nguoi thu 3: ";
  cin.getline(nguoi3.email,50);
  cout<<"1. "<<nguoi1.hoten <<"\t\t"<<nguoi1.phonenumber<<"\t\t"<<nguoi1.email<<endl;
  cout<<"2. "<<nguoi2.hoten <<"\t\t"<<nguoi2.phonenumber<<"\t\t"<<nguoi2.email<<endl;
  cout<<"3. "<<nguoi3.hoten <<"\t\t"<<nguoi3.phonenumber<<"\t\t"<<nguoi3.email<<endl;  
  return 0;
}
