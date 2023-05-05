#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define int long long





int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout<<setprecision(15)<<fixed;
    
    
    
    // strcpy(buf,"kishan")
    // strcmp(buf, "File not found")


    // bzero(buf,max_line);
    // memset(buf, 0, sizeof(buf));


    // char file[20] = "input.txt";
    // FILE *fp = fopen(file,"r");

    // while(!feof(fp))
    // {
    //     char c;
    //     fscanf(fp,"%c",&c);
    //     if(feof(fp))
    //         break;
    //     printf("%c",c);
    // }


    char file[20] = "input.txt";
    FILE *fp = fopen(file,"wb");


    int t = 10;
    while(t--)
    {
        char c = 'a';
        fprintf(fp,"%c--",c);
    }

    fclose(fp);


    
    
    return 0;
}