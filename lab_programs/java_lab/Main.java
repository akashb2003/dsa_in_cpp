import java.awt.*;
import java.awt.event.*;

public class Main extends Frame implements ActionListener
{
    TextField f1,f2,f3;
    Button b1,b2;
    
    Main()
    {
        f1 = new TextField();
        f1.setBounds(50,50,150,20);
        f2 = new TextField();
        f2.setBounds(50,100,150,20);
        f3 = new TextField();
        f3.setBounds(50,150,150,20);
        f3.setEditable(false);
        b1 = new Button("+");
        b1.setBounds(50,200,50,50);
        b2 = new Button("-");
        b2.setBounds(120,200,50,50);
        
        b1.addActionListener(this);
        b2.addActionListener(this);
        
        add(f1);
        add(f2);
        add(f3);
        add(b1);
        add(b2);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    
    public void actionPerformed(ActionEvent e)
    {
        String s1 = f1.getText();
        String s2 = f2.getText();
        
        int a = Integer.parseInt(s1);
        int b = Integer.parseInt(s2);
        int c=0;
        
        if(e.getSource() == b1)
        {
            c = a+b;
        }
        
        if(e.getSource() == b2)
        {
            c = a-b;
        }
        
        String ans = String.valueOf(c);
        f3.setText(ans);
        
    }
    
	public static void main(String[] args) {
		new Main();
	}
}

