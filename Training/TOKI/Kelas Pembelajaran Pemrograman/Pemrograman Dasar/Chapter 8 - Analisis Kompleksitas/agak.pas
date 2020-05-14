type
	TJumlah = 1..1000;
	TBil = 1..1000000;
	
var
	N, i: TJumlah;
	Bil, j: TBil;
	agak: boolean;
	count: integer;
	
begin
	readln(N);
	for i:= 1 to N do begin
		readln(bil);
		agak := true;
		count := 0;
		j := 2;
		while j < bil do begin
			if bil mod j = 0 then begin
				agak := false;
				inc(count);
			end;
			
			if count > 2 then begin
				break;
			end;
			
			inc(j);
		end;
		
		if (agak = false) and (count > 2) then begin
			writeln('BUKAN');
		end else begin
			writeln('YA');
		end;
	end;
end.