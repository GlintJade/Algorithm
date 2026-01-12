import sys

def solve():
    count = int(sys.stdin.readline())
    
    for i in range(count):
        A, B = map(int, sys.stdin.readline().split())
        print(f"Case #{i+1}: {A+B}")


if __name__ == "__main__":
    solve()