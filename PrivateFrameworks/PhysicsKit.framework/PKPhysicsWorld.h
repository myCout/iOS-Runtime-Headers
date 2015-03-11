/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <PKPhysicsContactDelegate>, NSMutableArray, NSMutableDictionary;

@interface PKPhysicsWorld : NSObject <NSCoding> {
    struct b2Vec2 { 
        float x; 
        float y; 
    struct PKContactListener { 
        int (**_vptr$b2ContactListener)(); 
        NSMutableDictionary *_contacts; 
        <PKPhysicsContactDelegate> *_contactDelegate; 
    struct PKDebugDrawPacket { 
        struct vector<PKPoint, std::__1::allocator<PKPoint> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _linePoints; 
        struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _colors; 
     /* Encoded args for previous method: 24@0:48 */
    double _accumulatedDt;
    NSMutableArray *_bodies;
    } _contactListener;
    } _gravity;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    float _speed;
    struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_4_1; } x_1_3_4; } x_5_2_1; } x_3_1_5; struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct __hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __hash_node<b2Contact *, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > > { struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *> *> { struct __hash_node<b2Contact *, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<b2Contact *> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<b2Contact *> > { float x_4_4_1; } x_1_3_4; } x_6_2_1; } x_3_1_6; int x_3_1_7; } x3; struct b2Body {} *x4; struct b2Joint {} *x5; int x6; int x7; struct PKCAether {} *x8; boolx9; struct b2DestructionListener {} *x10; struct b2Draw {} *x11; float x12; boolx13; boolx14; boolx15; boolx16; double x17; float x18; struct PKCMechanics { struct b2World {} *x_19_1_1; struct vector<QuadTree *, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_2_2_1; struct QuadTree {} **x_2_2_2; struct __compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_3_3_1; } x_2_2_3; } x_19_1_2; } x19; } *_world;
    bool_doSleep;
    } drawPacket;
}

