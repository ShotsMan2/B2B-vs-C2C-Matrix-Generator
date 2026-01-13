#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,i,j,r,b=0,c=0,hata=1;

    srand(time(NULL));

    n=rand()%5+3;

    char matris[n][n];

    while(hata==1){
        b=0;
        c=0;
        hata=0;
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            r=rand()%3;

            if(r==0){
                matris[i][j]='B';
            }
            else if(r==1){
                matris[i][j]='2';
            }
            else{
                matris[i][j]='C';
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j+2<n && matris[i][j]=='B' && matris[i][j+1]=='2' && matris[i][j+2]=='B'){
                b++;
            }
            if(j+2<n && matris[i][j]=='C' && matris[i][j+1]=='2' && matris[i][j+2]=='C'){
                c++;
            }
        }
    }

    if(c>=b){
        hata=1;
    }


    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c ",matris[i][j]);
        }
        printf("\n");
    }
}
