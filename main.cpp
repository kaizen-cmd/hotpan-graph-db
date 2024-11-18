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

void print_vertices(Graph &g)
{
    auto vertices = boost::vertices(g);
    for (const auto &it : boost::make_iterator_range(vertices))
    {
        std::cout << boost::get(boost::vertex_name, g, it) << std::endl;
    }
}

int main()
{
    Graph g;
    add_node(g, "A");
    add_node(g, "B");
    add_node(g, "C");
    print_vertices(g);
    return 0;
}
