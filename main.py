def tub(n:int)->bool:
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
n = int(input("N = "))
print(f"{n} soni tub sonmi -> {tub(n)}")