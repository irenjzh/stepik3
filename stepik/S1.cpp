#include <iostream>
using namespace std;
int main() {
	int n,h,m,sec;
	cin >> n;
	h = n/3600;
	m=(n%3600)/60;
	sec = n-(h*3600)-(m*60);
	cout << h%24 << ":" << (m%60)*0,1*10 << ":" << sec%60 << endl;
    return 0;
}