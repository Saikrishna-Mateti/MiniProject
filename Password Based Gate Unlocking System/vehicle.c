#include<reg52.h>
#include<post.h>
#include<lcd4.h>
sbit k1=P1^0;
sbit k2=P1^1;
sbit k3=P1^2;
sbit k4=P1^3;
sbit k5=P1^4;
sbit k6=P1^5;
sbit k7=P1^6;
sbit k8=P1^7;
sbit k9=P3^0;
sbit buz=P0^0;
sbit m1=P0^1;
sbit m2=P0^2;
void main()
{
unsigned char e[4],a=0,r;
initlcd();
k1=k2=k3=k4=k5=k6=k7=k6=k9=1;
buz=0;
m1=0;
m2=0;
stringlcd(0x80,"WELCOME");
post(300);
stringlcd(0x80,"PLZ ENTER PSWD");
clcd(0xC0);
while(1)
{
if(k1==0)
{
a=0;
dlcd('1');
if(a==0)
{
e[0]='1';
}
a=1; 
post(200);
}
if(k2==0)
{
dlcd('2'); 
if(a==1)
{
e[1]='2'; 
}
a=3;
post(200);
}
if(k3==0)
{
dlcd('3'); 
if(a==3)
{
e[2]='3'; 
}
a=4;
post(200);
}
if(k4==0)
{
dlcd('4'); 
if(a==4)
{
e[3]='4';
} 
post(200);
}
if(k5==0)
{
dlcd('5'); 
post(200);
}
if(k6==0)
{
dlcd('6'); 
post(200);
}
if(k7==0)
{
dlcd('7'); 
post(200);
}
if(k8==0)
{
dlcd('8'); 
post(200);
}
if(k9==0)
{
dlcd('#'); 
e[4]='#'; 
post(200);
if(e[0]=='1' && e[1]=='2' && e[2]=='3' && e[3]=='4' && e[4]=='#')
{
a=0;
 stringlcd(0x80,"ACCESS GRANTED");
 buz=0;
 m1=1;
 m2=0;
 post(400);
 m1=0;
 m2=1;
 post(400);
}
else
{
 stringlcd(0x80,"ACCESS DENIED");
 m1=0;
 m2=0;
 buz=1;
 post(300);	   buz=0;
}
}

}
}




