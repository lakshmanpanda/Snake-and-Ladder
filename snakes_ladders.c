#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void design()
{
    for(int i=0;i<100;i++)
    {
      if(i<99)
        {
        
        printf("\t\t\t\t\t\t\t\t               *****\n\t\t\t\t\t\t\t\t               * K *\n\t\t\t\t\t\t\t\t               *****\n");
        printf("\t\t\t\t\t\t\t\t          *****\n\t\t\t\t\t\t\t\t          * A *\n\t\t\t\t\t\t\t\t          *****\n");
        printf("\t\t\t\t\t\t\t\t     *****\n\t\t\t\t\t\t\t\t     * N *\n\t\t\t\t\t\t\t\t     *****\n");
        printf("\t\t\t\t\t\t\t\t*****\n\t\t\t\t\t\t\t\t* S *\n\t\t\t\t\t\t\t\t*****\n");
        printf("\t\t\t\t\t\t\t\t     *****\n\t\t\t\t\t\t\t\t     * N *\n\t\t\t\t\t\t\t\t     *****\n");
        printf("\t\t\t\t\t\t\t\t          *****\n\t\t\t\t\t\t\t\t          * A *\n\t\t\t\t\t\t\t\t          *****\n");
        printf("\t\t\t\t\t\t\t\t               *****\n\t\t\t\t\t\t\t\t               * K *\n\t\t\t\t\t\t\t\t               *****\n"); 
        printf("\t\t\t\t\t\t\t\t                    *****\n\t\t\t\t\t\t\t\t                    * E *\n\t\t\t\t\t\t\t\t                    *****\n");    
        
        }
        else
        {
        printf("\t\t\t\t\t\t\t\t               *****     *****\n\t\t\t\t\t\t\t\t               * K *     * K *\n\t\t\t\t\t\t\t\t               *****     *****\n");
        printf("\t\t\t\t\t\t\t\t          *****               *****\n\t\t\t\t\t\t\t\t          * A *               * A *\n\t\t\t\t\t\t\t\t          *****               *****\n");
        printf("\t\t\t\t\t\t\t\t     *****                         *****\n\t\t\t\t\t\t\t\t     * N *                         * N *\n\t\t\t\t\t\t\t\t     *****                         *****\n");
        printf("\t\t\t\t\t\t\t\t*****            *         *            *****\n\t\t\t\t\t\t\t\t* S *           ***       ***           * S *\n\t\t\t\t\t\t\t\t*****           *         *             *****\n");
        printf("\t\t\t\t\t\t\t\t     *****                         *****\n\t\t\t\t\t\t\t\t     * N *                         * N *\n\t\t\t\t\t\t\t\t     *****                         *****\n");
        printf("\t\t\t\t\t\t\t\t          *****               *****\n\t\t\t\t\t\t\t\t          * A *               * A *\n\t\t\t\t\t\t\t\t          *****               *****\n");
        printf("\t\t\t\t\t\t\t\t               *****     *****\n\t\t\t\t\t\t\t\t               * K *     * K *\n\t\t\t\t\t\t\t\t               *****     *****\n");
        printf("\t\t\t\t\t\t\t\t                    *****\n\t\t\t\t\t\t\t\t                    * E *\n\t\t\t\t\t\t\t\t                    *****\n");
        }
    }
}
void snake()
{
    for(int i=0;i<20;i++)
    {
      if(i<19)
        {
        
        printf("\t\t\t\t\t\t\t\t               *****\n\t\t\t\t\t\t\t\t               * K *\n\t\t\t\t\t\t\t\t               *****\n");
        printf("\t\t\t\t\t\t\t\t          *****\n\t\t\t\t\t\t\t\t          * A *\n\t\t\t\t\t\t\t\t          *****\n");
        printf("\t\t\t\t\t\t\t\t     *****\n\t\t\t\t\t\t\t\t     * N *\n\t\t\t\t\t\t\t\t     *****\n");
        printf("\t\t\t\t\t\t\t\t*****\n\t\t\t\t\t\t\t\t* S *\n\t\t\t\t\t\t\t\t*****\n");
        printf("\t\t\t\t\t\t\t\t     *****\n\t\t\t\t\t\t\t\t     * N *\n\t\t\t\t\t\t\t\t     *****\n");
        printf("\t\t\t\t\t\t\t\t          *****\n\t\t\t\t\t\t\t\t          * A *\n\t\t\t\t\t\t\t\t          *****\n");
        printf("\t\t\t\t\t\t\t\t               *****\n\t\t\t\t\t\t\t\t               * K *\n\t\t\t\t\t\t\t\t               *****\n"); 
        printf("\t\t\t\t\t\t\t\t                    *****\n\t\t\t\t\t\t\t\t                    * E *\n\t\t\t\t\t\t\t\t                    *****\n");    
        
        }
        else
        {
        printf("\t\t\t\t\t\t\t\t               *****     *****\n\t\t\t\t\t\t\t\t               * K *     * K *\n\t\t\t\t\t\t\t\t               *****     *****\n");
        printf("\t\t\t\t\t\t\t\t          *****               *****\n\t\t\t\t\t\t\t\t          * A *               * A *\n\t\t\t\t\t\t\t\t          *****               *****\n");
        printf("\t\t\t\t\t\t\t\t     *****                         *****\n\t\t\t\t\t\t\t\t     * N *                         * N *\n\t\t\t\t\t\t\t\t     *****                         *****\n");
        printf("\t\t\t\t\t\t\t\t*****            *         *            *****\n\t\t\t\t\t\t\t\t* S *           ***       ***           * S *\n\t\t\t\t\t\t\t\t*****           *         *             *****\n");
        printf("\t\t\t\t\t\t\t\t     *****                         *****\n\t\t\t\t\t\t\t\t     * N *                         * N *\n\t\t\t\t\t\t\t\t     *****                         *****\n");
        printf("\t\t\t\t\t\t\t\t          *****               *****\n\t\t\t\t\t\t\t\t          * A *               * A *\n\t\t\t\t\t\t\t\t          *****               *****\n");
        printf("\t\t\t\t\t\t\t\t               *****     *****\n\t\t\t\t\t\t\t\t               * K *     * K *\n\t\t\t\t\t\t\t\t               *****     *****\n");
        printf("\t\t\t\t\t\t\t\t                    *****\n\t\t\t\t\t\t\t\t                    * E *\n\t\t\t\t\t\t\t\t                    *****\n");
        }
    }
}
void display(int dicer,char pla[5])
{
    if(dicer==100)
    {
        printf("----------CONGRATULATIONS----------\n%s is the winner\n",pla);
        exit(0);
    }
    for(int i=10;i>=1;i--)
        {
            if(i%2==0)
                {
                    for(int j=(i*10);j>(10*(i-1));j--)
                        {
                            if(dicer==j)
                                {
                                    printf("%s\t",pla);
                                }
                            else
                                {
                                    printf("%d\t",j);        
                                }
                        }
                        printf("\n");
                }
            else
                {
                    for(int j=(10*(i-1))+1;j<=(10*i);j++)
                        {
                            if(dicer==j)
                                {
                                    printf("%s\t",pla);
                                }
                            else
                                {
                                    printf("%d\t",j);        
                                }
                        }
                        printf("\n");
                }
        }
}
int rd()
{
	int rem;
	A:{ srand(time(NULL));
        rem=rand()%7;}
	if(rem==0)
		goto A;
	else
		return rem;
}
int main()
{
    int pos1=0;
    int pos2=0;
    int dice;
    int pla;
    design();
    while(1)
      {
        printf("----------------------SNAKE AND LADDER-----------------\n");
        printf("Snakes~   14 to 4 ,\t45 to 1 ,\t75 to 58,\t94 to 29,\t99 to 60\n");//snakes
        printf("Ladder=   5  to 60,\t12 to 31,\t34 to 77,\t56 to 92,\t71 to 90\n");//Ladders
        printf("1.Player 1 turn\n2.Player 2 turn\n3.Exit\n");
        printf("Choose your no.::");
        scanf("%d",&pla);
            switch(pla)
                {
                    case 1: dice=rd();
                            system("cls");
                              printf("\t\t\t\tDice=%d\n",dice);
                              if(dice==6)
                                {
                                    printf("Player 1 got another chance\n");
                                }
                              pos1+=dice;
                              if(pos1<101)
                                {
                                    if(pos1==14)
                                    {
                                            snake();
                                            display(4,"#P1#");//snake
                                            pos1=4;
                                            break;
                                    }
                                    if(pos1==45)
                                    {
                                            snake();
                                            display(1,"#P1#");//snake
                                            pos1=1;
                                            break;
                                    }
                                    if(pos1==75)
                                    {
                                            snake();
                                            display(58,"#P1#");//snake
                                            pos1=58;
                                            break;
                                    }
                                    if(pos1==94)
                                    {
                                            snake();
                                            display(29,"#P1#");//snake
                                            pos1=29;
                                            break;
                                    }
                                    if(pos1==99)
                                    {
                                            snake();
                                            display(60,"#P1#");//snake
                                            pos1=60;
                                            break;
                                    }
                                    if(pos1==5)
                                    {
                                            display(26,"#P1#");//ladder
                                            pos1=26;
                                            break;
                                    }
                                    if(pos1==12)
                                    {
                                            display(31,"#P1#");//ladder
                                            pos1=31;
                                            break;
                                    }
                                    if(pos1==34)
                                    {
                                            display(77,"#P1#");//ladder
                                            pos1=77;
                                            break;
                                    }
                                    if(pos1==56)
                                    {
                                            display(92,"#P1#");//ladder
                                            pos1=92;
                                            break;
                                    }
                                    if(pos1==71)
                                    {
                                            display(90,"#P1#");//ladder
                                            pos1=90;
                                            break;
                                    }
                                    else
                                    {
                                            display(pos1,"#P1#");
                                    }
                                }
                              else
                                {
                                    pos1-=dice;
                                    printf("\t\tRnage exceeded of Player 1\n");
                                    display(pos1,"#P1#");
                                }
                              printf("Player 2 position is %d\n",pos2);
                            
                              break;
                    case 2: dice=rd();
                            system("cls");
                              printf("\t\t\t\tDice=%d\n",dice);
                              if(dice==6)
                                {
                                    printf("Player 2 got another chance\n");
                                }
                              pos2+=dice;
                              if(pos2<101)
                                {
                                    if(pos2==14)
                                    {
                                            snake();
                                            display(4,"#P2#");//snake
                                            pos2=4;
                                            break;
                                    }
                                    if(pos2==45)
                                    {
                                            snake();
                                            display(1,"#P2#");//snake
                                            pos2=1;
                                            break;
                                    }
                                    if(pos2==75)
                                    {
                                            snake();
                                            display(58,"#P2#");//snake
                                            pos2=58;
                                            break;
                                    }
                                    if(pos2==94)
                                    {
                                            snake();
                                            display(29,"#P2#");//snake
                                            pos2=29;
                                            break;
                                    }
                                    if(pos2==99)
                                    {
                                            snake();
                                            display(60,"#P2#");//snake
                                            pos2=60;
                                            break;
                                    }
                                    if(pos2==5)
                                    {
                                            display(26,"#P2#");//ladder
                                            pos2=26;
                                            break;
                                    }
                                    if(pos2==12)
                                    {
                                            display(31,"#P2#");//ladder
                                            pos2=31;
                                            break;
                                    }
                                    if(pos2==34)
                                    {
                                            display(77,"#P2#");//ladder
                                            pos2=77;
                                            break;
                                    }
                                    if(pos2==56)
                                    {
                                            display(92,"#P2#");//ladder
                                            pos2=92;
                                            break;
                                    }
                                    if(pos2==71)
                                    {
                                            display(90,"#P2#");//ladder
                                            pos2=90;
                                            break;
                                    }
                                    else
                                    {
                                            display(pos2,"#P2#");
                                    }
                                }
                              else
                                {
                                    pos2-=dice;
                                    printf("\t\tRange exceeded of Player 2\n");
                                    display(pos2,"#P2#");
                                }
                              printf("Player 1 position is %d\n",pos1);
                            
                              break;
                    case 3 :  exit(0);
                              break;
                    default:  printf("Invalid Choice.Choose again!\n");
                            break;
                }
      }        
}