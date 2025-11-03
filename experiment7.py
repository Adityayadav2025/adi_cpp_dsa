# 8 queen problem 
N=8;
def print_board(board):
    for i in range(N):
        row=""
        for j in range(N):
            if board[i]==j:
                row+="Q "
            else:
                row+=". "
        print(row)
    print("\n")
def is_safe(board,row,col):
    for i in range(row):
        if board[i]==col or abs(board[i]-col)==abs(i-row):
            return False
    return True
def solve_queens(board,row):
    if row==N:
        print_board(board)
        return True
    for col in range(N):
        if is_safe(board,row,col):
            board[row]=col
            if solve_queens(board,row+1):
                return True
        return False
board=[-1]*N
solve_queens(board,0)                  

                            