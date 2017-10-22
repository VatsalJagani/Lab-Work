/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package myinterface;

import java.rmi.Remote;
import java.rmi.RemoteException;

/**
 *
 * @author user1
 */
public interface FactorialInterface extends Remote{
    int getFactorial(int n) throws RemoteException;
}
