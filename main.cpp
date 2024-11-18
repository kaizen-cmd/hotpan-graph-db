#include <iostream>
#include <vector>
#include <boost/graph/adjacency_list.hpp>

using Graph = boost::adjacency_list<boost::vecS, boost::vecS, boost::undirectedS, boost::property<boost::vertex_name_t, std::string>>;

void add_node(Graph &g, const std::string &name)
{
    size_t v = boost::add_vertex(g);
    boost::put(boost::vertex_name, g, v, name);
    std::cout << "Added node " << name << std::endl;
}

int main()
{
    Graph g;
    size_t v = boost::add_vertex(g);
    return 0;
}
