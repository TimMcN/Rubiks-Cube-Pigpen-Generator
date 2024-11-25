#include<string>
#include<vector>
class Rubiks
{
public:
  Rubiks();
  void SetFace(int face, std::string); // note, no function body        
private:
  int member;
};

// I need to instantiate the full rubiks cube, ordered by faces. TOP, BOTTOM, REAR, FRONT, LEFT, RIGHT
// I should then be able to select any face and update values on a grid 0-9
// I should be able to rotate each face clockwise or counter clockwise and update all corresponding grids.
// I.e. Rotate Clockwise should put each top row from the left face onto the back face, back->right, Right->front, front->right, and should update the top values. 
// Telling each face its opposing face and current face, alongside left and right (where top is always the top color centered face) should allow generalisation of the movement. 