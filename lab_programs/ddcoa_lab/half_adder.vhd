library ieee;
use ieee.std_logic_1164.all;

entity ha is
  port(a,b: in bit;
       sum,carry : out bit);
end ha;

architecture desc of ha is
begin 
  sum<= a xor b;
  carry <= a and b;
end desc;
