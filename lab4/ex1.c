#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXOP 100
#define NUMBER '0'
int getop(char[]);
void push(double);
double pop(void);
main(){
    int type;
    double op2;
    double op3;
    char s[MAXOP];
    while((type = getop(s))!=EOF){
        switch (type){
            case NUMBER:
            push(atof(s));
            break;
            case'+':
            push(pop()+pop());
            break;
            case'*':
            push(pop()*pop());
            break;
            case'-':
            op2=pop();
            push(pop()-op2);
            break;
            case '%':
			op2 = pop();
			op3 = pop();
			if ((int)op2 == op2  && (int)op3 == op3 && op2 != 0 )
				{
                if((int)op2>0 &&(int)op3>0)
                {push((int)op3%(int)op2);}
                if((int)op2<0 && (int)op3<0)
                {op2=op2*(-1);
                op3=op3*(-1);
                push((int)op3%(int)op2);}
                if((int)op2>0 && (int)op3<0){
                op3=op3*(-1);
                push((int)op3%(int)op2);  
                }
                if((int)op2<0 && (int)op3>0){
                op2=op2*(-1);
                push((int)op3%(int)op2);    
                }
                }

			else
				printf("error\n");
			break;
            case'/':
            op2 = pop();
            if(op2 !=0.0)
            push(pop()/op2);
            else
            printf("error:zero divisor\n");
            break;
            case'\n':
            printf("\t%.8g\n",pop()); 
            break;
            default:
            printf("error:unknown command %s\n",s);
            break;   
        }
    }
    return 0;
}
#define MAXVAL 100
int sp = 0;
double val[MAXVAL];
void push(double f){
    if (sp<MAXVAL)
    val[sp++] = f;
    else
    {
        printf("error:stack full,can't push %g\n",f);
    }
}
    double pop(void){
        if (sp>0)
        return val[--sp];
        else{
            printf("error:stack empty\n");
            return 0.0;
        }
    }
    int getch(void);
    void ungetch(int);
    int getop(char s[]){
        int i,c;
        while((s[0]=c=getch())==' '||c=='\t')
        ;
        s[1] = '\0';
        if(!isdigit(c)&&c!='.')
        return c;
        i = 0;
        if(isdigit(c))
        while(isdigit(s[++i]=c=getch()))
        ;
        if(c=='.')
        while(isdigit(s[++i]=c=getch()))
        ;
        s[i]='\0';
        if(c!=EOF)
        ungetch(c);
        return NUMBER;
    }
    #define BUFSIZE 100
    char buf[BUFSIZE];
    int bufp = 0;
    int getch(void){
        return(bufp>0)?buf[--bufp]:getchar();
    }
    void ungetch(int c){
        if(bufp>=BUFSIZE)
        printf("ungetch:too many characters\n");
        else
        {
            buf[bufp++]=c;
        }
        
    }