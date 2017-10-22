 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package server;

import java.rmi.*;
import java.rmi.server.UnicastRemoteObject;
import myinterface.*;
/**
 *
 * @author user1
 */
public class FactorialClass extends UnicastRemoteObject implements FactorialInterface{
    public FactorialClass() throws RemoteException
    {
        
    }
    public int getFactorial(int n) throws RemoteException
    {
        int fact=1;
        for(int i=n;i>1;i--)
        {
            fact*=i;
        }
        return fact;
    }
}
