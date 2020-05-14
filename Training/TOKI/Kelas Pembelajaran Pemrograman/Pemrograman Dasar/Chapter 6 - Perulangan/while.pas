type
	TJumlah = 1..100000;
	TBil = 1..1000;

var
	i: integer;
	Jumlah: TJumlah;
	Bil: TBil;
	
begin
	i:= 0;
	jumlah:= 0;
	while (not eof) and (i <= 100) do begin
		readln(bil);
		jumlah:= jumlah + bil;
		i:= i + 1;
	end;
	writeln(jumlah);
end.