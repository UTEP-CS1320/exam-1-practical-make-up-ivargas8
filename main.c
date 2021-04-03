/*
*   EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (3/1/2021)
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Blood Pressure
     ***************************/
    
    // TODO: Fix the code below.
    // HINT: The code doesn't need big changes. Review the conditions and the outputs carefully.
    int sysP, diasP;


    // Read Systolic and Diastolic pressure
    scanf("%d %d", &sysP, &diasP);

    if(sysP <= diasP){
      printf("ERROR\n");
    } else if(sysP < 120 && diasP < 80) {
      printf("Normal\n");
    } else if((sysP >= 120 && sysP <= 129) && diasP < 80) {
      printf("Elevated\n");
    } else if((sysP >= 130 && sysP <= 139) && (diasP >= 80 && diasP <=89)) {
      printf("Stage 1 Hypertension\n");
    } else if((sysP >= 140 && sysP < 180) || (diasP >= 80 && diasP < 120)) {
      printf("Stage 2 Hypertension\n");
    } else {
      printf("Hypertensive Crysis\n");
    };
    
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Pokemon Damage
     ***************************/
    
    // TODO: Your P2 code goes here
    // Good luck!!
     
    char PokemonName [30];
    int Level;
    char AttackName [30];
    int Power;
    int A;
    int D;
    double Critical = 1.0;
    double STAB = 1.0;
    double Type;
    double Mod;
    double TotalDamage;
   

    scanf("%s %i %s %d %d %d %lf", &PokemonName, &Level, &AttackName , &Power , &A , &D , &Type);  
    

    if(Level < 1 || Level > 100 || Power < 20 || Power > 130 || A < 1 || A > 1000 || D < 1 || D > 1000 || (Type != 0 && Type != 0.25 && Type != 0.5 && Type != 1 && Type != 2 && Type != 4))    {
      printf("INVALID INPUT");
      exit(0);
    }
    if(A > 600){
      Critical = 1.5;
    }
    if(A == Type){
      STAB = 1.5;
    }
 
    
    
    printf("%s used %s!\n", &PokemonName , &AttackName);

    Mod = Critical * STAB * Type;
  
    if(Mod == 0){ 
      printf("It has no effect.");
    } else if(Mod == 0.25 || Mod == 0.5){
      printf("It's not very effective...");
    } else if(Mod == 2 || Mod == 4){
      printf("It's super effective!");
    } else {
      printf("A critical hit!\n");
    }

   
    TotalDamage = ((((((Level*2) / 5) + 2) * Power * (A / D)) / 50) + 2) * Mod ;

  
    printf("Total: %f Damage.\n" , TotalDamage);


    
    /* Problem 2 End */
  } else if(opt == 3) {
    
   /***************************
     *  Problem 3: Shop
     ***************************/
    
    // TODO: Your P3 code goes here
    // Good luck!!
    
    /* Problem 3 End */
  }
}
