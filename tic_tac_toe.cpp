#include<iostream>
using namespace std;
int check(int y,int z);
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char p='X',s;
int flag=0,turn=0,cpuch,flagx=0;
int choice;
string n,m;
void draw()
{
//	system("cls");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

void input(int q)
{
	if(q==1 && a[0][0]=='1')
	a[0][0]=p;
	
	else if(q==2 && a[0][1]=='2')
	a[0][1]=p;
	
	else if(q==3 && a[0][2]=='3')
	a[0][2]=p;
	
	else if(q==4 && a[1][0]=='4')
	a[1][0]=p;
	
	else if(q==5 && a[1][1]=='5')
	a[1][1]=p;
	
	else if(q==6 && a[1][2]=='6')
	a[1][2]=p;
	
	else if(q==7 && a[2][0]=='7')
	a[2][0]=p;
	
	else if(q==8 && a[2][1]=='8')
	a[2][1]=p;
	
	else if(q==9 && a[2][2]=='9')
	a[2][2]=p;
	else
	cout<<"try again"<<endl;
}

void toggle()
{
	if(p=='X')
	p='O';
	else
	p='X';
}

void win()
    {
	if(a[0][0]==a[0][1] && a[0][1]==a[0][2])
	{
	cout<<"win"<<" ";
	s=a[0][0];
     flag=1;
    }
	else if(a[1][0]==a[1][1] && a[1][1]==a[1][2])
	{
	cout<<"win"<<" ";
	s=a[1][0];
	     flag=1;
}
	
	else if(a[2][0]==a[2][1] && a[2][1]==a[2][2])
{
		cout<<"win"<<" ";
		s=a[2][0];
	     flag=1;
}
    else if(a[0][0]==a[1][0] && a[1][0]==a[2][0])
{
		cout<<"win"<<" ";
		s=a[0][0];
	     flag=1;
}
	else if(a[0][1]==a[1][1] && a[1][1]==a[2][1])
{
		cout<<"win"<<" ";
		s=a[0][1];
	     flag=1;
}
	else if(a[0][2]==a[1][2] && a[1][2]==a[2][2])
{
		cout<<"win"<<" ";
		s=a[0][2];
	     flag=1;
}
	else if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
{
		cout<<"win"<<" ";
		s=a[0][0];
	     flag=1;
}
	else if(a[0][2]==a[1][1] && a[1][1]==a[2][0])
     {
		cout<<"win"<<" ";
		s=a[0][3];
     flag=1;
 }
 if(s=='X' && flag==1)
 cout<<n<<endl;
 else if (s=='O' && flag==1)
 cout<<m<<endl;
}

int cpu()
{
//	cout<<"ketan"<<endl;
	int countx=0,county=0,countd=0,x,countv=0;
	if(turn==1)
	{
		if(a[0][0]=='X' && a[2][2]=='X')
		{
			x=check(2,0);
			flagx=1;
			return x;
		}
	}
	
	
     if(turn>=1 && flagx==0)
  {
   for(int i=0;i<3;i++)
   {
   	flagx=0;
     for(int j=0;j<3;j++)
     {
     	if(a[i][j]=='X')
     	countx++;
     	
     	if(a[j][i]=='X')
     	county++;
	 }
   
	 if(countx==2)
	 {
	 	for(int j=0;j<3;j++)
	 	{
	 		if(a[i][j]!='X' && a[i][j]!='O')
	 		{
	 			flagx=1;
	 			x=check(i,j);
	 			cout<<x<<endl;
			 return x;
	 		break;
	 	}
		 }
	 }
//	 cout<<"countyy="<<county<<endl;
     if(county==2 && flag==0)
	 {
	 	for(int j=0;j<3;j++)
	 	{
	 		if(a[j][i]!='X' && a[j][i]!='O')
	 		{
	 			flagx=1;
		       	x=check(j,i);
		        cout<<"dfghj  "<<x<<endl;
			 return x;
	 	//	break;
	 	}
		 }
	 }
	 
	 for(int j=0;j<3;j++)
	 {
	 	if(a[j][j]=='X')
	 	{
	 		countd++;
		 }
	 }
	 
	 if(countd==2)
	 {
	 	for(int j=0;j<3;j++)
	 	{
	 		if(a[j][j]!='X' && a[j][j]!='O')
	 		{
			 flagx=1;
          	x=check(j,j);
          	cout<<x<<endl;
			 return x;
	 		break;
	    	}
	   }
	 }
	 
	 for(int j=0;j<3;j++)
	 {
	 	if(a[j][2-j]=='X')
	 	countv++;
	 }
//	 cout<<"countvv="<<countv<<endl;
	 if(countv==2)
	 {
	 // 1	cout<<"nagpal"<<endl;
	 	for(int j=0;j<3;j++)
	 	{
	 		if(a[j][2-j]!='X' && a[j][2-j]!='O')
	 		{
			 flagx=1;
          	x=check(j,(2-j));
          	cout<<x<<endl;
			 return x;
	 		break;
	 	}	 
	}
	 }
	 
	 countx=0;
	 county=0;
	 countd=0;
	 countv=0;
  }
   
   if(flagx==0)
   {
   	cout<<"karan"<<endl;
   	if((choice+1)==1)
   	x=check(0,0);
   	
   	else if((choice+1)==2)
   	x=check(0,1);
   	
   	else if((choice+1)==3)
   	x=check(0,2);
   	
   	else if((choice+1)==4)
   	x=check(1,0);
   	
   	else if((choice+1)==5)
   	x=check(1,1);
   	
   	else if((choice+1)==6)
   	x=check(0,2);
   	
   	else if((choice+1)==7)
   	x=check(2,0);
   	
   	else if((choice+1)==8)
   	x=check(2,1);
   	
   	else if((choice+1)==9)
   	x=check(2,2);
   	
   	else if((choice+1)==10)
   	x=check(0,0);
   	return x;
   }
}
   	if(turn==0)
   	{
   		if(choice==5 || choice==8)
   		return 1;
   		
   	    else if(choice==3 || choice==9 || choice==7)
   		return 5;
   		
   		else if(choice==2 || choice==4 || choice==6 )
   		return 5;
   		
   		else if(choice==1)
   		return 5;
	   }	
}

int check(int y,int z)
{
	if(a[y][z]!='X' && a[y][z]!='O')
	return a[y][z]-'0';
	else
	{
	z++;
	if(z>=3)
	{
	y++;
	if(y>=3)
	y=0;
	z=0;
    }
	check(y,z);
}
}

int main()
{
	int no;
	cout<<"how many player?"<<endl;
	cin>>no;
	cout<<"enter player1"<<" ";
	cin>>n;
	if(no==2)
	{
	cout<<"enter player2"<<" ";
	cin>>m;
     }
	draw();
	if(no==2)
	{
	for(int i=0;i<9;i++)
	{
		cout<<"enter a position";
		cin>>choice;
		input(choice);
		cout<<endl;
		draw();
		toggle();
		win();
		if(flag==1)
		break;
	}
}
else if(no==1)
{
	for(int i=1;i<=5;i++)
	{
		cout<<"enter a position"<<" ";
		cin>>choice;
	input(choice);
	cout<<endl;
	draw();
	win();
		if(flag==1)
		break;
	cout<<endl;
	if(i<=4)
	{
	toggle();
	cpuch=cpu();
     cout<<"return= "<<cpuch<<endl;
	input(cpuch);
	draw();
	toggle();
	win();
	turn++;
}
	if(flag==1)
		break;
}
}
}
