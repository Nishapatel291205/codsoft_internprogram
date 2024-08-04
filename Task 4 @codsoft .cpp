//TICTACTOY GAME #task4 @codsoft 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printboard(vector<vector<char>>& board)
{
      for(int i=0;i<3;++i)
      {
         for(int j=0;j<3;++j)
         {
             cout<<board[i][j];
            if(j < 2) cout << "|";
         }
             cout<< endl;
            if(i < 2) cout << "-----------" << endl;
    
      }
}
bool checkwinner(vector<vector<char>>& board,char player)
{
    for(int i=0;i<3;++i)
    {
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player )
        return true;
         if(board[0][i]==player && board[1][i]==player && board[2][i]==player )
        return true;
    }
     if(board[0][0]==player && board[1][1]==player && board[2][2]==player )
        return true;
         if(board[0][2]==player && board[1][1]==player && board[2][0]==player )
        return true;
        return false;
}
bool isFull(vector<vector<char>>& board)
{
     for(int i=0;i<3;++i)
     {
          for(int j=0;j<3;++j)
          {
              if (board[i][j]==' ')return false;
          }
     }
     return true;
}
int main()
{
    cout<<"===================================="<<endl;
    cout<<"WELCOME TO TIC TAC TOY GAME"<<endl;
    vector<vector<char>> board(3,vector<char>(3,' '));
    char player[2]={'x','0'};
    int currentplayer=0;
    while (true){
        printboard(board);
        int row,col;
        
        cout << "player " << player[currentplayer] << ", enter your move (row column):";

        cin>>row>>col;
        if(row<0 || row>2 || col<0 || col>2 ||board[row][col]!=' ')
        {
            cout<<"INVALID MOVE TRY AGAIN"<<endl;
            continue;
        }
        board[row][col]=player[currentplayer];
        if(checkwinner(board,player[currentplayer]))
        {
            printboard(board);
            cout<<"player"<<player[currentplayer]<<"is win the game"<<endl;
            break;
        }
        else if (isFull(board))
        {
            printboard(board);
            cout<<"it's draw game:"<<endl;
            break;
        }
        currentplayer=(currentplayer+1)%2;
    }
    char playagain;
    cout<<"do you want play again?(y/n):";
    cin>>playagain;
   if(playagain == 'y' || playagain == 'Y')
   {
    main();
   }
    return 0;
}