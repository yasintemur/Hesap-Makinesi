#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int s1,s2;
	char devam,cvp;
	do
	{
	cout << "1.Sayýyý Giriniz=";
	cin >> s1;
	cout << "2.Sayýyý Giriniz=";
	cin >> s2;
	cout << "\nHerhangi bir iþlem seçiniz: + - * /\nCevap:";
	cin >> cvp;
	switch (cvp)
	{
	case '+':
		cout << "Toplamlarý=" << s1 + s2;
		break;
	case '-':
		cout << "Farklarý=" << s1 - s2;
		break;
	case '*':
		cout << "Çarpýmlarý=" << s1 * s2;
		break;
	case '/':
		cout << "Bölümleri=" << s1 - s2;
		break;
	default:
		cout << "Geçerli bir iþlem giriniz.";
		break;
	}
	cout << "\nTekrar Denemek Ýstermisin? E/H\nCevap:";
	cin >> devam;
	}
	while(devam=='e');
	exit(0);
}
