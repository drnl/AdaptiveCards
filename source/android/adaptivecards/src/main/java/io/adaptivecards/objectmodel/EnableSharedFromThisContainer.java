/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package io.adaptivecards.objectmodel;

public class EnableSharedFromThisContainer {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected EnableSharedFromThisContainer(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(EnableSharedFromThisContainer obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        throw new UnsupportedOperationException("C++ destructor does not have public access");
      }
      swigCPtr = 0;
    }
  }

  public Container shared_from_this() {
    long cPtr = AdaptiveCardObjectModelJNI.EnableSharedFromThisContainer_shared_from_this(swigCPtr, this);
    return (cPtr == 0) ? null : new Container(cPtr, true);
  }

}