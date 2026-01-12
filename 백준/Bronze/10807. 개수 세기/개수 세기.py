import sys

def solve():
    count = int(sys.stdin.readline())
    data = list(map(int, sys.stdin.readline().split()))
    v = int(sys.stdin.readline())
    result = 0
    for i in range(count):
        if(data[i] == v):
            result += 1

    print(result)

if __name__ == "__main__":
    solve()