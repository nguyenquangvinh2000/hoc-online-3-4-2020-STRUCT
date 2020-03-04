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
/*
Bài 1. (10 phút) Viết chương trình nhập vào thông tin danh bạ gồm: Họ tên, Số điện thoại, Email cho 3 người. 
Sau đó in ra màn hình dưới dạng sau: 
1.      Dau Hai Phong       091234567       phong@gmail.com 
2.      Nguyen Duc Dan      093456789       dan@gmail.com
3.      Pham Truong Giang   098765432       giang@gmail.com 
Yêu cầu sử dụng 3 biến kiểu Struct danhba
*/
