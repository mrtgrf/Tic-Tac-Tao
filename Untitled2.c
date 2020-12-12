#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void drawBoard(){
	system("cls");
	printf("\n\n\t Tic Tac Toe \n\n");
	printf("Player1 (X) - Player2 (O) \n\n\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("     |     |     \n");	
}

void drawBoard();
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int main(){
	system("color 4f");
	int player=1,i,choice;
	char mark; //X,O;
	do{
			drawBoard();
			player=(player%2)?1:2;
			scanf("%d",&choice);
			mark=(player==1) ? 'X' : 'O';
		if(choice==1 && square[1]=='1')
			square[1] = mark;
		else if(choice==2 && square[2]=='2')
			square[2] = mark;
			else if(choice==3 && square[3]=='3')
			square[3] = mark;
			else if(choice==4 && square[4]=='4')
			square[4] = mark;
			else if(choice==5 && square[5]=='5')
			square[5] = mark;
			else if(choice==6 && square[6]=='6')
			square[6] = mark;
			else if(choice==7 && square[7]=='7')
			square[7] = mark;
			else if(choice==8 && square[8]=='8')
			square[8] = mark;
			else if(choice==9 && square[9]=='9')
			square[9] = mark;
									
	}
	while(i==-1);
	drawBoard();
	if(i==1){
		printf("==>Player %d won",--player);
		
	}
	else {
		printf("==>Game draw");
	}
		getch();
		return 0;
	
}
