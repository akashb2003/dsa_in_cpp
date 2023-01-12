library ieee;
use ieee.std_logic_1164.all;

entity jk is
port(j,k,clk,rst: in std_logic;
    Q,Qb : out std_logic);
end jk;

architecture desc of jk is
begin 
  process(clk,rst) is
  variable qn: std_logic;
  begin
    if(rst = '1')then
      qn = '0';
    else(rising_edge(clk))then
      if(j='0' and k='0')then
        qn := qn;
      elsif(j='1' and k='0')then
        qn := '1';
      elsif(j='0' and k='1')then
        qn := '0';
      elsif(j='1' and k='1')then
        qn := not qn;
      else 
        null;
     end if;
    else
      null;
end if;
 Q<= qn;
 Qb<= not qn;
end process;
end desc;
