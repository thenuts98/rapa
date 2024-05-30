def fibonacci(n):
    """
    매개변수로 들어온 n값 미만의 피보나치 수열을 출력하는 함수
    """

    a, b = 0, 1
    while(a < n):
        print(a, end='\t')
        a, b = b, a+b

if __name__ == '__main__':
    fibonacci(10)
