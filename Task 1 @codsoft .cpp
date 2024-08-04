//number guessing game created by NISHA PATEL #TASK1 @CODESOFT
#include<iostream>
#include<cstdlib>
using namespace std;

class Numberguess  // creats class with name numberguess
{
    int guess;
    int &g=guess;   //use of reference variable g
    public:
    void intro()
    {
      cout<<"hey welcome to my game...."<<endl;
      cout<<"hello friends..I'm NISHA..are you execited to play game ..."<<endl;
      cout<<"so lets go..."<<endl;   
    }
    void logic();  //function declaration in the class
};
 void  Numberguess :: logic()  //function defination is outside of class
  {
      srand(time(0));
      int num;
      num=(rand()%100)+1;
      do
          {
             cout<<"enter your guessing number between (1 to100)::";
             cin>>guess;
             
             if(g>num)
            {
               cout<<"OHHHH...IT'S TOO HIGH!!..Please Try Again.."<<endl;
            }
             else if(g<num)
            {
               cout<<"UMMM...IT'S TOO LOW!!...Please Try Again.."<<endl;
            }
             else 
            {
               cout<<"HEYYY YOU'VE WON ..! ..CONGRATULATIONS..."<<endl;
               cout<<"you have to guess correct number  ::"<<num<<endl;
            }
        }
             while(g!=num);
    }
    
         int main()
       {
             Numberguess num;
             num.intro();
             num.logic();
     
        }