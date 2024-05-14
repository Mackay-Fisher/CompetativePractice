#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <unordered_map>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <queue>
#include <stack>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>setA;
        set<int>setB;
        unordered_map<int,int> bmap;
        for(int i=0; i<nums1.size();i++){
            if(setA.find(nums1[i])==setA.end()){
                setA.insert(nums1[i]);
                bmap[nums1[i]]++;
            }
        }
        for(int i=0; i<nums2.size();i++){
            if(setB.find(nums2[i])==setB.end()){
                setB.insert(nums2[i]);
                bmap[nums2[i]]++;
            }
        }
        vector<int> vals;
        for(auto&key:bmap){
            if(key.second == 2){
                vals.push_back(key.first);
            }
        }
        return vals;
    }
};