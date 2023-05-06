//To make a game where a random number is generated and user guesses the number 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number, guess,attempt=1;
srand(time(0));
number=rand()%100+1;//to generate random number between 0 to 100
//printf("The number is %d",number);

do{
    printf("Enter your number between (0-100):\n");
scanf("%d",&guess);
if (guess>number)
{
   printf("Lower number please\n");

}
else if(guess<number){
printf("Higher number please\n");


}
else{
    printf("You guessed the right number in %d attempts \n ",attempt);
}
attempt++;




}while(guess!=number);
return 0;

}