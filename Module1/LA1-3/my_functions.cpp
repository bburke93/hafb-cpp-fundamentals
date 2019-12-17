int Sum(int num1, int num2)
{
  int total = 0;
  for (int control = 1; control <= num1; ++control)
  {
    ++total;
  }
  for (int control = 1; control <= num2; ++control)
  {
    ++total;
  }
  return total;
}