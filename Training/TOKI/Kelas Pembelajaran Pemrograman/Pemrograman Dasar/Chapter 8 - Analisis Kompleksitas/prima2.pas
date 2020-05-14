type
	TJumlah = 1..1000;
	TBil = 1..1000000;
	
var
	N, i: TJumlah;
	bil, j: TBil;
	prima: boolean;
	
begin
	readln(N);
	for i := 1 to N do begin
		readln(bil);
		prima := true;
		if n = 1 then prima := false;
		
		if n > 1 then begin
			for j := 2 to trunc(sqrt(bil)) do begin
				if bil mod j = 0 then begin
					prima := false;
				end;
			end;
		end;
		
		if prima = false then begin
			writeln('BUKAN');
		end else if prima = true then begin
			writeln('YA');
		end;
	end;
end.