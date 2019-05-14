#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include <windows.h>

using namespace std;

struct data1{
	unsigned long int idpasien;
	string nama;
	string umr;
	char jnsklmn;
	string almt;
	string golDarah;
}pasien[999];
int x; //batas
int x1;

struct data2{
	int kode;
	string nama;
	string dokter;
}poli[99];
int y; //batas
int y1;

struct data3{
	int no;
	int tgl;
	int bln;
	int thn;
	unsigned long int id;
	int kode;
	string pasien;
	string poli;
}trans[999];
int z; //batas
int z1;

void input1(){
	cout<<"Masukkan Jumlah Data Pasien	:";
	cin>>x;
	for (int i=0;i<x; i++){
	
		cout<<"Masukkan ID Pasien\t:"; 
		cin>>pasien[i].idpasien;
		cout<<"Masukkan Nama     \t:"; 
		cin>>pasien[i].nama;
		cout<<"Masukkan Umur     \t:";
		cin>>pasien[i].umr;
		cout<<"Masukkan JenisKelamin(L/P)\t:"; 
		cin>>pasien[i].jnsklmn;
		cout<<"Masukkan Alamat\t:"; 
		cin>>pasien[i].almt;
		cout<<"Masukkan Golongan Darah\t:"; 
		cin>>pasien[i].golDarah;
	};
	system ("cls");
	cout<<"Input Selesai Kembali ke Menu Sebelumnya "<<endl;
}

