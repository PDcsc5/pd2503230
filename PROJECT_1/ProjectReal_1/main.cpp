/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 21, 2014, 8:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    //player stats
    float maxHealth=50;
    float currentHealth=50;
    string command;
    
    //Enemy stats
    float enemyMaxHealth=50;
    float enemyCurrentHealth=50;
    
    //hit chance
    int chanceToBite=25;
    int chanceToScratch=50;
    int chanceToPullHair=75;
    int chanceToPunch=10;
    
    //damage from hit
    float biteDamage=20;
    float scratchDamage=10;
    float pullDamage=5;
    float punchDamage=45;
    
    //chance is out of 100
    int randomChance;
    int enemyRandomChance;
    int enemyAttackChoice;
    string enemyAttack;
    
    //exit game
    string out;
    
    //Title page
cout<<"              .@@@@@;         8@@@        i@@@@@@@@@           "<<endl;                                                                                                                                           
cout<<"             @@@.  i@        ;@@@@.           @@L              "<<endl;                                                                                                                                       
cout<<"            @@@              @@ 1@@           @@L              "<<endl;                                                                                                                                       
cout<<"            @@C             @@t  @@@          @@L              "<<endl;                                                                                                                                       
cout<<"            @@@            t@@@@@@@@;         @@L              "<<endl;                                                                                                                                       
cout<<"            ,@@@i  t@      @@.    G@@         @@L              "<<endl;                                                                                                                                       
cout<<"              ,@@@@0      8@G      @@8        @@t              "<<endl;                                                                                                                                       
cout<<""<<endl;
cout<<"       @@@@@     @@      @@@@8@      C@.   @@    @@@@@@@@      "<<endl;                                                                                                           
cout<<"       @@        @@     @@           C@.   @@       @@         "<<endl;                                                                                                           
cout<<"       @@@@@     @@     @@  00@@     C@0000@@       @@         "<<endl;                                                                                                           
cout<<"       @@        @@     i@@   @@     C@.   @@       @@         "<<endl;                                                                                                           
cout<<"       @@        @@       .@@@G      C@    @@       GG         "<<endl;                                                                                                           
cout<<"                                C,       :              "<<endl;
cout<<"                            ;@8       ,8                "<<endl;
cout<<"                         t880      .08:                 "<<endl;
cout<<"                      .888C      t88C                   "<<endl;
cout<<"                     0888      ;8@@          ;          "<<endl;
cout<<"                   ,888       @@@0        .0            "<<endl;
cout<<"                 ;888,      8888:       ;8.             "<<endl;
cout<<"                t880      8888G       180               "<<endl;
cout<<"               @8@;     88888       t@@L                "<<endl;
cout<<"             ;88t     :@888        @88i        i        "<<endl;
cout<<"            C88.    .18888.      ,@8@        @          "<<endl;
cout<<"           C8@      ;@88@       @881      ,@0           "<<endl;
cout<<"        . L8G      L8881      @@8@      .@8f            "<<endl;
cout<<"         C@.     .@88@      @888;      888:             "<<endl;
cout<<"        t8      18@@C      @888      .@@@               "<<endl;
cout<<"       .f      888@.     :@888      .@@f                "<<endl;
cout<<"       ,      L8@f      G888.     ;@88                  "<<endl;
cout<<"             i8C      ,888f      L880                   "<<endl;
cout<<"            ,@       @88@       @881                    "<<endl;
cout<<"            0       888:      i88L                      "<<endl;
cout<<"           i       080       G88                        "<<endl;
cout<<"                  f@,       88@                         "<<endl;
cout<<"                 :@        08G                          "<<endl;
cout<<"                 8        08.                           "<<endl;
cout<<"                f        08                             "<<endl;
cout<<"                        ;1                              "<<endl;
cout<<"                        i                               "<<endl; 

