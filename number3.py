# 3. 진약수의 합
# 자연수 N이 주어지면 자연수 N의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성하세요.

n = int(input("자연수 n을 입력하세요:"))

sum=1;
print(1,end=' ' )

for i in range(2,n):
    if(n%i==0):
        print("+ ",end=' ')
        print(i,end=' ')
        sum = sum+i

print(" = ",end=' ')
print(sum)
        
