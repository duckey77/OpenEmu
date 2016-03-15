/*
 Copyright (c) 2013, OpenEmu Team
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the OpenEmu Team nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY OpenEmu Team ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL OpenEmu Team BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "OEWiiSystemResponder.h"
#import "OEWiiSystemResponderClient.h"

@implementation OEWiiSystemResponder
@dynamic client;

+ (Protocol *)gameSystemResponderClientProtocol;
{
    return @protocol(OEWiiSystemResponderClient);
}

- (void)changeAnalogEmulatorKey:(OESystemKey *)aKey value:(CGFloat)value
{
    [[self client] didMoveWiiJoystickDirection:(OEWiiButton)[aKey key] withValue:value forPlayer:aKey.player];
}

- (void)changeAccelerometerEmulatorValue:(OESystemKey *)aKey valueX:(CGFloat)valueX valueY:(CGFloat)valueY valueZ:(CGFloat)valueZ
{
    [[self client] didMoveWiiAccelerometer:(OEWiiButton)[aKey key] withValue:valueX withValue:valueY withValue:valueZ forPlayer:aKey.player];
}

- (void)changeIREmulatorValue:(OESystemKey *)aKey X1:(CGFloat)X1 Y1:(CGFloat)Y1 X2:(CGFloat)X2 Y2:(CGFloat)Y2 X3:(CGFloat)X3 Y3:(CGFloat)Y3 X4:(CGFloat)X4 Y4:(CGFloat)Y4
{
      [[self client] didMoveWiiIR:(OEWiiButton)[aKey key] withValue:X1 withValue:Y1  withValue:X2 withValue:Y2  withValue:X3 withValue:Y3  withValue:X4 withValue:Y4 forPlayer:aKey.player];
}

- (void)pressEmulatorKey:(OESystemKey *)aKey
{
    [[self client] didPushWiiButton:(OEWiiButton)[aKey key] forPlayer:[aKey player]];
}

- (void)releaseEmulatorKey:(OESystemKey *)aKey
{
    [[self client] didReleaseWiiButton:(OEWiiButton)[aKey key] forPlayer:[aKey player]];
}

@end
