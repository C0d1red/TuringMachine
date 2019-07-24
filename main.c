#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    const int SIZE = 100;
    bool tape[SIZE];
    char choice;
    int i;
    for(i = 0; i < SIZE; i++){
        tape[i] = 0;
    }
    i = SIZE/2 - 10;
    int n =0;
    int position = 0;
    while(true){
        for(i = 0; i < SIZE; i++){
            if(i > position - 5 && i < position + 5)
                printf(" %d",tape[i]);
        }
        printf("\n");
        for(i = 0; i < SIZE; i++){
            if(i > position - 5 && i < position + 5){
                if(i == position)
                    printf(" ^");
                else
                    printf("  ");
            }
        }
        printf("\nPlease enter action:\n'l' - left\n'r' - right\n'i' - increment\n'd' - dicrement\n");
        do{
            printf("Action: ");
            scanf("%c", &choice);
            getchar();
        } while(choice != 'l' && choice != 'r' && choice != 'i' && choice != 'd');
        printf("\n");
        switch(choice){
            case 'l' :
                if(position > 0)
                    position--;
                else
                    printf("Position is maximum in left\n");
                break;
            case 'r' :
                if(position <SIZE-1)
                    position++;
                else
                    printf("Position is maximum in right\n");
                break;
            case 'i' :
                if(!tape[position])
                    tape[position]++;
                else
                    printf("Position is already 1\n\n");
                break;
            case 'd' :
                if(tape[position])
                    tape[position]--;
                else
                    printf("Position is already 0\n\n");
                break;
        }
    }


    return 0;
}
