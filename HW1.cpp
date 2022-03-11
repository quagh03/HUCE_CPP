#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	double sr;
	int a, si;
	cin >> sr >> a >> si;
	double salary = sr * 1050000;
	int pc = salary * a / 100;
	int bh = salary * si / 100;
	int b_tax = salary + pc - bh;
	int r_salary;
	if(b_tax <= 4000000){
		r_salary = b_tax;
	} else if(b_tax >= 9000000){
		r_salary = b_tax - (b_tax*10/100);
	} else{
		r_salary = b_tax - (b_tax*5/100);
	}
	cout << "*****" << endl;
	cout << setprecision(11) << "Luong: " << salary << endl;
	cout << setprecision(11) << "Phu cap: " << pc << endl;
	cout << setprecision(11) << "Bao hiem: " << bh << endl;
	cout << setprecision(11) << "Thu nhap truoc thue: " << b_tax << endl;
	cout << setprecision(11) << "Thu nhap thuc su: " << r_salary << endl;
	cout << "*****" << endl;
	return 0;
}
