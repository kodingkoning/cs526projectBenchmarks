#!/bin/bash
#SBATCH --job-name=sim_vegen    # Job name
#SBATCH --ntasks=1
#SBATCH --time=02:00:00                 # Time limit hrs:min:sec
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=1
#SBATCH --output=sim_vegen_%j.log   # Standard output and error log
#SBATCH --partition secondary-eth

/usr/bin/time -v ./vegen_sim 512 1 sim_vegen_

