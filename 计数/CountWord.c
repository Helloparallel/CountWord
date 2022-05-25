#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char** argv)
{
	int count = 0;
	if(!strcmp(argv[1],"-c")||!strcmp(argv[1],"-C")){//字符数 
		printf("字符数:");
		//文件操作
		FILE* pf=fopen("a.txt","r");
		char ch;
		while((ch=fgetc(pf))!=EOF){
			count++;
		}
		fclose(pf); 
		printf("%d\n",count);
	}else if(!strcmp(argv[1],"-w")||!strcmp(argv[1],"-W")){//单词数 
		printf("单词数:"); 
			FILE* pf=fopen("a.txt","r");
		char ch;
		while((ch=fgetc(pf))!=EOF){
			if(ch==' '||ch==','||ch=='\n'){
				count++;
			}
		}
		fclose(pf); 
		printf("%d\n",count+1);
		
	}else{
		printf("输入错误！\n");
	}
	
	
    return 0;
}
