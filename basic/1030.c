#include <iostream>
#include <vector>
#include <algorithm>
/*
输入的数据都为正整数 
1.输入数字个数 和   p
2.输入数组加入vector
3.对数组verctor进行排序
4.对verctor从第一个位开始遍历。 
查找最大差距。最大差距的判断条件是 v[j]<v[i]
所以要有一个临时数据和最后输出的数据。 temp reuslt

*/
using namespace std;
int main() {
   int n;
   long long p;
   scanf("%d%lld",&n,&p);
   vector<int> v(n);
   for(int i = 0;i<n;i++)
   	cin>>v[i];  
	sort(v.begin(), v.end());  
   int result=0;
   int temp=0;
   for(int i=0;i<n;i++){
   	for(int j = i+result;j<n;j++ ){
   		if(v[j]<=v[i]*p){
   			temp= j-i+1;
   			if(temp>result)
   				result=temp;   
		   }else{
		   	break; 
		   }
	   }
   }
   cout<<result;
    return 0;
}
/*写在最后
在26行 如果 赋值 j=i+result,直接写成j=i，那么会产生第三个答案超时的问题
在27行 如果 判断v[j]<=v[i]*p写成 v[j]<v[i]*p
在17和18行 如果是 p的值是int类型最后一个测试答案会出错，经过测试
long 和long long类型都可以通过测试 

*/
