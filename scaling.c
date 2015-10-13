#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void main()
{
int graphdriver=DETECT,graphmode,errorcode;
int i,n=1;
char c;
int x2,y2,x1,y1,x,y;
printf("Line end points (x1 y1 x2 y2) : ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
initgraph(&graphdriver,&graphmode,"c:\\tc\\bgi");
line(x1,y1,x2,y2);
while(n)
{
 printf("\nScaling factors for x & y : ");
 scanf("%d%d",&x,&y);
 x1=(x1*x);
 y1=(y1*y);
 x2=(x2*x);
 y2=(y2*y);
 line(x1,y1,x2,y2);
 printf("Line Scaled. Scale again? (Y/N)");
 c=getch();
 if(c=='N'||c=='n') n--;
 }
closegraph();
}
