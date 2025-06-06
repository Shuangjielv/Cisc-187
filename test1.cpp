#include <iostream>
#include <unordered_map>
#include <vector>
#include<string>

using namespace std;
struct Player {
    string first_name;
    string last_name;
    string team; 
};
vector<Player>findboth(const vector<Player>& basketball_players,const vector<Player>& football_players){
	unordered_map<string,int> hashmap;
	for(const auto& player:basketball_players){
		int i = 0;
		string key = player.first_name +" "+ player.last_name;
		hashmap[key] = i;
		i++;
	}
	vector<Player>both={};
	for(const auto& player : football_players){
		string key = player.first_name +" "+ player.last_name;
		if(hashmap.find(key) != hashmap.end()){
			both.push_back({player.first_name,player.last_name});
		}
	}
	return both;
}
int main(){
	vector<Player> basketball_players = {
      {"Jill","Huang","Gators"},
      {"Janko","Barton","Sharks"},
      {"Wanda","Vakulskas","Sharks"},
      {"Jill", "Moloney", "Gators"},
      {"Luuk", "Watkins",  "Gators"}
    };
    vector<Player> football_players = {
      {"Hanzla", "Radosti", "32ers"},
      {"Tina",  "Watkins",  "Barleycorns"},
      {"Alex",  "Patel",  "32ers"},
      { "Jill", "Huang", "Barleycorns"},
      {"Wanda",  "Vakulskas", "Barleycorns"}
    };
    
    
    for (const auto& player : findboth(basketball_players,football_players)) {
        cout << player.first_name << " " << player.last_name << endl;
    }
    
}
