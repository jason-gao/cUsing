//
// Created by crystal on 2020-05-05.
//
//#include <stdio.h>
//#include <stdlib.h>
//struct abc { int a, b, c, s;};


//int a, b;
//
//void fun() {
//    a = 100;
//    b = 200;
//}

//struct s { int x,y; } a[2]={10,100,20,200};


//int main() {
//    struct abc s[2]={{1,2,3},{4,5,6}};
//    int t;
//    t=s[0].a+s[1].b;
//    printf("%d\n",t);

//    float x=213.82631;
//    printf("%-4.2f",x);

//    int x,b;
//    char z='a';
//    b = (x^x)&&(z<'a');
//
//    printf("%d", b);

//    typedef struct { int n; char *ch; }PER;

//    char ch[3][5]={"AAAA", "BBB","CC"};
//
//    printf("%s", ch[1]);

//    int (*f)() ;
//    int k=017;
//    int g=117;

//    printf("%d",++k);
//    printf("%d",k++);
//    printf("%x",g++);

//    scanf("%f",3.5);
//    int i=6,j;
//    j=(++i)+(i++);
//    j=(i++)+(++i);
//    printf("%d \r\n",j);
//    printf("%d \r\n",i);
//    float x; int y;
//    y=(int)x;

//    printf("%lu", sizeof(double));
//    scanf("%f",3.5);
//        int i ;
//        printf("%d", i);

//    char arr[2][4];
//    strcpy(arr[0],"you");
//    strcpy(arr[1],"me");
//    arr[0][3]='&';
//    printf("%s",arr);


//    int a=5, b=7;fun();
//    printf("%d,%d",a,b);


//    struct person { char name[9]; int age;}
//    class[10]={"Johu",17,"Paul",19,"Mary",18,"Adam",16};
//    printf("%c\n",class[2].name[0]);

//    int i, k, a[10], p[3];
//    k=5;
//    for(i=0;i<10;i++) a[i]=i;
//    for(i=0;i<3;i++) p[i]=a[i*(i+1)];
//    for(i=0;i<3;i++) k+=p[i]*2;
//    printf("%d",k);
//
//    int i=0;
//    while(i<10)
//    {
//        printf("%d", 1);
//
//        if(i<1) continue;
//    if(i==5) break;
//    i++;
//    }


//    int i;
//    int x[3][3]={1,2,3,4,5,6,7,8,9};
//    for(i=0;i<3;i++) printf("%2d",x[i][2-i]);

//    char ch[2][5] = {"6937", "8254"}, *p[2];
//    int i, j, s = 0;
//    for (i = 0; i < 2; i++) p[i] = ch[i];
//    for (i = 0; i < 2; i++)
//        for (j = 0; p[i][j] > '\0'; j += 2)
//            s = 10 * s + p[i][j] - '0';
//    printf("%d", s);

//9 -> 10
//    int n;
//    scanf("%d",&n);
//    if(n++<10) printf("%d",n);
//    else printf("%d",n--);

//     struct s *p=data; printf("%d",++(p->x));

//    return 0;
//}


//fun(int *a, int n) {
//    int i,j=0,p;
//    p=j;
//    for(i=j;i<n;i++)
//        if(a[i]<a[p]) p=i;
//        return p;
//}


#include <stdio.h>
#include <stdlib.h>
//struct s { int x,y; } data[2]={10,100,20,200};
//main() {
//    struct s *p=data;
//    printf("%d",++(p->x));
//}


// int main(){
//    char w; int x; float y; double z;
//
//    printf("%lf", w*x+z-y);
//
//     return 0;
//}

#define MY(x,y) x*y


int main(){

//    printf("%d", MY(2+3,5));

    int a[3][4],(*p)[4]=a;

    printf("%d", *(*(p+2)+3));
    printf("%d", a[2][3]);
    return 0;
}