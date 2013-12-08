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
using namespace std;

//Function prototypes
void intro();
void dragonf();

int main()
{
    //Declare variables
    char choice;
       do{ 
        do{
        cout<<" Welcome to the Adventures of Sir Knight!\n"
            <<" He lived in the country of Awetopia.\n"
            <<" Sir knight was once a glorious warrior.\n"
            <<" He slew many beasts and could get all the babes.\n"
            <<" But there was only one babe he truly wanted.\n"
            <<" She was a princess locked away in the tower of badness.\n"
            <<" His only option was to slay the dragon and save her!\n"
            <<"__________________________________________________________\n"
            <<"               (Queue awesome music)                      \n"
            <<" Dun dun dun dunnnn dun dun dun dun dunnnn dun dun dun! Dun!\n"
            <<" duuuuuuuuun DUN DUN DUN DUUUN dun DUN! DUN DUN DUN duun!\n"
            <<" Drums! Horns! Epic! Dun dun DUN! DUN! Symbols! Rock! Dun!\n"
            <<"___________________________________________________________\n\n";
        cout<<" This is his story... Shall we continue? \n"
            <<"(Type Y to continue. Any other key to exit.)\n";
        cin>>choice;
                  if(choice=='Y'||choice=='y'){
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
        cout<<"  There is a Dragon dwelling in the keep... \n"
            <<"  The incredibly beautiful and magical Princess \n"
            <<"  is held prisoner atop the highest tower of the keep... \n"
            <<"  This is your moment to defeat the Dragon and save the \n"
            <<"  beautiful princess and live happily ever after...\n"
            <<"_____________________________________________________________\n"
            <<"Objectives:\n"
            <<"1) Pick a weapon!\n"
            <<"2) Slay the viscious Dragon!\n"
            <<"3) Save the woman of your dreams!\n"
            <<"_____________________________________________________________\n"
            <<"Note: Choices made that are not on the weapons menu \n"
            <<"      will only make the Dragon angry...\n"
            <<"_____________________________________________________________"<<endl;
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
    
            cout<<"  The viscious and merciless Dragon attacks\n"
                <<"  Sir Knight dealing "<<dmgD<<" damage.\n"
                <<"  Sir Knight is knocked to the ground after\n"
                <<"  recieving some terrible wounds\n"
                <<"  He finds the strength to return to his feet\n"
                <<"  for another round."<<endl;

            health = health - dmgD;
   
            space = 1; 
     
        while(space <= 1){
            cout <<""<<endl;
            space++;
        }     
   
            cout<<"  Sir Knight's current health : "<<health<<endl;
            cout<<"  The Dragon's health :"<<DragH<<endl;
            cout<<"\n";
       
    system("pause");
       
    space = 1; 
     
        while(space <= 1){
            cout <<""<<endl;
            space++;
        }     
   
    char Attack;

        //condition that the player is killed in the fight
        if(DragH > 0 && health < 1){
            cout<<"  You have succumb to your terrible wounds."<<endl;
            cout<<"  The Dragon eats the Princess! NOOOOOO!"<<endl;
       
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
    cout<<"  M: Britt's Magic Potion  |  Recovers health    | "<<endl;
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
    cout<<"  Sir Knight removes his bow from his shoulder \n "
        <<"  and runs up a broken statue for a better vantage \n"
        <<"  point... Sir Knight removes an arrow from his quiver. \n"
        <<"  with steady hands and a deep breath he aims and \n"
        <<"  releases his arrow, striking the Dragon directly \n"
        <<"  on it's arse! Sir Knight slides galantly down the \n"
        <<"  statue and braces for the Dragon's attack!"<<endl;
        }
     
       
       
        if(Attack == 'B' || Attack == 'b')
        {   
            bonus_10 = (rand() % 8);
            dmgD = (rand() % 13) + 1;
            DragH = bonus_10 + DragH - BPB;
            
            cout<<"\n";
            cout<<"  Sir Michaelus throws a flask filled with black powder... "<<endl; 
            cout<<"  It explodes on the Dragon's scale plating..."<<endl;
            cout<<"  The dragon snarls and seems to grow stronger \n"
                <<"  from the fiery explosion...\n"
                <<"  Sir Knight stumbles backwards and braces\n"
                <<"  for the Dragon's attack!"<<endl;
        }
     
       
        if(Attack == 'G' || Attack == 'g')
        {      
            GrtSwd = (rand() % 4) + 3;   
            dmgD = (rand() % 13) + 1;
            DragH = DragH - GrtSwd;
            cout<<"\n";
            cout<<"  The brave Sir Knight unseaths his greatsword and \n"
                <<"  arrogantly charges towards the Dragon screaming and \n"
                <<"  taunting at the dragon...\n"
                <<"  The Princess watches from her tower \n"
                <<"  with disbelief when she sees Sir Knight actually\n"
                <<"  manages to catch the Dragon by surprise and land some blows!\n"
                <<"  Sir Knight stumbles backwards and braces\n"
                <<"  for the Dragon's attack!"<<endl;
        }
           
           
        if(Attack == 'M' || Attack == 'm')
        {         
            MP=(rand()%5)+8;
            dmgD=(rand()%10)+1;
            health=health+MP-dmgD;
            
            cout<<"\n";
            cout<<"  Demoralized and suffering from grave wounds\n"
                <<"  the the dragons inflicted. Sir Knight reaches\n"
                <<"  into his pack and removes a dazzling flask.\n"
                <<"  The Princess's Magic Potion recovered:"<<MP<<" health! \n"
                <<"  Sir Knight stumbles backwards and braces\n"
                <<"  for the Dragon's attack!"<<endl;
        }
       
    space = 1; 
     
        while(space <= 5){
            cout <<""<<endl;
            space++;
        }     


          //condition that player1 wins
          if(DragH <= 0 && health > 0){
         
              system("Title        Brittany's Game          ");
              system("Color 3"); 
                 
    cout<<"  You did it player number: "<<player1<< " the Princess has been saved!\n"
        <<"  The evil Dragon has been slain and his enormous corpse turns to ashes.\n"
        <<"  Sir Knight wounded and dirty yet full of spirit,\n"
        <<"  climbs to the top of the tower and saves the princess.\n"
        <<"  Princess and Sir Knight live happily ever after."<<endl;
    cout<<"                          The End"<<endl;

    space = 1; 
     
        while(space <= 2){
            cout <<""<<endl;
            space++;
        }     

 cout<<"  Brought to you by Michael Davies Inc. \n";      
                                          
    system ("pause");                         
                                                                           
          }                                        
          }
     }