void update1(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan ID Untuk Diubah :";
	cin>>cari;
	found =false;
	int i=0;
	while  ((i<x)&(!found))
	{
	    if (pasien[i].idpasien==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"ID Pasien\t: "<<cari<<endl;
	cout<<"Nama\t: "<<pasien[i].nama<<endl;
	cout<<"Umur\t: "<<pasien[i].umr<<endl;
	cout<<"Jenis Kelamin\t: "<<pasien[i].jnsklmn<<endl;
	cout<<"Alamat\t: "<<pasien[i].almt<<endl;
	cout<<"Golongan Darah\t: "<<pasien[i].golDarah<<endl;
	
	//mengubah data
	cout<<"Masukkan Data yang Baru "<<endl;
	cout<<"Masukkan Nama\t:"; cin>>pasien[i].nama;
	cout<<"Masukkan Umur\t:"; cin>>pasien[i].umr;
	cout<<"Masukkan Jenis Kelamin(L/P)\t:"; cin>>pasien[i].jnsklmn;
	cout<<"Masukkan Alamat\t:"; cin>>pasien[i].almt;
	cout<<"Masukkan Golongan Darah:"; cin>>pasien[i].golDarah;
	cout<<"Data Telah Berhasil diupdate!"<<endl;
	}
	else{
	cout<<"ID Pasien "<<cari<<" TIDAK ADA "<<endl;
	}
}

void delete1(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan ID Yang Ingin Dihapus Datanya :";
	cin>>cari;
	found =false;
	int i=0;
	while ((i<x)&(!found))
	{
	    if (pasien[i].idpasien==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"ID Pasien\t: "<<cari<<endl;
	cout<<"Nama\t: "<<pasien[i].nama<<endl;
	cout<<"Umur\t: "<<pasien[i].umr<<endl;
	cout<<"Jenis Kelamin\t: "<<pasien[i].jnsklmn<<endl;
	cout<<"Alamat\t: "<<pasien[i].almt<<endl;
	cout<<"Golongan Darah\t: "<<pasien[i].golDarah<<endl;
	
		//menghapus data
	pasien[i]=pasien[i+1];
	x=x-1;
	cout<<"Data Telah Berhasil Dihapus!"<<endl;
	}
	else{
	cout<<"ID Pasien "<<cari<<" TIDAK ADA DALAM DATA "<<endl;
	}
}

void add1(){
	cout<<"Masukkan Banyak Data Pasien Yang Ingin ditambahkan	: ";
	cin>>x1;
	x1=x+x1;
	for(int j=x;j<x1;j++){
		cout<<"Masukkan ID Pasien\t:"; cin>>pasien[j].idpasien;
		cout<<"Masukkan Nama\t:"; cin>>pasien[j].nama;
		cout<<"Masukkan Umur\t:"; cin>>pasien[j].umr;		
		cout<<"Masukkan Jenis(L/P)\t:"; cin>>pasien[j].jnsklmn;
		cout<<"Masukkan Alamat \t:"; cin>>pasien[j].almt;
		cout<<"Masukkan Golongan Darah\t:"; cin>>pasien[j].golDarah;
	};
	x=x1;
	system ("cls");
	cout<<"Penambahan Data Berhasil Kembali ke Menu Sebelumnya... "<<endl;
}


void input2(){
	cout<<"Masukkan Jumlah Data Poli Yang Ingin diinput	: ";
	cin>>y;
	for(int i=0;i<y;i++){
		cout<<"Masukkan Kode Poli\t:"; cin>>poli[i].kode;
		cout<<"Masukkan Nama Poli\t:"; cin>>poli[i].nama;
		cout<<"Masukkan Nama Dokter\t:"; cin>>poli[i].dokter;
	};
	system ("cls");
	cout<<"Input Selesai Kembali ke Menu Sebelumnya... "<<endl;
}

void read2(){
	cout<<"			TABEL DATA POLI "<<endl;
	cout<<"=============================================================="<<endl;
	for(int i=0;i<y;i++){
		cout<<"	"<<poli[i].kode<<"	"<<"|"
			<<"	"<<poli[i].nama<<"	"<<"|"
			<<"	"<<poli[i].dokter
			<<endl;
	};
}

void update2(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan Kode Poli Yang Ingin Diubah Datanya :";
	cin>>cari;
	found =false;
	int i=0;
	while ((i<y)&(!found))
	{
	    if (poli[i].kode==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"Kode Poli\t: "<<cari<<endl;
	cout<<"Nama Poli\t: "<<poli[i].nama<<endl;
	cout<<"Nama Dokter\t: "<<poli[i].dokter<<endl<<endl;
	
	//mengubah data
	cout<<"Masukkan Data yang Baru "<<endl;
	cout<<"Masukkan Nama Poli\t:"; cin>>poli[i].nama;
	cout<<"Masukkan Nama Dokter\t:"; cin>>poli[i].dokter;
	cout<<"Data Telah Berhasil diupdate!"<<endl;
	}
	else{
	cout<<"Kode Poli "<<cari<<" TIDAK ADA DALAM DATA "<<endl;
	};
}

void delete2(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan Kode Poli Yang Ingin Dihapus Datanya :";
	cin>>cari;
	found =false;
	int i=0;
	while ((i<y)&(!found))
	{
	    if (poli[i].kode==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"Kode Poli\t: "<<cari<<endl;
	cout<<"Nama Poli\t: "<<poli[i].nama<<endl;
	cout<<"Nama Dokter\t: "<<poli[i].dokter<<endl<<endl;
	
	//menghapus data
	poli[i]=poli[i+1];
	y=y-1;
	cout<<"Data Telah Berhasil Dihapus!"<<endl;
	}
	else{
	cout<<"Kode Poli "<<cari<<" TIDAK ADA DALAM DATA "<<endl;
	};
}

void add2(){
	cout<<"Masukkan Banyak Data Poli Yang Ingin ditambahkan	: ";
	cin>>y1;
	y1=y+y1;
	for(int j=y;j<y1;j++){
		cout<<"Masukkan Data yang Baru "<<endl;
		cout<<"Masukkan Kode Poli\t:"; cin>>poli[j].kode;
		cout<<"Masukkan Nama Poli\t:"; cin>>poli[j].nama;
		cout<<"Masukkan Nama Dokter\t:"; cin>>poli[j].dokter;
		cout<<"Data Telah Berhasil diupdate!"<<endl;
	};
	y=y1;
	system ("cls");
	cout<<"Penambahan Data Berhasil Kembali ke Menu Sebelumnya... "<<endl;
}

void input3(){
	cout<<"Masukkan Jumlah Data Transaksi Yang Ingin diinput	: ";
	cin>>z;
	int i;
	for(i=0;i<z;i++){
		unsigned long int cari,cari1;
		trans[i].no=i;
		cout<<"Masukkan Tanggal Pendaftaran\t:"; cin>>trans[i].tgl;
		cout<<"Masukkan Bulan Pendaftaran\t:"; cin>>trans[i].bln;
		cout<<"Masukkan Tahun Pendaftaran\t:"; cin>>trans[i].thn;
		
		//input id pasien
		cout<<"Masukkan ID Pasien\t:"; cin>>cari;
		//cari dulu
		bool found;
		found =false;
		int j=0;
		while ((j<x)&(!found))
		{
	    	if (pasien[j].idpasien==cari)
	    	found=true;
	    	else
	    	j=j+1;
		}
		if(found){
		cout<<"ID Pasien\t: "<<cari<<endl;
		cout<<"Nama\t: "<<pasien[j].nama<<endl;
		cout<<"Umur\t: "<<pasien[i].umr<<endl;
		cout<<"Jenis Kelamin\t: "<<pasien[i].jnsklmn<<endl;
		cout<<"Alamat\t: "<<pasien[i].almt<<endl;
		cout<<"Golongan Darah\t: "<<pasien[i].golDarah<<endl;
		
		//input id pasien ke struct transaksi
		trans[i].id=pasien[j].idpasien;
		trans[i].pasien=pasien[j].nama;
		}
		else{
		cout<<"ID Pasien "<<cari<<" TIDAK ADA DALAM DATABASE SILAHKAN MELAKUKAN PENDAFTARAN TERLEBIH DAHULU "<<endl;
		trans[i].id=0;
		trans[i].pasien="0";
		system("pause");
		}
		
		//input kode poli
		cout<<"Masukkan Kode Poli\t:"; cin>>cari1;
		//cari dulu
		found =false;
		j=0;
		while ((j<y)&(!found))
		{
	    	if (poli[j].kode==cari1)
	    	found=true;
	    	else
	    	j=j+1;
		}
		if(found){
		cout<<"Kode Poli\t: "<<cari1<<endl;
		cout<<"Nama Poli\t: "<<poli[j].nama<<endl;
		cout<<"Nama Dokter\t: "<<poli[j].dokter<<endl<<endl;
		
		//input kode poli ke struct transaksi
		trans[i].kode=poli[j].kode;
		trans[i].poli=poli[j].nama;
		}
		else{
		cout<<"KODE POLI "<<cari<<" TIDAK ADA DALAM DATABASE "<<endl;
		trans[i].kode=0;
		trans[i].poli="0";
		system("pause");
		}
	};
	cout<<"Input Selesai Kembali ke Menu Sebelumnya... "<<endl;
}

void read3(){
	cout<<"=============================================================="<<endl;
	cout<<"			TABEL DATA TRANSAKSI "<<endl;
	cout<<"=============================================================="<<endl;
	for(int i=0;i<z;i++){
		cout<<trans[i].no<<"	"<<"|"
			<<"	"<<trans[i].tgl<<"/"<<trans[i].bln<<"/"<<trans[i].thn<<"	"<<"|"
			<<"	"<<trans[i].id<<"	"<<"|"
			<<"	"<<trans[i].pasien<<"	"<<"|"
			<<"	"<<trans[i].poli
			<<endl;
	};
}

void update3(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan Nomer Transaksi Yang Ingin Dihapus Datanya :";
	cin>>cari;
	found =false;
	int i=0;
	while ((i<z)&(!found))
	{
	    if (trans[i].no==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"Nomer Transaksi\t: "<<cari<<endl;
	cout<<"Tanggal\t: "<<trans[i].tgl<<"/"<<trans[i].bln<<"/"<<trans[i].thn<<endl;
	cout<<"ID Pasien/t: "<<trans[i].id<<endl;
	cout<<"Nama\t: "<<trans[i].pasien<<endl;
	cout<<"Poliklinik\t: "<<trans[i].poli<<endl<<endl;
	
	//mengupdate data
	cout<<"Masukkan Tanggal Pendaftaran\t:"; cin>>trans[i].tgl;
	cout<<"Masukkan Bulan Pendaftaran\t:"; cin>>trans[i].bln;
	cout<<"Masukkan Tahun Pendaftaran\t:"; cin>>trans[i].thn;
		
	//input id pasien
	cout<<"Masukkan ID Pasien\t:"; cin>>cari;
	//cari lagi
	bool found;
	found =false;
	int j=0;
	while ((j<x)&(!found))
	{
		if (pasien[j].idpasien==cari)
	    	found=true;
	    	else
	    	j=j+1;
	}
		if(found){
			cout<<"ID Pasien\t: "<<cari<<endl;
			cout<<"Nama\t: "<<pasien[j].nama<<endl;
			cout<<"Umur\t: "<<pasien[i].umr<<endl;
			cout<<"Jenis Kelamin\t: "<<pasien[i].jnsklmn<<endl;
			cout<<"Alamat\t: "<<pasien[i].almt<<endl;
			cout<<"Golongan Darah\t: "<<pasien[i].golDarah<<endl;
		
			//input id pasien ke struct transaksi
			trans[i].id=pasien[j].idpasien;
			trans[i].pasien=pasien[j].nama;
			}
		else{
			cout<<"ID Pasien "<<cari<<" TIDAK ADA DALAM DATABASE SILAHKAN MELAKUKAN PENDAFTARAN TERLEBIH DAHULU "<<endl;
			trans[i].id=0;
			trans[i].pasien="0";
			system("pause");
			}
		
	//input kode poli
	int cari1;
	cout<<"Masukkan Kode Poli\t:"; cin>>cari1;
		//cari lagi
		found =false;
		j=0;
	while ((j<y)&(!found))
	{
	    if (poli[j].kode==cari1)
	    	found=true;
	    	else
	    	j=j+1;
	}
	if(found){
		cout<<"Kode Poli\t: "<<cari1<<endl;
		cout<<"Nama Poli\t: "<<poli[j].nama<<endl;
		cout<<"Nama Dokter\t: "<<poli[j].dokter<<endl<<endl;
		
		//input kode poli ke struct transaksi
		trans[i].kode=poli[j].kode;
		trans[i].poli=poli[j].nama;
		}
	else{
		cout<<"KODE POLI "<<cari<<" TIDAK ADA DALAM DATABASE "<<endl;
		trans[i].kode=0;
		trans[i].poli="0";
		system("pause");
		};
	
	cout<<"Data Telah Berhasil Diupdate!"<<endl;
	}
	else{
	cout<<"No. Transaksi "<<cari<<" TIDAK ADA DALAM DATA "<<endl;
	};
}

void delete3(){
	//cari dulu
	bool found;
	unsigned long int cari;
	cout<<"Masukkan Nomer Transaksi Yang Ingin Dihapus Datanya :";
	cin>>cari;
	found =false;
	int i=0;
	while ((i<z)&(!found))
	{
	    if (trans[i].no==cari)
	    found=true;
	    else
	    i=i+1;
	}
	if(found){
	cout<<"Nomer Transaksi\t: "<<cari<<endl;
	cout<<"Tanggal\t: "<<trans[i].tgl<<"/"<<trans[i].bln<<"/"<<trans[i].thn<<endl;
	cout<<"Nama\t: "<<trans[i].pasien<<endl;
	cout<<"Poliklinik\t: "<<trans[i].poli<<endl<<endl;
	
	//menghapus data
	trans[i]=trans[i+1];
	z=z-1;
	cout<<"Data Telah Berhasil Dihapus!"<<endl;
	}
	else{
	cout<<"Nomer Transaksi "<<cari<<" TIDAK ADA DALAM DATA "<<endl;
	};
}

void add3(){
	cout<<"Masukkan Jumlah Data Transaksi	: ";
	cin>>z1;
	z1=z+z1;
	int i;
	for(i=z;i<z1;i++){
		unsigned long int cari,cari1;
		trans[i].no=i+1;
		cout<<"Masukkan Tanggal Pendaftaran\t:"; cin>>trans[i].tgl;
		cout<<"Masukkan Bulan Pendaftaran\t:"; cin>>trans[i].bln;
		cout<<"Masukkan Tahun Pendaftaran\t:"; cin>>trans[i].thn;
		
		//input id pasien
		cout<<"Masukkan ID Pasien\t:"; cin>>cari;
		//cari dulu
		bool found;
		found =false;
		int j=0;
		while ((j<x)&(!found))
		{
	    	if (pasien[j].idpasien==cari)
	    	found=true;
	    	else
	    	j=j+1;
		}
		if(found){
		cout<<"ID Pasien\t: "<<cari<<endl;
		cout<<"Nama\t: "<<pasien[j].nama<<endl;
		cout<<"Umur\t: "<<pasien[i].umr<<endl;
		cout<<"Jenis Kelamin\t: "<<pasien[i].jnsklmn<<endl;
		cout<<"Alamat\t: "<<pasien[i].almt<<endl;
		cout<<"Golongan Darah\t: "<<pasien[i].golDarah<<endl;
		
		//input id pasien ke struct transaksi
		trans[i].id=pasien[j].idpasien;
		trans[i].pasien=pasien[j].nama;
		}
		
		else{
		cout<<"ID Pasien "<<cari<<" TIDAK ADA DI DATABASE SILAHKAN MELAKUKAN PENDAFTARAN LEBIH DAHULU "<<endl;
		trans[i].id=0;
		trans[i].pasien="0";
		system("pause");
		}
		
		//input kode poli
		cout<<"Masukkan Kode Poli\t:"; cin>>cari1;
		//cari dulu
		found =false;
		j=0;
		while ((j<y)&(!found))
		{
	    	if (poli[j].kode==cari1)
	    	found=true;
	    	else
	    	j=j+1;
		}
		if(found){
		cout<<"Kode Poli\t: "<<cari1<<endl;
		cout<<"Nama Poli\t: "<<poli[j].nama<<endl;
		cout<<"Nama Dokter\t: "<<poli[j].dokter<<endl<<endl;
		
		//input kode poli ke struct transaksi
		trans[i].kode=poli[j].kode;
		trans[i].poli=poli[j].nama;
		}
		else{
		cout<<"KODE POLI "<<cari<<" TIDAK ADA DALAM DATABASE "<<endl;
		trans[i].kode=0;
		trans[i].poli="0";
		system("pause");
		}
	};
	z=z1;
	cout<<"Input Selesai Kembali ke Menu Sebelumnya... "<<endl;;
}

int menu1(){
	int pilih=0;
    do {system ("cls");
		cout<<" Data Pasien "<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Input Data Pasien"<<endl;
	    cout<<"2. Menampilkan Data"<<endl;
	    cout<<"3. Update Data"<<endl;
	    cout<<"4. Menghapus Data"<<endl;
	    cout<<"5. Menambahkan Data"<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{input1();break;}
         case 3:{update1();break;}
         case 4:{delete1();break;}
         case 5:{add1();break;}
         case 0:{cout<<"Kembali ke Menu Utama  "<<endl;break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih !=0);
}

int menu2(){
	int pilih=0;
    do {system ("cls");
    	cout<<"==============================="<<endl;
		cout<<" Data Poli "<<endl;
		cout<<"==============================="<<endl<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Input Data Poli"<<endl;
	    cout<<"2. Menampilkan Data Poli"<<endl;
	    cout<<"3. Update Data Poli"<<endl;
	    cout<<"4. Menghapus Data Poli"<<endl;
	    cout<<"5. Menambahkan Data Poli Baru"<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{input2();break;}
         case 2:{read2();break;}
         case 3:{update2();break;}
         case 4:{delete2();break;}
         case 5:{add2();break;}
         case 0:{cout<<"Kembali ke Menu Utama...  "<<endl;break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih !=0);
}

int menu3(){
	int pilih=0;
	int c=0;
    do {system ("cls");
		cout<<" Data Transaksi "<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Input Data Transaksi"<<endl;
	    cout<<"2. Menampilkan Data"<<endl;
	    cout<<"3. Update Data"<<endl;
	    cout<<"4. Menghapus Data"<<endl;
	    cout<<"5. Menambahkan Data Poli "<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{input3();break;}
         case 2:{read3();break;}
         case 3:{update3();break;}
         case 4:{delete3();break;}
         case 5:{add3();break;}
         case 0:{cout<<"Kembali ke Menu Utama...  "<<endl;break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih !=0);
}

int main()
{
	
	int pilih=0;
	int d=0;
    do {system ("cls");
		cout<<" Pendaftaran Pasien Puskesmas "<<endl;
       	cout<<"Daftar Menu : "<<endl;
	    cout<<"1. Data Pasien"<<endl;
	    cout<<"2. Data Poli"<<endl;
	    cout<<"3. Transaksi Pendaftaran"<<endl;
	    cout<<"0. Keluar"<<endl;
    cout<<"Masukkan Pilihan Anda : ";cin>>pilih;
    switch(pilih)
        {case 1:{menu1();break;}
         case 2:{menu2();break;}
         case 3:{menu3();break;}
         case 0:{cout<<"Program Selesai"<<endl;break;}
         default:cout<<"Pilihan Yang Masukkan Salah "<<endl;}
    system("pause");}
    while(pilih!=0);
}
