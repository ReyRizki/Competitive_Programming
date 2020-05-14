var
	tabel: array[1..100000] of longint;
	t, a, b, r, c: longint;
	
begin
	readln(c);
	for a := 1 to c do begin
		read(b);
		inc(tabel[b]);
	end;
	
	t := tabel[100000];
	r := 0;
	
	for a := 99999 downto 1 do begin
		if tabel[a] > t then begin
			t := tabel[a];
			r := a;
		end;
	end;
	writeln(r);
end.