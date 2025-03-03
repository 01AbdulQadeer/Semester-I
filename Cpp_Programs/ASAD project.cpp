#include<iostream>
#include<cstdlib>  // Include this header for system("cls")
#include<unistd.h>

using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row, column;
bool draw = false;

void display_board() {
    system("cls");
    // ... (your existing display_board function)
    system("cls");
     	cout<<"\n\t  __________________________________ \n";
     	cout<<"\n\t |Tic     Tac       Toe     Game    |\n";
		cout<<"\n\t |__________________________________|\n";
		cout<<"     ************************************ \n";
		cout<<"\n\t __________________________________\n";
		cout<<"\n\t|      Player 1 [X]                |\n";
		cout<<"\n\t|__________________________________|\n";
		cout<<"\n\t **********************************\n";
		cout<<"\n\t|      Player 2 [X]                |\n";
		cout<<"\n\t ********************************** \n";
	cout<<"\n\t\t\t     |     |     \n";
        cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"   \n";
		cout<<"\t\t_____|_____|_____\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"   \n";
		cout<<"\t\t_____|_____|_____\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"   \n";
		cout<<"\t\t     |     |     \n";
}


void player_turn() {
    // ... (your existing player_turn function)


	int choice;
	
	if(turn=='X')
	{
		cout<<"\n\t Player 1 [X] :";
	}
	if(turn=='O')
	{
		cout<<"\n\t Player 2 [O] :";
	}
	cin>>choice;
	
	switch(choice)
	{
		case 1:row=0; column=0;break;
        case 2:row=0; column=1;break;
		case 3:row=0; column=2;break;
		case 4:row=1; column=0;break;
		case 5:row=1; column=1;break;
		case 6:row=1; column=2;break;
		case 7:row=2; column=0;break;
		case 8:row=2; column=1;break;
		case 9:row=2; column=2;break;
		default:cout<<"invalid choice "<<endl;break;	
	}
	if(turn=='X'&& board [row][column]!='X'&& board [row][column]!='O')
	{
		board[row][column]='X';
		turn='O';
	}
   else if(turn=='O'&& board [row][column]!='X'&& board [row][column]!='O')
	{
		board[row][column]='O';
		turn='X';
	}
	else
	{
		cout<<"Box Is Filled Try Next Number ";
	}
	//calling function into player turn ;
	  player_turn();	  
	  display_board();
	  
}



bool gameover() {
    // ... (your existing gameover function)
    	for(int i=0;i<3;i++)
	{
	 if(board[i][0]==board[i][1] && board[i][0]==board[i][2] ||board[0][i]==board[1][i] && board[0][i]==board[2][i])
	 {
	 	return false;
	 }
	 if(board[0][0]==board[1][1] && board[0][0]==board[2][2] ||board[0][2]==board[1][1] && board[0][2]==board[2][0])
	 {
	 	return false;
	 }
    }
	 
	for(int i=0;i<3;i++)
	 
	for(int j=0;j<3;j++)
	
	if(board[i][j]!='X' && board[i][j]!='O')
	{
	return true;
	}
    
		draw=true;
		 
		return false;
		 
	 

}



void start() {
    display_board();
    player_turn();
    gameover();
}

void playAgain(bool& replay) {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    replay = (choice == 'y' || choice == 'Y');
}

void shuru() {
    bool replay = true;
    
    while (replay) {
        while (gameover()) {
            start();
        }
        
        if (turn == 'X' && !draw) {
            cout << "Player 1 [X] Won The Game!" << endl;
        } else if (turn == 'O' && !draw) {
            cout << "Player 2 [O] Won The Game!" << endl;
        } else {
            cout << "Game Withdraw!" << endl;
        }

        playAgain(replay);
    }
}

int main() {
    shuru();
    return 0;
}

