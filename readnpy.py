from __future__ import print_function
import numpy as np
import math
import os
if __name__ == '__main__':
    float_file = "test_float.npy"
    int_file = "test_int.npy"
    float_read = np.load(float_file)
    int_read = np.load(int_file)
    print('float_read shape:',float_read.shape)
    print('int_read shape: ',int_read.shape)
    print("float_read[:10]: ",float_read[:10])
    print("int_read[:10]: ", int_read[:10])

