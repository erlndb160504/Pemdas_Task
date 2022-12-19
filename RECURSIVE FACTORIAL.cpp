#include <iostream>
using namespace std;

int faktorialRecursive (int num)
{
	if (num == 0){
		return 1;
	} 
	else {
		return num * faktorialRecursive (num - 1);
	}
	
}

int deretRecursive (int num)
{
	if (num == 1){
		cout << num << endl;
		return num;
	}
	else {
		cout << num << " x ";
		return num * deretRecursive (num -1);
	}
}

int main ()
{
	int bilangan;
	
	cout <<"Input bilangan (!) : ";
	cin >> bilangan;
	
	if (bilangan < 0){
		cout <<"Faktorial bilangan negatif tidak terdefinisikan :(" << endl;
	}
	else if (bilangan == 0 || bilangan == 1){
		cout << bilangan << "! = " << faktorialRecursive (bilangan);
	}
	else {
		cout << bilangan << "! = ";
		deretRecursive (bilangan);
		cout << "   = " << faktorialRecursive (bilangan);
	}
	
	
}
