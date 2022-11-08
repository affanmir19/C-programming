//finding sum of natural numbers using recursion
int sum(int n){
    if(n==1)
      return 1;
    else
      return sum(n-1)+n;  
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("%d\n",sum(n));
    return 0;
}
