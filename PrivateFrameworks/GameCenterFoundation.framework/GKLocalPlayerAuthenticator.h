/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayerAuthenticator : NSObject {
    BOOL  _authenticated;
    BOOL  _authenticating;
    BOOL  _forceAuthentication;
    GKLocalPlayer * _inputLocalPlayer;
    NSDate * _lastAuthDate;
    NSString * _lastAuthPlayerID;
    NSString * _password;
    UIViewController * _presentingViewController;
    GKLocalPlayer * _resultantLocalPlayer;
    NSString * _username;
}

@property (getter=isAuthenticated) BOOL authenticated;
@property (getter=isAuthenticating) BOOL authenticating;
@property BOOL forceAuthentication;
@property (retain) GKLocalPlayer *inputLocalPlayer;
@property (retain) NSDate *lastAuthDate;
@property (retain) NSString *lastAuthPlayerID;
@property (copy) NSString *password;
@property UIViewController *presentingViewController;
@property (retain) GKLocalPlayer *resultantLocalPlayer;
@property (copy) NSString *username;

+ (id)authenticatorForExistingPlayer:(id)arg1;
+ (id)authenticatorForExistingPlayer:(id)arg1 withPresentingViewController:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withPresentingViewController:(id)arg3;
+ (void)postURL:(id)arg1 postBody:(id)arg2 completion:(id /* block */)arg3;

- (void)_authenticateUsingAuthUI:(BOOL)arg1 authUIDismissHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(id /* block */)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)arg1 usernameEditable:(BOOL)arg2 dismissHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateUsingAuthUIWithCompletionHandler:(id /* block */)arg1;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (void)authenticationDidComplete;
- (void)dealloc;
- (id)description;
- (BOOL)forceAuthentication;
- (id)init;
- (id)inputLocalPlayer;
- (BOOL)isAuthenticated;
- (BOOL)isAuthenticating;
- (id)lastAuthDate;
- (id)lastAuthPlayerID;
- (id)password;
- (id)presentingViewController;
- (void)reset;
- (id)resultantLocalPlayer;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setAuthenticating:(BOOL)arg1;
- (void)setForceAuthentication:(BOOL)arg1;
- (void)setInputLocalPlayer:(id)arg1;
- (void)setLastAuthDate:(id)arg1;
- (void)setLastAuthPlayerID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setResultantLocalPlayer:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
