#include<stdio.h>    
#include<stdlib.h>    
    
struct play   
{    
            char name[20];    
            int score;    
            int rat;         
}p;    
    
void high_score();    
void start();    
void help();    
int main()    
{    
	printf("\n\n");
    printf("                  __          __  _                          \n");
    printf("                  \\ \\        / / | |                         \n");
    printf("                   \\ \\  /\\  / /__| | ___ ___  _ __ ___   ___ \n");
    printf("                    \\ \\/  \\/ / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\\n");
    printf("                     \\  /\\  /  __/ | (_| (_) | | | | | |  __/\n");
    printf("                      \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|\n");
	printf("_________________________________________________________________________________________\n");
	printf("_________________________________________________________________________________________\n");
    printf("\n\n");
    
    int choice = 0;  
    printf("  Please enter 1 to start the game \n ");  
    printf(" Please enter 2 to the high scores \n ");  
    printf(" Please enter 3 to seek help \n ");  
    printf(" Please enter 0 to exit \n ");  
    printf(" Enter your choice: ");  
      
    scanf( "%d", &choice );    
      
    switch(choice)    
    {    

        case 1:    
            start();    
            break;    
        case 2:    
            high_score();    
            break;    
        case 3: help();    
                break;    
        default: exit(1);    
    }    
    
  getchar();    
}  

void high_score()    
{  

  int ch;      
  FILE *fa;    
  if( ( fa = fopen("/tmp/play2.txt", "r" ) ) == NULL )    
  {    
    printf( "\n There are no games played !!\n " );    
  }    
  else    
  {    
    printf( "\n Printing the high scores now !! \n\n " );    
    printf(" Name     Points_Scored     Rating\n " );    
    while(fscanf(fa," %s %d %d", p.name, &p.score, &p.rat) !=EOF )    
    {    
      printf( " .................................\n " );    
      printf( " %s     %d     %d star(s)\n\n ", p.name,p.score, p.rat );    
    }    
    fclose(fa);    
    
  }    
  printf("\n Do you still want to continue playing ? If yes,then press 1 !! Else, press 0 :  " );    
  scanf( "%d", &ch );    
    
  // if contiue playing
  if( ch == 1 )    
  {    
    start();    
  }    
  
  // to exit
  else    
  {    
    exit(1);    
  }    
    
}    
void help()    // Help section
{    
    int ch;    
    
    printf( "\n\n Instructions that are supposed to be followed" );   
    printf("while playing this game: \n " );  
    printf("Quiz Game in C\n " );  
    printf("......................................................" );  
     printf( "\n You are supposed to answer 20 questions in this game !! " );    
     printf( "\n There will be 4 options given for each questions which are marked with a serial number starting from 1 to 4. " );    
     printf( "\n For each correct answer, you will be awarded with 5 points !! " );    
       
     printf( "\n As soon as you answer a question, you will be directed to the next question without any pause. " );    
     printf( "\n If your answer is wrong, no marks will be deducted from your score !! " );    
    
    printf( "\n\n !! Wish you all the best !! \n\n " );    
    
    
    printf( "\n Do you still wish to continue playing ? If yes, then press 1. Else, press 0 :  " );    
    scanf( "%d", &ch );    
      

    if( ch == 1 )    
    {    
        start();    
    }    
    else    
    {    
        exit(1);    
    }    
    
}  

