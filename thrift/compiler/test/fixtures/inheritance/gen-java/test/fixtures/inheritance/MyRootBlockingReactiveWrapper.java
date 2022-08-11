/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.inheritance;

import com.facebook.thrift.client.*;
import java.util.*;

public class MyRootBlockingReactiveWrapper 
    implements MyRoot.Reactive {
    private final MyRoot _delegate;

    public MyRootBlockingReactiveWrapper(MyRoot _delegate) {
        
        this._delegate = _delegate;
    }

    @java.lang.Override
    public void dispose() {
        _delegate.close();
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> doRoot() {
        reactor.core.publisher.Mono<Void> _m = reactor.core.publisher.Mono.<Void>fromRunnable(() -> {
                try {
                    _delegate.doRoot();
                } catch (Throwable _e) {
                    throw reactor.core.Exceptions.propagate(_e);
                }
            });

        if (!com.facebook.thrift.util.resources.RpcResources.isForceExecutionOffEventLoop()) {
            _m = _m.subscribeOn(com.facebook.thrift.util.resources.RpcResources.getOffLoopScheduler());
        }

        return _m;
    }

}