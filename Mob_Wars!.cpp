/* 
 * File:   main.cpp
 * Author: Michael Davies
 * Created on October 23, 2013
 * Purpose: Project. Simple mobster Battle for a future rpg game
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

int main()
{
    //Declare Variables
    int      space,
             player1;
             
    float    Flamethrower = 6,
             TommyG = 3,
             health = 30,
             Pistol,
             numMob = 30,
             FirstAid,
             bonus_10;
             
    unsigned dmgMob = time(0);
    
        intro();
       
        while (numMob >= 1 && health >= 1){

            srand(static_cast<unsigned int>(time(0)));      
    
            cout<<"  Your current health :"<<health<<endl;
            cout<<"  Number of mobsters remaining :"<<numMob<<endl;
            cout<<"\n";
 
            srand(dmgMob);

            dmgMob = (rand() % 6) + 1;
    
            cout<<"  You are hit for "<<dmgMob<<" damage by the mob. Slightly dazed, you recover!"<<endl;

            health = health - dmgMob;
   
            space = 1; 
     
        while(space <= 1){
            cout <<""<<endl;
            space++;
        }     
   
            cout<<"  Your current health : "<<health<<endl;
            cout<<"  Number of mobsters remaining :"<<numMob<<endl;
            cout<<"\n";
       
    system("pause");
       
    space = 1; 
     
        while(space <= 1){
            cout <<""<<endl;
            space++;
        }     
   
    char Attack;

        //condition that the player is killed in the fight
        if(numMob > 0 && health < 1){
            cout<<"  You have sucumb to your terrible wounds."<<endl;
            cout<<"  The Mob now controls the city."<<endl;
       
            system("Title        Game Over          ");
            system("Color 4");
            system ("pause");
            return 0;
        }
 
    cout<<"Choose a weapon before the Mob kills you!"<<endl;
    cout<<"__Weapon_________Damage to mobsters___"<<endl;
    cout<<"                     |                |"<<endl;
    cout<<"  T: Tommy gun       |    3           |"<<endl;
    cout<<"  F: Flamethrower    |    6           |"<<endl;
    cout<<"  P: Pistol          |    2-4         |"<<endl;
    cout<<"_____________________|________________"<<endl;
    cout<<"  A: First Aid Kit   | Recover health | "<<endl;
    cout<<"\n";
    cout<<"  Pick a weapon or choose to use your First Aid Kits and press Enter!"<<endl;
    cout<<"  Choice: ";
    cin >>Attack;
   
    space = 1; 
     
        while(space <= 2)
{
            cout <<""<<endl;
            space++;
}     
   
    //these are the condition of fighting
        if(Attack == 'T' || Attack == 't')
        {             
    dmgMob = (rand() % 13) + 1;   
    numMob = numMob - TommyG;
    cout<<"\n";
    cout<<"  Tommy gun hits 3 mobsters! "<<endl; 
    cout<<"  They fall to the ground wounded and crawl out of the battle!"<<endl;
    cout<<"\n";
        }
     
       
       
        if(Attack == 'F' || Attack == 'f')
        {   
            bonus_10 = (rand() % 8);
            dmgMob = (rand() % 13) + 1;
            numMob = bonus_10 + numMob - Flamethrower;
            
            cout<<"\n";
            cout<<"  Flamethrower burns up 6 mobsters! "<<endl; 
            cout<<"  The use of flamethrowers draws attention from the mob boss!"<<endl;
            cout<<"  The mob boss sends reinforcements!"<<endl;
        }
     
       
        if(Attack == 'P' || Attack == 'p')
        {      
            Pistol = (rand() % 2) + 2;   
            dmgMob = (rand() % 13) + 1;
            numMob = numMob - Pistol;
            cout<<"\n";
            cout<<"  You fire your whole clip wildly at the mobsters... "<<endl; 
            cout<<"  Even though you did not aim, you miraculously hit a few \n"
                <<"  bad guys... Good job!"<<endl;
            cout<<"\n";
        }
           
           
        if(Attack == 'A' || Attack == 'a')
        {         
            FirstAid=(rand()%10)+4;
            dmgMob=(rand()%14)+1;
            health=health+FirstAid;
            
            cout<<"\n";
            cout<<"  Monster Attacked you but"<<endl;
            cout<<"  your First Aid Kit recovered some health! "<<endl; 
        }
       
    space = 1; 
     
        while(space <= 5){
            cout <<""<<endl;
            space++;
        }     


          //condition that player1 wins
          if(numMob <= 0 && health > 0){
         
              system("Title        Mob Fight          ");
              system("Color 3"); 
                 
  cout<<"  You did it player number: "<<player1<< " the town is free of mobsters!"<<endl;
    cout<<"                          The End"<<endl;

    space = 1; 
     
        while(space <= 2){
            cout <<""<<endl;
            space++;
        }     

 cout<<"  Mob Wars! Brought to you by Michael.inc!"<<endl;           
                                          
    system ("pause");                         
    return 0;                                                                             
          }                                        
          }
          }
void intro(){
     
        cout<<"Welcome to Mob Wars!"<<endl;
        cout<<"_____________________________________________________________\n";
        cout<<"  You find yourself under attack by the Mob Boss's goonies!"<<endl;
        cout<<"  Gunfire surrounds your police vehicle as you stumble out \n"
            <<"  of it. You crawl through the smoke and falling debris to \n"
            <<"  the rear of the vehicle where you find all your weapons. \n"
            <<"_____________________________________________________________\n"
            <<"Pick a weapon, survive, and save the city from the Mob!\n"
            <<"_____________________________________________________________\n"
            <<"Note: Choices not on the weapons menu will get you shot!"<<endl;
        cout<<"_____________________________________________________________\n";
     }
