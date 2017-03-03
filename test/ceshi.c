    #include "stdio.h"

int main(int argc, char const *argv[])
{
//定义数组
int count[101];
int loc,number;

//数组元素初始化为0
for (int i = 0; i < 101; ++i)
  count[i]=0;

//读入数据，由于0作为循环结束条件，所以0的输入单独出现
scanf("%d %d",&loc,&number);

while(loc!=0){
count[loc]+=number;
scanf("%d %d",&loc,&number);
}

if (loc==0)
  {
count[0]+=number;
}

scanf("%d %d",&loc,&number);

while(loc!=0){
count[loc]+=number;
scanf("%d %d",&loc,&number);
}

if (loc==0)
  {
count[0]+=number;
}

//确定数组中不为0的最小位数，如果后面都是0则这一位后不输出加号
int n=0;
for ( n = 0; n < 101; ++n)
  {
if (count[n]!=0)
  break;
}

//输出需要考虑的问题
// 1.某一次数为0后面没有加号
// 2.x1没有1
// 3.常数项为0，不用输出

for (int i = 100  ; i > 0 ; i--)
  {
if (count[i]!=0){
if (i!=1)//判断是否是x一次方项
  {
printf("%dx%d",count[i],i);
}else{
printf("%dx",count[i]);
}
if ( i>n )
  {
printf("+");
}
}

}

//常数项最后单独输出
if(count[0]!=0)
  {
printf("%d",count[0]);
}
printf("\n");

return 0;
}
