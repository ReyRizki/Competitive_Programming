var
	A, B, K, x: integer;

function f(K: integer): integer;

begin
	if K > 1 then begin
		f := abs(A * f(K - 1) + B);
	end else if K = 1 then begin
		f := abs(A * x + B);
	end;
end;

begin
	readln(A, B, K, x);
	writeln(f(K));
end.