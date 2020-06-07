
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,temp,ls=0,lf=0;
	gameview();
	for(i=1;i<=(ls==1?16:15);i++)
	{
		clrscr();
		if(lf==1)
		{
			i-=1;
			n=fiftyfifty(i);
			lf=2;
		}
		else
		{
			n=setquestion(i);
		}
		temp=i;
		if(ls==1)
			temp-=1;
		if(n==1)
		{
			calculateprize(temp);
		}
		else
		if (n==9)
		{
			n=lifeline(lf,ls);
			if (n==1&&lf==0)
			{
				lf=1;
			}
			else
			if(n==2&&ls==0)
			{
				ls=1;
			}
		}
	}
	getch();
}
int calculateprize(int temp)
{
	int prize=0;
	if(temp>=3&&temp<8)
		prize=3;
	else
	if(temp>=8&&temp<12)
			prize=8;
	else
	if(temp>=12&&temp<15)
			prize=12;
	else
	if(temp==15)
			prize=15;
	if(prize<15)
	{
			printf("\nYou have entered the wrong answer\nBetter Luck Next Time \nYou have earned Rs. %d crore",prize);
			getch();
			exit(0);
	}
	else
			printf("\nYou have entered all answers correctly\nWell Played \nCongratulations!!! \nYou have earned Rs.%d crore",prize);


}

int lifeline(int lf,int ls)
{
		int n;
		clrscr();
		if(lf==0)
			printf("Press 1 for Fifty-Fifty ");
		if(ls==0)
			printf("\nPress 2 for Question Swap ");
		if(ls!=0&&lf!=0)
			printf("No LifeLine available Press any key and press enter to continue");
		scanf("%d",&n);
		return n;
}


int gameview()
{
	clrscr();
	printf ("\n\t\t\t\tWelcome To KBC");
	printf ("\n\nYou will be asked 15 question");
	printf ("\nEach Question Will Give you 1Crore rupees");
	printf ("\n\nRules");
	printf ("\n\nIf You give a wrong answer then the prize money will reduce to checkpoints");
	printf ("\nAnd game will stop");
	printf ("\nYou have 2 Life lines \n1.50-50\n2.Flip the Question");
	printf("\n\n\nPress Any Key to start the game.....");
	getch();
	return 0;
}

