library ieee;
use ieee.std_logic_1164.all;

entity df is
port(d,clk,rst: in bit;
    Q,Qb : out bit);
end df;

architecture desc of df is
begin 
  process(d,clk,rst) is
  begin
    if(rst = '1')then
      Q = '0';
      Qb = '1';
    else(rising_edge(clk))then
      Q = d;
      Qb <= not d;
end if;
end process;
end desc;
