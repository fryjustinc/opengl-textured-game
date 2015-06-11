#include "Item.h"
#include <vector>
#include <math.h>
using namespace std; //makes using vectors easy
typedef vector< vector < vector < vector< Item > > > > DataContainer;

class Map
{

public:
	DataContainer mapGrid;
	Item floorGrid[31][45][2];
	DataContainer collisionGrid;
	vector<GLfloat> positions;
	vector<GLfloat> normals;
	vector<GLfloat> texCoords;
	Map()
	{
		/* skybox square
		//LEFT
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);	
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		//front
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		//right
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		//back
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		//top
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		//bottom
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(-1);
		positions.push_back(1);
		positions.push_back(-1);
		positions.push_back(-1);
		

		for(int i = 0; i<24;i++)
			normals.push_back(0);
		for(int i = 0; i<16;i++)
			texCoords.push_back(0);*/
		mapGrid.resize(31);
		for (int i = 0; i < 31; ++i) {
			mapGrid[i].resize(45);
			for (int j = 0; j < 45; ++j) {
				mapGrid[i][j].resize(2);
			}
		}
		collisionGrid.resize(31);
		for (int i = 0; i < 31; ++i) {
			collisionGrid[i].resize(45);
			for (int j = 0; j < 45; ++j) {
				collisionGrid[i][j].resize(2);
			}
		}
		for (int i = 0; i < 31; i++){
			for (int j = 0; j < 45; j++){
				for (int k = 0; k < 1; k++){
					floorGrid[i][j][k] = Floor(30 + i, 30 + j, k);
				}
			}
		}
		Wall w1 = Wall(45, 30, 0, 0);
		Wall w2 = Wall(46, 30, 0, 0);
		Wall w3 = Wall(47, 30, 0, 0);
		Wall w4 = Wall(48, 30, 0, 0);
		Wall w5 = Wall(49, 30, 0, 0);
		Wall w6 = Wall(50, 30, 0, 0);
		Wall w7 = Wall(51, 30, 0, 0);
		Wall w8 = Wall(52, 30, 0, 0);
		Wall w9 = Wall(53, 30, 0, 0);
		Wall w10 = Wall(54, 30, 0, 0);
		Wall w11 = Wall(55, 30, 0, 0);
		Wall w12 = Wall(56, 30, 0, 0);
		Wall w13 = Wall(57, 30, 0, 0);
		Wall w14 = Wall(58, 30, 0, 0);
		Wall w15 = Wall(59, 30, 0, 0);
		collisionGrid[15][0][0].push_back(w1);
		collisionGrid[16][0][0].push_back(w2);
		collisionGrid[17][0][0].push_back(w3);
		collisionGrid[18][0][0].push_back(w4);
		collisionGrid[19][0][0].push_back(w5);
		collisionGrid[20][0][0].push_back(w6);
		collisionGrid[21][0][0].push_back(w7);
		collisionGrid[22][0][0].push_back(w8);
		collisionGrid[23][0][0].push_back(w9);
		collisionGrid[24][0][0].push_back(w10);
		collisionGrid[25][0][0].push_back(w11);
		collisionGrid[26][0][0].push_back(w12);
		collisionGrid[27][0][0].push_back(w13);
		collisionGrid[28][0][0].push_back(w14);
		collisionGrid[29][0][0].push_back(w15);

		// right wall
		Wall w16 = Wall(60, 31, 0, 1);
		Wall w17 = Wall(60, 32, 0, 1);
		Wall w18 = Wall(60, 33, 0, 1);
		Wall w19 = Wall(60, 34, 0, 1);
		Wall w20 = Wall(60, 35, 0, 1);
		Wall w21 = Wall(60, 36, 0, 1);
		Wall w22 = Wall(60, 37, 0, 1);
		Wall w23 = Wall(60, 38, 0, 1);
		Wall w24 = Wall(60, 39, 0, 1);
		Wall w25 = Wall(60, 40, 0, 1);
		Wall w26 = Wall(60, 41, 0, 1);
		Wall w27 = Wall(60, 42, 0, 1);
		Wall w28 = Wall(60, 43, 0, 1);
		Wall w29 = Wall(60, 44, 0, 1);
		Wall w30 = Wall(60, 45, 0, 1);
		collisionGrid[30][1][0].push_back(w16);
		collisionGrid[30][2][0].push_back(w17);
		collisionGrid[30][3][0].push_back(w18);
		collisionGrid[30][4][0].push_back(w19);
		collisionGrid[30][5][0].push_back(w20);
		collisionGrid[30][6][0].push_back(w21);
		collisionGrid[30][7][0].push_back(w22);
		collisionGrid[30][8][0].push_back(w23);
		collisionGrid[30][9][0].push_back(w24);
		collisionGrid[30][10][0].push_back(w25);
		collisionGrid[30][11][0].push_back(w26);
		collisionGrid[30][12][0].push_back(w27);
		collisionGrid[30][13][0].push_back(w28);
		collisionGrid[30][14][0].push_back(w29);
		collisionGrid[30][15][0].push_back(w30);

		// far wall
		Wall w33 = Wall(59, 45, 0, 0);
		// w34 is opening
		Wall w35 = Wall(57, 45, 0, 0);
		Wall w36 = Wall(56, 45, 0, 0);
		Wall w37 = Wall(55, 45, 0, 0);
		Wall w38 = Wall(54, 45, 0, 0);
		Wall w39 = Wall(53, 45, 0, 0);
		Wall w40 = Wall(52, 45, 0, 0);
		Wall w41 = Wall(51, 45, 0, 0);
		Wall w42 = Wall(50, 45, 0, 0);
		Wall w43 = Wall(49, 45, 0, 0);
		Wall w44 = Wall(48, 45, 0, 0);
		Wall w45 = Wall(47, 45, 0, 0);
		Wall w46 = Wall(46, 45, 0, 0);
		Wall w47 = Wall(45, 45, 0, 0);
		collisionGrid[29][15][0].push_back(w33);
		collisionGrid[27][15][0].push_back(w35);
		collisionGrid[26][15][0].push_back(w36);
		collisionGrid[25][15][0].push_back(w37);
		collisionGrid[24][15][0].push_back(w38);
		collisionGrid[23][15][0].push_back(w39);
		collisionGrid[22][15][0].push_back(w40);
		collisionGrid[21][15][0].push_back(w41);
		collisionGrid[20][15][0].push_back(w42);
		collisionGrid[19][15][0].push_back(w43);
		collisionGrid[18][15][0].push_back(w44);
		collisionGrid[17][15][0].push_back(w45);
		collisionGrid[16][15][0].push_back(w46);
		collisionGrid[15][15][0].push_back(w47);
		
		// left wall
		Wall w48 = Wall(45, 45, 0, 1);
		Wall w49 = Wall(45, 44, 0, 1);
		Wall w50 = Wall(45, 43, 0, 1);
		Wall w51 = Wall(45, 42, 0, 1);
		Wall w52 = Wall(45, 41, 0, 1);
		Wall w53 = Wall(45, 40, 0, 1);
		Wall w54 = Wall(45, 39, 0, 1);
		Wall w55 = Wall(45, 38, 0, 1);
		Wall w56 = Wall(45, 37, 0, 1);
		Wall w57 = Wall(45, 36, 0, 1);
		Wall w58 = Wall(45, 35, 0, 1);
		Wall w59 = Wall(45, 34, 0, 1);
		Wall w60 = Wall(45, 33, 0, 1);
		Wall w61 = Wall(45, 32, 0, 1);
		Wall w62 = Wall(45, 31, 0, 1);
		collisionGrid[15][15][0].push_back(w48);
		collisionGrid[15][14][0].push_back(w49);
		collisionGrid[15][13][0].push_back(w50);
		collisionGrid[15][12][0].push_back(w51);
		collisionGrid[15][11][0].push_back(w52);
		collisionGrid[15][10][0].push_back(w53);
		collisionGrid[15][9][0].push_back(w54);
		collisionGrid[15][8][0].push_back(w55);
		collisionGrid[15][7][0].push_back(w56);
		collisionGrid[15][6][0].push_back(w57);
		collisionGrid[15][5][0].push_back(w58);
		collisionGrid[15][4][0].push_back(w59);
		collisionGrid[15][3][0].push_back(w60);
		collisionGrid[15][2][0].push_back(w61);
		collisionGrid[15][1][0].push_back(w62);
		
		Wall w63 = Wall(50, 31, 0, 1);
		Wall w64 = Wall(50, 32, 0, 1);
		Wall w65 = Wall(50, 33, 0, 1);
		Wall w66 = Wall(50, 34, 0, 1);
		collisionGrid[20][1][0].push_back(w63);
		collisionGrid[20][2][0].push_back(w64);
		collisionGrid[20][3][0].push_back(w65);
		collisionGrid[20][4][0].push_back(w66);
		
		//	Wall w67 = Wall(50, 34, 0, 0);
		Wall w68 = Wall(51, 34, 0, 0);
		Wall w69 = Wall(52, 34, 0, 0);
		Wall w70 = Wall(53, 34, 0, 0);
		Wall w71 = Wall(54, 34, 0, 0);
		Wall w72 = Wall(55, 34, 0, 0);
		Wall w73 = Wall(56, 34, 0, 0);
		Wall w74 = Wall(57, 34, 0, 0);
		Wall w75 = Wall(58, 34, 0, 0);
	//	Wall w76 = Wall(59, 34, 0, 0);
	//	collisionGrid[20][4][0].push_back(w67);
		collisionGrid[21][4][0].push_back(w68);
		collisionGrid[22][4][0].push_back(w69);
		collisionGrid[23][4][0].push_back(w70);
		collisionGrid[24][4][0].push_back(w71);
		collisionGrid[25][4][0].push_back(w72);
		collisionGrid[26][4][0].push_back(w73);
		collisionGrid[27][4][0].push_back(w74);
		collisionGrid[28][4][0].push_back(w75);
	//	collisionGrid[29][4][0].push_back(w76);
		
		Wall w77 = Wall(56, 39, 0, 0);
		Wall w78 = Wall(57, 39, 0, 0);
		Wall w79 = Wall(58, 39, 0, 0);
		Wall w80 = Wall(59, 39, 0, 0);
		collisionGrid[26][9][0].push_back(w77);
		collisionGrid[27][9][0].push_back(w78);
		collisionGrid[28][9][0].push_back(w79);
		collisionGrid[29][9][0].push_back(w80);

		Wall w81 = Wall(56, 45, 0, 1);
		Wall w82 = Wall(56, 44, 0, 1);
		Wall w83 = Wall(56, 43, 0, 1);
		Wall w84 = Wall(56, 42, 0, 1);
		collisionGrid[26][15][0].push_back(w81);
		collisionGrid[26][14][0].push_back(w82);
		collisionGrid[26][13][0].push_back(w83);
		collisionGrid[26][12][0].push_back(w84);

		Wall w85 = Wall(45, 38, 0, 0);
		Wall w86 = Wall(46, 38, 0, 0);
		Wall w87 = Wall(47, 38, 0, 0);
		Wall w88 = Wall(49, 38, 0, 0);
		collisionGrid[15][8][0].push_back(w85);
		collisionGrid[16][8][0].push_back(w86);
		collisionGrid[17][8][0].push_back(w87);
		collisionGrid[19][8][0].push_back(w88);
		Wall w89 = Wall(50, 39, 0, 1);
		Wall w90 = Wall(50, 40, 0, 1);
		Wall w91 = Wall(50, 41, 0, 1);
		Wall w92 = Wall(50, 42, 0, 1);
		Wall w93 = Wall(50, 43, 0, 1);
		Wall w94 = Wall(50, 44, 0, 1);
		Wall w95 = Wall(50, 45, 0, 1);
		collisionGrid[20][9][0].push_back(w89);
		collisionGrid[20][10][0].push_back(w90);
		collisionGrid[20][11][0].push_back(w91);
		collisionGrid[20][12][0].push_back(w92);
		collisionGrid[20][13][0].push_back(w93);
		collisionGrid[20][14][0].push_back(w94);
		collisionGrid[20][15][0].push_back(w95);
		Window window1 = Window(48, 38, 0, 0);
		collisionGrid[18][8][0].push_back(window1);
		Cover cover1 = Cover(56, 35, 0, 1);
		collisionGrid[26][5][0].push_back(cover1);
		Cover cover2 = Cover(52, 42, 0, 0);
		Cover cover3 = Cover(53, 42, 0, 0);
		collisionGrid[22][12][0].push_back(cover2);
		collisionGrid[23][12][0].push_back(cover3);
		Cover cover4 = Cover(58, 42, 0, 0);
		collisionGrid[28][12][0].push_back(cover4);
		//fill with objects

		for (int m = 0; m < 31; m++){
			for (int j = 0; j < 45; j++){
				for (int k = 0; k < 2; k++){
					vector<Item> posFromItem = collisionGrid[m][j][k];
					for (int i = 0; i < posFromItem.size(); i++){
						
						mapGrid[m][j][k].push_back(posFromItem[i]);
					}
					mapGrid[m][j][k].push_back(floorGrid[m][j][k]);
				}
			}
		
		}
				for (int i =0; i<3;i++){
		for (int n = 0; n < 31; n++){
			for (int j = 0; j < 45; j++){
				for (int k = 0; k < 2; k++){
					for (int l = 0; l < mapGrid[n][j][k].size(); l++){
						if(mapGrid[n][j][k][l].itemtype.size()!=0&&(mapGrid[n][j][k][l].itemtype[0]==i)){
						vector<GLfloat> posFromItem = mapGrid[n][j][k][l].getPolygons();
						for (int i = 0; i < posFromItem.size(); i++){
							positions.push_back(posFromItem[i]);
						}
						vector<GLfloat> normFromItem = mapGrid[n][j][k][l].getNormals();
						for (int i = 0; i < posFromItem.size(); i++){
							normals.push_back(normFromItem[i]);
						}
						vector<GLfloat> texCoordsFromItem = mapGrid[n][j][k][l].getTexCoords();
						for (int i = 0; i < texCoordsFromItem.size(); i++){
							texCoords.push_back(texCoordsFromItem[i]);
						}
						}
					}
				}
			}
		}
		}
	}

