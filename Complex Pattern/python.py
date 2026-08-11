from collections import Counter

def freqcount(num_list):
    # Counter works like unordered_map<int,int> in C++
    freq = Counter(num_list)
    for digit, count in freq.items():
        print(f"{digit} --> {count}")

def main():
    n = 12124
    temp = n
    arr = []

    # Extract digits
    while temp > 0:
        last = temp % 10
        arr.append(last)
        temp //= 10   # integer division

    # Reverse to preserve original order
    arr.reverse()

    # Frequency count
    freqcount(arr)

if __name__ == "__main__":
    main()
