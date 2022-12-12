#include <iostream>
#include <conio.h>
#include <ctime>
#include <time.h>
using namespace std;


void kategori_konser(){	

	cout << "DAY 1 DESEMBERFEST" << endl;
	cout << "******************" << endl;
	cout << "ENHYPEN: POLAROID LOVE WITHIN YOU AND I" << endl;
	cout << "Band	= ENHYPEN" << endl;
	cout << "Lokasi	= Jakarta International Stadium (JIS)" << endl;
	cout << "Waktu	= DAY 1 [JUMAT, 18 DESEMBER 2022, 19.00 - 21.00 WIB ]" << endl;
	cout << "Durasi  = 2 jam" << endl;
	
	cout << endl;
	
	cout << "DAY 2 DESEMBERFEST" << endl;
	cout << "******************" << endl;
	cout << "NCT DREAM: BEATBOX WE GOT IT" << endl;
	cout << "Band	= NCT DREAM" << endl;
	cout << "Lokasi	= Jakarta International Stadium (JIS)" << endl;
	cout << "Waktu	= DAY 2 [SABTU, 19 DESEMBER 2022, 20.00 - 22.00 WIB ]" << endl;
	cout << "Durasi  = 2 jam" << endl;
	
	cout << endl;	
	
	cout << "DAY 3 DESEMBERFEST" << endl;
	cout << "******************" << endl;
	cout << "DAY6: SING A BIT OF HARMONY" << endl;
	cout << "Band	= DAY6" << endl;
	cout << "Lokasi	= Jakarta International Stadium (JIS)" << endl;
	cout << "Waktu	= DAY 3 [MINGGU, 20 DESEMBER 2022, 20.00 - 22.00 WIB ]" << endl;
	cout << "Durasi  = 2 jam" << endl;
	
}

