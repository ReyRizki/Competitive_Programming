type
	TNilai = 1..1000;
	THasil = 1000..1000000;
var
	jumlah: THasil;
	i, N, B: TNilai;
	
begin
	jumlah:= 0;
	readln(N);
	for i:= 1 to N do begin
		read(B);
		jumlah:= jumlah + B;
	end;
	
	writeln(jumlah);
end.