do{
    do
    {
        //User instructions
        
        cout<<"FIGHT!"<<endl;
        cout<<"Commands are 'punch', 'scratch', 'bite', 'pullhair'"<<endl;
        cout<<"Enter 'info' for damage statistics"<<endl;
        cout<<"Enter 'play' to start game"<<endl;
        cout<<"Enter 'exit' to end game"<<endl<<endl;
        cin>>out;
        if(out=="info")
        {
            cout<<"Commands\tDamage\t\tsuccess rate\n";
            cout<<"======================================\n";
            cout<<"pull hair\t5\t\t75 percent\n";
            cout<<"scratch\t\t10\t\t50 percent\n";
            cout<<"bite\t\t20\t\t25 percent\n";
            cout<<"punch\t\t45\t\t10 percent\n\n";
            cout<<"Enter 'info' for damage statistics"<<endl;
            cout<<"Enter 'play' to start game"<<endl;
            cout<<"Enter 'exit' to end game"<<endl<<endl;
            cin>>out;
            
        }
        if(out=="exit")
        {
            cout<<"Thank you for playing";
            return 0;
        }
        if(out!="play"&&out!="info"&&out!="exit")
        {
            cout<<"Invalid command"<<endl;
        }
        if(out=="play")
        {
            

        //While you and enemy are still alive

            currentHealth=50;
            enemyCurrentHealth=50;

        while(enemyCurrentHealth > 0 && currentHealth > 0 )
        {
            cout<<"Your health: "<<currentHealth<<"/"<<maxHealth<<endl;
            cout<<"Enemy health: "<<enemyCurrentHealth<<"/"<<enemyMaxHealth<<endl;
            cin>>command;
            cout<<endl;

            //Input commands
            if(command=="pullhair")
            {
                randomChance=rand()%100+1;
                if(randomChance<=chanceToPunch)
                {
                    enemyCurrentHealth-=pullDamage;
                }
            }
            else if(command=="scratch")
            {
                randomChance=rand()%100+1;
                if(randomChance<=chanceToScratch)
                {
                    enemyCurrentHealth-=scratchDamage;
                }
            }
            else if(command=="bite")
            {
                randomChance=rand()%100+1;
                if(randomChance<=chanceToBite)
                {
                    enemyCurrentHealth-=biteDamage;
                }
            }
            else if(command=="punch")
            {
                randomChance=rand()%100+1;
                if(randomChance<=chanceToPunch)
                {
                    enemyCurrentHealth-=punchDamage;
                }
                
            }
            else
            {
                cout<<"Not a valid command"<<endl;
            }

            //enemy attack
            enemyRandomChance=rand()%100+1;
            enemyAttackChoice=rand()%4+1;

            //attacks performed by enemy
            switch(enemyAttackChoice)
            {
                case 1:{
                    enemyAttack="punch";
                    break;
                case 2:
                    enemyAttack="pullhair";
                    break;
                case 3:
                    enemyAttack="scratch";
                    break;
                case 4:
                    enemyAttack="bite";
                    break;
                }
            }
            //damage dealt by enemy
            if(enemyAttack=="punch")
            {
                enemyRandomChance=rand()%100+1;
                if(enemyRandomChance<=chanceToPunch)
                {
                    currentHealth-=punchDamage;
                    cout<<"punched you in the face!"<<endl;
                }
            }
            else if(enemyAttack=="scratch")
            {
                enemyRandomChance=rand()%100+1;
                if(enemyRandomChance<=chanceToScratch)
                {
                    currentHealth-=scratchDamage;
                    cout<<"you got scratched"<<endl;
                }
            }
            else if(enemyAttack=="bite")
            {
                enemyRandomChance=rand()%100+1;
                if(enemyRandomChance<=chanceToBite)
                {
                    currentHealth-=biteDamage;
                    cout<<"you got bit"<<endl;
                }
            }
            else if(enemyAttack=="pull hair")
            {
                enemyRandomChance=rand()%100+1;
                if(enemyRandomChance<=chanceToPullHair)
                {
                    currentHealth-=pullDamage;
                    cout<<"pulled your hair"<<endl;
                }
            }
        }

        //who wins or loses
        if(currentHealth <= 0 && enemyCurrentHealth > 0)
        {
            cout<<"YOU LOST"<<endl;
            cout<<"Your health: "<<currentHealth<<"/"<<maxHealth<<endl;
            cout<<"Enemy health: "<<enemyCurrentHealth<<"/"<<enemyMaxHealth<<endl<<endl;
        }
        else if(enemyCurrentHealth <= 0 && currentHealth > 0)
        {
            cout<<"YOU WIN"<<endl;
            cout<<"Your health: "<<currentHealth<<"/"<<maxHealth<<endl;
            cout<<"Enemy health: "<<enemyCurrentHealth<<"/"<<enemyMaxHealth<<endl<<endl;
        }
        else
        {
            cout<<"IT WAS A TIE"<<endl;
            cout<<"Your health: "<<currentHealth<<"/"<<maxHealth<<endl;
            cout<<"Enemy health: "<<enemyCurrentHealth<<"/"<<enemyMaxHealth<<endl<<endl;
        }
    }
    }while (currentHealth<=0||enemyCurrentHealth<=0);
 
}while (out!="play"&&out!="info"&&out!="exit");
}