@property(readonly) /* Warning: unhandled struct encoding: '{PKCAether={vector<std::__1::weak_ptr<PKCField>' */ struct * aether; /* unknown property attribute:  std::__1::allocator<std::__1::weak_ptr<PKCField> > >=^{weak_ptr<PKCField>}}}} */
@property(readonly) struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct x_3_1_4; void*x_3_1_5; void*x_3_1_6; void*x_3_1_7; void*x_3_1_8; void*x_3_1_9; void*x_3_1_10; void*x_3_1_11; void*x_3_1_12; void*x_3_1_13; void*x_3_1_14; void*x_3_1_15; void*x_3_1_16; void*x_3_1_17; void*x_3_1_18; void*x_3_1_19; void*x_3_1_20; void*x_3_1_21; void*x_3_1_22; void*x_3_1_23; void*x_3_1_24; void*x_3_1_25; unsigned int x_3_1_26/* : ? */; oneway int x_3_1_27; void*x_3_1_28; void*x_3_1_29; void*x_3_1_30; void*x_3_1_31; void*x_3_1_32; void*x_3_1_33; void*x_3_1_34; void*x_3_1_35; void*x_3_1_36; void*x_3_1_37; void*x_3_1_38; void*x_3_1_39; void*x_3_1_40; void*x_3_1_41; void*x_3_1_42; void*x_3_1_43; void*x_3_1_44; void*x_3_1_45; void*x_3_1_46; void*x_3_1_47; void*x_3_1_48; void*x_3_1_49; void*x_3_1_50; void*x_3_1_51; void*x_3_1_52; void*x_3_1_53; void*x_3_1_54; void*x_3_1_55; void*x_3_1_56; void*x_3_1_57; void*x_3_1_58; void*x_3_1_59; void*x_3_1_60; void*x_3_1_61; void*x_3_1_62; void*x_3_1_63; void**x_3_1_64; void*x_3_1_65; void*x_3_1_66; void*x_3_1_67; void*x_3_1_68; void*x_3_1_69; void*x_3_1_70; void*x_3_1_71; void*x_3_1_72; void*x_3_1_73; void*x_3_1_74; void*x_3_1_75; void*x_3_1_76; void*x_3_1_77; void*x_3_1_78; void*x_3_1_79; void*x_3_1_80; void*x_3_1_81; void*x_3_1_82; void*x_3_1_83; void*x_3_1_84; void*x_3_1_85; void*x_3_1_86; void*x_3_1_87; void*x_3_1_88; void*x_3_1_89; void*x_3_1_90; void*x_3_1_91; void*x_3_1_92; void*x_3_1_93; void*x_3_1_94; void*x_3_1_95; void*x_3_1_96; void*x_3_1_97; void*x_3_1_98; void*x_3_1_99; void*x_3_1_100; void*x_3_1_101; void*x_3_1_102; double x_3_1_103; void*x_3_1_104; void*x_3_1_105; void*x_3_1_106; void*x_3_1_107; void*x_3_1_108; void*x_3_1_109; void*x_3_1_110; void*x_3_1_111; void*x_3_1_112; void*x_3_1_113; void*x_3_1_114; void*x_3_1_115; void*x_3_1_116; void*x_3_1_117; void*x_3_1_118; void*x_3_1_119; void*x_3_1_120; void*x_3_1_121; void*x_3_1_122; void*x_3_1_123; void*x_3_1_124; void*x_3_1_125; void*x_3_1_126; void*x_3_1_127; void*x_3_1_128; void*x_3_1_129; void*x_3_1_130; void*x_3_1_131; void*x_3_1_132; void*x_3_1_133; void*x_3_1_134; void*x_3_1_135; void*x_3_1_136; void*x_3_1_137; void*x_3_1_138; void*x_3_1_139; void*x_3_1_140; void*x_3_1_141; void*x_3_1_142; void*x_3_1_143; void*x_3_1_144; void*x_3_1_145; void*x_3_1_146; void*x_3_1_147; void*x_3_1_148; void*x_3_1_149; void*x_3_1_150; void*x_3_1_151; void*x_3_1_152; void*x_3_1_153; void*x_3_1_154; void*x_3_1_155; void*x_3_1_156; void*x_3_1_157; void*x_3_1_158; void*x_3_1_159; void*x_3_1_160; void*x_3_1_161; void*x_3_1_162; void*x_3_1_163; void*x_3_1_164; void*x_3_1_165; void*x_3_1_166; void*x_3_1_167; void*x_3_1_168; void*x_3_1_169; void*x_3_1_170; void*x_3_1_171; void*x_3_1_172; void*x_3_1_173; void*x_3_1_174; void*x_3_1_175; void*x_3_1_176; double x_3_1_177; void*x_3_1_178; void*x_3_1_179; void*x_3_1_180; void*x_3_1_181; const out void*x_3_1_182; out BOOL x_3_1_183; out long x_3_1_184; void*x_3_1_185; void*x_3_1_186; void*x_3_1_187; void*x_3_1_188; void*x_3_1_189; void*x_3_1_190; void*x_3_1_191; void*x_3_1_192; void*x_3_1_193; void*x_3_1_194; void*x_3_1_195; void*x_3_1_196; void*x_3_1_197; void*x_3_1_198; void*x_3_1_199; void*x_3_1_200; void*x_3_1_201; void*x_3_1_202; void*x_3_1_203; void*x_3_1_204; void*x_3_1_205; void*x_3_1_206; void*x_3_1_207; void*x_3_1_208; void*x_3_1_209; void*x_3_1_210; void*x_3_1_211; void*x_3_1_212; void*x_3_1_213; void*x_3_1_214; void*x_3_1_215; void*x_3_1_216; void*x_3_1_217; void*x_3_1_218; void*x_3_1_219; void*x_3_1_220; void*x_3_1_221; void*x_3_1_222; void*x_3_1_223; void*x_3_1_224; void*x_3_1_225; void*x_3_1_226; void*x_3_1_227; void*x_3_1_228; void*x_3_1_229; void*x_3_1_230; void*x_3_1_231; void*x_3_1_232; void*x_3_1_233; void*x_3_1_234; void*x_3_1_235; void*x_3_1_236; void*x_3_1_237; void*x_3_1_238; void*x_3_1_239; void*x_3_1_240; void*x_3_1_241; void*x_3_1_242; void*x_3_1_243; void*x_3_1_244; void*x_3_1_245; void*x_3_1_246; unsigned char x_3_1_247; void*x_3_1_248; void*x_3_1_249; void*x_3_1_250; unsigned short x_3_1_251; void*x_3_1_252; int x_3_1_253; void*x_3_1_254; void*x_3_1_255; void*x_3_1_256; void*x_3_1_257; void*x_3_1_258; void*x_3_1_259; void*x_3_1_260; struct x_3_1_261; void*x_3_1_262; void*x_3_1_263; void*x_3_1_264; float x_3_1_265; void*x_3_1_266; long x_3_1_267; void*x_3_1_268; out void*x_3_1_269; void*x_3_1_270; void*x_3_1_271; void*x_3_1_272; void*x_3_1_273; void*x_3_1_274; void*x_3_1_275; void*x_3_1_276; void*x_3_1_277; void*x_3_1_278; void*x_3_1_279; void*x_3_1_280; void*x_3_1_281; void*x_3_1_282; void*x_3_1_283; void*x_3_1_284; void*x_3_1_285; void*x_3_1_286; void*x_3_1_287; void*x_3_1_288; void*x_3_1_289; void*x_3_1_290; void*x_3_1_291; void*x_3_1_292; void*x_3_1_293; float x_3_1_294; void*x_3_1_295; long x_3_1_296; void*x_3_1_297; out void*x_3_1_298; void*x_3_1_299; void*x_3_1_300; void*x_3_1_301; void*x_3_1_302; void*x_3_1_303; void*x_3_1_304; void*x_3_1_305; void*x_3_1_306; void*x_3_1_307; void*x_3_1_308; void*x_3_1_309; void*x_3_1_310; void*x_3_1_311; void*x_3_1_312; void*x_3_1_313; void*x_3_1_314; void*x_3_1_315; void*x_3_1_316; void*x_3_1_317; void*x_3_1_318; void*x_3_1_319; void*x_3_1_320; void*x_3_1_321; void*x_3_1_322; } x3; void*x4; void*x5; void*x6; void*x7; unsigned long x8; void*x9; void*x10; void*x11; void*x12; void*x13; unsigned int x14/* : ? */; void*x15; short x16; void*x17; void*x18; out double x19; void*x20; long x21; void*x22; unsigned char x23; out in void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; long long x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; out void*x51; void*x52; void*x53; void*x54; void*x55; long long x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; const void*x70; void*x71; void*x72; void*x73; void*x74; double x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; struct x95; void*x96; void*x97; void*x98; long x99; void*x100; out void*x101; in void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; boolx127; void*x128; bycopy void*x129; bycopy void*x130; unsigned long x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void* x151[ /* ? */ ]; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; }* _world; /* unknown property attribute:  std::__1::allocator<QuadTree *> >=^^{QuadTree}}}}} */
@property(retain) NSMutableArray * _bodies;
@property bool _doSleep;
@property struct b2Vec2 { float x1; float x2; } _gravity;
@property <PKPhysicsContactDelegate> * contactDelegate;
@property struct CGVector { float x1; float x2; } gravity;
@property float speed;
@property float velocityThreshold;

