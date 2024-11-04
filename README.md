
# SDP-Graph-Coloring Program

## Overview

The **SDP-Graph-Coloring** program is designed to analyze and color graphs using multiple algorithms. The program supports a variety of graph files and allows the user to specify the number of threads for parallel execution, making it adaptable for large-scale graph processing.

## Table of Contents

- [Compilation](#compilation)
- [Execution](#execution)
- [Graph List](#graph-list)

## Compilation

A precompiled version of the program, `graphColoring.exe`, is included in the root directory of the project.

### Compiling on Windows

If you need to compile the project from source:

1. Import the files into a Visual Studio project.
2. To enable execution on large graphs, go to **Build** > **Configuration Manager** and set the project Platform to **x64** (if available).
3. In Visual Studio, navigate to **Debug** > **Project Debug Properties**, then **Linker** > **System** and set **Enable Large Addresses** to **YES (/LARGEADDRESSAWARE)**.
4. Build the solution using **Ctrl + Shift + B**.

## Execution

The **SDP-Graph-Coloring** program offers multiple execution modes:

1. **Menu Mode**: Specify the graph as an argument, and the program will prompt you to select an algorithm and the number of threads.  
   ```
   graphColoring.exe <graph>
   ```
   - `<graph>` is an integer from 0 to 13, representing the graph to analyze.
   - You will then select the algorithm (integer from 0 to 7) and set the number of threads.

2. **Direct Configuration Mode**: Set the graph, algorithm, and number of threads directly in the command line.
   ```
   graphColoring.exe <graph> <algorithm> <number_of_threads>
   ```
   - Example: `graphColoring.exe 0 2 4` will use graph 0, algorithm 2 (Jones-Plassman), and 4 threads.

3. **Automatic Thread Mode**: Specify only the graph and algorithm; the program will automatically use the maximum threads available on the machine.
   ```
   graphColoring.exe <graph> <algorithm>
   ```
   - Example: `graphColoring.exe 0 2` will use graph 0 and algorithm 2 with maximum available threads.

## Graph List

Below is a list of available graphs and their corresponding input numbers for use in the program:

| Number | Graph File                               |
|--------|-----------------------------------------|
| 0      | manual/v10.gra                          |
| 1      | manual/v100.gra                         |
| 2      | manual/v1000.gra                        |
| 3      | small_sparse_real/agrocyc_dag_uniq.gra  |
| 4      | small_sparse_real/human_dag_uniq.gra    |
| 5      | small_dense_real/arXiv_sub_6000-1.gra   |
| 6      | scaleFree/ba10k5d.gra                   |
| 7      | large/uniprotenc_150m.scc.gra           |
| 8      | large/citeseer.scc.gra                  |
| 9      | large/uniprotenc_22m.scc.gra            |
| 10     | large/go_uniprot.gra                    |
| 11     | large/citeseerx.gra                     |
| 12     | large/cit-Patents.scc.gra               |
| 13     | large/uniprotenc_100m.scc.gra           |
| 14     | small_sparse_real/vchocyc_dag_uniq      |
| 15     | rgg/rgg_n_2_15_s0.graph                 |
| 16     | rgg/rgg_n_2_16_s0.graph                 |
| 17     | rgg/rgg_n_2_17_s0.graph                 |
| 18     | rgg/rgg_n_2_18_s0.graph                 |
| 19     | rgg/rgg_n_2_19_s0.graph                 |

--- 

This `README.md` provides a concise guide to setting up, compiling, and running the **SDP-Graph-Coloring** program. Feel free to update it with specific details or examples as needed.
