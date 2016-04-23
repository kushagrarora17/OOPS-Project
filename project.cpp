# include <iostream>
# include <math.h>
using namespace std;

//class of player
class player{
	char name[30];
	int current_score;

};

//class for innings
class innings1{
public:
	static int balls;
	int runs;

	float runrate(){
		float x	;	//Runrate will be shown as x
		x = (float(runs)*6)/float(balls);
		return x;
	}

	float overs(){
		float a,b;		//overs will be shown as a.b
		a=balls/6;
		b=balls%6;
		return (a+b*0.1);
	}
}one;

innings1:balls=3;

class innings2:public innings1{
	int runs2chase;
	int ballsleft;
}two;

//innings1::balls=3;
//innings2::balls=7;
int main(){
	
	return 0;
}
