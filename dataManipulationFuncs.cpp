#include "dataManipulationFuncs.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;



/**
 * Parse data from a csv file. All datapoints in the csv are doubles
 *
 * @param[out] result data from the csv file. result[i] is the data from a column i.
 * @param[in] pathToFile path the csv
 * @param[in] numCol number of columns in the csv 
 */
vector<vector<double>> parseData(const string pathToFile, size_t numCol) {
    vector<vector<double>> result;
    for(size_t i = 0; i < numCol; i++){
        result.push_back(vector<double>{});
    }

    ifstream ifs(pathToFile);
    if(ifs.fail()){ 
        cerr << "Could not open file " + pathToFile << endl;
        exit(2);
    }
    
    /* TODO: STUB */
    return result;
}


/**
 * Smooth data from csv using the sliding window technique. 
   HINT: use getAvgNextNValues in this function so get that working first
 *
 * @param[out] result smoothed data. result[i] is the smoothed data from a column i.
 * @param[in] rawData the raw (not smoothed) data already gathered from parseData.  
 * @param[in] windowSize the length of the window
 */
vector<vector<double>> smoothData(vector<vector<double>>& rawData, size_t windowSize) {
    if(rawData.size() == 0){ 
        cerr << "No data provided to the smooth data function" << endl;
        exit(2);
    }

    vector<vector<double>> result(rawData);

    /* TODO: STUB */

    return result;
}

/**
 * filter data from csv based on its age. 
 *
 * @param[out] result data with that has ages in the range [minAge, maxAge]
 * @param[in] minAge the minAge as an int
 * @param[in] maxAge the minAge as an int
 */
vector<vector<double>> filterData(vector<vector<double>>& rawData, int minAge, int maxAge) {
    if(rawData.size() == 0){ 
        cerr << "No data provided to the filter data function" << endl;
        exit(2);
    }

    vector<vector<double>> result;
    for(size_t i = 0; i < rawData.size(); i++){
        result.push_back(vector<double>{});
    }

    /* TODO: STUB */

    return result;
}
 
/**
 * Compute the avg of the values in a sliding window given a starting index and window length. 
    If the length of the window exceeds the length of the list, compute the avg of the remaining elements instead.
 *
 * @param[out] avg the avg of the sliding window. Don't need to round this.
 * @param[in] startIndex the starting index of the sliding window
 * @param[in] windowLength the length of the window
 * @param[in] v a vector of doubles

 * @Example 1:  
    v = [1.0,2.0,3.0,4.0,5.5]
    startIndex = 2
    windowLength = 3
    avg = (3.0 + 4.0 + 5.5) / 3 = 4.16

 * @Example 2:  
    v = [1.0,2.0,3.0,4.0,5.5]
    startIndex = 3
    windowLength = 3
    avg = (4.0 + 5.5) / 2 = 4.75
 */
double getAvgNextNValues(vector<double> const& v, size_t startIndex , size_t windowLength){ 
    /* TODO: STUB */
    return 0.0;
}   
