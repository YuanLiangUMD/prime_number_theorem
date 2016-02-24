#!/usr/bin/python

import math
import numpy as np
import matplotlib.pyplot as plt

f = open("prime_num.txt","r+")
nums = []
for i in f:
	nums.append(float(i) )
x = []
tmp = 1
for i in range(len(nums) ):
	tmp = tmp * 10
	x.append(tmp )

y = np.divide(x,np.log(x))
error = np.divide(np.absolute(np.subtract(y,nums)),nums)
ratio = np.divide(nums,y)
plt.xlabel("x")
plt.ylabel("number of primes ")
plt.title("ratio P(x)/(x/ln(x) )")
plt.plot(x,ratio,'^g-')
plt.xscale('log')
plt.grid(True)
plt.axis([-1,x[-1]*10,0.8,1.2])
plt.show()