void start()      // start the game
{    

    int ans;    
    int count = 0;    
    char rating[20];    
      
    // create a file  
    // to store the records  
    FILE *fa;    
    
    if((fa=fopen("/tmp/play2.txt","a"))==NULL)    
    {    
        printf(" There is an error occurred while opening thefile\n ");    
    }    
    
    
    printf( "\n Enter your Full name: " );    
    scanf( "%s", p.name );  
	fflush(stdin);
    
    printf("\n You have entered the \"Quiz game in C\"");  
    printf(" Welcome to the game \" %s \"   \n\n ", p.name);   
      
    printf(" The quiz game will be started now. Get ready to answer the questions !! \n ");  
    printf(" ALL THE BEST !! \n\n\n");  
      


    printf(" Question 1: \n");  
    printf(" What character have both Robert Downey Jr. and Benedict Cumberbatch played ? \n 1. Sherlock Holems \t \t 2. Iron Man \t \t 3. Dr. Strange \t \t 4. Batman \n\n ");    
    
    printf("Please enter your answer: ");    
  
    scanf("%d", &ans);    
       
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  1. Sherlock Holems \n\n");    
    }     
    
	printf("_________________________________________________________________________________________\n\n");

    printf(" Question 2: \n");  
    printf(" Roald Amundsen was the first man to reach the South Pole, but where was he from? ? \n 1. USA \t \t 2. England \t \t 3. Norway \t \t 4. Finland \n\n ");    
    
    printf("Please enter your answer: ");    
    scanf("%d", &ans);    
        


    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  3. Norway  \n\n");    
    }
	printf("_________________________________________________________________________________________\n\n");   
      
    printf(" Question 3: \n");  
    printf(" What is a group of pandas known as ? \n 1. An embarrassment \t \t 2. School \t \t 3. The Pragyan \t \t 4. The Ailuropoda melanoleuca \n\n ");    
    printf("Please enter your answer: ");   
    scanf("%d", &ans);    
      
  

    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  1. An embarrassment  \n\n");    
    }  
	printf("_________________________________________________________________________________________\n\n");
        
    printf(" Question 4: \n");  
    printf("In what country is the Chernobyl nuclear plant located? ? \n 1. Russia \t \t 2. Ukraine \t \t 3. USA \t \t 4. Japan \n\n ");   
    printf("Please enter your answer: ");    
    scanf("%d", &ans);    

    if( ans == 2 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   

    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  2. Ukraine  \n\n");    
    }  
	printf("_________________________________________________________________________________________\n\n");  
    printf(" Question 5: \n");  
    printf(" How many bones does an adult human skeleton have ? \n 1. 207 bones \t \t 2. 205 bones \t \t 3. 206 bones \t \t 4. 210 bones \n\n ");    
    printf("Please enter your answer: ");    
    scanf("%d", &ans);     
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   

    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  3. 206 bones  \n\n");    
    }  
    printf("_________________________________________________________________________________________\n\n");  
    printf(" Question 6: \n");  
    printf(" Which blood group out of the following is known to be universal acceptor ? \n 1. AB + \t \t 2. AB - \t \t 3. O + \t \t 4. O - \n\n ");    
    printf("Please enter your answer: ");    
    scanf("%d", &ans);    

    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  1. AB +  \n\n");    
    }    
         
      
	printf("_________________________________________________________________________________________\n\n");
    printf(" Question 7: \n");  
    printf(" What is Vitamin K also known as ? \n 1. Riboflavin \t \t 2. Thiamine \t \t 3. Ascorbic acid \t \t 4. Pentamine \n\n ");    
    printf("Please enter your answer: ");    
    scanf("%d", &ans);     

    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   

    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  3. Ascorbic acid  \n\n");    
    }  
    printf("_________________________________________________________________________________________\n\n");   
    printf(" Question 8: \n");  
    printf(" Out of the following membranes, which membrane is mostly present in both Spinal cord and Brain ? \n 1. Meninges \t \t 2. Arachnoids \t \t 3. Plasma Membrane \t \t 4. Pleural membrane \n\n ");    
    
    printf("Please enter your answer: ");    

    scanf("%d", &ans);    

    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
   
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no.  1. Meninges  \n\n");    
    }  
    
           
    printf("_________________________________________________________________________________________\n\n"); 
    printf(" Question 9: \n");  
    printf(" What software company is headquartered in Redmond, Washington ? \n 1. Apple \t \t 2. Google \t \t 3. Netflix \t \t 4. Microsoft \n\n ");    
    
    printf("Please enter your answer: ");    
  
    scanf("%d", &ans);    

    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   

    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 4. Microsoft  \n\n");    
    }  
    printf("_________________________________________________________________________________________\n\n");   
    printf(" Question 10: \n");  
    printf(" What European country experienced the highest rate of population decline from 2015 - 2020 ? \n 1. Lithuania \t \t 2. Germany \t \t 3. Spain \t \t 4. luxembourg \n\n ");    
    
    printf("Please enter your answer: ");    
  
 
    scanf("%d", &ans);    
  
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 1. Lithuania  \n\n");    
    }  
	printf("_________________________________________________________________________________________\n\n");
	printf(" Question 11: \n");  
        printf(" What company was initially known as Blue Ribbon Sports ? \n 1. Addids \t \t 2. Puma \t \t 3. Nike \t \t 4. Gucchi \n\n ");    
    
    printf("Please enter your answer: ");    
  

    scanf("%d", &ans);    
      
 
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 3. Nike \n\n");    
    }    
    

	printf("_________________________________________________________________________________________\n\n");
    printf(" Question 12: \n");  
    printf(" Kratos is the main character of what video game series ? \n 1. God of War \t \t 2. Fortnite \t \t 3. Witcher \t \t 4. PUBG \n\n ");    
    
    printf("Please enter your answer: ");    
  

    scanf("%d", &ans);    
      
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is 1. God of War  \n\n");    
    }    
    
	printf("_________________________________________________________________________________________\n\n");
    printf(" Question 13: \n");  
    printf(" Out of the following languages, which language is the mainly spoken language in the state Meghalaya ? \n 1. Khulu \t \t 2. Thayaari \t \t 3. Naasi \t \t 4. Khasi \n\n ");   
    
    printf("Please enter your answer: ");    
    scanf("%d", &ans);    

    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 4. Khasi \n\n");    
    }    
    

	printf("_________________________________________________________________________________________\n\n");
    printf(" Question 14: \n");  
    printf(" What sports car company manufactures the 911 ? \n 1. Farrari \t \t 2. BMW \t \t 3. Porsche \t \t 4. Lamborghini \n\n ");    
    
    printf("Please enter your answer: ");    
  
    scanf("%d", &ans);    
    
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is 3. Porsche \n\n");    
    }    
    

	printf("_________________________________________________________________________________________\n\n");
    printf(" Question 15: \n");  
    printf(" In what country would you find Mount Kilimanjaro ? \n 1. Uganda \t \t 2.  Zambia \t \t 3. South Sudan \t \t 4. Tanzania \n\n ");    
    
    printf("Please enter your answer: ");    
  
    scanf("%d", &ans);    
       
    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 4. Tanzania \n\n");    
    }    
    printf("_________________________________________________________________________________________\n\n");
    printf(" Question 16: \n");  
    printf(" What is the world's fastest bird? ? \n 1. The Peregrine Falcon \t \t 2. Helmeted Hornbill \t \t 3. Vulturine Guineafowl \t \t 4. Marabou Stork \n\n ");    
    
    printf("Please enter your answer: ");    

    scanf("%d", &ans);    
      
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   

    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 1. The Peregrine Falcon \n\n");    
    }  
    

	printf("_________________________________________________________________________________________\n\n");
    printf(" Question 17: \n");  
    printf(" Out of the following days, when will the lunar eclipse happen ? \n 1. On a full moon night \t \t 2.  On a half moon night \t \t 3. On a Sunny day \t \t 4. On an Equinox \n\n ");      
    printf("Please enter your answer: ");    
    scanf("%d", &ans);    
      

    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
   
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 1. On a full moon night \n\n");    
    }    


	printf("_________________________________________________________________________________________\n\n"); 
    printf(" Question 18: \n");  
    printf(" Out of the following listed cancers, which cancer is the most common type of cancer that kills male people in the entire world ? \n 1. Throat Cancer \t \t 2.  Lung Cancer \t \t 3. Liver Cancer \t \t 4. Skin Cancer \n\n ");    
    
    printf("Please enter your answer: ");    
  

    scanf("%d", &ans);    

    if( ans == 2 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 2. Lung Cancer \n\n");    
    }  
    printf("_________________________________________________________________________________________\n\n");
    printf(" Question 19: \n");  
    printf(" Out of the following listed cancers, which cancer occurs within the bone marrow ? \n 1. Sarcoma \t \t 2.  Myeloma \t \t 3. Leukemia \t \t 4. Lymphoma \n\n ");    
    
    printf("Please enter your answer: ");    
    scanf("%d", &ans);    
      
 
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
 
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 3. Leukemia \n\n");    
    }  
    

	printf("_________________________________________________________________________________________\n\n");
    printf(" Question 20: \n");  
    printf(" Out of the following listed virus, which virus is transmitted through the bite of animals, birds, and insects that are effected with any kind of infections? \n 1. Ebola virus \t \t 2.  Rabies virus \t \t3. Flavi virus \t \t 4. All of the bove \n\n ");    
    
    printf("Please enter your answer: ");    
  
  
    scanf("%d", &ans);    
      
    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf("\n The answer that you have entered is wrong. The correct answer for the above question is option no. 4. All of the above \n\n");    
    }   
    printf("_________________________________________________________________________________________\n\n");
	printf("_________________________________________________________________________________________\n\n");
    
    if(count > 0)    
    {    
        printf("\n\n You have scored %d points \t \n", count * 5 );    
        printf(" Thank you for your interest !! \n");  
        p.score = count * 5;    
  
        // if the score is greater than or equal to 80, 5 star 

        if( p.score >= 80 )    
        {    
            printf("Player rating: 5/5 \n");    
            p.rat = 5;    
        }    
  
 
        else if( p.score >= 60 && p.score < 80 )    
        {    
            printf("Player rating: 4/5 \n");    
            p.rat = 4;    
        }    

        else if(p.score >= 40 && p.score < 60)    
        {    
            printf("Player rating: 3/5 \n");    
            p.rat = 3;    
        }    
 
        else if(p.score >= 20 && p.score < 40)    
        {    
            printf("Player rating: 2/5 \n");    
            p.rat = 2;    
        }    
  
        // if the score is less than 20, the user will be given 1 starred rating or rating 1  
        else if(p.score < 20)    
        {    
            printf("Player rating: *");    
            p.rat = 1;    
        }    
    
        fprintf(fa, "%s %d %d", p.name, p.score, p.rat);    
        fclose(fa);    
    }    
    else    
    {    
        printf(" You have not answered any of the questions with correct answer !! Please try again\n");    
    }    
}