#include <iostream>

int main() {
  // Saving the age of the dog in years
  int dog_age = 14;
  int early_years;
  int later_years;
  int human_years;

  // Early years saves the equivalent in human years of the first two years of the dog
  early_years = 21;

  // Each following year counts as 4 human years
  later_years = (dog_age - 2) * 4;

  // Total age of the dog in human years
  human_years = early_years + later_years;

  std::cout << "My name is Luna! Ruff ruff, I am " << human_years << " years old in human years.\n";
}