
def solve():
    try:
        n_str = sys.stdin.readline()
        if not n_str: return
        n = int(n_str)
        

        m = n * (n - 1) // 2
        weights = list(map(int, sys.stdin.readline().split()))

        weights.sort()
        
        mst_sum = 0
        
        for i in range(1, n):            
            if i > 1:
                skipped_edges_so_far = (i - 1) * (i - 2) // 2
            else:
                skipped_edges_so_far = 0
            
            mst_sum += weights[idx_to_pick]
            
        print(mst_sum)

    except (IOError, ValueError):
        return

def main():
    try:
        num_test_cases_str = sys.stdin.readline()
        if not num_test_cases_str: return
        num_test_cases = int(num_test_cases_str)
        for _ in range(num_test_cases):
            solve()
    except (IOError, ValueError):
        return

if __name__ == "__main__":
    main()