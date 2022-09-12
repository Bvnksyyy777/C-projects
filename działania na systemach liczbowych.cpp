#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<string>
using namespace std;
string zamien(int liczba,int system)
{
	string wyjscie;
	string str_tmp;
	char tablica[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while(liczba)
	{
		str_tmp+=tablica[liczba%system];
		liczba/=system;
	}
	for(int i=str_tmp.size()-1;i>=0;i--)
		wyjscie+=str_tmp[i];
	return wyjscie;
}
int konwersja(string a, string b, int system, int dzialanie){
	int p_a = 1,p_b=1, wynik_a = 0,wynik_b=0, x_a,x_b;
	for (int i = a.length()-1; i >= 0; i--)
	{
		if (a[i] >= '0' && a[i] <= '9') 
			x_a = a[i]-'0';
		else
			x_a = a[i] - 55; 
		wynik_a += x_a*p_a; 
		p_a *= system; 
	}
	for (int i = b.length()-1; i >= 0; i--)
	{
		if (b[i] >= '0' && b[i] <= '9') 
			x_b = b[i]-'0';
		else
			x_b = b[i] - 55; 
		wynik_b += x_b*p_b; 
		p_b *= system; 
	}
	if(dzialanie==1){
		return wynik_a+wynik_b;
	}
	else if(dzialanie==2){
		return wynik_a-wynik_b;
	}
	else if(dzialanie==3){
		return wynik_a*wynik_b;
	}
	else{
		return wynik_a/wynik_b;
	}
}
int main(){
	int dzialanie,wynik;
	start:
	cout<<"1 - dodawanie "<<endl<<"2 - odejmowanie"<<endl<<"3 - mnozenie"<<endl<<"4 - dzielenie"<<endl;
	cout<<"Podaj jakie dzialanie chcesz wykonac: ";
	cin>>dzialanie;
	if(dzialanie==1){
		char a[100],b[100];
		cout<<"Podaj w jakim systemie bedziesz chcial/a dodawac (2-16): ";
		int system;
		cin>>system;
		cout<<"Podaj 1 liczbe: ";cin>>a;
		cout<<"Podaj 2 liczbe: ";cin>>b;
		wynik=konwersja(a,b,system,dzialanie);
		cout<<"Wynik dodawania liczb "<<a<<" i "<<b<<" wynosi "<<zamien(wynik,system)<<" w systemie ("<<system<<") a w systemie dziesietnym ("<<wynik<<")";
	}
	else if(dzialanie==2){
		char a[100],b[100];
		cout<<"Podaj w jakim systemie bedziesz chcial/a odejmowac (2-16): ";
		int system;
		cin>>system;
		cout<<"Podaj 1 liczbe: ";cin>>a;
		cout<<"Podaj 2 liczbe: ";cin>>b;
		wynik=konwersja(a,b,system,dzialanie);
		cout<<"Wynik odejmowania liczb "<<a<<" i "<<b<<" wynosi "<<zamien(wynik,system)<<" w systemie ("<<system<<") a w systemie dziesietnym ("<<wynik<<")";
	}
	else if(dzialanie==3){
		char a[100],b[100];
		cout<<"Podaj w jakim systemie bedziesz chcial/a mnozyc (2-16): ";
		int system;
		cin>>system;
		cout<<"Podaj 1 liczbe: ";cin>>a;
		cout<<"Podaj 2 liczbe: ";cin>>b;
		wynik=konwersja(a,b,system,dzialanie);
		cout<<"Wynik mnozenia liczb "<<a<<" i "<<b<<" wynosi "<<zamien(wynik,system)<<" w systemie ("<<system<<") a w systemie dziesietnym ("<<wynik<<")";
	}
	else if(dzialanie==4){
		char a[100],b[100];
		cout<<"Podaj w jakim systemie bedziesz chcial/a dzielic (2-16): ";
		int system;
		cin>>system;
		cout<<"Podaj 1 liczbe: ";cin>>a;
		cout<<"Podaj 2 liczbe: ";cin>>b;
		wynik=konwersja(a,b,system,dzialanie);
		cout<<"Wynik dzielenia liczb "<<a<<" i "<<b<<" wynosi "<<zamien(wynik,system)<<" w systemie ("<<system<<") a w systemie dziesietnym ("<<wynik<<")";
	}
	else{
		cout<<"Brak takiej opcji!";
		goto start;
	}
}
