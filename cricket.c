#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int user,cpu,wicket=0,scoreu=0,scorec=0,ball=1,toss_variable;
    char toss;
    
    srand(time(NULL));

      printf("Head Or Tails(H or T)\n");
    scanf("%c",&toss);
    if(toss == 'H' || toss == 'h')
		toss_variable=0;
    else if(toss == 'T'|| toss == 't')
    	toss_variable=1;
    else
    	printf("\nYou can be eliminated!! Play Fair!!\n");
    if(rand()%2==toss_variable)
    	printf("Congratulations!! You Won The Toss\nBut It dont matter cuz,i was too lazy to make game for bowlers\nso I request you to bowl first!!\n");
    else
    	printf("\nyou lost the toss, \nyou will have to bowl first\n");


    printf("Welcome to C cricket!\n\n");
    printf("Rules:\nYou are batting and chasing the given target. \nYou can score runs by entering either 0,1,2,3,4,5,6. \nIf your entered value matches with the value of cpu, then you are out!\n Else you score that many runs. \nYou have 10 wickets in hand and the match will be of 5 overs only.\n Good Luck Mate\n\n");
    
    
    scorec=rand()%60 + 40;
    printf("Target: %d\n", scorec);
    for(;;)
    {
        printf("ball %d\n", ball);
        printf("Your turn: ");
        scanf("%d", &user);
        if(user>6 || user<0)
        {
            printf("Invalid Input. Try again\n");
            continue;
        }
        srand(time(NULL));
        cpu=rand()%6;
        if(user==6 || user==5)
        {
            cpu=rand()%2 + 5;
        }
        if(user==4 || user==3)
        {
            cpu=rand()%3 + 3;
        }
        if(user==2)
        {
            cpu=rand()%4;
        }
        if(user==cpu)
        {
            printf("You are out!\n");
            wicket++;
        }
        if(user!=cpu)
        {
            if(user==4)
                printf("Its a four!\n");
            if(user==6)
                printf("Its a six!\n");
            scoreu=scoreu+user;
        }
        if(wicket==10)
        {
            printf("You are all out!\n");
            printf("Your score: %d/%d\n",scoreu,wicket);
            if(scoreu<scorec)
                printf("You lose!\n");
            if(scoreu==scorec)
                printf("Its a draw!\n");
            break;
        }
        printf("User %d/%d\n", scoreu,wicket);
        ball++;
        if(ball==31)
        {
            printf("Innings over!\nYour score : %d/%d\n", scoreu,wicket);
            if(scoreu<scorec)
                printf("You lose!\n");
            if(scoreu==scorec)
                printf("Its a draw!\n");
            break;
        }
        if(scoreu>scorec)
        {
            printf("You win!\n");
            break;
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
    return 0;
}
