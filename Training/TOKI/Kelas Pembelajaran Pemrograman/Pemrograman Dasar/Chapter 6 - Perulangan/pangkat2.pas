var
	n, m: longint;
	
begin
	readln(n);
	m:=1;
	while m<n do begin
		m:= m*2;
	end;
	
	if n=m then begin
		writeln('ya');
	end else begin
		writeln('bukan');
	end;
end.