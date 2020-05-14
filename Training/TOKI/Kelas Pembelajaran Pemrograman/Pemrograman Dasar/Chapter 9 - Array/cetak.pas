var
	nilai: array[1..100] of longword;
	N, i: integer;
	
begin
	i:= 1;
	N:= 0;
	while not(eof(input)) do begin
		readln(nilai[i]);
		inc(i);
		N:= N + 1;
	end;
	
	for i := N downto 1 do begin
		writeln(nilai[i]);
	end;
end.