// Ejemplo con opeadores logicos: 6 errores
//-----------------------------------------
int main()
{
  int a[20];
  bool b;
  int c;
  bool a; // Identificador repetido

  b = ((a[2] > 0) && true) || c; // Error en "expresion logica"
  b = a[7] == b;                 // Error en "expresion de igualdad"
  b = !(a[2] * 10);              // Error en "expresion unaria"
  c = b + 1;                     // Error en "expresion aditiva"
  if (a[7] < b)                  // Error en "expresion relacional"
    a[7] = c;
  else
  {
  }

  return 0;
}
