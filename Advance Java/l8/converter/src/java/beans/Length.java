/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package beans;

/**
 *
 * @author VATSAL
 */
public class Length {
    private double meter;
    private double centimeter;
    private double inch;
    
    public void setMeter(double meter)
    {
        this.meter=meter;
        this.centimeter=meter*100;
        this.inch=meter/2.54*100;
    }
    public double getMeter()
    {
        return meter;
    }
    
    public void setCentimeter(double centimeter)
    {
        this.centimeter=centimeter;
        this.meter=centimeter/100;
        this.inch=centimeter/2.54;
    }
    public double getCentimeter()
    {
        return centimeter;
    }
    
    public void setInch(double inch)
    {
        this.inch=inch;
        this.centimeter=inch*2.54;
        this.meter=this.centimeter*100;
    }
    public double getInch()
    {
        return inch;
    }
}
