var
	A, B, C: longword;
	
procedure reverse(var x: longword);
var
	temp, ret: longword;
	
begin
	temp := x;
	ret := 0;
	while temp > 0 do begin
		ret := (ret * 10) + (temp mod 10);
		temp := temp div 10;
	end;
	x := ret;
end;

begin
	readln(A, B);
	reverse(A);
	reverse(B);
	C := A + B;
	reverse(C);
	writeln(C);
end.