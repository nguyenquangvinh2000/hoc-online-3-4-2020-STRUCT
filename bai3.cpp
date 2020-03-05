#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct contacts
{
    char name[50];
    char phonenumber[20];
    char email[30];
};
int nhapdanhba(int n);
int indanhba();
int arrdanhba(struct contacts list[],int n);
void inarrdanhba(struct contacts list[],int n);
int main()
{
    struct contacts list[100];
    int n;
    cout<<"nhap so nguoi:";
    cin>>n;
    cin.ignore();
    nhapdanhba(n);
    indanhba();
    arrdanhba(list,n);
    inarrdanhba(list,n);
    return 0;

}
//ham nhap danh ba
int nhapdanhba(int n)
{
    struct contacts list;
    fstream f;
    f.open("danhba.txt",ios::out);
    if(f.fail()){
        cout<<"file bị lỗi";
        return -1;
    }
    f<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<"nhap ten nguoi thu:"<<i+1<<":";
        cin.getline(list.name,50);
        cout<<"nhap so dien thoai nguoi thu:"<<i+1<<":";
        cin.getline(list.phonenumber,20);
        cout<<"nhap email nguoi thu"<<i+1<<":";
        cin.getline(list.email,30);

        //nhap vao file 
        f<<list.name<<endl;
        f<<list.phonenumber<<endl;
        f<<list.email<<endl;
    }
    f.close();
    return 0;
}
//ham in danh ba
int indanhba()
{
    struct contacts list;
    fstream f;
    char temp[100];
    int n;
    f.open("danhba.txt",ios::in);
    if(f.fail()){
        cout<<"file bị lỗi";
        return -1;
    }
    f>>n;
    f.getline(temp,100);
    for(int i=0;i<n;i++)
    {
        f.getline(list.name,50);
        f.getline(list.phonenumber,20);
        f.getline(list.email,30);
        cout<<i+1<<"."<<"\t"<<list.name<<"\t\t"<<list.phonenumber<<"\t\t"<<list.email<<endl;
    }
    f.close();
    return 0;
}
//ham in mang danhba
int arrdanhba(struct contacts list[],int n)
{
    fstream f;
    char temp[100];
    f.open("danhba.txt",ios::in);
    if(f.fail()){
        cout<<"file bi lỗi";
        return -1;
    }
    f>>n;
    f.getline(temp,100);
    for(int i=0;i<n;i++)
    {
        f.getline(list[i].name,50);
        f.getline(list[i].phonenumber,20);
        f.getline(list[i].email,30);
    }
    f.close();
    return 0;
}
void inarrdanhba(struct contacts list[],int n)
{
    for(int i=0;i<n;i++){
        cout<<i+1<<"."<<"\t"<<list[i].name<<"\t\t"<<list[i].phonenumber<<"\t\t"<<list[i].email<<endl;
    }
}

