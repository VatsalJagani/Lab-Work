/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package classes;

/**
 *
 * @author user1
 */
public class BeanCalc {
    private double op1;
    private double op2;
    private double result;
    private int operator;
    public void setOp1(double o)
    {
        op1=o;
    }
    public double getOp1()
    {
        return(op1);
    }
    public void setOp2(double o)
    {
        op2=o;
    }
    public double getOp2()
    {
        return(op2);
    }
    public void setResult(double r)
    {
        result=r;
    }
    public double getResult()
    {
        switch(operator)
        {
            case 1:result=op1+op2;break;
                case 2:result=op1-op2;break;
                    case 3:result=op1*op2;break;
                        case 4:result=op1/op2;break;
                        default :result=0.0;
        }
        return(result);
    }
    public void setOperator(int o)
    {
        operator=o;
    }
    public int getOperator()
    {
        return(operator);
    }
}
