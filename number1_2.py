# 1. 1부터 N까지 M의 배수 합
# 자연수 N이 입력되면 M의 배수합을 출력하는 프로그램을 작성하시오.
# for문 사용

n = int(input("N의 숫자를 입력하세요:"))
m = int(input("M의 숫자를 입력하세요:"))

sum=0;
for i in range(1,n+1):
    if(i%m==0):
        sum=sum+i

print("1부터 {0}까지의 {1}의 배수의 합은 {2}입니다.".format(n, m, sum))
