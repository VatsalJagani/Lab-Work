/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package server;

import java.rmi.AlreadyBoundException;
import java.rmi.RemoteException;
import java.rmi.registry.*;
import myinterface.FactorialInterface;

/**
 *
 * @author user1
 */
public class ServerClass {
    public static void main(String args[]) throws RemoteException, AlreadyBoundException
    {
        FactorialInterface f=new FactorialClass();
        Registry r=LocateRegistry.createRegistry(1099);
        r.rebind("factorialService", f);
    }
}
