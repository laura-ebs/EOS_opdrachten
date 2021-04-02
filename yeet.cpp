#include<wiringPi.h>
#include<iostream>
#include<vector>
using namespace std;

int main(void){

//set de pinnen
int paars=15;
int groen=16;
int wit=1;
int blauw=10;
int rood=5;
int geel=6;

//setup pinnen
wiringPiSetup();
pinMode(paars,INPUT);
pinMode(groen,INPUT);
pinMode(wit,INPUT);
pinMode(blauw,INPUT);
pinMode(rood,INPUT);
pinMode(geel,INPUT);

//variable voor status
bool purplethen=LOW;
bool greenthen=LOW;
bool whitethen=LOW;
bool bluethen=LOW;
bool redthen=LOW;
bool yellowthen=LOW;

//vector om kleuren in op te slaan
vector<int> kleuren={};

cout<<"druk een knop in";


for (;;){
//lezen input van knop
bool purplenow=digitalRead(paars);
bool greennow=digitalRead(groen);
bool whitenow=digitalRead(wit);
bool bluenow=digitalRead(blauw);
bool rednow=digitalRead(rood);
bool yellownow=digitalRead(geel);

delay(3000);

	if(purplethen != purplenow){
		if(purplenow==HIGH){
			kleuren.push_back(5);
			
		}
	}
	if(greenthen != greennow){
		if(greennow==HIGH){
			kleuren.push_back(1);
		}
	}
	if(whitethen != whitenow){
		if(whitenow==HIGH){
			kleuren.push_back(4);
		}
	}
	if(bluethen != bluenow){
		if (bluenow==HIGH){
			kleuren.push_back(0);
			}
	}
	if(redthen != rednow){
		if(rednow==HIGH){
			kleuren.push_back(2);
		}
	}
	if(yellowthen != yellownow){
		if (yellownow==HIGH){
			kleuren.push_back(3);
		}
	}
	purplethen = purplenow;
	greenthen = greennow;
	whitethen = whitenow;
	bluethen = bluenow;
	redthen = rednow;
	yellowthen = yellownow;
	if(kleuren.size()==1){
		
	 cout<<"De ander speler moet nu uw code raden \n";
	 break;
	}
}


for(unsigned int i = 0; i < kleuren.size(); i++){
	cout<<kleuren[i];
	}
	cout<<"\n";
}
