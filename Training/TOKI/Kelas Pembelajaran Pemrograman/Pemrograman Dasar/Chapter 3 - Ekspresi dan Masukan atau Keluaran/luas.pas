Type
  TAlas= 1..100;
  TTinggi= 1..100;

var
  A: TAlas;
  T: TTinggi;
  luas: real;
begin
  read (A, T);
  luas := (A*T)/2;
  writeln (luas:0:2);
end.