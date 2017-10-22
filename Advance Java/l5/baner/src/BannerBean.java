
import java.awt.Label;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author user1
 */
public class BannerBean extends Label implements Runnable {

    /**
     * @param args the command line arguments
     */
    private String s;
    Thread t;
    private boolean flag;

    public BannerBean() {

    }

    public void setS(String s) {
        this.s = s;
    }

    public String getS() {
        return s;
    }

    public void setFlag(boolean flag) {
        this.flag = flag;
        if (flag) {
            t = new Thread(this);
            t.start();
        } else {
            t = null;
        }
    }

    public boolean getFlag() {
        return flag;
    }

    public void run() {
        char ch;
        while (true) {
            if (!flag) {
                t = null;
                break;
            }
            ch = s.charAt(0);
            s=s.substring(1, s.length());
            s += ch;
            this.setText(s);
            try {
                Thread.sleep(100);
            } catch (Exception e) {
                System.out.println("Error : " + e);
            }
        }
    }
}
