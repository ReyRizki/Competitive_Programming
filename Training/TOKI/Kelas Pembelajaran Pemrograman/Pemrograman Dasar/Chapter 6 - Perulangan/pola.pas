type
	TBil = 1..100;
	
var
	N, K, i: TBil;
	
begin
	readln(N, K);
	for i:= 1 to N do begin
		if N < K then break;
		
		if i mod K = 0 then begin
			write('*');
		end else if i mod K <> 0 then begin
			write(i);
		end;
		
		if i < N then write(' ');
	end;
	writeln;
end.