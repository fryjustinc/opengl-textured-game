using namespace std;

class Target{
public:
	bool hit;
	vector<GLfloat> positions;
	vector<GLfloat> normals;
	vector<GLfloat> itemtype;
	vector<GLfloat> UV;
	Target() {

	}

	vector <GLfloat> getPolygons(){
		return positions;
	}

	vector <GLfloat> getNormals(){
		return normals;
	}

	vector <GLfloat> getTexCoords(){
		return UV;
	}

	int getFloorType(){
		return 0;
	}

};
	