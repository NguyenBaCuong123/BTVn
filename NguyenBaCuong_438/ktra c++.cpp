#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

struct Thuoc{
	char Loai[20];
	char HSD[20];
	char TP[20];
	int Ma;
	float DG;

};

void Nhap(Thuoc t[], int &n){
	cout<<"\nNhap So Luong Thuoc : ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<"\nThong Tin Thuoc Thu "<<i+1;
		cin.ignore();
	cout<<"\nNhap Ma Thuoc : ";
		cin>>t[i].Ma;
		cin.ignore();
	cout<<"\nNhap Loai Thuoc : ";
		cin.getline(t[i].Loai,20);	
	cout<<"\nNhap HSD : ";
		cin.getline(t[i].HSD,20);
	cout<<"\nNhap Thanh Phan : ";
		cin.getline(t[i].TP,20);
	cout<<"\nNhap Don Gia : ";
		cin>>t[i].DG;
	}
}

void Xuat(Thuoc t[], int n){
	for(int i=0; i<n; i++){
		cout<<setw(30)<<left<<t[i].Ma
			<<setw(30)<<left<<t[i].Loai
			<<setw(30)<<left<<t[i].HSD
			<<setw(30)<<left<<t[i].TP
			<<setw(30)<<left<<t[i].DG<<endl;
			 }
		 }
		 
void TieuDe(){
	cout<<endl;
	cout<<setw(30)<<left<<"Ma Thuoc"
		<<setw(30)<<left<<"Loai Thuoc"
		<<setw(30)<<left<<"HSD"
		<<setw(30)<<left<<"Thanh Phan"
		<<setw(30)<<left<<"Don Gia"<<endl;
}

void MaThuoc(Thuoc t[], int n , int m,int dem){
	cout<<"\nNhap Ma Thuoc Muon In : ";
			cin>>m;
			cout<<endl;
	for(int i=0; i<n; i++){
		if(t[20].Ma==m){
		TieuDe();
		Xuat(t,n);
		dem++;
		}
	}
	if(dem==0)
		cout<<"\nKo Co Ma Nao Trung.";
}

void Tp(Thuoc t[], int n){
	for(int i=0; i<n; i++){
		if(t[20].TP=="Paracetamol"){
			TieuDe();
		Xuat(t,n);
		}
		}
		}


void Dem(Thuoc t[], int n, int dem1){	 
	for(int i=0; i<n; i++){
		if(t[20].DG==500000)
		dem1++;
		}
		if(dem1==0)
		cout<<"\nKo Co Don Gia = 500.000";
		}
		
void DonGia(Thuoc t[], int n){
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
		if(t[20].DG>200000)
			swap(t[i].DG,t[j].DG);
			}
			}
		}
menu(){
	cout<<endl;
	cout<<"\n0.Thoat";
	cout<<"\n1.Nhap thong tin";
	cout<<"\n2.In danh sach cac thuoc da nhap dang bang.";
	cout<"\n3.In ra thuoc co ma nhap tu ban phim";
	cout<<"\n4.Tim danh sach cac thuoc co thanh phan Paracetamol";
	cout<<"\n5.Dem so luong thuoc co don gia 500.000";
	cout<<"\n6.In danh sach cac thuoc co don gia >200.000 theo thu tu tang dan";
	}
			 
int main(){
	system("color B");
	Thuoc t[1000];
	int n,m,dem=0,dem1=0;
	
	int chon =0;
	do
{
	menu();
	cout<<endl;
	cout << "\nMoi nhap chuc nang muon thuc hien :";
	cin>> chon;
	switch (chon)
	{
		case 0:{
		cout <<"\nBan da thoat khoi chuong trinh !"<< endl;
			exit(1);
		}
		case 1:{
			
				Nhap(t,n); 
				cout<< "\nDa Nhap Thong Tin Thanh Cong."<<endl;break;
		}
	
		case 2:{
			if(n !=0){
				TieuDe();
				Xuat(t,n);break;
			
			}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}
		}
		
		case 3:{
			if(n !=0){
				MaThuoc(t,n,m,dem);break;
			}
			else{
				cout<<"\nThong Tin Rong !!!";break;
			}
		}
		
		case 4:{
			if(n !=0){
				cout<<"\nThuoc Co Thanh Phan Paracetamol "<<endl;
				Tp(t,n);break;
			}
			else{
				cout<<"\nThong Tin Rong !!!";break;
				}
		}
		case 5:{
			if(n !=0){
				cout<<"\nSo Luong thuoc Co Don Gia = 500.000 : "<<endl;
				
				Dem(t,n,dem1);break;
			}
			else{
				cout<<"\nThong Tin Rong !!!";break;
				}
		}
	
		case 6:{
			if(n !=0){
				cout<<"\nSo Luong thuoc Co Don Gia > 200.000 : "<<endl;
				
				DonGia(t,n);
				TieuDe();
				Xuat(t,n);break;
			}
			else{
				cout<<"\nThong Tin Rong !!!";break;
				}
		}
			
	} } while (n !=0);
	return 0;
	}




	
