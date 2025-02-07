#include <iostream>
#include <string>
using namespace std;

class Waterbottle{
	private:
		string company;
		string colour;
	    float capacity;
	    
	public:
	 void setValues(string com,string col,float cap){
	 	company=com;
	 	colour=col;
	 	capacity=cap;
	 } 
	 
	 void waterCapacity(float cap){
	 	float dcap;
	 	cout<<"enter how much water have you drank: ";
	 	cin>>dcap;
	 	if(dcap<=cap){
	 		cap=cap-dcap;
	 		float a=cap%1000;
	 		int b=cap/1000;
	 		
	 		cout<<"the remaining water in bottle is: "<<a<<"litres and "<<b<<"militres"<<endl;
		 }
		 else{
		 	cout<<"you cant drink more water than the capacity!";
		 }
	 }   
};

int main(){
	Waterbottle w1;
	w1.setValues("Safari","Purple",12000); //1200 ml
	w1.waterCapacity(12000);
	return 0;
}
