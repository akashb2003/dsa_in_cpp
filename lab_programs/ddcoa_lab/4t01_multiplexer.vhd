library ieee;
use ieee.std_logic_1164.all;

entity 4to1 is
port(a,b,c,d: in bit;
     s0,s1 : in bit;
    y : out bit);
end 4to1;

architecture desc of 4to1 is
begin 
  process(a,b,c,d,s0,s1) is
  begin
  if(s0='0' and s1='0')then
    y<=a;
  elsif(s0='1' and s1='0')then
    y<=b;
  elsif(s0='0' and s1='1')then
    y<=c;
  else
    y<=d;
end if;
end process;
end desc;
