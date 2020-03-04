/******************************************************************************
Bài 3 Mảng Struct với File
- Viết hàm nhập n quyển sách và ghi vào file sach.txt với cấu trúc như sau:

sach.txt
2 
Ngon ngu Lap trinh C++
Pham Van At
Lap trinh
1225
Toi thay hoa vang tren co xanh
Nguyen Nhat Anh
Van hoc
2222

- Viết hàm đọc từ file sach.txt và in ra màn hình
- VIết hàm đoc từ file sach.txt vào mảng struct Books QuyenSach[100]
- Viết hàm In từ mảng QuyenSach ra màn hình
*******************************************************************************/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstring>
 
using namespace std;
 
struct Books
{
   char  tieude[50];
   char  tacgia[50];
   char  chude[100];
   int   book_id;
};

int NhapQuyensach(int n);//Nhập n quyển sách vào file sach.txt 
int InQuyensach(); //Đọc n quyển sách và in ra màn hình 
int ArrQuyensach(struct Books QuyenSach[], int &n);//Lấy ra số lượng của mảng và lưu vào mảng QuyenSach[]
void InArrQuyensach(struct Books QuyenSach[], int n);//In mảng gồm n Quyển sách
int main( )
{
    struct Books QuyenSach[100];
    int n;
    
    NhapQuyensach(2);
    //InQuyensach();
    //ArrQuyensach(QuyenSach,n);

    return 0;
}
int NhapQuyensach(int n)
{
    struct Books QuyenSach;
    fstream f; 
    
    f.open("sach.txt",ios::out);
    if(f.fail())
    {
        cout<<"Mở file bị lỗi!";
        return -1;
    }
    //Lưu số n vào đầu file 
    f<<n<<endl; 
    
    //Nhập từng quyền sách và ghi vào file luôn
    for(int i=0;i<n;i++)
    {
       cout<<"Nhap tieu de quyen sach thứ:"<<i+1<<":";
       cin.getline(QuyenSach.tieude,50);
       cout<<"Nhap tac gia quyen sach thứ:"<<i+1<<":";
       cin.getline(QuyenSach.tacgia,50);
       cout<<"Nhap chu de quyen sach thứ:"<<i+1<<":";
       cin.getline(QuyenSach.chude,100);
       cout<<"Nhap ma quyen sach thứ:"<<i+1<<":";
       cin>>QuyenSach.book_id;
       cin.ignore();
       //Ghi vào file
       f<<QuyenSach.tieude<<endl;
       f<<QuyenSach.tacgia<<endl;
       f<<QuyenSach.chude<<endl;
       f<<QuyenSach.book_id<<endl;
    }
    
    f.close();
    return 0;
}
//Đọc từ file sach.txt và in ra màn hình
int InQuyensach()
{
    struct Books QuyenSach;
    fstream f; 
    char temp[100];
    int n;
    
    f.open("sach.txt",ios::in);
    if(f.fail())
    {
        cout<<"Mở file bị lỗi!";
        return -1;
    }
    //Lấy số lượng n ngay đầu file 
    f>>n; 
    f.getline(temp,100);
    
    for(int i=0;i<n;i++)
    {
        //Đọc từ file ra QuyenSach
        f.getline(QuyenSach.tieude,50);
        f.getline(QuyenSach.tacgia,50);
        f.getline(QuyenSach.chude,100);
        f>>QuyenSach.book_id;
        f.getline(temp,100);
        //In từ QuyenSach ra màn hình 
        cout<<QuyenSach.book_id<<"\t"<<QuyenSach.tieude<<"\t\t"<<QuyenSach.tacgia<<QuyenSach.chude<<endl;
        //cin.get();//Đợi ấn Enter để tiếp tục
    }
    f.close();
}
int ArrQuyensach(struct Books QuyenSach[], int &n)
{
    fstream f; 
    char temp[100];

    f.open("sach.txt",ios::in);
    if(f.fail())
    {
        cout<<"Mở file bị lỗi!";
        return -1;
    }
    //Lấy số lượng n ngay đầu file 
    f>>n; 
    f.getline(temp,100);
    
    for(int i=0;i<n;i++)
    {
        //Đọc từ file ra QuyenSach
        f.getline(QuyenSach[i].tieude,50);
        f.getline(QuyenSach[i].tacgia,50);
        f.getline(QuyenSach[i].chude,100);
        f>>QuyenSach[i].book_id;
        f.getline(temp,100);
    }
    f.close();
}
void InArrQuyensach(struct Books QuyenSach[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<QuyenSach[i].book_id<<"\t"<<QuyenSach[i].tieude<<"\t\t"<<QuyenSach[i].tacgia<<QuyenSach[i].chude<<endl;
    }
}
/*
Bài 3. (15-20 phút) Viết chương trình cho phép người dùng nhập vào n người vào file danhba.txt
Sau đó đọc từ file danhba.txt và in màn hình và Đọc từ file danhba.txt và lưu vào mảng 
Yêu cầu: 
- Viết hàm NhapDanhba
- Viết hàm InDanhba
- Viết hàm ArrDanhba
- Viết hàm In từ mảng QuyenSach ra màn hình 
*/
