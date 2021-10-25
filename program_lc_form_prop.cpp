#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    cin.get(a,100);
    cin.get();
    cout<<a;
    char b[100][100],c[100];
    int i,cont=0;
    for(i=0;i<strlen(a);i++)
    {
        cout<<endl<<a[i]<<"    "<<i<<"    "<<cont;
        if(cont<0)
        {
            break;
        }
        else if(a[i]=='(')
        {
            if(a[i+1]!='n')
            cont++;
        }
        else if(a[i]==')')
        {
            if(a[i-1]=='e' || a[i-1]=='r' || a[i-1]=='s' || a[i-1]=='o' ) {cont=-1; break;}
            cont--;
        }
        else if(a[i]=='e')
        {
            strcat(b[cont],"e");
            cont++;
            if(a[i+1]!='(' && (int(a[i+1])<65 || int(a[i+1])>=90)) {cont=-1; break;}

        }
        else if(a[i]=='r')
        {
            strcat(b[cont],"r");
            cont++;
            if(a[i+1]!='(' && (int(a[i])<65 || int(a[i])>=90)) {cont=-1; break;}
        }
        else if(a[i]=='s')
        {
            strcat(b[i],"s");
            cont++;
            if(a[i+1]!='(' && (int(a[i])<65 || int(a[i])>=90)) {cont=-1; break;}
        }
        else if(a[i]=='o')
        {
            strcat(b[cont],"o");
            cont++;
            if(a[i+1]!='(' && (int(a[i])<65 || int(a[i])>=90)) {cont=-1; break;}
        }
        else if(a[i]=='n')
        {
            strcat(b[cont],"n");
            cont++;
            if(a[i+1]!='(' && (int(a[i])<65 || int(a[i])>=90)) {cont=-1; break;}
        }
        else if(int(a[i])>=65 && int(a[i])<=90)
        {
            strcpy(c,"");
            c[0]=a[i];
            strcat(b[cont],c);
            cont--;
            if(a[i+1]!=')' && a[i+1]!='e' && a[i+1]!='r' && a[i+1]!='s' && a[i+1]!='o')
            {
                cont=-1;
                break;
            }
        }
        cout<<endl<<a[i]<<"    "<<i<<"    "<<cont;
    }
    if(cont<0 && i==strlen(a))
    {
        cout<<"Adevarat";
    }
    else cout<<endl<<"Fals";
}

/*
e(29) echi
v(26) rez
n(191) nu
s(30) si
o(31) or
*/
//(Ps((nQ)r(n(n(Qe(nR)))))),
