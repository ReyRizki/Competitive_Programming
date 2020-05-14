var
	n, i, j, k: integer;
	
begin
	k:= 0;
	readln(n);
	for i:= 1 to n do begin
		for j:= 1 to i do begin
			if k=10 then k:= 0;
			write(k);
			k:= k+1;
		end;
	writeln;
	end;
end.