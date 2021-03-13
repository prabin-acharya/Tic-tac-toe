#include<iostream>
#include<windows.h>
using namespace std;

void drawBoard(char pos[]);
int checkWin(char position[]) ;

int main() {
    
    cout<<" ENTER  1  for : Play with Computer"<<endl;    
    cout<<" ENTER  2  for : Play with a Friend"<<endl;

    int result=0;
    do{
        char array[10]=".........";
        drawBoard(array);
        
        int i=1;
        if(i%2==1)
            cout<<"Player 1 : Enter your cell : "<<endl;
        else
            cout<<"Player 2 : Enter your cell : "<<endl;
        int cell;
        cin>>cell;
        if(i%2==1)
            array[cell-1]='X'; 
        else
            array[cell-1]='O'; 
        
        drawBoard(array);
        if(i>4)
            result=checkWin(array);
        i++;
    }while(result !=1);
    
}
    

void drawBoard(char pos[]) {
    system("cls");
    system("color 4f");
    //char position[9];
    /* 5 spacebar for gap */
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<pos[0]<<"  "<<"|"<<"  "<<pos[1]<<"  "<<"|"<<"  "<<pos[2]<<"  "<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"-----"<<"|"<<"-----"<<"|"<<"-----"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<pos[3]<<"  "<<"|"<<"  "<<pos[4]<<"  "<<"|"<<"  "<<pos[5]<<"  "<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"-----"<<"|"<<"-----"<<"|"<<"-----"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<pos[6]<<"  "<<"|"<<"  "<<pos[7]<<"  "<<"|"<<"  "<<pos[8]<<"  "<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;

}



int checkWin(char pos[]) {      
    if( pos[1]==pos[0]  && pos[1]==pos[2] && pos[1]!='.' )
       return 1;     
    else if( pos[4]==pos[3]  && pos[4]==pos[5] && pos[4]!='.' )
      return 1;
    else if( pos[7]==pos[6]  && pos[7]==pos[8] && pos[7]!='.' )
      return 1;
    else if( pos[3]==pos[0]  && pos[3]==pos[6] && pos[3]!='.' )
      return 1;
    else if( pos[4]==pos[1]  && pos[4]==pos[7] && pos[4]!='.' )
      return 1;
    else if( pos[5]==pos[2]  && pos[5]==pos[8] && pos[5]!='.' )
      return 1;
    else if( pos[4]==pos[0]  && pos[4]==pos[5] && pos[4]!='.' )
      return 1;
    else if( pos[4]==pos[2]  && pos[4]==pos[6] && pos[4]!='.' )
      return 1;
    else
        return 0;
}





