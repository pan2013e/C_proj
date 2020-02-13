/* Game:Hangman
*  Copyright 潘致远 2019.12.22
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXN 20
char words[MAXN];
int guess[MAXN];

/* 为了突出模块化程序设计的思想，
*  游戏被分为各个功能，每个功能都用函数完成
*  
*/


void Msg1(void);         //游戏开始时显示游戏规则
void Msg2(int status);
void InitWord(void); 
void Judge(char c);
int isWin(void);

int main(){
    for(int i=0;i<MAXN;i++){
        guess[i]=0;
        words[i]=0;
    }
    int status=8,cnt=0;
    Msg1();
   // InitWord();
   {
    words[0]=3;
    words[1]='a';
    words[2]='b';
    words[3]='c';
   }
    while(status){
        Msg2(status);
        fflush(stdin);
        Judge(getchar());
        status--;
        if(isWin()){
            printf("\nYou guessed the word: ");
            for(int i=1;i<=words[0];i++){
                printf("%c",words[i]);
            }
            printf("\nYou win!");
            break;
        }
    }
    if(!isWin()){
        printf("\nSorry,you are hanged!");
    }
    return 0;
}

void InitWord(void){
    int len=rand()%5+2;
    words[0]=len;
    for (int i = 1; i <= len; i++)
    {
        words[i]='a'+rand()%26;
    }
}

void Msg1(void){
    printf("Let's play hangman! I will pick a secret word.\n");
    printf("On each turn, you guess a letter.\n");
    printf("If the letter is in the secret word, I will show you where it appears.\n");
    printf("If you make an incorrect guess, part of your body gets strung up on the scaffold.\n");
}
void Msg2(int status){
    printf("The word now looks like this: ");
    for(int i=1;i<=words[0];i++){
        if(guess[i]){
            printf("%c",guess[i]);
        }else{
            printf("-");
        }
    }
    printf("\nYou have %d guesses left.\n",status);
    printf("Your guess: ");
}
void Judge(char c){
    int exist=0;
    for(int i=1;i<=words[0];i++){
        if(words[i]==c){
            guess[i]=c;
            exist=1;
        }
    }
    if(exist){
        printf("That guess is correct.");
    }else{
        printf("There is no %c in the word.",c);
    }
}
int isWin(){
    for(int i=1;i<=words[0];i++){
        if(!guess[i]) return 0;
    }
    return 1;
}