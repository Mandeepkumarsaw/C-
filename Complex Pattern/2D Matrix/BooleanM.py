def optimized_matrix(matrix):
    m, n = len(matrix), len(matrix[0])
    rowtrack = [0] * m
    coltrack = [0] * n

    # First phase: mark rows and cols
    for i in range(m):
        for j in range(n):
            if matrix[i][j] == 1:
                rowtrack[i] = -1
                coltrack[j] = -1

    # Second phase: update matrix
    for i in range(m):
        for j in range(n):
            if rowtrack[i] == -1 or coltrack[j] == -1:
                matrix[i][j] = 1

    return matrix


def main():
    # Take dimensions from user
    m, n = map(int, input("Enter rows and columns (m n): ").split())

    # Take matrix input from user
    matrix = []
    print("Enter matrix elements row by row:")
    for i in range(m):
        row = list(map(int, input().split()))
        matrix.append(row)

    # Process matrix
    result = optimized_matrix(matrix)

    # Print updated matrix
    print("Updated matrix:")
    for row in result:
        print(*row)


if __name__ == "__main__":
    main()

#2D matrix
# m,n=map(int,input("enter the dimension:").split())
# matrix = []
# for i in range(m):
#     row=list(map(int,input("enter the element:").split()))
#     matrix.append(row)
    
# for i in matrix:
#     print(*i)    

#1D
# def main():
#     # Take number of rows
#     m = int(input("Enter number of rows: "))

#     matrix = []
#     for i in range(m):
#         row = list(map(int, input("enter the dimension:").split()))
#         matrix.append(row)

#     # Print matrix
#     print("Matrix:")
#     for row in matrix:
#         print(*row)

# if __name__ == "__main__":
#     main()


# def max_in_rows(matrix):
#     print("Row-wise maximums:")
#     for i, row in enumerate(matrix):
#         print(f"Row {i}: {max(row)}")

# def max_in_cols(matrix):
#     print("Column-wise maximums:")
#     n = len(matrix[0])
#     for j in range(n):
#         col = [matrix[i][j] for i in range(len(matrix))]
#         print(f"Col {j}: {max(col)}")

# def max_in_1d(arr):
#     print("Max in 1D array:", max(arr))


# def main():
#     # Input dimensions
#     m, n = map(int, input("Enter rows and columns (m n): ").split())

#     # Input elements in 1D
#     elements = list(map(int, input(f"Enter {m*n} elements: ").split()))

#     # Reshape into 2D matrix
#     # matrix = [elements[i*n:(i+1)*n] for i in range(m)]
#     matrix = []
#     for i in range(1,m):
#         row=list(map(int,input("enter the element:").split()))
#         matrix.append(row)

#     # Row-wise max
#     max_in_rows(matrix)

#     # Col-wise max
#     max_in_cols(matrix)

#     # Max in 1D array
#     max_in_1d(elements)


# if __name__ == "__main__":
#     main()
