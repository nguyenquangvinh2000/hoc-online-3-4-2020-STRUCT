//a36341-Nguyễn Quang Vinh-5
#include <iostream>
#include <cstring>
using namespace std;
struct ttcn
{
   char  danhba[50];
   char  sdt[11];
   char  email[50];
};
void Nhapdanhba(struct ttcn tepdanhba[],int n); 
void Indanhba(struct ttcn tepdanhba[],int n); 
int main( )
{
    int n;
    cout<<"so nguoi can nhap la:";
    cin>>n;
    cin.ignore();
    struct ttcn tepdanhba[100];
    Nhapdanhba(tepdanhba,n);
    Indanhba(tepdanhba,n);
    return 0;
}
void Nhapdanhba(struct ttcn tepdanhba[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<"Nhap ten:"<<i+1<<":";
    cin.getline(tepdanhba[i].danhba,50);
    cout<<"Nhap sdt:"<<i+1<<":";
    cin.getline(tepdanhba[i].sdt,11);
    cout<<"Nhap email:"<<i+1<<":";
    cin.getline(tepdanhba[i].email,50);
  }
}
void Indanhba(struct ttcn tepdanhba[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<i+1<<"."<<"\t\t"<<tepdanhba[i].danhba<<"\t\t"<<tepdanhba[i].sdt<<"\t\t"<<tepdanhba[i].email<<endl;
  }
}
