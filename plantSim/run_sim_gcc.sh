#!/bin/bash
#SBATCH --job-name=sim_gcc    # Job name
#SBATCH --ntasks=1
#SBATCH --time=02:00:00                 # Time limit hrs:min:sec
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=1
#SBATCH --output=sim_gcc_%j.log   # Standard output and error log
#SBATCH --partition secondary-eth

/usr/bin/time -v ./sim 512 1 sim_gcc_

