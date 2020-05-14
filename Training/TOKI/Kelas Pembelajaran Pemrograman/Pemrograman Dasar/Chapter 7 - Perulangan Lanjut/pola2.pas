var
	N, i, j, k: integer;
	
begin
	readln(N);
	for i:= 1 to N do begin
		for j:= 1 to N-i do begin
			write(' ');
		end;
		
		for k:= 1 to i do begin
			write('*');
		end;
	writeln;
	end;
end.