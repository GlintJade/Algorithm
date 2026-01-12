import sys

def solve():
    count = int(sys.stdin.readline())
    
    for _ in range(count):
        A, B = map(int, sys.stdin.readline().split())
        print(A+B)


if __name__ == "__main__":
    solve()