#U.meo 2021

#Input
T = int(input())
N = [int(input()) for j in range(T)]

#Function
def remove_four(value):
    a = int(str(value).replace('4', '3'))
    b = value - a
    return str(a) + " " + str(b)

#Output
for i in range(len(N)):
    answer = remove_four(N[i])
    print("Case #"+str(i+1)+": "+answer)

