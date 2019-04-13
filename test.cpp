#include <cstdlib>
#include "RecipeList.h"

using std::cout;
using std::endl;

int main()
{
  RecipeList currentList = RecipeList();

  currentList.addRecipe();
  Recipe* temporary = currentList.findRecipe("val");
  temporary->printRecipeName();
  temporary->printIngredients();

  currentList.addRecipe();
  Recipe* temporary2 = currentList.findRecipe("val2");
  temporary2->printRecipeName();
  temporary2->printIngredients();

  currentList.removeRecipe("val");
  currentList.findRecipe("val");
  return 0;
}


//TODO List
/*
Fix printIngredients-DONE
Implement cooking directions
Find recipes with specific ingredients
Export data
Import data

*/

//Possible features
/*
Frequency statistic
*/
