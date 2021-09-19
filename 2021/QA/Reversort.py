#U.meo 2021

#List
Input_data=[]

#Input
T = int(input())

for i in range(T):
    N = int(input())
    Input_data.append(input().split())

#Function
def sort_function(i,L):
    answer = 0
    for k in range(len(L)-1):
        j = L.index(str(k + 1)) + 1
        L[k:j] = reversed(L[k:j])
        answer += (j - k)

    return str(answer)

#Output
for i in range(T):
    print("Case #"+str(i+1)+": "+sort_function(i,Input_data[i]))