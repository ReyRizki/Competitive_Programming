var
	m, n, i, j: integer;
	A: array[1..100, 1..100] of integer;
	
begin
	readln(m, n);
	for i := 1 to m do begin
		for j := 1 to n do begin
			read(A[i, j]);
		end;
	end;
		
	for i := 1 to n do begin
		for j := m downto 1 do begin
			if j = 1 then begin
				writeln(A[j, i]);
			end else begin
				write(A[j, i], ' ');
			end;
		end;
	end;
end.