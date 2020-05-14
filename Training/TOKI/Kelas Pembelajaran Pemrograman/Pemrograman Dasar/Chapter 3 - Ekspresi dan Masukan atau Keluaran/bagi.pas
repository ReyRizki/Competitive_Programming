type
  TBebek = 1..100000;
  TTeman = 1..100000;

var
  N : TBebek;
  M : TTeman;
  A, B: integer;

begin
  read (N, M);
  readln;
  A := N div M;
  B := N mod M;
  writeln('masing-masing ', A);
  writeln('bersisa ', B);
end.