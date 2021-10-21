#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    cin.get(a,100);
    cin.get();
    char b[100][100],c[100];
    int i,cont=0;
    for(i=0;i<strlen(a);i++)
    {
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
            cont--;
        }
        else if(a[i]=='e')
        {
            strcat(b[cont],"e");
            cont++;
        }
        else if(a[i]=='r')
        {
            strcat(b[cont],"r");
            cont++;
        }
        else if(a[i]=='s')
        {
            strcat(b[i],"s");
            cont++;
        }
        else if(a[i]=='o')
        {
            strcat(b[cont],"o");
            cont++;
        }
        else if(a[i]=='n')
        {
            strcat(b[cont],"n");
            cont++;
        }
        else if(int(a[i])>=65 && int(a[i])<=90)
        {
            strcpy(c,"");
            c[0]=a[i];
            strcat(b[cont],c);
            cont--;
        }
    }
    if(cont<0 && i==strlen(a))
    {
        cout<<"Adevarat";
    }
    else cout<<endl<<"Fals";
}

