#include <cstdio>
#include <cstring>
char str1[100],str2[100];
bool HashTable[128]={false};
int main(){
    scanf("%s %s",str1,str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len1;i++){
        char c1,c2;
        int j;
        for(j=0;j<len2;j++){
            c1=s1[i];
            c2=s2[j];
            if(c1<='z'&&c1>='a'){
               c1-=32;
            }
            if(c2<='z'&&c2>='a'){
              c2-=32;
            }
            if(c1==c2) break;
        }

        if(j==len2&&HashTable[c1]==false){
            printf("%c",c1);
            HashTable[c1]=true;
        }
    }
    return 0;
}
