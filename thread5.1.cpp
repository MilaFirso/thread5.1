#include <iostream>
#include "thread5.1.h"
#include <vector>

int main() {

    SqlSelectQueryBuilder query_builder;
    query_builder.AddColum("name").AddColum("phone");
    query_builder.AddFrom("students");
    

    std::map<std::string, std::string> mp = {
        {"id", "42"}, {"name", "John"}
    };
    query_builder.AddWhere(mp);

    std::cout << query_builder.BuildQuery();
    std::cout << std::endl;

    AdvancedSqlSelectQueryBuilder query_builders;
    query_builders.AddColumns({ "name", "phone" });
    query_builders.AddFrom("students");
    query_builders.MoreLess("id", "42", '>');

    std::cout << query_builders.BuildQuery();

}