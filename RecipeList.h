#include "List.h"


class RecipeList
{
public:
//Declaration
  RecipeList();
//setters
  void addRecipe();
  void removeRecipe(std::string rName);
  void changeRecipe(int select);
  void exportRecipe(std::string rName);
  void exportAll();

//getters
  int recipeAmount();
  bool listEmpty();
  Recipe* getCurrentRecipe();
  //Sort recipe by most frequent ingredients
  Recipe* findRecipe(std::string rName);
  void printRecipeNames();
  Recipe* findByIngredient(std::string ingr);

  int recipeBegin();

  void importRecipe();
  void importAll();
private:
  std::vector<Recipe> listRecipe;
  Recipe* current;
};