	vector<Item> getObjectsAt(int x, int y, int z){
		return mapGrid[x][y][z];
	}

	size_t getPositionBytes() const {
		return positions.size()*sizeof(GLfloat);
	}

	GLfloat const * getPosition() const {
		return &positions[0];
	}

	size_t getNormalBytes() const {
		return normals.size()*sizeof(GLfloat);
	}

	GLfloat const * getNormals() const {
		return &normals[0];
	}
	
	float getUnitSize() {
		return 1.0f;
	}

	int getVertexCount() const
	{ return positions.size(); }

	GLfloat const * getTexCoords() const
	{ return &texCoords[0]; }
	
	size_t getTexCoordBytes() const
	{ return texCoords.size()*sizeof(GLfloat); }

	bool bottomBlocked(float x, float y, float z) {
		int xF = floor(x-30.00000001);
		int yC = ceil(y-29.9999999);
		int zF = floor(z-0.29999999);
		for(int i = 0; i < collisionGrid[xF][yC-1][zF].size(); i++){
			if(collisionGrid[xF][yC-1][zF].at(i).getOrientation()==0)
			return true;
		}
		return false;
	}

	bool topBlocked(float x, float y, float z) {
		int xF = floor(x - 30.00000001);
		int yC = ceil(y - 29.9999999);
		int zF = floor(z - 0.29999999);
		for(int i = 0; i < collisionGrid[xF][yC][zF].size(); i++){
			if(collisionGrid[xF][yC][zF].at(i).getOrientation()==0)
			return true;
		}
		return false;
	}
	
	bool leftBlocked(float x, float y, float z) {
		int xF = floor(x - 30.00000001);
		int yC = ceil(y - 29.9999999);
		int zF = floor(z - 0.29999999);
		for(int i = 0; i < collisionGrid[xF][yC][zF].size(); i++){
			if(collisionGrid[xF][yC][zF].at(i).getOrientation()==1)
			return true;
		}
		return false;
	}

	bool rightBlocked(float x, float y, float z) {
		int xF = floor(x - 30.00000001);
		int yC = ceil(y - 29.9999999);
		int zF = floor(z - 0.29999999);
		for(int i = 0; i < collisionGrid[xF+1][yC][zF].size(); i++){
			if(collisionGrid[xF+1][yC][zF].at(i).getOrientation()==1)
			return true;
		}
		return false;
	}
	

	
};