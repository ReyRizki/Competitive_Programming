type
  TNilai = -100000..100000;

var
  N: TNilai;

begin
  readln(N);
  if (N > 0) and (N mod 2 = 0) then begin
    writeln(N);
  end;
end.