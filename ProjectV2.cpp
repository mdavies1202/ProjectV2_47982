/* 
 * File:   main.cpp
 * Author: Michael Davies
 * Created on October 23, 2013
 * Purpose: Project 2
 */

//Libraries
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

using namespace std;

//Dragon battle
void intro();
void dragonf();

//Farseer Dice game
void call();
void one();
void two();
void three();
void four();
void five();
void six();
void call();

//Viewing the map
void printMaze();
void runMaze(int, int);

//Constants for maze array 
int col = 1;
int row = 2;
const int ROWMAX = 11;
const int COLMAX = 16;
char maze[ROWMAX][COLMAX] =
{
{'O','O','O','O','O','O','O','O','O','O','O','O',' O','O','O','O'},
{'O','>',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','O'},
{'O','O','O','O','O','O','O','O','O','O',' ','O','O','O',' ','O'},
{'O','<',' ',' ',' ',' ',' ',' ',' ','O',' ','O',' ','O',' ','O'},
{'O','O','O','O','O','O','O','O',' ','O','O','O',' ','O',' ','O'},
{'O',' ',' ',' ',' ',' ',' ','O',' ',' ',' ',' ',' ','O',' ','O'},
{'O','O','O','O','O','O','O','O',' ','O','O','O','O','O',' ','O'},
{'O',' ',' ',' ','O',' ',' ',' ',' ','O',' ',' ',' ',' ',' ','O'},
{'O',' ',' ',' ',' ',' ',' ',' ','O','O','O','O',' ','O','O','O'},
{'O',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','O'},
{'O','O','O','O','O','O','O','O','O','O','O','O','O','O','O','O'}
};


int main()
{
    //Declare variables
    char choice;

    
       do{ 
        do{
        cout<<"__________________________________________________________\n";
        cout<<" Loading The Adventures of Sir Knight...\n"
            <<"__________________________________________________________\n";
        Sleep(1000);
        cout<<"__________________________________________________________\n";
        cout<<" Welcome to the Adventures of Sir Knight!\n"
            <<" He lived in the country of Awetopia.\n"
            <<" Sir knight was once a glorious warrior.\n"
            <<" He had slain many beasts and could get all the babes.\n"
            <<" But there was only one babe he truly wanted.\n"
            <<" She was the hottest one of them all.\n"
            <<" He had not known this yet but according to legend,\n"
            <<" she was a princess locked away in the tower of badness.\n"
            <<" His only option would be to slay the dragon and save her!\n";
        cout<<"__________________________________________________________\n";
            system("pause");
            system("cls");
        
        //intro music
        cout<<"__________________________________________________________\n";
        cout<<"               (Queue awesome music)                      \n";
        cout<<" Dun dun dun dunnnn dun dun dun";
        cout<<" dun dunnnn dun dun dun! Dun!\n";
        cout<<" duuuuuuuuun DUN DUN DUN DUUUN dun";
        cout<<" DUN! DUN DUN DUN duun!\n";
        cout<<" Drums!";
        cout<<" Epic! Dun dun DUN! DUN! ";
        cout<<"Symbols!";
        cout<<" ROCK!";
        cout<<" DUN!\n";
        cout<<" DUN DUN DUUUUUN! DUN! DUN! DUN! DUN DUN DUN DUUUUUN";
        cout<<" DUN!\n";
        cout<<"___________________________________________________________\n\n";
            system("pause");
            system("cls");
        cout<<"__________________________________________________________\n";
        cout<<" This is his story... Shall we continue? \n"
            <<"(Type Y to continue. Any other key to exit.)\n"
            <<"____________________________________________________\n";
        cin>>choice;
        cout<<"____________________________________________________\n";
        system("cls");
                  if(choice=='Y'||choice=='y'){
                                               
                         //Dialogue begins here                     
                         cout<<"_____________________________________________________________\n";
                         cout<<" Sir Knight is galantly riding his steed through a\n"
                             <<" small village. Unsatisfied with his abundant riches\n"
                             <<" and unlimited choice of babes, he decides to seek\n"
                             <<" council with the village farseer whome rumors have\n"
                             <<" knows all about secret adventures that would truly\n"
                             <<" satisfy Sir Knight's awesome appetite for adventure.\n"
                             <<"____________________________________________________\n";
                         system("pause");
                         system("cls");
                         cout<<"_____________________________________________________________\n"
                             <<" Sir Knight travels to the edge of the village where a small\n"
                             <<" hut resides seemingly unvisited for decades. He dismounts his\n"
                             <<" trusty companion and approaches the hut.\n";
                         cout<<"_____________________________________________________________\n";
                         cout<<" Entering the Farseer's hut...\n"
                             <<"_____________________________________________________________\n\n";
                         Sleep(100);
                         cout<<" Farseer: WHO DARE ENTER ME HUT OF DOOM!?\n\n";
                         Sleep(100);
                         cout<<" Sir Knight: Woah dude... Chillax. I have heard rumors\n"
                             <<" about you being all wise and stuff. Can you help me out?\n\n";
                         Sleep(100);
                         cout<<"_____________________________________________________________\n";                         
                         system("pause");
                         system("cls");
                         cout<<"_____________________________________________________________\n";
                         cout<<" Farseer: AYE! Ye rumors be true! But if ye business\n"
                             <<" be ill den ye shall recieve an end not even worthy\n"
                             <<" of worms!\n\n";
                         Sleep(100);
                         cout<<" Farseer: What it ye want?\n\n";
                         Sleep(100);
                         cout<<" Sir Knight: Well I have everything a Knight should have...\n"
                             <<" I have more riches than you could imagine. I have trophies\n"
                             <<" of every terrifying beast one could imagine.\n\n";
                         Sleep(100);
                         cout<<"_____________________________________________________________\n";
                         system("pause");
                         system("cls");  
                         cout<<"_____________________________________________________________\n";                       
                         cout<<" I have had every\n"
                             <<" babe south, north, east, and west of Awetopia. Yet I feel\n"
                             <<" an emptiness. Something missing in my life...\n\n";
                         Sleep(100);
                         cout<<" Farseer: Ah! I've seen dis before. It be love you be after!\n\n";
                         Sleep(100);
                         cout<<" Sir Knight: Love? What is this 'Love' you talk about?\n\n";
                         Sleep(100);
                         cout<<"_____________________________________________________________\n";
                         system("pause");
                         system("cls"); 
                         cout<<"_____________________________________________________________\n";                        
                         cout<<" Farseer: Ah, it be da finest of things! But it not easy\n"
                             <<" to achieve. I may be of help! But help come wit risk!\n"
                             <<" See, legend tell of big tower. ";
                         Sleep(100);
                         cout<<"Many call dis place the\n"
                             <<" TOWER OF BADNESS. Many knights like ye have searched for\n"
                             <<" dis tower but none ever find it. Dat be because only I\n"
                             <<" HAVE DA MAP! BAHAHAHAHA! Dem fools...\n\n";
                         Sleep(100);
                         cout<<" Sir Knight: Well give it to me!\n\n";
                         Sleep(100);
                         cout<<"_____________________________________________________________\n";
                         system("pause");
                         system("cls"); 
                         cout<<"_____________________________________________________________\n";                           
                         cout<<" Farseer: Slow your pudgy face meat head dummy. I do dis for you\n"
                             <<" den you do sumtin for me. I sit in dis hut all day for\n"
                             <<" long time now. None folk come near me hut dat often. It\n"
                             <<" make old me very bored you see.\n\n";
                         Sleep(100);
                         cout<<" Farseer: Play me game of magic dice and I give you da map\n"
                             <<" dat solve all ye problems...\n\n";
                         Sleep(100);
                         cout<<" Sir Knight: Okay you crazy old man. What's the catch?\n\n";
                         Sleep(100);
                         cout<<"_____________________________________________________________\n";
                         system("pause");
                         system("cls"); 
                         cout<<"_____________________________________________________________\n";                           
                         cout<<" Farseer: Aha! Ye may just be smart nuf for dis quest!\n"
                             <<" If ye win, ye may jus get clue to the true key to me\n"
                             <<" magic map! But if I be winner\n"
                             <<" I shall turn ye into my pet nematode which ye shall remain\n"
                             <<" as for da rest of ye days!\n\n";
                         Sleep(100);
                         cout<<" The Farseer removes a magical box and a ring of keys\n"
                             <<" of all different shapes, letters, and numbers from his coat.\n\n";
                         Sleep(100);
                         cout<<" Sir Knight: You're on dude...\n";
                         Sleep(100);
                         cout<<"____________________________________________________\n";
                         system("pause");
                         system("cls"); 
                         
                         //Begin Dice Game
                         char ch;
                         
                         cout<<"____________________________________________________\n";
                         cout<<"\n\n Loading Farseer Magic Dice Game . . . . . . . ";
                         Sleep(1000);
                         cout<<"\n\n Press 'r' to test your luck against the Farseer!\n\n";
                         xm:
                         ch = getch();
                         if (ch=='r'){
                         system("cls"); 
                         call();  }                  
                         else
                         cout<<"\n\n Press 'r' to test your luck against the Farseer!\n"
                             <<" Or try your luck guessing the true key to the box!\n\n";
                         ch = getch();
                   while(ch!='L'){
                         goto xm;
                         getch();
                         }
                         
                         cout<<" You chose the correct key and and the Farseer begins\n\n"
                             <<" to melt!\n\n";
                         Sleep(1000);
                         cout<<" Farseer: NOOOOOOOUUUHHGGGAARARRRRGGGLLLLEEE!!!!\n\n";
                         Sleep(1000);
                         cout<<" Sir Knight: Heh... Cool...\n\n";
                         Sleep(1000); 
                         system("pause");
                         system("cls");
                  
                         cout<<"____________________________________________________\n"; 
                         cout <<" Sir knight opens the magic box to discover the map.\n"
                              <<" Printed on the map is a very simple labryinth.\n"
                              <<" 'Really?' exclaimed Sir Knight.\n"
                              <<" On the top of the map the words \n\n"
                              <<" 'Atop ye old mountain, and through the labryinth\n"
                              <<"  dwells the flying beast.'\n\n"
                              <<" Knowing that there is only one mountain in all\n"
                              <<" of the land of Awetopia, Sir knight mounts his horse.\n"
                              <<" He begins his trek to the mountain where the labryinth\n"
                              <<" resides and potentially his doom await.\n"
                              <<"____________________________________________________\n\n";
                         system("pause");
                         system("cls");
                         cout<<"____________________________________________________\n"
                             <<" Shuffling through inventory for the map...\n"
                             <<"____________________________________________________\n\n";
                         Sleep(3000);
                         cout<<" Atop ye old mountain, and through the labryinth\n"
                             <<" dwells the flying beast.\n";
                         printMaze();
                         cout<<" \n Press any key to see the traced map with the\n"
                             <<" path he is goint to take and continue on with the adventure!\n"
                             <<"____________________________________________________\n";
                         system("pause");
                         system("cls");
                         cout << " Map after Sir Knight traces his path.\n\n";
                         runMaze(1, 2);
                         cout<<" Atop ye old mountain, and through the labryinth\n"
                             <<" dwells the flying beast.\n";
                         printMaze();
                         cout<<"\n";
                         system("pause");
                         system("cls");
                         cout<<"____________________________________________________\n";
                         cout<<" After Days of traveling, Sir Knight finally arrives\n"
                             <<" at the top of the mountain. In the distance he\n"
                             <<" sees the TOWER OF BADNESS, and to the left near a rock\n"
                             <<" he sees the entrance to the Labryinth.\n"
                             <<"____________________________________________________\n";
                         system("pause");
                         system("cls");
                         cout<<"____________________________________________________\n"
                             <<" Sir Knight hears the deep growl of a dragon in the\n"
                             <<" distance followed by a scream from a princess.\n"
                             <<" Completely intrigued he picks up the pace and goes\n"
                             <<" into the labryinth!\n"
                             <<"____________________________________________________\n";
                         system("pause");
                         system("cls");
                         cout<<"____________________________________________________\n"
                             <<" With the use of the map, Sir Knight quickly exits the\n"
                             <<" labryinth at the base of the TOWER OF BADNESS. He\n"
                             <<" sees the dragons and prepares for battle!\n"
                             <<"____________________________________________________\n";                                            
                         system("pause");
                         system("cls");                             
                         
                         //begin dragon battle
                         intro();
                         dragonf(); 
                  }
        }while (choice == 'Y' || choice == 'y');
        
        system("pause");
        return 0;
        return 0;
        }while(choice!='Y'||choice!='y');
        

          }
void intro(){
     
        cout<<"_____________________________________________________________\n";
        cout<<"  There is a Dragon dwelling in the TOWER OF BADNESS... \n"
            <<"  The incredibly beautiful and magical Princess \n"
            <<"  is held prisoner atop the highest tower of the keep... \n"
            <<"  This is your moment to defeat the Dragon and save the \n"
            <<"  beautiful princess and live happily ever after...\n"
            <<"_____________________________________________________________\n"
            <<"Objectives:\n"
            <<"1) Pick a weapon!\n"
            <<"2) Slay the viscious Dragon!\n"
            <<"3) Save the Princess!\n"
            <<"_____________________________________________________________\n"
            <<"Note: Choices made that are not on the weapons menu \n"
            <<"      will only make the Dragon angry...\n"
            <<"_____________________________________________________________"<<endl;
            system("pause");
            system("cls");
     }
void dragonf(){
     
         //Declare Variables
    int      space,
             player1;
             
    float    BPB = 6,
             BAA = 4,
             health = 30,
             GrtSwd,
             DragH = 30,
             MP,
             bonus_10;
             
    unsigned dmgD = time(0);
       
        while (DragH >= 1 && health >= 1){

            srand(static_cast<unsigned int>(time(0)));      
            srand(dmgD);
            dmgD = (rand() % 7) + 1;
            
            cout<<"_____________________________________________________________\n";
            cout<<"  The viscious and merciless Dragon attacks\n"
                <<"  Sir Knight dealing "<<dmgD<<" damage.\n"
                <<"  Sir Knight is knocked to the ground after\n"
                <<"  recieving some terrible wounds\n"
                <<"  He finds the strength to return to his feet\n"
                <<"  for another round."<<endl;
            cout<<"_____________________________________________________________\n";
            system("pause");
            system("cls");

            health = health - dmgD;
   
            space = 1; 
     
        while(space <= 1){
            cout <<""<<endl;
            space++;
        }     
            cout<<"_____________________________________________________________\n";
            cout<<"  Sir Knight's current health : "<<health<<endl;
            cout<<"  The Dragon's health :"<<DragH<<endl;
            cout<<"_____________________________________________________________\n";
            system("pause");
       
    space = 1; 
     
        while(space <= 1){
            cout <<""<<endl;
            space++;
        }     
   
    char Attack;

        //condition that the player is killed in the fight
        if(DragH > 0 && health < 1){
            cout<<"_____________________________________________________________\n";
            cout<<"  You have succumb to your terrible wounds."<<endl;
            cout<<"  The Dragon eats the Princess! NOOOOOO!"<<endl;
            cout<<"_____________________________________________________________\n";
       
            system("Title        Game Over          ");
            system("Color 4");
            system ("pause");
            
        }

    cout<<"Choose a weapon before the Dragon kills you and eats the Princess!"<<endl;
    cout<<"__Weapon____________________Damage to the Dragon_"<<endl;
    cout<<"                           |                     |"<<endl;
    cout<<"  A: Bow and Arrow         |        4            |"<<endl;
    cout<<"  B: Black Powder Bomb     |        6            |"<<endl;
    cout<<"  G: Great Sword           |       3-6           |"<<endl;
    cout<<"___________________________|_____________________|"<<endl;
    cout<<"  M: Magic Potion  |  Recovers health    | "<<endl;
    cout<<"\n";
    cout<<"  Pick a weapon or choose to use the Princess's Magic Potion and press Enter!"<<endl;
    cout<<"  Choice: ";
    cin >>Attack;
   
    space = 1; 
     
        while(space <= 2)
{
            cout <<""<<endl;
            space++;
}     
   
    //these are the condition of fighting
        if(Attack == 'A' || Attack == 'a')
        {             
    dmgD = (rand() % 13) + 1;   
    DragH = DragH - BAA;
    cout<<"\n";
    cout<<"_____________________________________________________________\n";
    cout<<"  Sir Knight removes his bow from his shoulder \n "
        <<"  and runs up a broken statue for a better vantage \n"
        <<"  point... Sir Knight removes an arrow from his quiver. \n"
        <<"  with steady hands and a deep breath he aims and \n"
        <<"  releases his arrow, striking the Dragon directly \n"
        <<"  on it's arse!\n"
        <<"  Sir Knight Deals | "<<BAA<<" | Damage!\n"
        <<"  Sir Knight slides galantly down the \n"
        <<"  statue and braces for the Dragon's attack!"<<endl;
    cout<<"_____________________________________________________________\n";
    system("pause");
    system("cls");
        }
     
       
       
        if(Attack == 'B' || Attack == 'b')
        {   
            bonus_10 = (rand() % 8);
            dmgD = (rand() % 13) + 1;
            DragH = bonus_10 + DragH - BPB;
            
            cout<<"_____________________________________________________________\n";
            cout<<"  Sir Knight throws a flask filled with black powder... "<<endl; 
            cout<<"  It explodes on the Dragon's scale plating...\n"
                <<"  Sir Knight Deals | "<<BPB<<" | Damage!\n"
                <<"  The dragon snarls and may have grown stronger \n"
                <<"  from the fiery explosion...\n"
                <<"  Sir Knight stumbles backwards and braces\n"
                <<"  for the Dragon's attack!"<<endl;
            cout<<"_____________________________________________________________\n";
            system("pause");
            system("cls");
        }
     
       
        if(Attack == 'G' || Attack == 'g')
        {      
            GrtSwd = (rand() % 4) + 3;   
            dmgD = (rand() % 13) + 1;
            DragH = DragH - GrtSwd;
            cout<<"_____________________________________________________________\n";
            cout<<"  The brave Sir Knight unseaths his greatsword and \n"
                <<"  arrogantly charges towards the Dragon screaming and \n"
                <<"  taunting at the dragon...\n"
                <<"  The Princess watches from her tower \n"
                <<"  with disbelief when she sees Sir Knight actually\n"
                <<"  manages to catch the Dragon by surprise and land some blows!\n"
                <<"  Sir Knight Deals | "<<GrtSwd<<" | Damage!\n"     
                <<"  Sir Knight stumbles backwards and braces\n"
                <<"  for the Dragon's attack!"<<endl;
            cout<<"_____________________________________________________________\n";
            system("pause");
            system("cls");
        }
           
           
        if(Attack == 'M' || Attack == 'm')
        {         
            MP=(rand()%5)+8;
            dmgD=(rand()%10)+1;
            health=health+MP-dmgD;
            
            cout<<"_____________________________________________________________\n";
            cout<<"  Demoralized and suffering from grave wounds\n"
                <<"  the the dragons inflicted. Sir Knight reaches\n"
                <<"  into his pack and removes a dazzling flask.\n"
                <<"  The Magic Potion recoveres | "<<MP<<" | health! \n"
                <<"  Sir Knight stumbles backwards and braces\n"
                <<"  for the Dragon's attack!"<<endl;
            cout<<"_____________________________________________________________\n";
            system("pause");
            system("cls");
        }
       
    space = 1; 
     
        while(space <= 5){
            cout <<""<<endl;
            space++;
        }     


          //condition that player1 wins
          if(DragH <= 0 && health > 0){
         
              system("Title        Sir Knight!          ");
              system("Color 3"); 
    cout<<"_____________________________________________________________\n";
    cout<<"  You did it player number: "<<player1<< " the Princess has been saved!\n"
        <<"  The evil Dragon has been slain and his enormous corpse turns to ashes.\n"
        <<"  Sir Knight wounded and dirty yet full of spirit,\n"
        <<"  climbs to the top of the tower and saves the princess.\n"
        <<"  Princess and Sir Knight live happily ever after."<<endl;
    cout<<"_____________________________________________________________\n";
    cout<<"                          The End"<<endl;

    space = 1; 
     
        while(space <= 2){
            cout <<""<<endl;
            space++;
        }     

 cout<<"  Brought to you by Michael Davies \n";      
                                          
    system ("pause");                         
                                                                           
          }                                        
          }
          }
     
    void printMaze()
    {
    for(int row = 0; row < ROWMAX; row++)
    {
    for(int col=0; col < COLMAX; col++)
    cout << maze[row][col];
    cout << "\n";
    }
    }

    void runMaze(int row, int col)
    {
    if( (row>0 && row<ROWMAX) && (col>0 && col<COLMAX)) {
    if( maze[row][col] == 'W' ) return;

    if( maze[row][col] == ' ') {
    maze[row][col]='*';

    runMaze(row, col+1);
    runMaze(row, col-1);
    runMaze(row-1, col);
    runMaze(row+1, col);
    }
    }
    }

    void call()
    {
        srand (time(NULL));

        int n;
        n= rand();
        n = 1 + n % 6;

        switch (n)
        {
               
         case 1:
              one();
              break;
         case 2:
              two();
              break;
         case 3:
              three();
              break;
         case 4:
              four();
              break;
         case 5:
              five();
              break;
         case 6:
              six();
              break;
         default:
                 cout<<"NONUM";

        }       
    }  


        void one()
        {
        cout << " -----" << endl;
        cout << "|     |" << endl;
        cout << "|  O  |" << endl;
        cout << "|     |" << endl;
        cout <<  " -----\n\n";
   
        cout<<" Farseer: AHA! Cyclops eye mean me win!\n\n";
        Sleep(2000);
        cout<<" ZAP";
        Sleep(1000);
        cout<<" KABLOOEY! ";
        Sleep(1000);
        cout<<" BAM! ";
        Sleep(1000);
        cout<<" NEMATODE!\n\n";
        Sleep(1000);
        cout<<" The Farseer uses the wrong spell and Sir Knight Explodes\n"
            <<" in a fiery ball that kills him instantly...\n"
            <<"                 GAME OVER\n\n";
        Sleep(300);
        system("color 4");
        Sleep(8000);
        exit (0);
        }
        void two()
        {
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|     |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----\n\n";
        
        cout<<" Farseer: Ah... Twin bossoms mean roll again!\n";
            system("pause");
            system("cls");        
        }
        void three()
        {
        cout << " -----" << endl;
        cout << "|    O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O    |" << endl;
        cout <<  " -----\n\n";

        cout<<" Farseer: Three blind mice! Roll again if ye dare!\n";
            system("pause");
            system("cls");        
        }
        void four()
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|     |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----\n\n";

        cout<<" Farseer: Ahh de four shrunken heads... Roll againg Sir Knight!\n";
            system("pause");
            system("cls");        
        }
        void five()
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|  O  |" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----\n\n";
 
        cout<<" Farseer: Ivory Pentagram! You get new chance!\n";
            system("pause");
            system("cls");        
        }
        void six()
        {
        cout << " -----" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout << "|O   O|" << endl;
        cout <<  " -----\n\n";
        Sleep(2000);
        cout<<" Farseer: BLAST! Devil's Pick! ";
        Sleep(2000);
        cout<<"BY GOD'S BONES! ";
        Sleep(2000);
        cout<<"%#@*&!!!\n\n";
        Sleep(2000);
        cout<<" A fiery and smokey explosion throws the Farseer\n\n"
            <<" against the wall of the hut.\n\n";
        Sleep(2000);
        cout<<" The smoke fades and Sir Knight notices an etching in ash on the wall\n\n"
            <<" that reads 'To Experience Life You Must Be Life Or Something.'\n\n"
            <<" Below the phrase... A giant capital 'L'\n\n";
        cout<<" Farseer: Oh dat can't mean anything... Keep playing wit me!\n\n";
        Sleep(1000);
        
        }
