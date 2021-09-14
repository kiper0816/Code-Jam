#U.meo 2021

#Input
T = int(input())
path=[]
for i in range(T):
    N = int(input())
    path.append(input())

#Function
def new_path(path):
    path = path.replace('E','s').replace('S','E').replace('s','S')
    return path

#Output
for j in range(T):
    answer = new_path(path[j])
    print("Case #"+str(j+1)+": "+answer)