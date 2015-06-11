using namespace std;

class Object{
public:
	vector<GLfloat> positions;
	Object();
	vector <GLfloat> getPolygons(){
		return positions;
	}
};
class Floor :Object
{
public:
	Floor(GLfloat x, GLfloat y, GLfloat z){
		positions.push_back(x);
		positions.push_back(y);
		positions.push_back(z);
		positions.push_back(x+1);
		positions.push_back(y);
		positions.push_back(z);
		positions.push_back(x);
		positions.push_back(y + 1);
		positions.push_back(z);
		positions.push_back(x + 1);
		positions.push_back(y);
		positions.push_back(z);
		positions.push_back(x);
		positions.push_back(y - 1);
		positions.push_back(z);
		positions.push_back(x + 1);
		positions.push_back(y - 1);
		positions.push_back(z);
	}
};
class Window :Object
{
public:
	Window(GLfloat x, GLfloat y, GLfloat z, int orientation){
		if(orinetation == 0) { //right from point
			#pragma region front
			//front
				//under window
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z);
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z);
				//above window
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 1);
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 1);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z + 1);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				//left of window
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1/5);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1/5);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1/5);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				//right of window
				positions.push_back(x + 4/5);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 4/5);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 4/5);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1);
				positions.push_back(y - 1/8);
				positions.push_back(z + 2/5);
				#pragma endregion
			#pragma region right
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			#pragma endregion
			#pragma region back
				//under window
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z);
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z);
				//above window
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 1);
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 1);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z + 1);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				//left of window
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1/5);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1/5);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1/5);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				//right of window
				positions.push_back(x + 4/5);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
				positions.push_back(x + 4/5);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 4/5);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z + 7/10);
				positions.push_back(x + 1);
				positions.push_back(y + 1/8);
				positions.push_back(z + 2/5);
			#pragma endregion
			#pragma region left
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			#pragma endregion
			#pragma region top
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			#pragma endregion	
		} else { //down from point
			#pragma region front
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			#pragma endregion
			#pragma region right
			//under window
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 2/5);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 2/5);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 2/5);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z);
			//above window
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 7/10);
			//left of window
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 2/5);
			positions.push_back(x + 1/8);
			positions.push_back(y - 4/5);
			positions.push_back(z + 2/5);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y - 4/5);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y - 4/5);
			positions.push_back(z + 2/5);
			//right of window
			positions.push_back(x + 1/8);
			positions.push_back(y - 1/5);
			positions.push_back(z + 2/5);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 2/5);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1/5);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1/5);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 7/10);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 2/5);
			#pragma endregion
			#pragma region back
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z);
			#pragma endregion
			#pragma region left
			//under window
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 2/5);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 2/5);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 2/5);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z);
			//above window
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 7/10);
			//left of window
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 2/5);
			positions.push_back(x - 1/8);
			positions.push_back(y - 4/5);
			positions.push_back(z + 2/5);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y - 4/5);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y - 4/5);
			positions.push_back(z + 2/5);
			//right of window
			positions.push_back(x - 1/8);
			positions.push_back(y - 1/5);
			positions.push_back(z + 2/5);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 2/5);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1/5);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1/5);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 7/10);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 2/5);
			#pragma endregion
			#pragma region top
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			#pragma endregion
		}
	}
};
class Wall :Object
{
public:
	Wall(GLfloat x, GLfloat y, GLfloat z, int orientation){
		if(orinetation == 0) { //right from point
			#pragma region front
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z);
			#pragma endregion
			#pragma region right	
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			#pragma endregion
			#pragma region back
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			#pragma endregion
			#pragma region left
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z);
			#pragma endregion
			#pragma region top
			positions.push_back(x);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y + 1/8);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 1/8);
			positions.push_back(z + 1);
			#pragma endregion
		} else { //down from point
			#pragma region front
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			#pragma endregion
			#pragma region right	
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z);
			#pragma endregion
			#pragma region back
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z);
			#pragma endregion
			#pragma region left
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z);
			#pragma endregion
			#pragma region top
			positions.push_back(x - 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x - 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x + 1/8);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			positions.push_back(x - 0.125f);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
			#pragma endregion
		}
	}
};
class Cover :Object
{
public:
	Cover(GLfloat x, GLfloat y, GLfloat z, int orientation){
		if (orientation == 0){
			//left
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y - 1 / 16);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.push_back(z + 0.33);
			positions.push_back(x);
			positions.push_back(y - 1 / 16);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
			//front
			positions.push_back(x);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x);
			positions.push_back(y - 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z+0.33);
			positions.push_back(x);
			positions.push_back(y - 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
			//right
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x + 1);
			positions.push_back(y + 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x + 1);
			positions.push_back(y + 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			//back
			positions.push_back(x + 1);
			positions.push_back(y + 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.pushback(z);
			positions.push_back(x + 1);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.pushback(z);
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			//top
			positions.push_back(x + 1);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x);
			positions.push_back(y + 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x + 1);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
			positions.push_back(x);
			positions.push_back(y - 1 / 16);
			positions.pushback(z + 0.33);
		}
	else
		{
			//left
			positions.push_back(x - 1 / 16);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x -  1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x - 1 / 16);
			positions.push_back(y);
			positions.push_back(z + 0.33);
			positions.push_back(x - 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x - 1 / 16);
			positions.push_back(y);
			positions.pushback(z + 0.33);
			positions.push_back(x - 1 / 16);
			positions.push_back(y - 1);
			positions.pushback(z + 0.33);
			//front
			positions.push_back(x - 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x - 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z + 0.33);
			positions.push_back(x + 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z + 0.33);
			positions.push_back(x - 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z + 0.33);
			positions.push_back(x + 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z);
			//right
			positions.push_back(x + 1 / 16);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 1 / 16);
			positions.push_back(y);
			positions.push_back(z + 0.33);
			positions.push_back(x + 1 / 16);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 1 / 16);
			positions.push_back(y);
			positions.pushback(z + 0.33);
			positions.push_back(x + 1 / 16);
			positions.push_back(y - 1);
			positions.pushback(z + 0.33);
			//back
			positions.push_back(x - 1 / 16);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x - 1 / 16);
			positions.push_back(y);
			positions.push_back(z + 0.33);
			positions.push_back(x + 1 / 16);
			positions.push_back(y);
			positions.push_back(z + 0.33);
			positions.push_back(x - 1 / 16);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 1 / 16);
			positions.push_back(y);
			positions.push_back(z + 0.33);
			positions.push_back(x + 1 / 16);
			positions.push_back(y);
			positions.push_back(z);
			//top
			positions.push_back(x - 1 / 6);
			positions.push_back(y);
			positions.push_back(z + 0.33);
			positions.push_back(x + 1 / 6);
			positions.push_back(y);
			positions.push_back(z + 0.33);
			positions.push_back(x + 1 / 6);
			positions.push_back(y-1);
			positions.push_back(z + 0.33);
			positions.push_back(x - 1 / 6);
			positions.push_back(y - 1);
			positions.push_back(z + 0.33);
			positions.push_back(x - 1 / 6);
			positions.push_back(y);
			positions.push_back(z + 0.33);
		 }
	}
};
class Ramp :Object
{
public:
	Ramp(GLfloat x, GLfloat y, GLfloat z, int orientation){
		if (orientation == 0){
			positions.push_back(x);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 6);
			positions.push_back(y);
			positions.push_back(z+1);
			positions.push_back(x);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 6);
			positions.push_back(y);
			positions.push_back(z + 1);
			positions.push_back(x);
			positions.push_back(y - 1);
			positions.push_back(z);
			positions.push_back(x + 6);
			positions.push_back(y - 1);
			positions.push_back(z + 1);
		}
		else{
			positions.push_back(x);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x + 1);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y - 6);
			positions.push_back(z + 1)
			positions.push_back(x + 1);
			positions.push_back(y);
			positions.push_back(z);
			positions.push_back(x);
			positions.push_back(y - 6);
			positions.push_back(z + 1);
			positions.push_back(x + 1);
			positions.push_back(y - 6);
			positions.push_back(z + 1);
		}
	}
};
