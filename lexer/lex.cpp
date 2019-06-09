#include <lexertl14/include/lexertl/stream_shared_iterator.hpp>
#include <lexertl14/include/lexertl/generator.hpp>
#include <lexertl14/include/lexertl/lookup>
#include <fstream>
#include<iostream>

int main()
{
    lexertl::rules rules;
    lexertl::state_machine sm;
    std::ifstream ifi("../example/test.c");
    lexertl::stream_shared_iterator iter(ifi);
    lexertl::stream_shared_iterator end;
    lexertl::match_results<lexertl::stream_shared_iterator> results(iter, end);
    
    rules.push
}


