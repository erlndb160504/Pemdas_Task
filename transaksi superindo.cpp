#include <iostream>
using namespace std;

int main (){
	int harga, jumlah_barang, total, kode_barang, kembalian, uang_bayar;
	char cust_name [100];
	string barang;
	
	cout <<"KODE BARANG		|NAMA BARANG		|HARGA BARANG" << endl;
	cout <<"1			 Anggur	Merah		 Rp 13.000,00 /kg" << endl;
	cout <<"2			 Anggur	Hijau		 Rp 15.000,00 /kg" << endl;
	cout <<"3			 Jeruk		 	 Rp 12.000,00 /kg" << endl;
	cout <<"4			 Apel			 Rp 15.000,00 /kg" << endl;
	cout <<"5			 Jagung Manis		 Rp 15.000,00 /kg" << endl;
	cout <<"6			 Salak			 Rp 12.000,00 /kg" << endl;
	
	cout << endl;
	cout << "INPUT 7 PADA KODE BARANG UNTUK MENCETAK STRUK" << endl;
	
	cout << endl;
	
	cout << "Nama Customer	: ";
	cin.ignore(0);
	cin.getline(cust_name,100);
	
	cout << endl;
	
	
	do{
		cout <<"Input Kode Barang	: " ;
		cin >> kode_barang;
		switch (kode_barang){
			case 1 :
				barang = "Anggur Merah";
				harga = 13000;
				cout <<"Jumlah Barang		: ";
				
				cin>> jumlah_barang;
				
				total += harga * jumlah_barang;
				cout <<jumlah_barang <<" " << barang;
				cout <<" 		= Rp. " <<total << ",00" << endl;
				cout << endl;
				break;
			case 2 :
				barang = "Anggur Hijau";
				harga = 15000;
				cout <<"Jumlah Barang		: ";
				
				cin>> jumlah_barang;
				
				total += harga * jumlah_barang;
				cout <<jumlah_barang <<" " << barang;
				cout <<" 		= Rp. " <<total << ",00" << endl;	
				cout << endl;
				break;
			case 3 :
				barang = "Jeruk";
				harga = 12000;
				cout <<"Jumlah Barang		: ";
				
				cin>> jumlah_barang;
				
				total += harga * jumlah_barang;
				cout <<jumlah_barang <<" " << barang;
				cout <<" 		= Rp. " <<total << ",00" << endl;	
				cout << endl;
				break;  	
			case 4 :
				barang = "Apel";
				harga = 15000;
				cout <<"Jumlah Barang		: ";
				
				cin>> jumlah_barang;
				
				total += harga * jumlah_barang;
				cout <<jumlah_barang <<" " << barang;
				cout <<" 			= Rp. " <<total << ",00" << endl;
				cout << endl;	
				break;	
			case 5 :
				barang = "Jagung Manis";
				harga = 15000;
				cout <<"Jumlah Barang		: ";
				
				cin>> jumlah_barang;
				
				total += harga * jumlah_barang;
				cout <<jumlah_barang <<" " << barang;
				cout <<" 		= Rp. " <<total << ",00" << endl;
				cout << endl;		
				break;
			case 6 :
				barang = "Salak";
				harga = 15000;
				cout <<"Jumlah Barang		: ";
				
				cin>> jumlah_barang;
				
				total += harga * jumlah_barang;
				cout <<jumlah_barang <<" " << barang;
				cout <<" 		= Rp. " <<total << ",00" << endl;
				cout << endl;	
				break;
			case 7 :
				cout << endl;
				cout << "STRUK BELANJA ANDA" << endl;
				cout << "------------------" << endl;
				cout << endl;
				cout <<"Nama Customer	: " << cust_name << endl;
				cout <<"Total Belanja	: Rp. " <<total<< ",00" << endl;
				cout <<"Uang Bayar	: Rp. ";
				cin >> uang_bayar;
				kembalian = uang_bayar - total;
				cout <<"Kembalian anda  : Rp. " << kembalian <<  ",00" << endl;
				 
				kode_barang = 7;
				cout << endl;
				break;
				
			default :
				cout <<"PRODUK TIDAK DITEMUKAN!" << endl;
				break;
				
		}
			
	} while (kode_barang != 7);
	  
	cout << "Terima Kasih telah berbelanja di Toko Kami ^~^" << endl;
}
