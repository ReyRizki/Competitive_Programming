var
	bx, by, kx, ky, x1, y1, x2, y2: longint;

begin
	readln(x1, y1, x2, y2);
	if (x1 > x2) then begin
		bx:= x1;
		kx:= x2;
	end else begin
		bx:= x2;
		kx:= x1;
	end;
	
	if (y1 > y2) then begin
		by:= y1;
		ky:= y2;
	end else begin
		by:= y2;
		ky:= y1;
	end;
	
	writeln((bx - kx) + (by - ky));
end.