#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <MMsystem.h>

char position[10] = {'0','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();

int main(){
    system("color 4f");
    int player = 1, i ,choice;
    char mark; 
    do {
        drawBoard();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, Enter the choice : ",player);
        scanf("%d",&choice);
        mark = (player == 1) ? 'X' : 'O';
        if(choice == 1 && position[1] == '1')
            position[1] = mark;
        else if(choice == 2 && position[2] == '2')
            position[2] = mark;
        else if(choice == 3 && position[3] == '3')
            position[3] = mark;
        else if(choice == 4 && position[4] == '4')
            position[4] = mark;
        else if(choice == 5 && position[5] == '5')
            position[5] = mark;
        else if(choice == 6 && position[6] == '6')
            position[6] = mark;
        else if(choice == 7 && position[7] == '7')
            position[7] = mark;
        else if(choice == 8 && position[8] == '8')
            position[8] = mark;
        else if(choice == 9 && position[9] == '9')
        position[9] = mark;  
        else {
            printf("Invalid!!!");
            player--;
            getch();
        }
        i = checkWin();
        player++;      
    }while(i == -1);
    
    drawBoard();
    if(i==1){
        printf("==>Player %d Won",--player);
    }
    else {
        printf("==>Game draw");
    }
        getch();
        return 0;
}

int checkWin(){
    if(position[1] == position[2] && position[2] == position[3])
        return 1;
    else if (position[4] == position[5] && position[5] == position[6])
        return 1;
    else if(position[7] == position[8] && position[8] == position[9])
        return 1;
    else if(position[1] == position[4] && position[4] == position[7])
        return 1;
    else if(position[2] == position[5] && position[5] == position[8])
        return 1;
    else if(position[3] == position[6] && position[6] == position[9])
        return 1;
    else if(position[1] == position[5] && position[5] == position[9])
        return 1;
    else if(position[3] == position[5] && position[5] == position[7])
        return 1;
    else if(position[1] != '1' && position[2] != '2' && position[3] != '3' && position[4] !='4' && position[5] != '5' && position[6] != '6' && position[7] != '7' && position[8] != '8' && position[9] != '9')
        return 0;
    else 
        return -1;  
}

void drawBoard(){
    system("cls");
    printf("\n\n\t Tic Tac Toe \n\n");
    printf("Player1 (X) - Player2 (O) \n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",position[1],position[2],position[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",position[4],position[5],position[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",position[7],position[8],position[9]);
    printf("     |     |     \n");  
}

