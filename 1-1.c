#include <stdio.h>
int main(){
    int b,x,y;
    scanf("%d",&b);
    if(b==10){
        scanf("%d",&x);
        scanf("%d",&y);
        printf("(%d)+(%d)=%d\n(%d)-(%d)=%d\n(%d)*(%d)=%d\n(%d)/(%d)=%d...%d\n",x,y,x+y,x,y,x-y,x,y,x*y,x,y,x/y,x%y);
    }else if (b==8){
        scanf("%o",&x);
        scanf("%o",&y);
        printf("(%o)+(%o)=%o\n(%o)-(%o)=%o\n(%o)*(%o)=%o\n(%o)/(%o)=%o...%o\n",x,y,x+y,x,y,x-y,x,y,x*y,x,y,x/y,x%y);
    }else{
        scanf("%x",&x);
        scanf("%x",&y);
        printf("(%x)+(%x)=%x\n(%x)-(%x)=%x\n(%x)*(%x)=%x\n(%x)/(%x)=%x...%x\n",x,y,x+y,x,y,x-y,x,y,x*y,x,y,x/y,x%y);
    }
}