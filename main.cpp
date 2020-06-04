#include <ctime>
#include <iostream>
#include<cstdlib>
#include<conio.h>
#include<windows.h>                         //system function
//#include <consoleapi.h>
#pragma comment(lib, "winmm.lib")           //to use PlaySound()
char ch='0';


using namespace std;

void gotoxy(short x, short y)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = { x, y };

    SetConsoleCursorPosition(hStdout, position);
}

int main() {
                   //Audio file in the given path


    while(1){                  //Infinite loop to obtain running time
          if(kbhit())
            ch=getch();

        time_t t = time(0);   // get time now
        struct tm * now = localtime( & t );   //time pointer from predefined time library
        cout<<"\t \t\tAWAAZ - The Voice of Aurora's Technological and Research Institute\n";
        cout<<"\t \t\t------------------------------------------------------------------";
        cout<<"\n\n Date: "<<now->tm_mday<<"/"<<now->tm_mon+1<<"/"<<now->tm_year+1900;
        cout<<"\n Time: "<<now->tm_hour<<":"<<now->tm_min<<":"<<now->tm_sec<<"\n Day : ";
        if((now->tm_wday)==0)
            cout<<"Sunday";
        else if((now->tm_wday)==1)
            cout<<"Monday";
        else if((now->tm_wday)==2)
            cout<<"Tuesday";
        else if((now->tm_wday)==3)
            cout<<"Wednesday";
        else if((now->tm_wday)==4)
            cout<<"Thursday";
        else if((now->tm_wday)==5)
            cout<<"Friday";
        else if((now->tm_wday)==6)
            cout<<"Saturday";
        cout<<"\n\t\t\t\tAny change in the Schedule today?\n\t\t\t\tChoose option to change status\n\t\t\t\t0.No Change\n\t\t\t\t1.Skip Afternoon bells and National Anthem\n\t\t\t\t2.Skip only National Anthem\n\t\t\t\t3.Skip everything for the day";
        cout<<"\n\n\n\t\t\tStatus:\t"<<ch;
        if(ch=='0')
            cout<<".No change for the day";
        else if(ch=='1')
            cout<<".Skipping Afternoon bells and National Anthem today!";
        else if(ch=='2')
            cout<<".Skipping only National Anthem today!";
        else if(ch=='3')
            cout<<".Skipping all Bells and Songs today!";
        else if(ch!='0'||ch!='1'||ch!='2'||ch!='3')
            cout<<".Invalid Choice. Default: no change!";
        if((now->tm_hour)==8 && (now->tm_min)==30 && (now->tm_sec)==0)
           ch=0;
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t      Done by : Rahul Mahadevan";

          // system("cls");              //Clearing output to display running time
             gotoxy(0,0);

    if((now->tm_wday)!=0 && ch!='3')
    {

        if((now->tm_hour)==9 && (now->tm_min)==00 && (now->tm_sec)==00)
        {
            cout<<"RAISE FOR NATIONAL SONG";
            PlaySound("D:\\VandeNew.wav", NULL, SND_FILENAME);   //Audio file in the given path
        }
        if((now->tm_hour)==10 && (now->tm_min)==00 && (now->tm_sec)==00)
        {
            cout<<"FIRST HOUR COMPLETED!";
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
        }
        if((now->tm_hour)==11 && (now->tm_min)==00 && (now->tm_sec)==00)
        {
            cout<<"SECOND HOUR COMPLETED!";
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
        }
        if((now->tm_hour)==12 && (now->tm_min)==00 && (now->tm_sec)==00)
        {
            cout<<"THIRD HOUR COMPLETED!";
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
        }
        if((now->tm_hour)==13 && (now->tm_min)==00 && (now->tm_sec)==00)
        {
            cout<<"FOURTH HOUR COMPLETED AND BREAK FOR LUNCH!";
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
        }
        if((now->tm_hour)==13 && (now->tm_min)==30 && (now->tm_sec)==00)
        {
            cout<<"AFTERNOON SESSION BEGINS WITH FIFTH HOUR!";
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
        }
    if(ch!=1) {
        if((now->tm_hour)==14 && (now->tm_min)==30 && (now->tm_sec)==00)
        {
            cout<<"FIFTH HOUR COMPLETED!";
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
        }
        if((now->tm_hour)==15 && (now->tm_min)==30 && (now->tm_sec)==00)
        {
            cout<<"SIXTH HOUR COMPLETED!";
            PlaySound("D:\\Bell.wav", NULL, SND_FILENAME);
        }
      if(ch!=2){
        if((now->tm_hour)==16 && (now->tm_min)==30 && (now->tm_sec)==00)
        {
            cout<<"RAISE FOR NATIONAL ANTHEM!";
            PlaySound("D:\\Janaganamana.wav", NULL, SND_FILENAME);
        }
      }
    }
    }
        }
}
