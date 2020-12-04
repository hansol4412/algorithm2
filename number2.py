# 자연수의 합
# 자연수 A, B가 주어지면 A부터 B까지의 합을 수식과 함께 출력하세요.
a = int(input("a를 입력하세요:"))
b = int(input("b를 입력하세요:"))
sum=0
for i in range(a,b):
    print(i,end=' ')
    print(" +",end=' ')
    sum = sum + i;

sum = sum+b
print("{0} = {1}".format(b, sum))


    
    
