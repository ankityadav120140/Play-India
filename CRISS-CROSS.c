int box[11][11],pi[9],k=0;
void main()
{
    instruction();
    there:
    setup();
    system("color 2");
    int p,i,j;
    for(i=0;i<9;i++)
    {
        here:
        display();
        while(1)
        {if(i%2==0)
        printf("Player 1 Enter position:");
        else
            printf("Player 2 Enter position:");

        scanf("%d",&p);

        if(p>0&&p<10)
        break;
        }

        for(j=0;j<i;j++)
            if(p==pi[j])
        {
            printf("\nPosition not available!!\nPress any key to enter again");
            getch();
            system("cls");
            goto here;
        }
            pi[i]=p;
        if(i%2==0)
        put1(p);
        else
        put2(p);
        display();
        check(p,i);
        if(k!=0)
            break;
    }
    display();
    if(play()==1)
    goto there;
    else
        exit1();
    getch();
}
void display()
{
    system("cls");
    printf("\t\t\t\t\t\t1   2   3\n\t\t\t\t\t\t4   5   6\n\t\t\t\t\t\t7   8   9\n\n\n");
    int a,b;
    for(a=0;a<11;a++)
    {
        printf("\t\t\t\t\t\t");
        for(b=0;b<11;b++)
        {
            if(box[a][b]==0)
                printf(" ");
            else
                printf("%c",box[a][b]);
        }
        printf("\n");
    }
}
void put1(int p)
{
    switch(p)
    {
    case 1:
        box[0][0]='\\';
        box[0][2]='/';
        box[1][1]='*';
        box[2][0]='/';
        box[2][2]='\\';
        break;
    case 2:
         box[0][4]='\\';
        box[0][6]='/';
        box[1][5]='*';
        box[2][4]='/';
        box[2][6]='\\';
        break;
    case 3:
         box[0][8]='\\';
        box[0][10]='/';
        box[1][9]='*';
        box[2][8]='/';
        box[2][10]='\\';
        break;
    case 4:
         box[4][0]='\\';
        box[4][2]='/';
        box[5][1]='*';
        box[6][0]='/';
        box[6][2]='\\';
        break;
    case 5:
         box[4][4]='\\';
        box[4][6]='/';
        box[5][5]='*';
        box[6][4]='/';
        box[6][6]='\\';
        break;
    case 6:
         box[4][8]='\\';
        box[4][10]='/';
        box[5][9]='*';
        box[6][8]='/';
        box[6][10]='\\';
        break;
    case 7:
         box[8][0]='\\';
        box[8][2]='/';
        box[9][1]='*';
        box[10][0]='/';
        box[10][2]='\\';
        break;
    case 8:
         box[8][4]='\\';
        box[8][6]='/';
        box[9][5]='*';
        box[10][4]='/';
        box[10][6]='\\';
        break;
    case 9:
         box[8][8]='\\';
        box[8][10]='/';
        box[9][9]='*';
        box[10][8]='/';
        box[10][10]='\\';
        break;
    default :
        break;
    }
}
void put2(int p)
{
    switch(p)
    {
    case 1:
        box[0][1]='=';
        box[1][0]='\xc7';
        box[1][1]='O';
        box[1][2]='\xb9';
        box[2][1]='=';
        break;
    case 2:
        box[0][5]='=';
        box[1][4]='\xc7';
        box[1][5]='O';
        box[1][6]='\xb9';
        box[2][5]='=';
        break;
    case 3:
        box[0][9]='=';
        box[1][8]='\xc7';
        box[1][9]='O';
        box[1][10]='\xb9';
        box[2][9]='=';
        break;
    case 4:
        box[4][1]='=';
        box[5][0]='\xc7';
        box[5][1]='O';
        box[5][2]='\xb9';
        box[6][1]='=';
        break;
    case 5:
         box[4][5]='=';
        box[5][4]='\xc7';
        box[5][5]='O';
        box[5][6]='\xb9';
        box[6][5]='=';
        break;
    case 6:
         box[4][9]='=';
        box[5][8]='\xc7';
        box[5][9]='O';
        box[5][10]='\xb9';
        box[6][9]='=';
        break;
    case 7:
         box[8][1]='=';
        box[9][0]='\xc7';
        box[9][1]='O';
        box[9][2]='\xb9';
        box[10][1]='=';
        break;
    case 8:
       box[8][5]='=';
        box[9][4]='\xc7';
        box[9][5]='O';
        box[9][6]='\xb9';
        box[10][5]='=';
        break;
    case 9:
        box[8][9]='=';
        box[9][8]='\xc7';
        box[9][9]='O';
        box[9][10]='\xb9';
        box[10][9]='=';
        break;
    default :
        break;
    }
}
void check(int p,int i)
{
    if(i%2==0)
    {
     switch(p)
    {
    case 1:
        if(box[1][1]=='*'&&box[1][5]=='*'&&box[1][9]=='*'||box[1][1]=='*'&&box[5][1]=='*'&&box[9][1]=='*'||box[1][1]=='*'&&box[5][5]=='*'&&box[9][9]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 2:
        if(box[1][1]=='*'&&box[1][5]=='*'&&box[1][9]=='*'||box[1][5]=='*'&&box[5][5]=='*'&&box[9][5]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 3:
        if(box[1][1]=='*'&&box[1][5]=='*'&&box[1][9]=='*'||box[1][9]=='*'&&box[5][5]=='*'&&box[9][1]=='*'||box[1][9]=='*'&&box[5][9]=='*'&&box[9][9]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 4:
        if(box[1][1]=='*'&&box[5][1]=='*'&&box[9][1]=='*'||box[5][1]=='*'&&box[5][5]=='*'&&box[5][9]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 5:
        if(box[1][1]=='*'&&box[5][5]=='*'&&box[9][9]=='*'||box[1][5]=='*'&&box[5][5]=='*'&&box[9][5]=='*'||box[1][9]=='*'&&box[5][5]=='*'&&box[9][1]=='*'||box[5][1]=='*'&&box[5][5]=='*'&&box[5][9]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 6:
        if(box[1][9]=='*'&&box[5][9]=='*'&&box[9][9]=='*'||box[5][1]=='*'&&box[5][5]=='*'&&box[5][9]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 7:
        if(box[1][1]=='*'&&box[5][1]=='*'&&box[9][1]=='*'||box[9][1]=='*'&&box[5][5]=='*'&&box[1][9]=='*'||box[9][1]=='*'&&box[9][5]=='*'&&box[9][9]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 8:
        if(box[9][1]=='*'&&box[9][5]=='*'&&box[9][9]=='*'||box[9][5]=='*'&&box[5][5]=='*'&&box[1][5]=='*')
            {
                printf("Player 1 won!!");
                k++;
                getch();
            }
            break;
    case 9:
        if(box[1][1]=='*'&&box[5][5]=='*'&&box[9][9]=='*'||box[9][1]=='*'&&box[9][5]=='*'&&box[9][9]=='*'||box[9][9]=='*'&&box[5][9]=='*'&&box[1][9]=='*')
           {
             printf("Player 1 won!!");
             k++;
            getch();
           }
            break;
    }
    }
    else
    {
          switch(p)
    {
    case 1:
        if(box[1][1]=='O'&&box[1][5]=='O'&&box[1][9]=='O'||box[1][1]=='O'&&box[5][1]=='O'&&box[9][1]=='O'||box[1][1]=='O'&&box[5][5]=='O'&&box[9][9]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 2:
        if(box[1][1]=='O'&&box[1][5]=='O'&&box[1][9]=='O'||box[1][5]=='O'&&box[5][5]=='O'&&box[9][5]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 3:
        if(box[1][1]=='O'&&box[1][5]=='O'&&box[1][9]=='O'||box[1][9]=='O'&&box[5][5]=='O'&&box[9][1]=='O'||box[1][9]=='O'&&box[5][9]=='O'&&box[9][9]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 4:
        if(box[1][1]=='O'&&box[5][1]=='O'&&box[9][1]=='O'||box[5][1]=='O'&&box[5][5]=='O'&&box[5][9]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 5:
        if(box[1][1]=='O'&&box[5][5]=='O'&&box[9][9]=='O'||box[1][5]=='O'&&box[5][5]=='O'&&box[9][5]=='O'||box[1][9]=='O'&&box[5][5]=='O'&&box[9][1]=='O'||box[5][1]=='O'&&box[5][5]=='O'&&box[5][9]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 6:
        if(box[1][9]=='O'&&box[5][9]=='O'&&box[9][9]=='O'||box[5][1]=='O'&&box[5][5]=='O'&&box[5][9]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 7:
        if(box[1][1]=='O'&&box[5][1]=='O'&&box[9][1]=='O'||box[9][1]=='O'&&box[5][5]=='O'&&box[1][9]=='O'||box[9][1]=='O'&&box[9][5]=='O'&&box[9][9]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 8:
        if(box[9][1]=='O'&&box[9][5]=='O'&&box[9][9]=='O'||box[9][5]=='O'&&box[5][5]=='O'&&box[1][5]=='O')
            {
                printf("Player 2 won!!");
                k++;
                getch();
            }
            break;
    case 9:
        if(box[1][1]=='O'&&box[5][5]=='O'&&box[9][9]=='O'||box[9][1]=='O'&&box[9][5]=='O'&&box[9][9]=='O'||box[9][9]=='O'&&box[5][9]=='O'&&box[1][9]=='O')
           {
             printf("Player 2 won!!");
             k++;
            getch();
           }
            break;
    }
    }
}

void instruction()
{
    system("cls");
    int i1;
    system("color 4");
    printf("\t\t\t\t\t\tINSTRUCTIONS\n\n\n");
     printf("player 1 takes:\n\\ /\n * \n/ \\\n");
    printf("\n\nPlayer 2 takes:\n = \n\xc7O\xb9\n = \n");
    printf("\n\n\n\t\t\t\t\tPress any key to continue");
        for(i1=0;i1<3;i1++)
        {
            printf(".");
            wait(10000);
        }
        if(kbhit())
        {
          return;
        }
        instruction();
}
void wait(int x1)
{
    int x2,x3;
    for(x2=0;x2<x1;x2++)
        for(x3=0;x3<x1;x3++)
    {
    }
}

int play()
{
    system("cls");
    int choice;
    printf("Enter your choice:\n1.Play again\n2.Exit\n");
    scanf("%d",&choice);
    return(choice);
}

void setup()
{
    k=0;
    int set1,set2;
    for(set1=0;set1<11;set1++)
    {
        for(set2=0;set2<11;set2++)
        {
            box[set1][set2]=0;
        }
    }
    for(set1=0;set1<11;set1++)
    {
        pi[set1]=0;
    }
}

void exit1()
{
    system("cls");
    system("color 1");
    printf("\n\n\n\n\n\n\t\t\t\t\tHope you enjoyed!!!\n\n\n\n\n\n");
    getch();
}


