#!/bin/bash
#SBATCH --job-name=superlu_vegen    # Job name
#SBATCH --ntasks=1
#SBATCH --time=02:00:00                 # Time limit hrs:min:sec
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=1
#SBATCH --output=superlu_vegen_%j.log   # Standard output and error log
#SBATCH --partition secondary-eth

/usr/bin/time ./superlu/build/TESTING/c_test -w 100000000 -r 10
/usr/bin/time ./superlu/build/TESTING/d_test -w 100000000 -r 10
/usr/bin/time ./superlu/build/TESTING/s_test -w 100000000 -r 10
/usr/bin/time ./superlu/build/TESTING/z_test -w 100000000 -r 10

