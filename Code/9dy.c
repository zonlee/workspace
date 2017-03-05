#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int m,n,cnt,a,b,c;
    int time[1][6]={0};
    char gps[100];
    for(cnt=1;cnt>0;)
    {
        scanf("%s",gps);
        if(gps[0]!='E')
        {
            if(gps[18]='A')
            {
                time[0][0]=gps[7];
                time[0][1]=gps[8];
                time[0][2]=gps[9];
                time[0][3]=gps[10];
                time[0][4]=gps[11];
                time[0][5]=gps[12];
            }
        }
        else
        {
            cnt--;
        }
    }
    a=time[0][1];
    printf("%c",*a);


    return 0;
}