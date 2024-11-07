// TO make a game 2048 (method with writing if saperate)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<string.h>
#include <conio.h>
int main()
{
	int i,j,arrow,count=0,cnt=3,cntz=0,l,cnnt=15,fine=1,random,pak,t=-1,save=0,ii,jj,hawa,pp=1,torf,skr,bonus,score=0;;
	int a[4][4],cpy[4][4];
	char trg;
		

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)  // first loop to show value to all array
		{
			a[i][j]=0;
			cpy[i][j]=0;
		}
	}
	cpy[3][1]=4;
	printf("\n");
	
	
	printf("Enter W,S,A,D to play the game :)\n\n");
	
while(true)    // infinite loop
{

        pp=1;
   		for(i=0;i<4;i++)
	    {
		for(j=0;j<4;j++)  // to print copy
		{
			if(cpy[i][j]!=a[i][j])
			{
			pp=2;
			}
		}
	   }


		srand(time(0));
		random = (rand()%(cnnt))+1; // randomizer
		cnnt=0;

		srand(time(0));
		torf = (rand()%(2))+1; // randomizer
		if(torf==1)
		torf=2;
		else
		torf=4;
		printf("\t\t\t\t\t\t\t\t\t\t\t\tScore = %d",score);
		if(bonus!=0)
		printf(" Bonus+ %d\n\n\n",bonus);
		else
		printf("\n");
		score++;
		score+=bonus;
		bonus=0;
		for(i=0;i<4;i++)
	    {
		for(j=0;j<4;j++)  // to print 2 in random
		{
			if(a[i][j]==0 && pp==2)
			{
				if(fine==random)
				{
					a[i][j]=torf;
				}
				fine++;	
			}
			if(a[i][j]!=0)
			printf("    |      %d\t\t",a[i][j]);
			else
			printf("    |        \t\t");
		}
		printf(" | \n\n\n\n\n\n");
	   }
	   fine=1;
	   random=0;

   
   		for(i=0;i<4;i++)
	    {
		for(j=0;j<4;j++)  // to print copy
		{
			cpy[i][j]=a[i][j];
		}
	   }
	   

	if(kbhit){
		
	trg = getch();
   if((int)trg==27){
   	break;
   }

if(trg=='w')
{
				for(i=0;i<4;i++)
		{
			t=t+1;
			for(j=0;j<4;j++)
			{

				if(a[j][i]!=0 && i==t) // to combine
				{
					if (a[j][i]==save)
					{
						if(a[i][j]>=32)
						bonus+=3;
						else if(a[i][j]>=64)
				   bonus+=10;
				else if(a[i][j]>=256)
				bonus+=20;
					a[j][i]*=2;
					a[jj][ii]=0;	
					save=0;
					}
					else
					{
					save=a[j][i];
					ii=i;
					jj=j;
				    }
			    }
			    	if(j==3)
					{
						save=0;
						ii=0;
						jj=0;
					}
			}
		}
		t=-1;
		save=0;
		
		
				for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				if(a[j][i]!=0)
				{
					pak=a[j][i];
					a[j][i]=0;
					a[cntz][i]=pak;
					cntz++;
				}
				else
				cnnt++;
			}
			cntz=0;
		}
	}
else if(trg=='a')
	{
						for(i=0;i<4;i++)
		{
			t=t+1;
			for(j=0;j<4;j++)
			{

				if(a[i][j]!=0 && i==t) 
				{
					if (a[i][j]==save)
					{
						if(a[i][j]>=32)
						bonus+=3;
						else if(a[i][j]>=64)
				   bonus+=10;
				else if(a[i][j]>=256)
				bonus+=20;
					a[i][j]*=2;
					a[ii][jj]=0;	
					save=0;
					}
					else
					{
					save=a[i][j];
					ii=i;
					jj=j;
				    }
			    }
			    	if(j==3)
					{
						save=0;
						ii=0;
						jj=0;
					}
			}
		}
		t=-1;
		save=0;
		
		
				for(i=0;i<4;i++) 
		{
			for(j=0;j<4;j++)
			{
				if(a[i][j]!=0)
				{
					pak=a[i][j];
					a[i][j]=0;
					a[i][cntz]=pak;
					cntz++;
				}
				else
				cnnt++;
			}
			cntz=0;
		}
	}
else if(trg=='d')
{
					for(i=0;i<4;i++)
		{
			t=t+1;
			for(j=3;j>=0;j--)
			{

				if(a[i][j]!=0 && i==t) 
				{
					if (a[i][j]==save)
					{
						if(a[i][j]>=32)
						bonus+=3;
						else if(a[i][j]>=64)
				   bonus+=10;
				else if(a[i][j]>=256)
				bonus+=20;
					a[i][j]*=2;
					a[ii][jj]=0;	
					save=0;
					}
					else
					{
					save=a[i][j];
					ii=i;
					jj=j;
				    }
			    }
			    	if(j==0)
					{
						save=0;
						ii=0;
						jj=0;
					}
			}
		}
		t=-1;
		save=0;
		
		
				for(i=0;i<4;i++) 
		{
			for(j=3;j>=0;j--)
			{
				if(a[i][j]!=0)
				{
					pak=a[i][j];
					a[i][j]=0;
					a[i][cnt]=pak;
					cnt--;
				}
				else
				cnnt++;
			}
			cnt=3;
		}
}
else if(trg=='s')
{
				for(i=0;i<4;i++)
		{
			t=t+1;
			for(j=3;j>=0;j--)
			{

				if(a[j][i]!=0 && i==t) // to combine
				{
					if (a[j][i]==save)
					{
						if(a[i][j]>=32)
						bonus+=3;
						else if(a[i][j]>=64)
				   bonus+=10;
				else if(a[i][j]>=256)
				bonus+=20;
					a[j][i]*=2;
					a[jj][ii]=0;	
					save=0;
					}
					else
					{
					save=a[j][i];
					ii=i;
					jj=j;
				    }
			    }
			    	if(j==0)
					{
						save=0;
						ii=0;
						jj=0;
					}
			}
		}
		t=-1;
		save=0;
		
		
				for(i=0;i<4;i++) // to keep in one direction
		{
			for(j=3;j>=0;j--)
			{
				if(a[j][i]!=0)
				{
					pak=a[j][i];
					a[j][i]=0;
					a[cnt][i]=pak;
					cnt--;
				}
				else
				cnnt++;
			}
			cnt=3;
		}
}
}
}
}

