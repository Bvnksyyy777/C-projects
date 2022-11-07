#include <iostream>
#include<vector>
#include <cmath>

using namespace std;
int spin(vector<string> Rotations){
	int spin=0;
	for(int i=0;i<Rotations.size();i++){
		if(Rotations[i]=="right" || Rotations[i]=="Right"){
			spin+=90;
		}
		else if(Rotations[i]=="left"|| Rotations[i]=="Left"){
			spin-=90;
		}
	}
	return abs(spin)/360;
}

int main(){
	vector<string>Rotations;
	int n;
	string ans;
	cout<<"How many rotations do you want to do? "; cin>>n;
	for(int i=0;i<n;i++){
		start:
		cout<<"Please enter in which direction you want to spin (left or right): ";cin>>ans;
		if(ans=="right" || ans=="Right" || ans=="left" || ans=="Left"){
			Rotations.push_back(ans);
		}
		else{
			cout<<"Please enter correct data!"<<endl<<endl;
			goto start;
		}
	}
	cout<<"You have spinned "<<spin(Rotations)<<" times";
}