+ (id)world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__init__;
- (id)_bodies;
- (bool)_doSleep;
- (struct b2Vec2 { float x1; float x2; })_gravity;
- (void)_runBlockOutsideOfTimeStep:(id)arg1;
- (struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<unsigned long long> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<unsigned long long> > { float x_4_4_1; } x_1_3_4; } x_5_2_1; } x_3_1_5; struct unordered_set<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct __hash_table<b2Contact *, std::__1::hash<b2Contact *>, std::__1::equal_to<b2Contact *>, std::__1::allocator<b2Contact *> > { struct unique_ptr<std::__1::__hash_node<b2Contact *, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<b2Contact *, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > > { struct __hash_node<b2Contact *, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<b2Contact *, void *> *>, std::__1::allocator<std::__1::__hash_node<b2Contact *, void *> > > { struct __hash_node_base<std::__1::__hash_node<b2Contact *, void *> *> { struct __hash_node<b2Contact *, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<b2Contact *> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<b2Contact *> > { float x_4_4_1; } x_1_3_4; } x_6_2_1; } x_3_1_6; int x_3_1_7; } x3; struct b2Body {} *x4; struct b2Joint {} *x5; int x6; int x7; struct PKCAether {} *x8; boolx9; struct b2DestructionListener {} *x10; struct b2Draw {} *x11; float x12; boolx13; boolx14; boolx15; boolx16; double x17; float x18; struct PKCMechanics { struct b2World {} *x_19_1_1; struct vector<QuadTree *, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_2_2_1; struct QuadTree {} **x_2_2_2; struct __compressed_pair<QuadTree **, std::__1::allocator<QuadTree *> > { struct QuadTree {} **x_3_3_1; } x_2_2_3; } x_19_1_2; } x19; }*)_world;
- (void)addBody:(id)arg1;
- (void)addField:(id)arg1;
- (void)addJoint:(id)arg1;
- (struct PKCAether { struct vector<std::__1::weak_ptr<PKCField>, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_1_1_1; struct weak_ptr<PKCField> {} *x_1_1_2; struct __compressed_pair<std::__1::weak_ptr<PKCField> *, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_3_2_1; } x_1_1_3; } x1; }*)aether;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
- (id)bodyAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)bodyInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)collisionDelegate;
- (id)contactDelegate;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)debugDraw:(float)arg1 matrix:(union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg2 showsPhysics:(bool)arg3 showsOutlineInterior:(bool)arg4 showsFields:(bool)arg5;
- (const struct PKDebugDrawPacket { struct vector<PKPoint, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_1_1_1; struct { /* ? */ } *x_1_1_2; struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_3_2_1; } x_1_1_3; } x1; struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_2_1_1; struct { /* ? */ } *x_2_1_2; struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_3_2_1; } x_2_1_3; } x2; }*)debugDrawPacket;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2 usingBlock:(id)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { float x1; float x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (struct CGVector { float x1; float x2; })evalForce:(unsigned int)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGVector { float x1; float x2; })gravity;
- (BOOL)hasBodies;
- (BOOL)hasFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)joints;
- (void)removeAllBodies;
- (void)removeAllFields;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeField:(id)arg1;
- (void)removeJoint:(id)arg1;
- (struct CGVector { float x1; float x2; })sampleFields:(struct CGPoint { float x1; float x2; })arg1;
- (id)sampleFields:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize { float x1; float x2; })arg3;
- (/* Warning: Unrecognized filer type: '2' using 'void*' */ void*)sampleFieldsAt:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
- (void)setCollisionDelegate:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct CGVector { float x1; float x2; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setVelocityThreshold:(float)arg1;
- (void)set_bodies:(id)arg1;
- (void)set_doSleep:(bool)arg1;
- (void)set_gravity:(struct b2Vec2 { float x1; float x2; })arg1;
- (float)speed;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (float)velocityThreshold;

@end