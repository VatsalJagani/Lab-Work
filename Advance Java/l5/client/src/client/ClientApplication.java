/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package client;

import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import myinterface.FactorialInterface;

/**
 *
 * @author user1
 */
public class ClientApplication {
    public static void main(String args[]) throws NotBoundException, MalformedURLException, RemoteException
    {
        FactorialInterface obj;
        obj=(FactorialInterface)Naming.lookup("rmi://localhost:1099/factorialService");
        int fact=obj.getFactorial(4);
        System.out.println("factorial of 4 is : "+fact);
    }
}
