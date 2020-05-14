var
	N, M, P, i, j, k: integer;
	A, B, C: array[1..100, 1..100] of longint;
	
begin
	//Masukan
	readln(N, M, P);
	for i := 1 to N do begin
		for j := 1 to M do begin
			read(A[i, j]);
		end;
	end;
	
	for i := 1 to M do begin
		for j := 1 to P do begin
			read(B[i, j]);
		end;
	end;

	for i := 1 to N do begin
		for j := 1 to P do begin
			for k := 1 to M do begin
				C[i, j] := C[i, j] + A[i, k] * B[k, j];
			end;
		end;
	end;
	
	//Keluaran
	for i := 1 to N do begin
		for j := 1 to P do begin
			write(C[i, j]);
			if j < P then begin
				write(' ');
			end else if j = P then begin
				writeln;
			end;
		end;
	end;		
end.