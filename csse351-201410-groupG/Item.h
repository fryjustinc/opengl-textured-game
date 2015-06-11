using namespace std;

class Item{
public:
	int floorType;
      int orientation;
      vector<GLfloat> positions;
	  vector<GLfloat> normals;
	  vector<GLfloat> itemtype;
	  vector<GLfloat> UV;
      Item() {
		  floorType = 0;
            orientation = 0;
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

      int getOrientation(){
            return orientation;
      }
	  int getFloorType(){
		  return 0;
	  }

};
class Floor : public Item
{
public:
      Floor(GLfloat x, GLfloat y, GLfloat z){
		  // ceiling
          positions.push_back(x);
          positions.push_back(y);
          positions.push_back(z);
          positions.push_back(x + 1.0f);
          positions.push_back(y);
          positions.push_back(z);
          positions.push_back(x);
          positions.push_back(y - 1.0f);
          positions.push_back(z);
          positions.push_back(x + 1.0f);
          positions.push_back(y);
          positions.push_back(z);
          positions.push_back(x);
          positions.push_back(y - 1.0f);
          positions.push_back(z);
          positions.push_back(x + 1.0f);
          positions.push_back(y - 1.0f);
          positions.push_back(z);
		  for (int i = 0; i < 12; i++)
			 itemtype.push_back(0);
		  UV.push_back(0.0f);
		  UV.push_back(0.0f);
		  UV.push_back(1.0f);
		  UV.push_back(0.0f);
		  UV.push_back(0.0f);
		  UV.push_back(1.0f);
		  UV.push_back(1.0f);
		  UV.push_back(0.0f);
		  UV.push_back(0.0f);
		  UV.push_back(1.0f);
		  UV.push_back(1.0f);
		  UV.push_back(1.0f);
		  for (int i = 0; i < 6; i++){
			normals.push_back(0);
			normals.push_back(0);
			normals.push_back(-1);
		  }
		  
		  // floor
		  positions.push_back(x);
          positions.push_back(y);
          positions.push_back(z + 0.01);
          positions.push_back(x + 1.0f);
          positions.push_back(y);
          positions.push_back(z + 0.01f);
          positions.push_back(x);
          positions.push_back(y - 1.0f);
          positions.push_back(z + 0.01f);
          positions.push_back(x + 1.0f);
          positions.push_back(y);
          positions.push_back(z + 0.01f);
          positions.push_back(x);
          positions.push_back(y - 1.0f);
          positions.push_back(z + 0.01f);
          positions.push_back(x + 1.0f);
          positions.push_back(y - 1.0f);
          positions.push_back(z + 0.01f);
		  UV.push_back(0.0f);
		  UV.push_back(0.0f);
		  UV.push_back(1.0f);
		  UV.push_back(0.0f);
		  UV.push_back(0.0f);
		  UV.push_back(1.0f);
		  UV.push_back(1.0f);
		  UV.push_back(0.0f);
		  UV.push_back(0.0f);
		  UV.push_back(1.0f);
		  UV.push_back(1.0f);
		  UV.push_back(1.0f);
		  for (int i = 0; i < 6; i++){
			normals.push_back(0);
			normals.push_back(0);
			normals.push_back(1);
		  }
      }
	  int getFloorType(){
		  return 0;
	  }
};
class Window : public Item
{
public:
      Window(GLfloat x, GLfloat y, GLfloat z, int inorientation){
		  orientation = inorientation;
		  if(orientation == 0) { //right from point
                  #pragma region front
                  //front
                        //under window
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z);
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z);
						UV.push_back(0);
						UV.push_back(0);
						UV.push_back(0 + 1.0f);
						UV.push_back(0);
						UV.push_back(0);
						UV.push_back(0 + 0.4f);
						UV.push_back(0);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0);
                        //above window
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 1.0f);
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 1.0f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 1.0f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
						UV.push_back(0);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0);
						UV.push_back(0 + 1.0f);
						UV.push_back(0);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.7f);
                        //wall left of window
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
						UV.push_back(0);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0);
						UV.push_back(0 + 0.7f);
						UV.push_back(0);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.4f);
                        //wall right of window
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
						for (int i = 0; i < 24; i++){
							normals.push_back(0);
							normals.push_back(-1);
							normals.push_back(0);
						  }
                        #pragma endregion
                  #pragma region right
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
				  for (int i = 0; i < 6; i++){
						normals.push_back(1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                  #pragma endregion
                  #pragma region back
                        //under window
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z);
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z);
						UV.push_back(0);
						UV.push_back(0);
						UV.push_back(0 + 1.0f);
						UV.push_back(0);
						UV.push_back(0);
						UV.push_back(0 + 0.4f);
						UV.push_back(0);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0);
                        //above window
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 1.0f);
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 1.0f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 1.0f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
						UV.push_back(0);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0);
						UV.push_back(0 + 1.0f);
						UV.push_back(0);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.7f);
                        //left of window
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
						UV.push_back(0);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0);
						UV.push_back(0 + 0.7f);
						UV.push_back(0);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.4f);
                        //right of window
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 1.0f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 1.0f);
						UV.push_back(0 + 0.4f);
						for (int i = 0; i < 24; i++){
							normals.push_back(0);
							normals.push_back(1);
							normals.push_back(0);
					  }
                  #pragma endregion
                  #pragma region left
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
				  UV.push_back(0 + 0.8f);
				  UV.push_back(0 + 0.4f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.4f);
				  UV.push_back(0 + 0.8f);
				  UV.push_back(0 + 0.7f);
				  UV.push_back(0 + 0.8f);
				  UV.push_back(0 + 0.7f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.7f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.4f);
				  for (int i = 0; i < 6; i++){
						normals.push_back(-1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                  #pragma endregion
                  #pragma region top
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
				  UV.push_back(0);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(0);
						normals.push_back(1);
					  }
                  #pragma endregion 
                  #pragma region window border
                        //bottom (normals face up)
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.25f);
						for (int i = 0; i < 6; i++){
							normals.push_back(0);
							normals.push_back(0);
							normals.push_back(1);
						  }
                        //right (normals face left)
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
						positions.push_back(y - 0.0625f);
						positions.push_back(z + 0.4f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.4f);
						for (int i = 0; i < 6; i++){
							normals.push_back(-1);
							normals.push_back(0);
							normals.push_back(0);
						  }
                        //top (normals face down)
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.8f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.2f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.8f);
						UV.push_back(0 + 0.25f);
						for (int i = 0; i < 6; i++){
							normals.push_back(0);
							normals.push_back(0);
							normals.push_back(-1);
						  }
                        //left (normals face right);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y + 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.2f);
                        positions.push_back(y - 0.0625f);
                        positions.push_back(z + 0.4f); 
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.4f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.0625f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.7f);
						UV.push_back(0 + 0.25f);
						UV.push_back(0 + 0.4f);
						for (int i = 0; i < 6; i++){
							normals.push_back(1);
							normals.push_back(0);
							normals.push_back(0);
						  }
						for (int i = 0; i < 84;i++){
							itemtype.push_back(1);
						}
                  #pragma endregion
            } else { //down from point
                  #pragma region front
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
				  for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(-1);
						normals.push_back(0);
					  }
                  #pragma endregion
                  #pragma region right
                  //under window
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  //above window
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.7f);
                  //left of window
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 0.8f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 0.8f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 0.8f);
                  positions.push_back(z + 0.4f);
                  //right of window
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 0.2f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 0.2f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 0.2f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.4f);
				  for (int i = 0; i < 24; i++){
						normals.push_back(1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                  #pragma endregion
                  #pragma region back
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
				  for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(1);
						normals.push_back(0);
					  }
                  #pragma endregion
                  #pragma region left
                  //under window
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  //above window
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.7f);
                  //left of window
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 0.8f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 0.8f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 0.8f);
                  positions.push_back(z + 0.4f);
                  //right of window
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 0.2f);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.4f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 0.2f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 0.2f);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.7f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 0.4f);
				  for (int i = 0; i < 24; i++){
						normals.push_back(-1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                  #pragma endregion
                  #pragma region top
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
				  for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(0);
						normals.push_back(1);
					  }
                  #pragma endregion
                  #pragma region window border
                        //bottom (normals face up)
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.4f);
						for (int i = 0; i < 6; i++){
							normals.push_back(0);
							normals.push_back(0);
							normals.push_back(1);
						  }
                        //right (normals face in -y)
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.4f);
						for (int i = 0; i < 6; i++){
							normals.push_back(0);
							normals.push_back(-1);
							normals.push_back(0);
						  }
                        //top (normals face down)
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.2f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.7f);
						for (int i = 0; i < 6; i++){
							normals.push_back(0);
							normals.push_back(0);
							normals.push_back(-1);
						  }
                        //left (normals face in positive y)
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.4f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x - 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.7f);
                        positions.push_back(x + 0.0625f);
                        positions.push_back(y - 0.8f);
                        positions.push_back(z + 0.4f);
						for (int i = 0; i < 6; i++){
							normals.push_back(0);
							normals.push_back(1);
							normals.push_back(0);
						  }
                  #pragma endregion
            }
      }
};
class Wall : public Item
{
public:
      Wall(GLfloat x, GLfloat y, GLfloat z, int inorientation){
		  orientation = inorientation;
		  if(orientation == 0) { //right from point
//front
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(0);
					normals.push_back(-1);
					normals.push_back(0);
				  }
  //right
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(1);
					normals.push_back(0);
					normals.push_back(0);
				  }
//back
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(0);
					normals.push_back(1);
					normals.push_back(0);
				  }
