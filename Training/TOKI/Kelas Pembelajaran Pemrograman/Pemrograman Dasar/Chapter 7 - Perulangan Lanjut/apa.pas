type
	TBil = 1..50;
	
var
	N, i: TBil;
	
begin
	readln(N);
	for i:= 1 to N do begin
		if i mod 10 = 0 then begin
			continue;
		end else if i = 42 then begin
			writeln('ERROR');
			exit;
		end else begin
			writeln(i);
		end;
	end;
end.