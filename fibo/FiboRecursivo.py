import time 

def fibo(n):
    if n == 0 or n == 1:
        return n 
    else:
        return fibo(n - 1) + fibo(n - 2)
        


a = time.time()

print(fibo(40))

b = time.time()

print()
print(b - a)

