#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main(){
	int x, y, x1, y1, x2, y2, dx, dy, p;
	int gdrive = DETECT, gmode;
	initgraph(&gdrive, &gmode, "C:\\TURBOC3\\BGI");
	printf("INPUT POINTS: ");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	dx = abs(x2-x1), dy = abs(y2-y1), x = x1, y = y1;
	putpixel(x, y, WHITE);
  	if(dx > dy){
    	do{
	    	p = 2 * dy - dx;
		    if(p < 0) x = x + 1, p = p + 2 * dy;
		    if(p > 0) x = x + 1, y = y + 1, p = p + 2 * dy - 2* dx;
    	} while(x < x2);
  	} else {
  		do{
    		p = 2 * dx - dy;
    		if(p < 0){
      			y = y + 1, p = p + 2 * dx;
    		} else {
      			x=x+1, y=y+1, p = p + 2 * dx - 2 * dy;
    		}
    		putpixel(x, y, WHITE);
  		}while(y<y2);
	}
getch();
closegraph();
return 0;
}


