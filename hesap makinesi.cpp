#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int s1,s2;
	char devam,cvp;
	do
	{
	cout << "1.Say�y� Giriniz=";
	cin >> s1;
	cout << "2.Say�y� Giriniz=";
	cin >> s2;
	cout << "\nHerhangi bir i�lem se�iniz: + - * /\nCevap:";
	cin >> cvp;
	switch (cvp)
	{
	case '+':
		cout << "Toplamlar�=" << s1 + s2;
		break;
	case '-':
		cout << "Farklar�=" << s1 - s2;
		break;
	case '*':
		cout << "�arp�mlar�=" << s1 * s2;
		break;
	case '/':
		cout << "B�l�mleri=" << s1 - s2;
		break;
	default:
		cout << "Ge�erli bir i�lem giriniz.";
		break;
	}
	cout << "\nTekrar Denemek �stermisin? E/H\nCevap:";
	cin >> devam;
	}
	while(devam=='e');
	exit(0);
}
