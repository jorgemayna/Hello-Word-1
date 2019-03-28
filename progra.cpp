#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	string 	palabra;
	set<char> gg;
	int cont=0;
	cout<<"Escribe una palabra: ";
	cin>> palabra;
	for(int i=0;i<palabra.length();i++){
		char le=palabra[i];
		if (gg.count(le)!=0){	
		for(int j=i;j<palabra.length();j++){
			if(le==palabra[j]){
				cont++;
				gg.insert(le);	
			}
		}
		cout<<le<<" : "<<cont<<endl;
		cont=0;
		}
		

	}
	return 0;
}

