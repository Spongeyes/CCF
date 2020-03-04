#include <stdio.h>
#include <string.h>
int main(){
	
int i,n,j;

printf("请输入测试总数n：");
scanf("%d",&n); 

char yongli[n][7];
for(i=0;i<n;i++)
{
	printf("请输入第%d个测试用例：",i+1);
	for(j=0;j<7;j++)
	{
		scanf("%c",&yongli[j]);
	}
	
}

} 

int jisuan()
