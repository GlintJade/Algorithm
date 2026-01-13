import sys

def solve():
    basket, count = map(int, sys.stdin.readline().split())
    result = [0] * (basket)
    for _ in range(count):
        i, j, k = map(int, sys.stdin.readline().split())
        for a in range(i, j+1):
            result[a-1] = k

    print(*result)


if __name__ == "__main__":
    solve()