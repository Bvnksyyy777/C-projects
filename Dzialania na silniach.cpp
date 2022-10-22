#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,wybor,wynikN,wynikM;
	long int silnia=1;
	dzialania:
	cout<<"Jakie dzialanie chcesz wykonac?"<<endl;
	cout<<"1-dodawanie"<<endl;
	cout<<"2-odejmowanie"<<endl;
	cout<<"3-mnozenie"<<endl;
	cout<<"4-dzielenie"<<endl;
	cout<<"5-wyjscie"<<endl;
	cout<<"Twoj wybor: "; cin>>wybor;
	switch(wybor){
		case 1:
		{
			cout<<"Podaj podstawe pierwszej silni: "; cin>>n;
			cout<<"Podaj podstawe drugiej silni: ";cin>>m;
			for(int i=1;i<=n;i++){
				if(i!=n){
					silnia=silnia*i;
				}
				else{
					wynikN=silnia*n;
				}
			}
			silnia=1;
			for(int i=1;i<=m;i++){
			if(i!=m){
					silnia=silnia*i;
				}
				else{
					wynikM=silnia*m;
				}
			}
			cout<<"Suma silni wynosi: "<<wynikM+wynikN;
			break;
		}
		case 2:
			{
				cout<<"Podaj podstawe pierwszej silni: "; cin>>n;
				cout<<"Podaj podstawe drugiej silni: ";cin>>m;
				for(int i=1;i<=n;i++){
					if(i!=n){
						silnia=silnia*i;
					}
					else{
						wynikN=silnia*n;
					}
				}
				silnia=1;
				for(int i=1;i<=m;i++){
					if(i!=m){
						silnia=silnia*i;
					}
					else{
						wynikM=silnia*m;
					}
				}
				cout<<"Roznica silni wynosi: "<<wynikN-wynikM;
				break;
			}
		case 3:{
				cout<<"Podaj podstawe pierwszej silni: "; cin>>n;
				cout<<"Podaj podstawe drugiej silni: ";cin>>m;
				for(int i=1;i<=n;i++){
					if(i!=n){
						silnia=silnia*i;
					}
					else{
						wynikN=silnia*n;
					}
				}
				silnia=1;
				for(int i=1;i<=m;i++){
					if(i!=m){
						silnia=silnia*i;
					}
					else{
						wynikM=silnia*m;
					}
				}
				cout<<"Iloczyn silni wynosi: "<<wynikN*wynikM;
			break;
		}
		case 4:{
				cout<<"Podaj podstawe pierwszej silni: "; cin>>n;
				cout<<"Podaj podstawe drugiej silni: ";cin>>m;
				for(int i=1;i<=n;i++){
					if(i!=n){
						silnia=silnia*i;
					}
					else{
						wynikN=silnia*n;
					}
				}
				silnia=1;
				for(int i=1;i<=m;i++){
					if(i!=m){
						silnia=silnia*i;
					}
					else{
						wynikM=silnia*m;
					}
				}
				cout<<"Iloraz silni wynosi: "<<wynikN/wynikM;
			break;
		}
		case 5:{
			exit(0);
			break;
		}
		default:
			cout<<endl;
			cout<<"Nie ma takiej opcji, wybierz ponownie"<<endl<<endl;
			goto dzialania;
	}
}
