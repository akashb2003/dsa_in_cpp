library ieee;
use ieee.std_logic_1164.all;

entity fa is
port(a,b,c: in bit;
       sum,carry : out bit);
end fa;

architecture desc of fa is
begin 
  sum<= a xor (b xor c);
  carry <=  (a and b)or(c and b)or(a and c);
end desc;
