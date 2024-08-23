#include <boost/graph/adjacency_list.hpp>
#include <iostream>

using namespace boost;
using namespace std;

// Define the graph type (undirected graph)
typedef adjacency_list<vecS, vecS, undirectedS> Graph;
int main() {
    // Initialize the graph
    Graph social_graph;

    // Add some users (vertices)
    auto user1 = add_vertex(social_graph);
    auto user2 = add_vertex(social_graph);
    auto user3 = add_vertex(social_graph);
    auto user4 = add_vertex(social_graph);

    // Add friendships (edges)
    add_edge(user1, user2, social_graph);
    add_edge(user2, user3, social_graph);
    add_edge(user3, user4, social_graph);
    add_edge(user4, user1, social_graph);

    return 0;
}