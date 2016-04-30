# include <iostream>
# include <math.h>
using namespace std;

//class of player
class player{
public:	char name[30];
		int current_score;
		int current_balls;
		player *next;
		player(){
			current_balls=current_score=0;
			cout<<"\nEnter name: ";
			cin>>name;
			in_at++;
		}
	 int in_at;
	 void viewplayer(){
	 	cout<<name<<endl;
	 	cout<<"Balls faced: "<<current_balls<<"\t\tRuns: "<<current_score<<endl;
	 	cout<<"Strike-Rate: "<<(current_balls==0)?0:(current_score*100)/current_balls;
	 }
		
};

player* head=NULL;

//class for innings
class innings1{
public:
//	int balls;
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

class innings2:public innings1{
public:	int runs2chase;
		int ballsleft;
}two;

void create(){
	player *temp,*temp1;
	temp= new (player);
	temp1=head;
	if(head==NULL){
		head=temp;
	}
	else{
		while(temp1->next!=NULL){
			temp1=temp1->next;
		}
		temp1->next = temp;
	}
	temp->next=NULL;
	temp->viewplayer();
}
//innings1::balls=3;
//innings2::balls=7;
int main(){
	//create two players
	create();
	create();
	char res;
	cin<<res;
	switch(res){
		case '.': {
			one.balls++
			break;
		}
		case '1':{		//Single run
			balls++;
			runs+=1;
			swap();
			break;
		}
		case '2':{		//2 runs
			balls++;
			runs+=2;
			break;
		}
		case '4':{		//4 runs
			balls++;
			runs+=4;
			break;
		}
		case '6':{		//6 runs
			balls++;
			runs+=6;
			break;
		}
		case 'w':{		//wide ball
			runs+=1;
			break;
		}
		case 'n':{		//no ball
			runs+=1;
			break;
		}
		case 'b':{		//bowled! out!
			fallwicket();	// bring next player
			balls++;
			break;
		}
	}
	return 0;
}