//left
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(-1);
					normals.push_back(0);
					normals.push_back(0);
				  }
//top
                  positions.push_back(x);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y + 0.0625f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 1.0f);
                  positions.push_back(y - 0.0625f);
                  positions.push_back(z + 1.0f);
				  UV.push_back(0);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  for (int i = 0; i < 6; i++){
					normals.push_back(0);
					normals.push_back(0);
					normals.push_back(1);
				  }
				  for (int i = 0; i < 30; i++){
					  itemtype.push_back(1);
				  }
            } else { //down from point
                  #pragma region front
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(0);
					normals.push_back(-1);
					normals.push_back(0);
				  }
                  #pragma endregion
                  #pragma region right    
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(1);
					normals.push_back(0);
					normals.push_back(0);
				  }
                  #pragma endregion
                  #pragma region back
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(0);
					normals.push_back(1);
					normals.push_back(0);
				  }
                  #pragma endregion
                  #pragma region left
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0);
				  for (int i = 0; i < 6; i++){
					normals.push_back(-1);
					normals.push_back(0);
					normals.push_back(0);
				  }
                  #pragma endregion
                  #pragma region top
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x + 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
                  positions.push_back(x - 0.0625f);
                  positions.push_back(y - 1.0f);
                  positions.push_back(z + 1.0f);
				  UV.push_back(0);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				  UV.push_back(0 + 0.0625f);
				  UV.push_back(0 + 1.0f);
				 UV.push_back(0 + 0.25f);
				  for (int i = 0; i < 6; i++){
					normals.push_back(0);
					normals.push_back(0);
					normals.push_back(1);
				  }
                  #pragma endregion
				  for (int i = 0; i < 30; i++){
					  itemtype.push_back(1);
				  }
            }
      }
};
class Cover : public Item
{
public:
      Cover(GLfloat x, GLfloat y, GLfloat z, int inorientation){
		  orientation = inorientation;
                  if (orientation == 0){
                     //left
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0 + 0.33f);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0 + 0.33f);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0 + 0.33f);

					 for (int i = 0; i < 6; i++){
						normals.push_back(-1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                     //front
                     positions.push_back(x);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
					 positions.push_back(z + 0.33f);
					UV.push_back(0);
					UV.push_back(0 + 0.33f);
					UV.push_back(0);
					UV.push_back(0);
					UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.33f);
					UV.push_back(0);
					UV.push_back(0);
					UV.push_back(0 + 1.0f);
					UV.push_back(0);
					UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.33f);
					for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(-1);
						normals.push_back(0);
					  }
                     //right
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z + 0.33f);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0 + 0.33f);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0 + 0.33f);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0 + 0.33f);
					 for (int i = 0; i < 6; i++){
						normals.push_back(1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                     //back
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z);
					 positions.push_back(x + 1.0f);
					 positions.push_back(y + 0.0625f);
					positions.push_back(z + 0.33f);
					UV.push_back(0);
					UV.push_back(0 + 0.33f);
					UV.push_back(0);
					UV.push_back(0);
					UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.33f);
					UV.push_back(0);
					UV.push_back(0);
					UV.push_back(0 + 1.0f);
					UV.push_back(0);
					UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.33f);
					 for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(1);
						normals.push_back(0);
					  }
                     //top
                     positions.push_back(x + 1.0f);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y + 0.0625f);
					 positions.push_back(z + 0.33f);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x);
                     positions.push_back(y - 0.0625f);
                     positions.push_back(z + 0.33f);
					 UV.push_back(0 + 1.0f);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
					 UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.25f);
					 UV.push_back(0);
					UV.push_back(0 + 0.25f);
					 for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(0);
						normals.push_back(1);
					  }
					 for (int i = 0; i < 30; i++){
						 itemtype.push_back(2);
					 }
              }
       else
              {
                     //left
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x -  0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 0.33f);
					
                     UV.push_back(0);
                     UV.push_back(0);
                    UV.push_back(0 + 1.0f);
                     UV.push_back(0);
                     UV.push_back(0);
                     UV.push_back(0 + 0.33f);
                    UV.push_back(0 + 1.0f);
                     UV.push_back(0);
                     UV.push_back(0);
                     UV.push_back(0 + 0.33f);
                    UV.push_back(0 + 1.0f);
                     UV.push_back(0 + 0.33f);

					 for (int i = 0; i < 6; i++){
						normals.push_back(-1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                     //front
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);

					UV.push_back(0 + 0.25f);
                     UV.push_back(0);
                    UV.push_back(0 + 0.25f);
                     UV.push_back(0 + 0.33f);
                     UV.push_back(0 + 0.0625f);
                     UV.push_back(0 + 0.33f);
                    UV.push_back(0 + 0.25f);
                     UV.push_back(0);
                     UV.push_back(0 + 0.0625f);
                     UV.push_back(0 + 0.33f);
                     UV.push_back(0 + 0.0625f);
                     UV.push_back(0);

					 for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(-1);
						normals.push_back(0);
					  }
                     //right
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33f);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 0.33f);

					 UV.push_back(0);
                     UV.push_back(0);
                    UV.push_back(0 + 1.0f);
                     UV.push_back(0);
                     UV.push_back(0);
                     UV.push_back(0 + 0.33f);
                    UV.push_back(0 + 1.0f);
                     UV.push_back(0);
                     UV.push_back(0);
                     UV.push_back(0 + 0.33f);
                    UV.push_back(0 + 1.0f);
                     UV.push_back(0 + 0.33f);

					 for (int i = 0; i < 6; i++){
						normals.push_back(1);
						normals.push_back(0);
						normals.push_back(0);
					  }
                     //back
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33);
                     positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33);
                     positions.push_back(x + 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z);

					UV.push_back(0 + 0.25f);
                     UV.push_back(0);
                    UV.push_back(0 + 0.25f);
                     UV.push_back(0 + 0.33f);
                     UV.push_back(0 + 0.0625f);
                     UV.push_back(0 + 0.33f);
                    UV.push_back(0 + 0.25f);
                     UV.push_back(0);
                     UV.push_back(0 + 0.0625f);
                     UV.push_back(0 + 0.33f);
                     UV.push_back(0 + 0.0625f);
                     UV.push_back(0);


					 for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(1);
						normals.push_back(0);
					  }
                     //top
					 positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33);
					 positions.push_back(x + 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33);
					 positions.push_back(x + 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 0.33);
					 positions.push_back(x - 0.0625f);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 0.33);
					 positions.push_back(x - 0.0625f);
                     positions.push_back(y);
                     positions.push_back(z + 0.33);
					 positions.push_back(x + 0.0625f);
					 positions.push_back(y - 1.0f);
					 positions.push_back(z + 0.33);

					UV.push_back(0 + 0.25f);
                     UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
                     UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
                    UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.25f);
                    UV.push_back(0 + 1.0f);
					UV.push_back(0 + 0.25f);
                     UV.push_back(0);
					 UV.push_back(0 + 0.0625f);
					UV.push_back(0 + 1.0f);

					 for (int i = 0; i < 6; i++){
						normals.push_back(0);
						normals.push_back(0);
						normals.push_back(1);
					  }

					 for (int i = 0; i < 30; i++){
						 itemtype.push_back(2);
					 }
              }

      }
};
class Ramp : public Item
{
public:
      Ramp(GLfloat x, GLfloat y, GLfloat z, int inorientation){
		  orientation = inorientation;
		  floorType = 1;
              if (orientation == 0){
                     positions.push_back(x);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x + 6);
                     positions.push_back(y);
                     positions.push_back(z+1);
                     positions.push_back(x);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
					 // vector a = (x - x, y - 1 - y, z - z);				a = (0, -1, 0);
					 // vector b = (x - x - 6, y - 1 - y, z - z - 1.0f);		b = (-6, -1, -1);
					 // N = cross(a, b);									N = (1, 0, -6);
					 // N = normalize(N);									N = (.164, 0, -.986);
					 
                     positions.push_back(x + 6);
                     positions.push_back(y);
                     positions.push_back(z + 1.0f);
                     positions.push_back(x);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z);
                     positions.push_back(x + 6);
                     positions.push_back(y - 1.0f);
                     positions.push_back(z + 1.0f);
					 for (int i = 0; i < 6; i++){
						normals.push_back(.164);
						normals.push_back(0);
						normals.push_back(-.986);
					 }
              }
              else{
                     positions.push_back(x);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x);
                     positions.push_back(y - 6);
                     positions.push_back(z + 1.0f);
					 // vector a = (x + 6 - x - 6, y - 1 - y, z + 1 - z - 1.0f);	a = (0, -1, 0);
					 // vector b = (x + 6 - x, y - 1 - y + 1, z + 1 - z);		b = (6, 0, 1.0f);
					 // N = cross(a, b);										N = (-1, 0, 6);
					 // N = normalize(N);										N = (-.164, 0, .986);
					 
                     positions.push_back(x + 1.0f);
                     positions.push_back(y);
                     positions.push_back(z);
                     positions.push_back(x);
                    positions.push_back(y - 6);
                     positions.push_back(z + 1.0f);
                     positions.push_back(x + 1.0f);
                     positions.push_back(y - 6);
                     positions.push_back(z + 1.0f);
					 for (int i = 0; i < 6; i++){
						normals.push_back(-.164);
						normals.push_back(0);
						normals.push_back(.986);
					 }
              }


      }
	  int getFloorType(){
		  return 1;
	  }
};
class Target : public Item
{
public:
      Target(GLfloat x, GLfloat y, GLfloat z, int orientation){

      }
};
class Bullet : public Item
{
public:
      Bullet(GLfloat x, GLfloat y, GLfloat z, int orientation){

      }
};
class Hit : public Item
{
public:
      Hit(GLfloat x, GLfloat y, GLfloat z, int orientation){

      }
};