int fiftyfifty(int i)
{
     int n;
     switch(i)
		{
		case 1:
			printf("In what direction muslim pray \n1. \n2. \n3.Nearby Mosque's direction \n4.Mecca's direction ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 2:
			printf("Who is the Mother of RAMA in Ramayana \n1.Kousalya\n2.\n3.\n4.Mantra ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==1)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 3:
			printf("What is the Symbol of Nazis(Army of Great Hitler) \n1. \n2.Skull and Bones \n3. \n4.Swastika ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 4:
			printf("Who among these is not an Railway Minister \n1. \n2. \n3.Geetha Mukerjee \n4.George Fernandis ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 5:
			printf("Who Correctly Answered to Yaksha's Questions \n1.Drona \n2. \n3.Yudishtira \n4.");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 6:
			printf("Who Heads Reserve Bank of India\n1.\n2.Commissioner\n3.\n4.Governor");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 7:
			printf("Which of these AnimalsLaughs\n1.Monkey\n2.\n3.\n4.Hyna");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 8:
			printf("Which is the system of Governance in China\n1.communism\n2.communalism\n3.\n4.");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==1)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 9:
			printf("How many Rings does Olympic Symbolhave\n1.\n2.\n3.6\n4.5");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 10:
			printf("Who patronised Kalidas\n1.Akbar\n2.\n3.VikramaAditya\n4.");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 11:
			printf(" Who has been appointed as the new chairman of Central Board of Indirect taxes and Customs (CBIC)?\n1.\n2.VanajaN.Sarna\n3.\n4.S Ramesh");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 12:
			printf(" Who has been appointed as the acting Chairman of the Union Public Service Commission (UPSC)? \n1.ArvindSaxena\n2.SudhaJain\n3.\n4.");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==1)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 13:
			printf(" Pappu Karki, the popular Kumaoni folk singer has passed away. He was native of which state?\n1.\n2.HimachalPradesh\n3.Uttarakhand\n4.");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 14:
			printf("India’s first-ever national police museum will establish in which city?\n1.Chennai\n2.Delhi\n3.\n4.");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==2)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 15:
			printf(" The Central Vigilance Commission (CVC) is in news for appointing Sharad Kumar as new Vigilance Commissioner. As per which committee’s recommendations, the CVC was set up?\n1.\n2.Tejendra Mohan Bhasin commiittee\n3.\n4.K Santhanam commiittee");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 16:
			printf("Which country will host the 45th G7 summit 2019?\n1.Italy\n2.\n3.France\n4.");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		default:
			break;
		}
}


int setquestion(int i)
{
     int n;
     switch(i)
		{
		case 1:
			printf("In what direction muslim pray \n1.East \n2.South \n3.Nearby Mosque's direction \n4.Mecca's direction ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 2:
			printf("Who is the Mother of RAMA in Ramayana \n1.Kousalya\n2.Kaikai \n3.Sumitra \n4.Mantra ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==1)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 3:
			printf("What is the Symbol of Nazis(Army of Great Hitler) \n1.Cross \n2.Skull and Bones \n3.Owl \n4.Swastika ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 4:
			printf("Who among these is not an Railway Minister \n1.Mamtha Banerjee \n2.Lal Bahadur Shastri \n3.Geetha Mukerjee \n4.George Fernandis ");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 5:
			printf("Who Correctly Answered to Yaksha's Questions \n1.Drona \n2.Abimanyu \n3.Yudishtira \n4.Arjuna");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 6:
			printf("Who Heads Reserve Bank of India\n1.Finance Minister\n2.Commissioner\n3.Chief Bank Manager\n4.Governor");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 7:
			printf("Which of these AnimalsLaughs\n1.Monkey\n2.Tiger\n3.Giraffe\n4.Hyna");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 8:
			printf("Which is the system of Governance in China\n1.communism\n2.communalism\n3.Monarchy\n4.Democratic");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==1)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 9:
			printf("How many Rings does Olympic Symbolhave\n1.3\n2.2\n3.6\n4.5");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 10:
			printf("Who patronised Kalidas\n1.Akbar\n2.Chandra Guptha\n3.VikramaAditya\n4.Krishna Devaraya");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 11:
			printf(" Who has been appointed as the new chairman of Central Board of Indirect taxes and Customs (CBIC)?\n1.Johnjoseph\n2.VanajaN.Sarna\n3.MahenderSingh\n4.S Ramesh");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 12:
			printf(" Who has been appointed as the acting Chairman of the Union Public Service Commission (UPSC)? \n1.ArvindSaxena\n2.SudhaJain\n3.KirtiKumar\n4.Omi Agrawal");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==1)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 13:
			printf(" Pappu Karki, the popular Kumaoni folk singer has passed away. He was native of which state?\n1.Jammu&Kashmir\n2.HimachalPradesh\n3.Uttarakhand\n4.Assam");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 14:
			printf("India’s first-ever national police museum will establish in which city?\n1.Chennai\n2.Delhi\n3.Nagpur\n4.Kolkata");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==2)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 15:
			printf(" The Central Vigilance Commission (CVC) is in news for appointing Sharad Kumar as new Vigilance Commissioner. As per which committee’s recommendations, the CVC was set up?\n1.NittoorSrinivasaRaucommiittee\n1.TejendraMohanBhasincommiittee\n3.KVChowdarycommiittee\n4.K Santhanam commiittee");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==4)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		case 16:
			printf("Which country will host the 45th G7 summit 2019?\n1.Italy\n2.Germany\n3.France\n4.Canada");
			printf("\n\nPress 9 for LifeLine....");
			scanf("%d",&n);
			if(n==3)
			{
					return 0;
			}
			else
			{
				if(n==9)
					return 9 ;
				else
					return 1 ;
			}
			break;
		default:
			break;
		}
}
