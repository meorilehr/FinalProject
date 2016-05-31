/*
 * Map.h
 *
 *  Created on: May 28, 2016
 *      Author: colman
 */

#include <vector>
#include <math.h>
#include "../Managers/ConfigurationManager.h"
#include "../Utils/pngUtil.h"
#include "../Utils/lodepng.h"

using namespace Managers;
class Map {
public:
    Map(const char* filename);
    Map(unsigned Rows,unsigned Cols);
    ~Map();
    unsigned m_Rows;
    unsigned m_Cols;
    std::vector< std::vector<unsigned char> > FatGrid;
    std::vector< std::vector<unsigned char> > RegGrid;
    
    void PrintMap(const char* filename);
    
    inline unsigned getCols() {
        return m_Cols;
    };
    
    inline unsigned getRows() {
        return m_Rows;
    };
protected:
    unsigned width, height;
    std::vector<unsigned char> RegImage;
    std::vector<unsigned char> FatImage;
    
private:
    void initMap(const char* filename);
    std::vector< std::vector<unsigned char> > CreatGridFromMap(std::vector<unsigned char> PngMap,unsigned MapHeight,unsigned MapWidth, float GridResolutionCm, float PixelPerCm, unsigned &GridCols, unsigned &GridRows);
};
