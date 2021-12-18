#include<stdio.h>


void dashBordView();
void computer(int userInput);
int isThisUse (int num) ;
char dataBox[3][3];
int i=0,j=0;
char ind[10];

void dashBordView() {

    printf("\n\n\n \t %c \t %c \t %c",dataBox[0][0],dataBox[0][1],dataBox[0][2]);
    printf("\n");
    printf("-----------|-----------|--------------- \n");
    printf("\t %c \t %c \t %c",dataBox[1][0],dataBox[1][1],dataBox[1][2]);
    printf("\n");
    printf("-----------|-----------|--------------\n");
    printf("\t %c \t %c \t %c \n\n",dataBox[2][0],dataBox[2][1],dataBox[2][2]);

}



int isThisUse(int num) {
    if(ind[num]=='e')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void computer(int userInput) {
    int val = userInput;
    while(val) {

        if(!isThisUse(val)) {
            //*(*(dataBox+2)+1) = 'D';
            if(val <= 3) {
                dataBox[0][val-1]='O';
            }
            else if(3 < val && val <= 6)
            {
                dataBox[1][val-4]='O';
            }
            else
            {
                dataBox[2][val-7]='O';
            }
            ind[val]='O';
            printf("\n Computer Is select 'O' in cell : %d",val);
            
            return ;
        }
        else {
            val=val-1;
        }

    }

    val=userInput;
    while(val<10) {

        if(!isThisUse(val)) {
            //*(*(dataBox+2)+1) = 'D';
            if(val <= 3) {
                dataBox[0][val-1]='O';
            }
            else if(3 > val && val <= 6)
            {
                dataBox[1][val-4]='O';
            }
            else
            {
                dataBox[2][val-7]='O';
            }
            ind[val]='O';
            printf("\n Computer Is select 'O' in cell : %d",val);
            return ;
        }
        else {
            val=val+1;
        }

    }


    return ;
}


char winner(char c1, int n1) {
    if(n1 == 1) {

        if((dataBox[0][0] == dataBox[0][1]) && (dataBox[0][0] == dataBox[0][2]) )
        {
            return c1;
        }
        else if((dataBox[1][0] == dataBox[0][0]) && (dataBox[1][0] == dataBox[2][0])) {
            return c1;

        }
        else if((dataBox[0][0] == dataBox[1][1]) && (dataBox[0][0] == dataBox[2][2])) {
            return c1;
        }

    }
    else if(n1 == 2) {

        if((dataBox[0][0] == dataBox[0][1]) && (dataBox[0][0] == dataBox[0][2]) )
        {
            return c1;
        }
        else if((dataBox[0][1] == dataBox[1][1]) && (dataBox[1][1] == dataBox[2][1])) {
            return c1;

        }


    }

    else if(n1 == 3) {

        if((dataBox[0][0] == dataBox[0][1]) && (dataBox[0][0] == dataBox[0][2]) )
        {
            return c1;
        }
        else if((dataBox[0][2] == dataBox[1][2]) && (dataBox[1][2] == dataBox[2][2])) {
            return c1;

        }

        else if((dataBox[0][2] == dataBox[1][1]) && (dataBox[1][1] == dataBox[2][0])) {
            return c1;

        }

    }

    else if(n1 == 4) {

        if((dataBox[1][0] == dataBox[0][0]) && (dataBox[1][0] == dataBox[2][0])) {
            return c1;

        }
        else if((dataBox[1][0] == dataBox[1][1]) && (dataBox[1][1] == dataBox[1][2])) {
            return c1;

        }


    }

    else if(n1 == 5) {

        if((dataBox[0][1] == dataBox[1][1]) && (dataBox[1][1] == dataBox[2][1])) {
            return c1;

        }

        else if((dataBox[1][0] == dataBox[1][1]) && (dataBox[1][1] == dataBox[1][2])) {
            return c1;

        }

        else if((dataBox[0][0] == dataBox[1][1]) && (dataBox[0][0] == dataBox[2][2])) {
            return c1;
        }

        else if((dataBox[0][2] == dataBox[1][1]) && (dataBox[1][1] == dataBox[2][0])) {
            return c1;

        }


    }

    else if(n1 == 6) {

        if((dataBox[1][0] == dataBox[1][1]) && (dataBox[1][1] == dataBox[1][2])) {
            return c1;

        }
        else if((dataBox[0][2] == dataBox[1][2]) && (dataBox[1][2] == dataBox[2][2])) {
            return c1;

        }

    }
    
    
     else if(n1 == 7) {

        if((dataBox[1][0] == dataBox[0][0]) && (dataBox[1][0] == dataBox[2][0])) {
            return c1;

        }
        else if((dataBox[2][0] == dataBox[2][1]) && (dataBox[2][0] == dataBox[2][2])) {
            return c1;

        }

        else if((dataBox[0][2] == dataBox[1][1]) && (dataBox[1][1] == dataBox[2][0])) {
            return c1;

        }
    }

      else if(n1 == 8) {

        if((dataBox[2][0] == dataBox[2][1]) && (dataBox[2][0] == dataBox[2][2])) {
            return c1;

        }
        else if((dataBox[0][1] == dataBox[1][1]) && (dataBox[1][1] == dataBox[2][1])) {
            return c1;

        }

    }
     else if(n1 == 9) {

        if((dataBox[2][0] == dataBox[2][1]) && (dataBox[2][0] == dataBox[2][2])) {
            return c1;

        }
         else if((dataBox[0][2] == dataBox[1][2]) && (dataBox[1][2] == dataBox[2][2])) {
            return c1;

        }
        else if((dataBox[0][0] == dataBox[1][1]) && (dataBox[0][0] == dataBox[2][2])) {
            return c1;
        }
    }
    
    
}


void main()
{
int temp =1;
    for(i=0; i<10; i++)
    {

        ind[i]='e';
    }
    int userChoice;

    /*for(i=0; i<3; i++)
     {
         for(j=0; j<3; j++) {
             dataBox[i][j];
         }


     }*/

    dashBordView();
    // *(*(dataBox+2)+1) = 'D';

    for(i=1; i<=5; i++) {
        printf("\n select a cell(1,9) for put 'X' : ");
        scanf("%d",&userChoice);

        if(userChoice <= 3) {
            dataBox[0][userChoice-1]='X';
        }
        else if(3 > userChoice && userChoice <= 6)
        {
            dataBox[1][userChoice-4]='X';
        }
        else
        {
            dataBox[2][userChoice-7]='X';
        }
        
        ind[userChoice] = 'X';
        printf("\n     you are select 'X' in cell : %d",userChoice);
        computer(userChoice);
        
        dashBordView();
        
        char c = 't';
	c =  winner('u', userChoice);
        
        if(c == 'u'){
        temp=0;
        printf("\n\n\n ..... Wow You Win This Game.......");
        break;
        }
        
        c = winner('c', userChoice);
        if(c == 'c')
        {
        
         printf("\n\n\n ..... Computer Win This Game.......");
        break;
        }

    }
 printf("\n\n\n ..... This Game Is Tie .......");

}