void transaksi_konser (){
	long long int pembelian,npembelian, no_id, no_telp, jumlah_tiket, event_name, transaksi;
	long long int harga, kembalian, total_bayar, jumlah_bayar, total_harga,diskon;
	long long int harga1, harga2, harga3;
	char nama [100];
	string jenis_tiket, judul_konser, jadwal_konser;
	string jenis_tiket1, jenis_tiket2, jenis_tiket3;
	char* njenis_tiket;
	char* njenis_tiket1, *njenis_tiket2, *njenis_tiket3;
	
	time_t a =time(0);
	char* b =ctime(&a);
	
	transaksi:
	cout <<"__________________________________" << endl;
	cout <<"| JENIS		| 	HARGA     |" <<endl;        
	cout <<"| ________________________________" <<endl;
	cout <<"| Tribun [T]	| RP 1.000.000,00 |" <<endl;
	cout <<"| VIP [V]	| RP 1.500.000,00 |" <<endl;
	cout <<"| VVIP [X]	| RP 2.000.000,00 |" <<endl;
	cout <<"__________________________________" <<endl;
	cout << endl;

	cout <<"**********************************" << endl;
	cout <<"NAMA KONSER =" << endl;
	cout <<"1. ENHYPEN: POLAROID LOVE WITHIN YOU AND I " << endl;
	cout <<"2. NCT DREAM: BEATBOX WE GOT IT" << endl;
	cout <<"3. DAY6: SING A BIT OF HARMONY" << endl;
	cout <<"**********************************" << endl;
	cout <<"PEMBELIAN : "<< endl;
	cout <<"1. 1day Package" << endl;
	cout <<"2. Full Package" << endl;
	cout << endl;
	cout <<"UNTUK PEMBELIAN FULL PACKAGE AKAN MENDAPATKAN DISKON 10%! :)"<< endl;
	cout << endl;
	cout <<"Transaksi anda? [1/2]" << endl;
	cin >> pembelian;
	
	system ("cls");
	if (pembelian == 1){
			cout <<"WHAT DAY YOU WANT TO ATTEND?" ;
			cin >> npembelian;
			system ("cls");
			switch (npembelian){
				case 1:
					cout <<"DAY 1 " << endl;
					
					judul_konser = "ENHYPEN: POLAROID LOVE WITHIN YOU AND I"; 
					jadwal_konser = "JUMAT, 18 DESEMBER 2022, 19.00 - 21.00 WIB";
					
					cout <<"Nama Event	: " << judul_konser << endl;
					cout <<"Nama		: ";
					cin.ignore();
					cin.getline(nama,100);
					cout <<"NO.ID		: ";
					cin >> no_id;
					cout <<"No.HP 		: " ;
					cin >> no_telp;
					cout << endl;
					cout <<"PILIH JENIS TIKET [T/V/X]: ";
					cin >> jenis_tiket [100];
				
						if (jenis_tiket == "T"|| jenis_tiket == "t")
							{
							njenis_tiket = "Tribun" ;
							harga = 1000000;
							}
						else if (jenis_tiket == "V" || jenis_tiket == "v")
							{
							njenis_tiket = "VIP";
							harga = 1500000;
							}
						else if (jenis_tiket == "X"|| jenis_tiket == "x")
							{
							njenis_tiket = "VVIP";
							harga = 2000000;
							} 
						else {
							cout <<"TIDAK DITEMUKAN!" << endl;
							}
						
					cout <<"Jumlah Tiket 	: ";
					cin >> jumlah_tiket;
					break;
				
			case 2:
					cout <<"DAY 2 " << endl;
					
					judul_konser = "NCT DREAM: BEATBOX WE GOT IT";
					jadwal_konser = "JUMAT, 19 DESEMBER 2022, 20.00 - 22.00 WIB";
					
					cout <<"Nama Event	: " << judul_konser << endl;
					cout <<"Nama		: ";
					cin.ignore();
					cin.getline(nama,100);
					cout <<"NO.ID		: ";
					cin >> no_id;
					cout <<"No.HP 		: ";
					cin >> no_telp;
					cout << endl;
					cout <<"PILIH JENIS TIKET [T/V/X]: ";
					cin >> jenis_tiket;
				
						if (jenis_tiket == "T"|| jenis_tiket == "t")
							{
							njenis_tiket = "Tribun";
							harga = 1000000;
							}
						else if (jenis_tiket == "V" || jenis_tiket == "v")
							{
							njenis_tiket = "VIP";
							harga = 1500000;
							}
						else if (jenis_tiket == "X"|| jenis_tiket == "x")
							{
							njenis_tiket = "VVIP";
							harga = 2000000;
							} 
						else {
							cout <<"TIDAK DITEMUKAN!" << endl;
							}
						
					cout <<"Jumlah Tiket : ";
					cin >> jumlah_tiket;
					break;
			case 3:
					cout <<"DAY 3 " << endl;
					
					judul_konser = "DAY6: SING A BIT OF HARMONY"; 
					jadwal_konser = "JUMAT, 20 DESEMBER 2022, 20.00 - 22.00 WIB";
					
					cout <<"Nama Event	: " << judul_konser << endl;
					cout <<"Nama		: ";
					cin.ignore();
					cin.getline(nama,100);
					cout <<"NO.ID		: ";
					cin >> no_id;
					cout <<"No.HP 		: " ;
					cin >> no_telp;
					cout << endl;
					cout <<"PILIH JENIS TIKET [T/V/X]: " ;
					cin >> jenis_tiket;
				
						if (jenis_tiket == "T"|| jenis_tiket == "t")
							{
							njenis_tiket = "Tribun";
							harga = 1000000;
							}
						else if (jenis_tiket == "V" || jenis_tiket == "v")
							{
							njenis_tiket = "VIP";
							harga = 1500000;
							}
						else if (jenis_tiket == "X"|| jenis_tiket == "x")
							{
							njenis_tiket = "VVIP";
							harga = 2000000;
							} 
						else {
							cout <<"TIDAK DITEMUKAN!" << endl;
							}
						
					cout <<"Jumlah Tiket : ";
					cin >> jumlah_tiket;
					break;	
					}
			system ("color 0F");
			system ("cls");
			cout << "\t\t\t---------------------\t\t\t" << endl;
			cout << "\t\t\t*DETAIL PESANAN ANDA*\t\t\t" << endl;
			cout << "\t\t\t---------------------\t\t\t" << endl;
			cout << "\t\tDESEMBERFEST: 3DAYS K-POP WITH US" << endl;
			cout << endl;
			cout << "**********************************************************" << endl;
			cout << endl;
			
			cout << "Nama Konser		: "<< judul_konser << endl;
			cout << "Jadwal Konser		: "<< jadwal_konser << endl;
			cout << "NAMA	  		: "<< nama << endl;
			cout << "No. ID			: "<< no_id << endl;
			cout << "No. HP   		: "<< no_telp << endl;
			cout << "Jenis Tiket		: "<< njenis_tiket << endl;
			cout << "Jumlah Tiket		: "<< jumlah_tiket << endl;
			cout << "___________________________________________________________" << endl;
			
			total_bayar = harga*jumlah_tiket;
			
			cout << endl;
			cout << "Total Harga		: Rp " << total_bayar <<",00" << endl;
			cout << "Jumlah Uang anda 	: Rp ";
			cin >> jumlah_bayar;
			
			kembalian = jumlah_bayar - total_bayar;
			
			cout << "Kembalian		: Rp " << kembalian <<",00" << endl;
			cout << "Waktu Pembelian		: ";
			cout << b << endl;
			cout << "SILAHKAN AMBIL KEMBALIAN ANDA" << endl;
			cout << "THANK YOU AND ENJOY THE EVENT! ^_^" << endl;
			cout << endl;
	}
	
	else if (pembelian == 2){
			cout <<"FULL PACKAGE!" << endl;
			judul_konser = "DESEMBERFEST: 3DAYS K-POP WITH US (FULL PACKAGE)"; 
			cout <<"Nama Event	: " << judul_konser << endl;
			cout <<"Nama		: ";
			cin.ignore();
			cin.getline(nama,100);
			cout <<"NO.ID		: ";
			cin >> no_id;
			cout <<"No.HP 		: " ;
			cin >> no_telp;
			cout << endl;
			cout << "PILIH JENIS TIKET DAY 1[T/V/X]: " ;
			cin >> jenis_tiket1;
		
				if (jenis_tiket1 == "T"|| jenis_tiket1 == "t")
					{
					njenis_tiket1 = "Tribun";
					harga1 = 1000000;
					}
				else if (jenis_tiket1 == "V" || jenis_tiket1 == "v")
					{
					njenis_tiket1 = "VIP";
					harga = 1500000;
					}
				else if (jenis_tiket1 == "X"|| jenis_tiket1 == "x")
					{
					njenis_tiket1 = "VVIP";
					harga1 = 2000000;
					} 
				else {
					cout <<"TIDAK DITEMUKAN!" << endl;
				}
				
			cout <<"PILIH JENIS TIKET DAY 2[T/V/X]: " ;
			cin >> jenis_tiket2;
		
				if (jenis_tiket2 == "T"|| jenis_tiket2 == "t")
					{
					njenis_tiket2 = "Tribun";
					harga2 = 1000000;
					}
				else if (jenis_tiket2 == "V" || jenis_tiket2 == "v")
					{
					njenis_tiket2 = "VIP";
					harga2 = 1500000;
					}
				else if (jenis_tiket2 == "X"|| jenis_tiket2 == "x")
					{
					njenis_tiket2 = "VVIP";
					harga2 = 2000000;
					} 
				else {
					cout <<"TIDAK DITEMUKAN!" << endl;
				}
			
			cout <<"PILIH JENIS TIKET DAY 3[T/V/X]: " ;
			cin >> jenis_tiket3;
		
				if (jenis_tiket3 == "T"|| jenis_tiket3 == "t")
					{
					njenis_tiket3 = "Tribun";
					harga3 = 1000000;
					}
				else if (jenis_tiket3 == "V" || jenis_tiket3 == "v")
					{
					njenis_tiket3 = "VIP";
					harga3 = 1500000;
					}
				else if (jenis_tiket3 == "X"|| jenis_tiket3 == "x")
					{
					njenis_tiket3 = "VVIP";
					harga3 = 2000000;
					} 
				else {
					cout <<"TIDAK DITEMUKAN!" << endl;
				}
			cout <<"Jumlah Tiket : ";
			cin >> jumlah_tiket;	
		
		system ("color 0F");	
		system ("cls");
			cout << "\t\t\t---------------------\t\t\t" << endl;
			cout << "\t\t\t*DETAIL PESANAN ANDA*\t\t\t" << endl;
			cout << "\t\t\t---------------------\t\t\t" << endl;
			cout << "\t\tDESEMBERFEST: 3DAYS K-POP WITH US" << endl;
			cout << endl;
			cout << "**********************************************************" << endl;
			cout << endl;
			
			cout << "Nama Konser		: "<< judul_konser << endl;
			cout << "NAMA	  		: "<< nama << endl;
			cout << "No.ID			: "<< no_id << endl;
			cout << "No.HP   		: "<< no_telp << endl;
			cout << "Jenis Tiket Day 1	: "<< njenis_tiket1 << endl;
			cout << "Jenis Tiket Day 2	: "<< njenis_tiket2 << endl;
			cout << "Jenis Tiket Day 3	: "<< njenis_tiket3 << endl;
			cout << "Jumlah Tiket		: "<< jumlah_tiket << endl;
			cout << "___________________________________________________________" << endl;
			
			harga = harga1+harga2+harga3;
			total_harga = harga*jumlah_tiket;
			diskon = total_harga*15/100;
			total_bayar = total_harga-diskon;
			
			cout << endl;
			cout << "Total Harga		: Rp " << total_harga <<",00" << endl;
			cout << "Diskon			: Rp " << diskon <<",00" << endl;
			cout << "Total Bayar		: Rp " << total_bayar << ",00" << endl;
			cout << "Jumlah Uang anda 	: Rp ";
			cin >> jumlah_bayar;
			
			kembalian = jumlah_bayar - total_bayar;
			
			cout << "Kembalian		: Rp " << kembalian << ",00" <<endl;
			cout << endl;
			cout << "Waktu Pembelian		: ";
			cout << b << endl;
			cout << "SILAHKAN AMBIL KEMBALIAN ANDA!" << endl;
			cout << "THANK YOU AND ENJOY THE EVENT! ^_^" << endl;
			cout << endl;
	
	}
			
		
	
}
int main()
{
	int opsi, kategori, transaksi;
	string kembali;
	
	system ("color 0E");
	menu:
	cout <<				"\t*********************************" << endl;
	cout <<				"\t*DESEMBERFEST:3DAYS K-POP WITH US*" << endl;
	cout <<				"\t*********************************" << endl;
	cout << endl;
	cout << "TEKAN ANGKA 1 UNTUK MELIHAT DETAIL KONSER, TEKAN ANGKA 2 UNTUK MELAKUKAN TRANSAKSI!" <<endl;
	cout << "------------------------------------------------------------------------------------" << endl;
	cout << endl;
	
	cout << "1. KATEGORI DAN DETAIL KONSER"<<endl;
	cout << "2. TRANSAKSI TIKET"<<endl;
	
	cout << "CHOOSE WHAT YOU WANT [1/2] = ";
	cin >> opsi;
	
	if (opsi == 1)
		{
			system ("CLS");
			kategori_konser();
			cout << endl;
			cout << "INGIN KEMBALI KE MENU UTAMA? [Y/T]";
			cin >> kembali;
	
			if (kembali == "y" || kembali =="Y")
			{
				system ("CLS");
				goto menu;
			}
			else if (kembali == "t" || kembali =="T")
				system ("CLS");
				exit (0);
			}
	else if (opsi == 2)
		{
			system ("CLS");
			transaksi_konser (); 
			cout << "INGIN MELANJUTKAN TRANSAKSI?[Y/T]";
			cin >> kembali;
	
			if (kembali == "y" || kembali =="Y")
			{
				system ("CLS");
				goto menu;
			}
			else if (kembali == "t" || kembali =="T")
				system ("CLS");
				exit (0);
			}
	else {
		cout <<"PILIHAN YANG ANDA MASUKKAN TIDAK TERSEDIA!"<< endl;
	}
	
	
}

