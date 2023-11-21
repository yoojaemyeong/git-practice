#더하기
def add(a,b):
    return a+b

def sub(a,b):
    return a-b

def multiply(a,b):
    return a*b

def divide(a,b):
    #return -1 if b==0 else a/b
    try:
        if b==0:
            raise Exception("Divisor Error")
    except Exception as e:
        return e    
    return a/b
        