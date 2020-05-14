var
	n, i: integer;
	A, B, m: longint;

begin
	A:= -100000;
	B:= 100000;
	readln(n);
	for i:= 1 to n do begin
		read(m);
		if m > A then begin
			A:= m;
		end;
		if m < B then begin
			B:= m;
		end;
	end;
	
	write (A, ' ', B);
	
end.