#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

main(){

    //creation
    unordered_map<string,int> m; 

    //insertion
    
    //way1
    pair<string,int> p = make_pair("mi",3);
    m.insert(p);

    //way2
    pair<string,int> p2("oneplus",2);
    m.insert(p2);

    //way3
    m["samsung"] = 1;


    //searching
    cout<<m["oneplus"]<<endl;
    cout<<m.at("samsung")<<endl;

    /*
    //searching if key is not present
    //show error
    cout<<m.at("abc");
    //it will create entry & show 0
    cout<<m["abc"];
    */

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("moto")<<endl;

    //erase
    m.erase("mi");
    cout<<m.size()<<endl;


    //accessing
    //way 1
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;

    cout<<endl;

    //way 2 - iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



}

/*
unordered map uses hash table, TC - O(1)
map uses BST , TC - O(logn)

map preserves order of elements 
whereas unordered map does not

you can apply all above operations to map as well
*/