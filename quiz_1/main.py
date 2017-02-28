import time
import sys
def c_frac(integer):
	if integer == 1:
		return 2
	return 1+ 1/c_frac(integer-1)

sys.setrecursionlimit(10000000)
start_time = time.time()

a = c_frac(10000)
print(a)
print("--- %s seconds ---" % (time.time() - start_time))
