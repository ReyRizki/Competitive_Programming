var
	N: real;
	F, C: longint;
  
begin
	readln(N);
  
	if (N = trunc(N)) then begin
		N:= trunc(N);
		writeln (N:0:0, ' ', N:0:0);
	end else if (N < 0) then begin
		C:= trunc(N);
		F:= C-1;
		writeln(F, ' ', C);
	end else if (N > 0) then begin
		C:= trunc(N);
		F:= C+1;
		writeln(C, ' ', F);
	end;
end.
	