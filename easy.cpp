#include<iostream>

using namespace std;

//Main function
int main(){
	int n; //number of people
	cin>>n;
	int ages[n]; //ages of n peoples
	for(int i=0;i<n;i++){
		cin>>ages[i];	
	}
	int res[10]={0}; //array to store the frequency of each age limit
	for(int i=0;i<n;i++){
		if(ages[i]>=1 && ages[i]<=10)
			res[0]++;
		else if(ages[i]>=11 && ages[i]<=20)
			res[1]++;
		else if(ages[i]>=21 && ages[i]<=30)
			res[2]++;	
		else if(ages[i]>=31 && ages[i]<=40)
			res[3]++;	
		else if(ages[i]>=41 && ages[i]<=50)
			res[4]++;	
		else if(ages[i]>=51 && ages[i]<=60)
			res[5]++;	
		else if(ages[i]>=61 && ages[i]<=70)
			res[6]++;	
		else if(ages[i]>=71 && ages[i]<=80)
			res[7]++;	
		else if(ages[i]>=81 && ages[i]<=90)
			res[8]++;	
		else if(ages[i]>=91 && ages[i]<=100)
			res[9]++;	
	}
	cout<<"Age Group"<<"		"<<"Total number of people"<<endl;
	int min=1;
	int max=10;
	for(int i=0;i<10;i++){
		cout<<min<<"-"<<max<<"			"<<res[i]<<endl;
		min+=10;
		max+=10;
	}
}
