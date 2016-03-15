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

#import <Cocoa/Cocoa.h>

@protocol OESystemResponderClient;

typedef enum _OEWiiButton
{
    OEWiiMoteButtonUp,
    OEWiiMoteButtonDown,
    OEWiiMoteButtonLeft,
    OEWiiMoteButtonRight,
    OEWiiMoteButtonA,
    OEWiiMoteButtonB,
    OEWiiMoteButton1,
    OEWiiMoteButton2,
    OEWiiMoteButtonPlus,
    OEWiiMoteButtonMinus,
    OEWiiMoteButtonHome,
    OEWiiNunchukAnalogUp,
    OEWiiNunchukAnalogDown,
    OEWiiNunchukAnalogLeft,
    OEWiiNunchukAnalogRight,
    OEWiiNunchukButtonC,
    OEWiiNunchuckButtonZ,
    OEWiiClassicButtonUp,
    OEWiiClassicButtonDown,
    OEWiiClassicButtonLeft,
    OEWiiClassicButtonRight,
    OEWiiClassicAnalogLUp,
    OEWiiClassicAnalogLDown,
    OEWiiClassicAnalogLLeft,
    OEWiiClassicAnalogLRight,
    OEWiiClassicAnalogRUp,
    OEWiiClassicAnalogRDown,
    OEWiiClassicAnalogRLeft,
    OEWiiClassicAnalogRRight,
    OEWiiClassicButtonA,
    OEWiiClassicButtonB,
    OEWiiClassicButtonX,
    OEWiiClassicButtonY,
    OEWiiClassicButtonL,
    OEWiiClassicButtonR,
    OEWiiClassicButtonZl,
    OEWiiClassicButtonZr,
    OEWiiClassicButtonStart,
    OEWiiClassicButtonSelect,
    OEWiiClassicButtonHome,
    OEWiiButtonCount
} OEWiiButton;

@protocol OEWiiSystemResponderClient <OESystemResponderClient, NSObject>

- (oneway void)didMoveWiiJoystickDirection:(OEWiiButton)button withValue:(CGFloat)value forPlayer:(NSUInteger)player;
- (oneway void)didPushWiiButton:(OEWiiButton)button forPlayer:(NSUInteger)player;
- (oneway void)didReleaseWiiButton:(OEWiiButton)button forPlayer:(NSUInteger)player;
- (oneway void)didMoveWiiAccelerometer:(OEWiiButton)button withValue:(CGFloat)valueX withValue:(CGFloat)valueY withValue:(CGFloat)valueZ forPlayer:(NSUInteger)player;
- (oneway void)didMoveWiiIR:(OEWiiButton)button withValue:(CGFloat)X1 withValue:(CGFloat)Y1 withValue:(CGFloat)X2 withValue:(CGFloat)Y2 withValue:(CGFloat)X3 withValue:(CGFloat)Y3 withValue:(CGFloat)X4 withValue:(CGFloat)Y4 forPlayer:(NSUInteger)player;

@end
