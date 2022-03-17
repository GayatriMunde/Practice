import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class TicTacToe implements ActionListener{
    static final int row = 3;
    static final int col = 3;
    static final String player1 = "X";
    static final String player2 = "O";
    static final String draw = "Match tie";
    static final String R = "row";
    static final String C = "col";
    static final String D = "Diagonal";

    int turn = 0;

    JFrame frame = new JFrame("Tik Tac Toe");
    JLabel textfield = new JLabel();
    JPanel heading = new JPanel();
    JPanel bt_panel = new JPanel();
    static JButton[][] grid = new JButton[3][3];

    TicTacToe(){
        //Creating the frame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 600);
        frame.setLayout(new BorderLayout());
        frame.setVisible(true);

        //Lable object to display text
        textfield.setHorizontalAlignment(JLabel.CENTER);
        textfield.setText("Tic Tac Toe");
        textfield.setOpaque(true);

        //Heading
        heading.setLayout(new BorderLayout());
        heading.setBounds(0, 0, 100, 500);

        //Setting the grid
        bt_panel.setLayout(new GridLayout(3, 3));
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                grid[i][j] = new JButton();
                grid[i][j].setBackground(new Color(242, 219, 222));
                grid[i][j].setBorder(BorderFactory.createLineBorder(new Color(222, 165, 164), 3));
                bt_panel.add(grid[i][j]);
                grid[i][j].setFocusable(false);
                grid[i][j].addActionListener(this);
            }
        }

        heading.add(textfield);
        frame.add(heading, BorderLayout.NORTH);
        frame.add(bt_panel);
    }


    void playerWins(String pos, int idx, String player){
        if (pos == R){
            for (int i = 0; i < col; i++)
                grid[idx][i].setBackground(new Color(254, 236, 200));
        }

        if (pos == C){
            for (int i = 0; i < row; i++)
                grid[i][idx].setBackground(new Color(254, 236, 200));           
        }

        if (pos == D){
            if (idx == 0){
                for (int i = 0; i < row; i++)
                    grid[i][i].setBackground(new Color(254, 236, 200));                  
            }
            else{
                int temp = 0;
                for (int i = 0; i < row; i++){
                    grid[i][col-temp].setBackground(new Color(254, 236, 200)); 
                    temp--;
                } 
            }
        }
    }


    boolean isWinner(String player){
        for (int i = 0; i < row; i++){
            if ((grid[i][0].getText() == grid[i][1].getText()) && (grid[i][0].getText() == grid[i][2].getText()) && (grid[i][0].getText() == player)){
                playerWins(R, i, player);
                return true;
            }
        }

        for (int i = 0; i < col; i++){
            if ((grid[0][i].getText() == grid[1][i].getText()) && (grid[0][i].getText() == grid[2][i].getText()) && (grid[0][i].getText() == player)){
                playerWins(C, i, player);
                return true;
            }
        }

        if ((grid[0][0].getText() == grid[1][1].getText()) && (grid[0][0].getText() == grid[2][2].getText()) && (grid[0][0].getText() == player)){
            playerWins(D, 0, player);
            return true;
        }

        if ((grid[0][2].getText() == grid[1][1].getText()) && (grid[1][1].getText() == grid[2][0].getText()) && (grid[1][1].getText() == player)){
            playerWins(D, 1, player);
            return true;
        }

        return false;
    }


    public void gameOver(String s){
        Object[] option={"Restart","Exit"};
        int n=JOptionPane.showOptionDialog(frame, "Game Over\n"+s,"Game Over",JOptionPane.YES_NO_CANCEL_OPTION,JOptionPane.QUESTION_MESSAGE,null,option,option[0]);
        if(n==0){
            frame.dispose();
            new TicTacToe();
        }
        else{
            frame.dispose();
        }
    }


    boolean isDraw(){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if (grid[i][j].getText() == "")
                    return false;
            }
        }
        return true;
    }


    void check(String player){
        if(isWinner(player)){
            String winner = new String(player + " wins!");
            textfield.setText(winner);
            gameOver(winner);
        }
        else if (isDraw()){
            textfield.setText(draw);
            gameOver(draw);
        }
        else{
            return;
        }
    }


    @Override
    public void actionPerformed(ActionEvent e){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if (e.getSource() == grid[i][j]){
                    if (turn % 2 == 0){
                        if (grid[i][j].getText() == ""){
                            grid[i][j].setText(player1);
                            textfield.setText(player2 + " turn");
                            check(player1);
                            turn += 1;
                        }
                    }
                    else {
                        if (grid[i][j].getText() == ""){
                            grid[i][j].setText(player2);
                            textfield.setText(player1 + " turn");
                            check(player2);
                            turn += 1;
                        }
                    }
                }
            }
        }      
    }


    // public void main(String[] args){
    //     String grid[][] = new String[row][col];
    //     String winner = null;

    //     for (int i = 0; i < row; i++){
    //         for (int j = 0; j < col; j++){
    //             grid[i][j] = "";
    //         }
    //     }

    //     System.out.print("Let's start the Game!\n");
    //     System.out.print("Player 1: X\nPlayer 2: O");
    //     printgrid(grid);

    //     winner = startGame(grid);

    //     System.out.print("Winner is " + winner);
    // }
}