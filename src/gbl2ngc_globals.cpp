/*
*    This program is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
* This program was written while working at Bright Works Computer Consulting
* and allowed to be GPL'd under express permission of the current president
* John Guttridge
* Dated May 20th 2013
*/

#include "gbl2ngc.hpp"

int gVerboseFlag = 0;
int gMetricUnits = 0;
int gUnitsDefault = 1;

char *gInputFilename = NULL;
char *gOutputFilename = NULL;
char *gConfigFilename = NULL;
char *gGCodeHeader = NULL;
char *gGCodeFooter = NULL;

int gFeedRate = 10;
int gSeekRate = 100;

int gShowComments = 1;
int gHumanReadable = 1;

int gScanLineVertical = 0;
int gScanLineHorizontal = 0;
int gScanLineZenGarden = 0;

double gZSafe = 0.1;
double gZZero = 0.0;
double gZCut = -0.05;

FILE *gOutStream = stdout;
FILE *gInpStream = stdin;
FILE *gCfgStream;

double eps = 0.000001;
double gRadius = 0.0;
double gFillRadius = -1.0;

int gInvertFlag = 0;
int gSimpleInfill = 0;
int gDrawOutline = 1;

/*
Polygon_set_2 gPolygonSet;
Offset_polygon_set_2 gOffsetPolygonSet;
std::vector< Offset_polygon_with_holes_2 > gOffsetPolygonVector;

Pwh_vector_2 gerber_list;
*/

std::vector<int> gApertureName;
ApertureNameMap gAperture;




