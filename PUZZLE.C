#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main(){

	int gdrive = DETECT,gm;
	char ch;

	char * bt1="1";
	char * bt2="2";
	char * bt3="3";
	char * bt4="4";
	char * bt5="5";
	char * bt6="6";
	char * bt7="7";
	char * bt8="8";
	char * bt9="9";
	char * bt10="10";
	char * bt11="11";
	char * bt12="12";
	char * bt13="13";
	char * bt14="14";
	char * bt15=" ";
	char * btn="15";
	int b1=1,b2=2,b3=3,b4=4,b5=5,b6=6,b7=7,b8=8,b9=9,b10=10,b11=11,
	b12=12,b13=13,b14=14,b15=0,b16=15;


	int top=50,left=10,right=50,bottom=10;

	clrscr();
	initgraph(&gdrive,&gm,"C:\\TURBOC3\BIN");

	do{
	  ch = getche();
	  clrscr();

	bar(10,50,50,10);
	bar(60,50,100,10);
	bar(110,50,150,10);
	bar(160,50,200,10);

	bar(10,100,50,60);
	bar(60,100,100,60);
	bar(110,100,150,60);
	bar(160,100,200,60);

	bar(10,150,50,110);
	bar(60,150,100,110);
	bar(110,150,150,110);
	bar(160,150,200,110);

	bar(10,200,50,160);
	bar(60,200,100,160);
	bar(110,200,150,160);
	bar(160,200,200,160);

	if(ch==72)
	{
	   top-=50;
	   bottom-=50;
	}if(ch==80)
	{
	   top+=50;
	   bottom+=50;
	}if(ch==75)
	{
	   left-=50;
	   right-=50;
	}if(ch==77)
	{
	   left+=50;
	   right+=50;
	}

	bar3d(left,top,right,bottom,5,2);
	setcolor(3);
	//bt15
	if(left==110 && top==200 && right==150 && bottom==160)
	{
	   if(ch==13){
	    if(b16==0)
	    {
	       b16 = b15;
	       b15 = 0;

	       btn = bt15;
	       bt15 = "";
	    }else if(b14==0)
	    {
		b14 = b15;
		b15 = 0;

		bt14 = bt15;
		bt15 ="";
	       }
	     else if(b11==0)
	      {
	       b11=b15;
	       b15=0;
	       bt11=bt15;
	       bt15="";
	       }

	    }
	}
	//bt16
	else if(left==160 && top==200 && right==200 && bottom==160)
	{
	    if(ch==13)
	    if(b15==0)
	    {

	       b15 = b16;
	       b16 = 0;

	       bt15 = btn;
	       btn="";
	    }
	   else if(b12==0)
	    {
	     b12=b16;
	     b16=0;
	     bt12=btn;
	     btn="";
	    }
	 }

	//bt14
	 else if(left==60 && top==200 && right==100 && bottom==160)
	{
	    if(ch==13)
	    {
		if(b15==0)
		{
		   b15 = b14;
		   b14 = 0 ;

		   bt15 = bt14;
		   bt14 = "";

		}else if(b13==0)
		{
			b13 = b14;
			b14 = 0;

			bt13 = bt14;
			bt14 = "";
		}
		else if(b10==0)
		 {
		  b10=b14;
		  b14=0;
		  bt10=bt14;
		  bt14="";
		  }
	      }
	   }
	//bt13
	else if(left==10 && top==200 && right==50 && bottom==160)
	{
	    if(ch==13)
	    {
		if(b14==0)
		{
		b14 = b13;
		b13 = 0;

		bt14 = bt13;
		bt13 = "";

		}
			else if(b9==0)
		{
		b9 = b13;
		b13 =0;
		bt9 = bt13;
		bt13 ="";
		}
	     }
	}
	//bt9
	else if(left==10 && top==150 && right==50 && bottom==110)
	{
	    if(ch==13)
	    {
		if(b13==0)
		{
		b13 = b9;
		b9 = 0;
		bt13 = bt9;
		bt9 = "";
		}

		else if(b10==0)
		 {
		  b10=b9;
		  b9=0;
		  bt10=bt9;
		  bt9="";
		  }
		  else if(b5==0)
		  {
		  b5=b9;
		  b9=0;
		  bt5=bt9;
		  bt9="";
		  }

	    }
	 }
	 //bt10
	 else if(left==60 && top==150 && right==100 && bottom==110)
	 {
	   if(ch==13)
	   {
	    if(b9==0)
	    {
	    b9 =b10;
	    b10 = 0;
	    bt9 = bt10;
	    bt10 = "";
	    }
	    else if(b14==0)
	     {
	      b14=b10;
	      b10=0;
	      bt14=bt10;
	      bt10="";
	      }
	      else if(b11==0)
	       {
		b11=b10;
		b10=0;
		bt11=bt10;
		bt10="";
		}
		else if(b6==0)
		{
		b6=b10;
		b10=0;
		bt6=bt10;
		bt10="";
		}
	      }
	    }
	 //b11
	 else if(left==110 && top==150 && right==150 && bottom==110)
	    {
	     if(ch==13)
	      {
	       if(b15==0)
		{
		  b15=b11;
		  b11=0;
		  bt15=bt11;
		  bt11="";
		  }
		  else if(b10==0)
		   {
		    b10=b11;
		    b11=0;
		    bt10=bt11;
		    bt11="";
		    }
		    else if(b12==0)
		    {
		     b12=b11;
		     b11=0;
		     bt12=bt11;
		     bt11="";
		    }
		    else if(b7==0)
		     {
		      b7=b11;
		      b11=0;
		      bt7=bt11;
		      bt11="";
		      }
		 }
	       }
	     //b12
	     else if(left==160 && top==150 && right==200 && bottom==110)
		  {
		   if(ch==13)
		   {
		    if(b11==0)
		     {
		      b11=b12;
		      b12=0;
		      bt11=bt12;
		      bt12="";
		      }
		   else if(b16==0)
		    {
		     b16=b12;
		     b12=0;
		     btn=bt12;
		     bt12="";
		    }
		    else if(b8==0)
		     {
		      b8=b12;
		      b12=0;
		      bt8=bt12;
		      bt12="";
		     }
		   }
		  }
		//b8
	   else if(left==160 && top==100 && right==200 && bottom==60)
		 {
		 if(ch==13)
		  {
		   if(b12==0)
		    {
		    b12=b8;
		    b8=0;
		    bt12=bt8;
		    bt8="";
		    }
		    else if(b7==0)
		    {
		    b7=b8;
		    b8=0;
		    bt7=bt8;
		    bt8="";
		    }
		    else if(b4==0)
		    {
		    b4=b8;
		    b8=0;
		    bt4=bt8;
		    bt8="";
		    }
		  }
		 }
		 //b7
	    else if(left==110 && top==100 && right==150 && bottom==60)
		{
		 if(ch==13)
		  {
		  if(b8==0)
		   {
		    b8=b7;
		    b7=0;
		    bt8=bt7;
		    bt7="";
		    }
		    else if(b11==0)
		     {
		     b11=b7;
		     b7=0;
		     bt11=bt7;
		     bt7="";
		     }
		  else if(b6==0)
		   {
		    b6=b7;
		    b7=0;
		    bt6=bt7;
		    bt7="";
		   }
		   else if(b3==0)
		   {
		    b3=b7;
		    b7=0;
		    bt3=bt7;
		    bt7="";
		    }
		  }
		 }
		//b6
	 else if(left==60 && top==100 && right==100 && bottom==60)
		 {
		  if(ch==13)
		   {
		    if(b7==0)
		    {
		    b7=b6;
		    b6=0;
		    bt7=bt6;
		    bt6="";
		    }
		 else if(b10==0)
		  {
		   b10=b6;
		   b6=0;
		   bt10=bt6;
		   bt6="";
		   }
		   else if(b5==0)
		    {
		    b5=b6;
		    b6=0;
		    bt5=bt6;
		    bt6="";
		    }
		    else if(b2==0)
		    {
		    b2=b6;
		    b6=0;
		    bt2=bt6;
		    bt6="";
		    }
		 }
	       }
	       //b5
	    else if(left==10 && top==100 && right==50 && bottom==60)
		 {
		  if(ch==13)
		   {
		    if(b6==0)
		     {
		     b6=b5;
		     b5=0;
		     bt6=bt5;
		     bt5="";
		     }
		     else if(b9==0)
		     {
		     b9=b5;
		     b5=0;
		     bt9=bt5;
		     bt5="";
		     }
		     else if(b1==0)
		      {
		      b1=b5;
		      b5=0;
		      bt1=bt5;
		      bt5="";
		      }

		    }
		  }
		  //b4
	     else if(left==160 && top==50 && right==200 && bottom==10)
		 {
		  if(ch==13)
		   {
		    if(b8==0)
		     {
		     b8=b4;
		     b4=0;
		     bt8=bt4;
		     bt4="";
		     }
		     else if(b3==0)
		     {
		     b3=b4;
		     b4=0;
		     bt3=bt4;
		     bt4="";
		     }
		    }
		  }
	      //b3
	      else if(left==110 && top==50 && right==150 && bottom==10)
		{
		 if(ch==13)
		  {
		   if(b4==0)
		    {
		     b4=b3;
		     b3=0;
		     bt4=bt3;
		     bt3="";
		     }
		     else if(b7==0)
		     {
		     b7=b3;
		     b3=0;
		     bt7=bt3;
		     bt3="";
		     }
		     else if(b2==0)
		      {
		      b2=b3;
		      b3=0;
		      bt2=bt3;
		      bt3="";
		    }
		  }
		}
		//b2
	       else if(left==60 && top==50 && right==100 && bottom==10)
		   {
		    if(ch==13)
		    {
		    if(b3==0)
		     {
		     b3=b2;
		     b2=0;
		     bt3=bt2;
		     bt2="";
		     }
		     else if(b6==0)
		     {
		       b6=b2;
		       b2=0;
		       bt6=bt2;
		       bt2="";
		       }
		       else if(b1==0)
		       {
			b1=b2;
			b2=0;
			bt1=bt2;
			bt2="";
			}
		       }
		      }
		 //b1
	      else if(left==10 && top==50 && right==50 && bottom==10)
	       {
		if(ch==13)
		 {
		  if(b2==0)
		   {
		   b2=b1;
		   b1=0;

		   bt2=bt1;
		   bt1="";
		   }
		   else if(b5==0)
		   {
		    b5=b1;
		    b1=0;
		    bt5=bt1;
		    bt1="";
		    }
		   }
		  }



      // printf("left : %d , top : %d, Right : %d , Bottom : %d , btn %d ",left,top,right,bottom,b16);
	outtextxy(30,28,bt1);
	outtextxy(76,28,bt2);
	outtextxy(125,28,bt3);
	outtextxy(170,28,bt4);

	outtextxy(30,78,bt5);
	outtextxy(76,78,bt6);
	outtextxy(125,78,bt7);
	outtextxy(175,78,bt8);

	outtextxy(30,125,bt9);
	outtextxy(74,125,bt10);
	outtextxy(125,125,bt11);
	outtextxy(175,125,bt12);

	outtextxy(30,174,bt13);
	outtextxy(74,174,bt14);
	outtextxy(125,174,bt15);
	outtextxy(175,174,btn);


	if(b1==1 && b2==2 && b3==3 && b4==4 && b5==5 && b6==6 && b7==7 && b8==8 && b9==9 && b10==10 && b11==11 && b12==12 && b13==13 && b14==14 && b15==15 && b16==0)
	{
		printf("You win");
	ch=27;
       //	clrscr();
	}
	}while(ch!=27);

	getch();
	closegraph();


}