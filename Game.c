#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int mygame(char you, char comp){

    if(you==comp){
        return 0;
    } if (you=='s' && comp=='w')
    {
        return 1;
    }else if (you=='s' && comp=='w')
    {
        return -1;
    }if (you=='w' && comp=='g')
    {
        return 1;
    }else if (you=='w' && comp=='s')
    {
        return -1;
    }if (you=='g' && comp=='s')
    {
        return 1;
    }else if (you=='g' && comp=='w')
    {
        return -1;
    }   

}
int main()
{
    char you,comp;
    int num;
    // comp='s';
    srand(time(0));
    num=rand()%100 + 1;//(%100 +1 generate random number between 1 to 100)
    if(num<30){
        comp='s';
    }else if (num>30 && num<60)
    {
       comp='w';
    }else{
        comp='g';
    }
    
    printf("Enter 's' for snake 'w' for water 'g' for gun : ");
    scanf("%c",&you);
    printf("you choice %c and computer choice %c",you,comp);
    int result=mygame(you,comp);
    // printf("%d",result);
    if(result==0){
        printf("Game Draw");
    }else if (result==1)
    {
        printf("You win");
        
    }else{
        printf("You Loss");
    }
    
        
    return 0;
}