#!/bin/bash
#SBATCH --job-name=sim_vegen    # Job name
#SBATCH --ntasks=1
#SBATCH --time=02:00:00                 # Time limit hrs:min:sec
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=1
#SBATCH --output=sim_vegen_%j.log   # Standard output and error log
#SBATCH --partition secondary-eth

echo vegen
/usr/bin/time -v ./vegen_sim 500 1 sim_vegen_
echo llvm
/usr/bin/time -v ./llvm_sim 500 1 llvm_sim_
echo gcc
/usr/bin/time -v ./gcc_sim 500 1 gcc_sim_
echo original vegen
/usr/bin/time -v ./og_vegen_sim 500 1 sim_og_vegen_

