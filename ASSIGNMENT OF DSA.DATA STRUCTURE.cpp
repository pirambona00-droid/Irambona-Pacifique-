#include<iostream>
#include<vector>
using namespace std;

int main(){
int chasenNumber=7;
int userguesses;

vector<int>guesses;
while (userguesses!= chasenNumber){
	
cout<<"enter number:"<<endl;
cin>>userguesses;
guesses.push_back(userguesses);
if (userguesses>chasenNumber){
cout<<"too high"<<endl;
{
else if(userguesses<chasenNumber){
cout<<"too low";
{
else
}
cout<<"correct"<<endl;
}
cout<<"your guesses:";
for(int i=0;i<guesses.size();i++){
	cout<<guesses[i]<<"";
}
cout<<endl;
return 0;
}






 
