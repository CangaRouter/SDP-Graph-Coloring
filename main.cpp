#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "util.h"
#include "graphColoringAlgorithms.h"

using namespace std;

//first parameter determines the graph that will be used as input
int main(int argc, char ** argv) {
    int maxColUsed = -1;
    string basePath = "./graphs/benchmark/";
    string graphPaths [] = {"manual/v10.gra", "manual/v100.gra", "small_sparse_real/agrocyc_dag_uniq.gra", "small_sparse_real/human_dag_uniq.gra", "small_dense_real/arXiv_sub_6000-1.gra", "scaleFree/ba10k5d.gra",
            // the next files are too large for git, need to import the "large" folder under "benchmark". It is already ignored in the .gitignore file
                            "large/uniprotenc_22m.scc.gra", "large/go_uniprot.gra" };
    string finalPath = basePath + graphPaths[atoi(argv[1])];

    map<int, vector<int>> graph = readGraph(finalPath);

    vector<int> colors = initializeLabels(graph.size());

    colors = greedyAssignment(graph, colors, &maxColUsed);

    //some output just to be sure the application ran properly
    cout << "number of nodes: " << graph.size() << endl;
    cout << "number of colors: " << maxColUsed << endl;
    cout << "for instance color " << colors[maxColUsed] << " was assigned to node " << maxColUsed << endl; //should never be -1

    return 0;
}
