#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4D18
// Address: 0x2f4d18 - 0x2f57d8
void sub_002F4D18_0x2f4d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4D18_0x2f4d18");
#endif

    switch (ctx->pc) {
        case 0x2f4d18u: goto label_2f4d18;
        case 0x2f4d1cu: goto label_2f4d1c;
        case 0x2f4d20u: goto label_2f4d20;
        case 0x2f4d24u: goto label_2f4d24;
        case 0x2f4d28u: goto label_2f4d28;
        case 0x2f4d2cu: goto label_2f4d2c;
        case 0x2f4d30u: goto label_2f4d30;
        case 0x2f4d34u: goto label_2f4d34;
        case 0x2f4d38u: goto label_2f4d38;
        case 0x2f4d3cu: goto label_2f4d3c;
        case 0x2f4d40u: goto label_2f4d40;
        case 0x2f4d44u: goto label_2f4d44;
        case 0x2f4d48u: goto label_2f4d48;
        case 0x2f4d4cu: goto label_2f4d4c;
        case 0x2f4d50u: goto label_2f4d50;
        case 0x2f4d54u: goto label_2f4d54;
        case 0x2f4d58u: goto label_2f4d58;
        case 0x2f4d5cu: goto label_2f4d5c;
        case 0x2f4d60u: goto label_2f4d60;
        case 0x2f4d64u: goto label_2f4d64;
        case 0x2f4d68u: goto label_2f4d68;
        case 0x2f4d6cu: goto label_2f4d6c;
        case 0x2f4d70u: goto label_2f4d70;
        case 0x2f4d74u: goto label_2f4d74;
        case 0x2f4d78u: goto label_2f4d78;
        case 0x2f4d7cu: goto label_2f4d7c;
        case 0x2f4d80u: goto label_2f4d80;
        case 0x2f4d84u: goto label_2f4d84;
        case 0x2f4d88u: goto label_2f4d88;
        case 0x2f4d8cu: goto label_2f4d8c;
        case 0x2f4d90u: goto label_2f4d90;
        case 0x2f4d94u: goto label_2f4d94;
        case 0x2f4d98u: goto label_2f4d98;
        case 0x2f4d9cu: goto label_2f4d9c;
        case 0x2f4da0u: goto label_2f4da0;
        case 0x2f4da4u: goto label_2f4da4;
        case 0x2f4da8u: goto label_2f4da8;
        case 0x2f4dacu: goto label_2f4dac;
        case 0x2f4db0u: goto label_2f4db0;
        case 0x2f4db4u: goto label_2f4db4;
        case 0x2f4db8u: goto label_2f4db8;
        case 0x2f4dbcu: goto label_2f4dbc;
        case 0x2f4dc0u: goto label_2f4dc0;
        case 0x2f4dc4u: goto label_2f4dc4;
        case 0x2f4dc8u: goto label_2f4dc8;
        case 0x2f4dccu: goto label_2f4dcc;
        case 0x2f4dd0u: goto label_2f4dd0;
        case 0x2f4dd4u: goto label_2f4dd4;
        case 0x2f4dd8u: goto label_2f4dd8;
        case 0x2f4ddcu: goto label_2f4ddc;
        case 0x2f4de0u: goto label_2f4de0;
        case 0x2f4de4u: goto label_2f4de4;
        case 0x2f4de8u: goto label_2f4de8;
        case 0x2f4decu: goto label_2f4dec;
        case 0x2f4df0u: goto label_2f4df0;
        case 0x2f4df4u: goto label_2f4df4;
        case 0x2f4df8u: goto label_2f4df8;
        case 0x2f4dfcu: goto label_2f4dfc;
        case 0x2f4e00u: goto label_2f4e00;
        case 0x2f4e04u: goto label_2f4e04;
        case 0x2f4e08u: goto label_2f4e08;
        case 0x2f4e0cu: goto label_2f4e0c;
        case 0x2f4e10u: goto label_2f4e10;
        case 0x2f4e14u: goto label_2f4e14;
        case 0x2f4e18u: goto label_2f4e18;
        case 0x2f4e1cu: goto label_2f4e1c;
        case 0x2f4e20u: goto label_2f4e20;
        case 0x2f4e24u: goto label_2f4e24;
        case 0x2f4e28u: goto label_2f4e28;
        case 0x2f4e2cu: goto label_2f4e2c;
        case 0x2f4e30u: goto label_2f4e30;
        case 0x2f4e34u: goto label_2f4e34;
        case 0x2f4e38u: goto label_2f4e38;
        case 0x2f4e3cu: goto label_2f4e3c;
        case 0x2f4e40u: goto label_2f4e40;
        case 0x2f4e44u: goto label_2f4e44;
        case 0x2f4e48u: goto label_2f4e48;
        case 0x2f4e4cu: goto label_2f4e4c;
        case 0x2f4e50u: goto label_2f4e50;
        case 0x2f4e54u: goto label_2f4e54;
        case 0x2f4e58u: goto label_2f4e58;
        case 0x2f4e5cu: goto label_2f4e5c;
        case 0x2f4e60u: goto label_2f4e60;
        case 0x2f4e64u: goto label_2f4e64;
        case 0x2f4e68u: goto label_2f4e68;
        case 0x2f4e6cu: goto label_2f4e6c;
        case 0x2f4e70u: goto label_2f4e70;
        case 0x2f4e74u: goto label_2f4e74;
        case 0x2f4e78u: goto label_2f4e78;
        case 0x2f4e7cu: goto label_2f4e7c;
        case 0x2f4e80u: goto label_2f4e80;
        case 0x2f4e84u: goto label_2f4e84;
        case 0x2f4e88u: goto label_2f4e88;
        case 0x2f4e8cu: goto label_2f4e8c;
        case 0x2f4e90u: goto label_2f4e90;
        case 0x2f4e94u: goto label_2f4e94;
        case 0x2f4e98u: goto label_2f4e98;
        case 0x2f4e9cu: goto label_2f4e9c;
        case 0x2f4ea0u: goto label_2f4ea0;
        case 0x2f4ea4u: goto label_2f4ea4;
        case 0x2f4ea8u: goto label_2f4ea8;
        case 0x2f4eacu: goto label_2f4eac;
        case 0x2f4eb0u: goto label_2f4eb0;
        case 0x2f4eb4u: goto label_2f4eb4;
        case 0x2f4eb8u: goto label_2f4eb8;
        case 0x2f4ebcu: goto label_2f4ebc;
        case 0x2f4ec0u: goto label_2f4ec0;
        case 0x2f4ec4u: goto label_2f4ec4;
        case 0x2f4ec8u: goto label_2f4ec8;
        case 0x2f4eccu: goto label_2f4ecc;
        case 0x2f4ed0u: goto label_2f4ed0;
        case 0x2f4ed4u: goto label_2f4ed4;
        case 0x2f4ed8u: goto label_2f4ed8;
        case 0x2f4edcu: goto label_2f4edc;
        case 0x2f4ee0u: goto label_2f4ee0;
        case 0x2f4ee4u: goto label_2f4ee4;
        case 0x2f4ee8u: goto label_2f4ee8;
        case 0x2f4eecu: goto label_2f4eec;
        case 0x2f4ef0u: goto label_2f4ef0;
        case 0x2f4ef4u: goto label_2f4ef4;
        case 0x2f4ef8u: goto label_2f4ef8;
        case 0x2f4efcu: goto label_2f4efc;
        case 0x2f4f00u: goto label_2f4f00;
        case 0x2f4f04u: goto label_2f4f04;
        case 0x2f4f08u: goto label_2f4f08;
        case 0x2f4f0cu: goto label_2f4f0c;
        case 0x2f4f10u: goto label_2f4f10;
        case 0x2f4f14u: goto label_2f4f14;
        case 0x2f4f18u: goto label_2f4f18;
        case 0x2f4f1cu: goto label_2f4f1c;
        case 0x2f4f20u: goto label_2f4f20;
        case 0x2f4f24u: goto label_2f4f24;
        case 0x2f4f28u: goto label_2f4f28;
        case 0x2f4f2cu: goto label_2f4f2c;
        case 0x2f4f30u: goto label_2f4f30;
        case 0x2f4f34u: goto label_2f4f34;
        case 0x2f4f38u: goto label_2f4f38;
        case 0x2f4f3cu: goto label_2f4f3c;
        case 0x2f4f40u: goto label_2f4f40;
        case 0x2f4f44u: goto label_2f4f44;
        case 0x2f4f48u: goto label_2f4f48;
        case 0x2f4f4cu: goto label_2f4f4c;
        case 0x2f4f50u: goto label_2f4f50;
        case 0x2f4f54u: goto label_2f4f54;
        case 0x2f4f58u: goto label_2f4f58;
        case 0x2f4f5cu: goto label_2f4f5c;
        case 0x2f4f60u: goto label_2f4f60;
        case 0x2f4f64u: goto label_2f4f64;
        case 0x2f4f68u: goto label_2f4f68;
        case 0x2f4f6cu: goto label_2f4f6c;
        case 0x2f4f70u: goto label_2f4f70;
        case 0x2f4f74u: goto label_2f4f74;
        case 0x2f4f78u: goto label_2f4f78;
        case 0x2f4f7cu: goto label_2f4f7c;
        case 0x2f4f80u: goto label_2f4f80;
        case 0x2f4f84u: goto label_2f4f84;
        case 0x2f4f88u: goto label_2f4f88;
        case 0x2f4f8cu: goto label_2f4f8c;
        case 0x2f4f90u: goto label_2f4f90;
        case 0x2f4f94u: goto label_2f4f94;
        case 0x2f4f98u: goto label_2f4f98;
        case 0x2f4f9cu: goto label_2f4f9c;
        case 0x2f4fa0u: goto label_2f4fa0;
        case 0x2f4fa4u: goto label_2f4fa4;
        case 0x2f4fa8u: goto label_2f4fa8;
        case 0x2f4facu: goto label_2f4fac;
        case 0x2f4fb0u: goto label_2f4fb0;
        case 0x2f4fb4u: goto label_2f4fb4;
        case 0x2f4fb8u: goto label_2f4fb8;
        case 0x2f4fbcu: goto label_2f4fbc;
        case 0x2f4fc0u: goto label_2f4fc0;
        case 0x2f4fc4u: goto label_2f4fc4;
        case 0x2f4fc8u: goto label_2f4fc8;
        case 0x2f4fccu: goto label_2f4fcc;
        case 0x2f4fd0u: goto label_2f4fd0;
        case 0x2f4fd4u: goto label_2f4fd4;
        case 0x2f4fd8u: goto label_2f4fd8;
        case 0x2f4fdcu: goto label_2f4fdc;
        case 0x2f4fe0u: goto label_2f4fe0;
        case 0x2f4fe4u: goto label_2f4fe4;
        case 0x2f4fe8u: goto label_2f4fe8;
        case 0x2f4fecu: goto label_2f4fec;
        case 0x2f4ff0u: goto label_2f4ff0;
        case 0x2f4ff4u: goto label_2f4ff4;
        case 0x2f4ff8u: goto label_2f4ff8;
        case 0x2f4ffcu: goto label_2f4ffc;
        case 0x2f5000u: goto label_2f5000;
        case 0x2f5004u: goto label_2f5004;
        case 0x2f5008u: goto label_2f5008;
        case 0x2f500cu: goto label_2f500c;
        case 0x2f5010u: goto label_2f5010;
        case 0x2f5014u: goto label_2f5014;
        case 0x2f5018u: goto label_2f5018;
        case 0x2f501cu: goto label_2f501c;
        case 0x2f5020u: goto label_2f5020;
        case 0x2f5024u: goto label_2f5024;
        case 0x2f5028u: goto label_2f5028;
        case 0x2f502cu: goto label_2f502c;
        case 0x2f5030u: goto label_2f5030;
        case 0x2f5034u: goto label_2f5034;
        case 0x2f5038u: goto label_2f5038;
        case 0x2f503cu: goto label_2f503c;
        case 0x2f5040u: goto label_2f5040;
        case 0x2f5044u: goto label_2f5044;
        case 0x2f5048u: goto label_2f5048;
        case 0x2f504cu: goto label_2f504c;
        case 0x2f5050u: goto label_2f5050;
        case 0x2f5054u: goto label_2f5054;
        case 0x2f5058u: goto label_2f5058;
        case 0x2f505cu: goto label_2f505c;
        case 0x2f5060u: goto label_2f5060;
        case 0x2f5064u: goto label_2f5064;
        case 0x2f5068u: goto label_2f5068;
        case 0x2f506cu: goto label_2f506c;
        case 0x2f5070u: goto label_2f5070;
        case 0x2f5074u: goto label_2f5074;
        case 0x2f5078u: goto label_2f5078;
        case 0x2f507cu: goto label_2f507c;
        case 0x2f5080u: goto label_2f5080;
        case 0x2f5084u: goto label_2f5084;
        case 0x2f5088u: goto label_2f5088;
        case 0x2f508cu: goto label_2f508c;
        case 0x2f5090u: goto label_2f5090;
        case 0x2f5094u: goto label_2f5094;
        case 0x2f5098u: goto label_2f5098;
        case 0x2f509cu: goto label_2f509c;
        case 0x2f50a0u: goto label_2f50a0;
        case 0x2f50a4u: goto label_2f50a4;
        case 0x2f50a8u: goto label_2f50a8;
        case 0x2f50acu: goto label_2f50ac;
        case 0x2f50b0u: goto label_2f50b0;
        case 0x2f50b4u: goto label_2f50b4;
        case 0x2f50b8u: goto label_2f50b8;
        case 0x2f50bcu: goto label_2f50bc;
        case 0x2f50c0u: goto label_2f50c0;
        case 0x2f50c4u: goto label_2f50c4;
        case 0x2f50c8u: goto label_2f50c8;
        case 0x2f50ccu: goto label_2f50cc;
        case 0x2f50d0u: goto label_2f50d0;
        case 0x2f50d4u: goto label_2f50d4;
        case 0x2f50d8u: goto label_2f50d8;
        case 0x2f50dcu: goto label_2f50dc;
        case 0x2f50e0u: goto label_2f50e0;
        case 0x2f50e4u: goto label_2f50e4;
        case 0x2f50e8u: goto label_2f50e8;
        case 0x2f50ecu: goto label_2f50ec;
        case 0x2f50f0u: goto label_2f50f0;
        case 0x2f50f4u: goto label_2f50f4;
        case 0x2f50f8u: goto label_2f50f8;
        case 0x2f50fcu: goto label_2f50fc;
        case 0x2f5100u: goto label_2f5100;
        case 0x2f5104u: goto label_2f5104;
        case 0x2f5108u: goto label_2f5108;
        case 0x2f510cu: goto label_2f510c;
        case 0x2f5110u: goto label_2f5110;
        case 0x2f5114u: goto label_2f5114;
        case 0x2f5118u: goto label_2f5118;
        case 0x2f511cu: goto label_2f511c;
        case 0x2f5120u: goto label_2f5120;
        case 0x2f5124u: goto label_2f5124;
        case 0x2f5128u: goto label_2f5128;
        case 0x2f512cu: goto label_2f512c;
        case 0x2f5130u: goto label_2f5130;
        case 0x2f5134u: goto label_2f5134;
        case 0x2f5138u: goto label_2f5138;
        case 0x2f513cu: goto label_2f513c;
        case 0x2f5140u: goto label_2f5140;
        case 0x2f5144u: goto label_2f5144;
        case 0x2f5148u: goto label_2f5148;
        case 0x2f514cu: goto label_2f514c;
        case 0x2f5150u: goto label_2f5150;
        case 0x2f5154u: goto label_2f5154;
        case 0x2f5158u: goto label_2f5158;
        case 0x2f515cu: goto label_2f515c;
        case 0x2f5160u: goto label_2f5160;
        case 0x2f5164u: goto label_2f5164;
        case 0x2f5168u: goto label_2f5168;
        case 0x2f516cu: goto label_2f516c;
        case 0x2f5170u: goto label_2f5170;
        case 0x2f5174u: goto label_2f5174;
        case 0x2f5178u: goto label_2f5178;
        case 0x2f517cu: goto label_2f517c;
        case 0x2f5180u: goto label_2f5180;
        case 0x2f5184u: goto label_2f5184;
        case 0x2f5188u: goto label_2f5188;
        case 0x2f518cu: goto label_2f518c;
        case 0x2f5190u: goto label_2f5190;
        case 0x2f5194u: goto label_2f5194;
        case 0x2f5198u: goto label_2f5198;
        case 0x2f519cu: goto label_2f519c;
        case 0x2f51a0u: goto label_2f51a0;
        case 0x2f51a4u: goto label_2f51a4;
        case 0x2f51a8u: goto label_2f51a8;
        case 0x2f51acu: goto label_2f51ac;
        case 0x2f51b0u: goto label_2f51b0;
        case 0x2f51b4u: goto label_2f51b4;
        case 0x2f51b8u: goto label_2f51b8;
        case 0x2f51bcu: goto label_2f51bc;
        case 0x2f51c0u: goto label_2f51c0;
        case 0x2f51c4u: goto label_2f51c4;
        case 0x2f51c8u: goto label_2f51c8;
        case 0x2f51ccu: goto label_2f51cc;
        case 0x2f51d0u: goto label_2f51d0;
        case 0x2f51d4u: goto label_2f51d4;
        case 0x2f51d8u: goto label_2f51d8;
        case 0x2f51dcu: goto label_2f51dc;
        case 0x2f51e0u: goto label_2f51e0;
        case 0x2f51e4u: goto label_2f51e4;
        case 0x2f51e8u: goto label_2f51e8;
        case 0x2f51ecu: goto label_2f51ec;
        case 0x2f51f0u: goto label_2f51f0;
        case 0x2f51f4u: goto label_2f51f4;
        case 0x2f51f8u: goto label_2f51f8;
        case 0x2f51fcu: goto label_2f51fc;
        case 0x2f5200u: goto label_2f5200;
        case 0x2f5204u: goto label_2f5204;
        case 0x2f5208u: goto label_2f5208;
        case 0x2f520cu: goto label_2f520c;
        case 0x2f5210u: goto label_2f5210;
        case 0x2f5214u: goto label_2f5214;
        case 0x2f5218u: goto label_2f5218;
        case 0x2f521cu: goto label_2f521c;
        case 0x2f5220u: goto label_2f5220;
        case 0x2f5224u: goto label_2f5224;
        case 0x2f5228u: goto label_2f5228;
        case 0x2f522cu: goto label_2f522c;
        case 0x2f5230u: goto label_2f5230;
        case 0x2f5234u: goto label_2f5234;
        case 0x2f5238u: goto label_2f5238;
        case 0x2f523cu: goto label_2f523c;
        case 0x2f5240u: goto label_2f5240;
        case 0x2f5244u: goto label_2f5244;
        case 0x2f5248u: goto label_2f5248;
        case 0x2f524cu: goto label_2f524c;
        case 0x2f5250u: goto label_2f5250;
        case 0x2f5254u: goto label_2f5254;
        case 0x2f5258u: goto label_2f5258;
        case 0x2f525cu: goto label_2f525c;
        case 0x2f5260u: goto label_2f5260;
        case 0x2f5264u: goto label_2f5264;
        case 0x2f5268u: goto label_2f5268;
        case 0x2f526cu: goto label_2f526c;
        case 0x2f5270u: goto label_2f5270;
        case 0x2f5274u: goto label_2f5274;
        case 0x2f5278u: goto label_2f5278;
        case 0x2f527cu: goto label_2f527c;
        case 0x2f5280u: goto label_2f5280;
        case 0x2f5284u: goto label_2f5284;
        case 0x2f5288u: goto label_2f5288;
        case 0x2f528cu: goto label_2f528c;
        case 0x2f5290u: goto label_2f5290;
        case 0x2f5294u: goto label_2f5294;
        case 0x2f5298u: goto label_2f5298;
        case 0x2f529cu: goto label_2f529c;
        case 0x2f52a0u: goto label_2f52a0;
        case 0x2f52a4u: goto label_2f52a4;
        case 0x2f52a8u: goto label_2f52a8;
        case 0x2f52acu: goto label_2f52ac;
        case 0x2f52b0u: goto label_2f52b0;
        case 0x2f52b4u: goto label_2f52b4;
        case 0x2f52b8u: goto label_2f52b8;
        case 0x2f52bcu: goto label_2f52bc;
        case 0x2f52c0u: goto label_2f52c0;
        case 0x2f52c4u: goto label_2f52c4;
        case 0x2f52c8u: goto label_2f52c8;
        case 0x2f52ccu: goto label_2f52cc;
        case 0x2f52d0u: goto label_2f52d0;
        case 0x2f52d4u: goto label_2f52d4;
        case 0x2f52d8u: goto label_2f52d8;
        case 0x2f52dcu: goto label_2f52dc;
        case 0x2f52e0u: goto label_2f52e0;
        case 0x2f52e4u: goto label_2f52e4;
        case 0x2f52e8u: goto label_2f52e8;
        case 0x2f52ecu: goto label_2f52ec;
        case 0x2f52f0u: goto label_2f52f0;
        case 0x2f52f4u: goto label_2f52f4;
        case 0x2f52f8u: goto label_2f52f8;
        case 0x2f52fcu: goto label_2f52fc;
        case 0x2f5300u: goto label_2f5300;
        case 0x2f5304u: goto label_2f5304;
        case 0x2f5308u: goto label_2f5308;
        case 0x2f530cu: goto label_2f530c;
        case 0x2f5310u: goto label_2f5310;
        case 0x2f5314u: goto label_2f5314;
        case 0x2f5318u: goto label_2f5318;
        case 0x2f531cu: goto label_2f531c;
        case 0x2f5320u: goto label_2f5320;
        case 0x2f5324u: goto label_2f5324;
        case 0x2f5328u: goto label_2f5328;
        case 0x2f532cu: goto label_2f532c;
        case 0x2f5330u: goto label_2f5330;
        case 0x2f5334u: goto label_2f5334;
        case 0x2f5338u: goto label_2f5338;
        case 0x2f533cu: goto label_2f533c;
        case 0x2f5340u: goto label_2f5340;
        case 0x2f5344u: goto label_2f5344;
        case 0x2f5348u: goto label_2f5348;
        case 0x2f534cu: goto label_2f534c;
        case 0x2f5350u: goto label_2f5350;
        case 0x2f5354u: goto label_2f5354;
        case 0x2f5358u: goto label_2f5358;
        case 0x2f535cu: goto label_2f535c;
        case 0x2f5360u: goto label_2f5360;
        case 0x2f5364u: goto label_2f5364;
        case 0x2f5368u: goto label_2f5368;
        case 0x2f536cu: goto label_2f536c;
        case 0x2f5370u: goto label_2f5370;
        case 0x2f5374u: goto label_2f5374;
        case 0x2f5378u: goto label_2f5378;
        case 0x2f537cu: goto label_2f537c;
        case 0x2f5380u: goto label_2f5380;
        case 0x2f5384u: goto label_2f5384;
        case 0x2f5388u: goto label_2f5388;
        case 0x2f538cu: goto label_2f538c;
        case 0x2f5390u: goto label_2f5390;
        case 0x2f5394u: goto label_2f5394;
        case 0x2f5398u: goto label_2f5398;
        case 0x2f539cu: goto label_2f539c;
        case 0x2f53a0u: goto label_2f53a0;
        case 0x2f53a4u: goto label_2f53a4;
        case 0x2f53a8u: goto label_2f53a8;
        case 0x2f53acu: goto label_2f53ac;
        case 0x2f53b0u: goto label_2f53b0;
        case 0x2f53b4u: goto label_2f53b4;
        case 0x2f53b8u: goto label_2f53b8;
        case 0x2f53bcu: goto label_2f53bc;
        case 0x2f53c0u: goto label_2f53c0;
        case 0x2f53c4u: goto label_2f53c4;
        case 0x2f53c8u: goto label_2f53c8;
        case 0x2f53ccu: goto label_2f53cc;
        case 0x2f53d0u: goto label_2f53d0;
        case 0x2f53d4u: goto label_2f53d4;
        case 0x2f53d8u: goto label_2f53d8;
        case 0x2f53dcu: goto label_2f53dc;
        case 0x2f53e0u: goto label_2f53e0;
        case 0x2f53e4u: goto label_2f53e4;
        case 0x2f53e8u: goto label_2f53e8;
        case 0x2f53ecu: goto label_2f53ec;
        case 0x2f53f0u: goto label_2f53f0;
        case 0x2f53f4u: goto label_2f53f4;
        case 0x2f53f8u: goto label_2f53f8;
        case 0x2f53fcu: goto label_2f53fc;
        case 0x2f5400u: goto label_2f5400;
        case 0x2f5404u: goto label_2f5404;
        case 0x2f5408u: goto label_2f5408;
        case 0x2f540cu: goto label_2f540c;
        case 0x2f5410u: goto label_2f5410;
        case 0x2f5414u: goto label_2f5414;
        case 0x2f5418u: goto label_2f5418;
        case 0x2f541cu: goto label_2f541c;
        case 0x2f5420u: goto label_2f5420;
        case 0x2f5424u: goto label_2f5424;
        case 0x2f5428u: goto label_2f5428;
        case 0x2f542cu: goto label_2f542c;
        case 0x2f5430u: goto label_2f5430;
        case 0x2f5434u: goto label_2f5434;
        case 0x2f5438u: goto label_2f5438;
        case 0x2f543cu: goto label_2f543c;
        case 0x2f5440u: goto label_2f5440;
        case 0x2f5444u: goto label_2f5444;
        case 0x2f5448u: goto label_2f5448;
        case 0x2f544cu: goto label_2f544c;
        case 0x2f5450u: goto label_2f5450;
        case 0x2f5454u: goto label_2f5454;
        case 0x2f5458u: goto label_2f5458;
        case 0x2f545cu: goto label_2f545c;
        case 0x2f5460u: goto label_2f5460;
        case 0x2f5464u: goto label_2f5464;
        case 0x2f5468u: goto label_2f5468;
        case 0x2f546cu: goto label_2f546c;
        case 0x2f5470u: goto label_2f5470;
        case 0x2f5474u: goto label_2f5474;
        case 0x2f5478u: goto label_2f5478;
        case 0x2f547cu: goto label_2f547c;
        case 0x2f5480u: goto label_2f5480;
        case 0x2f5484u: goto label_2f5484;
        case 0x2f5488u: goto label_2f5488;
        case 0x2f548cu: goto label_2f548c;
        case 0x2f5490u: goto label_2f5490;
        case 0x2f5494u: goto label_2f5494;
        case 0x2f5498u: goto label_2f5498;
        case 0x2f549cu: goto label_2f549c;
        case 0x2f54a0u: goto label_2f54a0;
        case 0x2f54a4u: goto label_2f54a4;
        case 0x2f54a8u: goto label_2f54a8;
        case 0x2f54acu: goto label_2f54ac;
        case 0x2f54b0u: goto label_2f54b0;
        case 0x2f54b4u: goto label_2f54b4;
        case 0x2f54b8u: goto label_2f54b8;
        case 0x2f54bcu: goto label_2f54bc;
        case 0x2f54c0u: goto label_2f54c0;
        case 0x2f54c4u: goto label_2f54c4;
        case 0x2f54c8u: goto label_2f54c8;
        case 0x2f54ccu: goto label_2f54cc;
        case 0x2f54d0u: goto label_2f54d0;
        case 0x2f54d4u: goto label_2f54d4;
        case 0x2f54d8u: goto label_2f54d8;
        case 0x2f54dcu: goto label_2f54dc;
        case 0x2f54e0u: goto label_2f54e0;
        case 0x2f54e4u: goto label_2f54e4;
        case 0x2f54e8u: goto label_2f54e8;
        case 0x2f54ecu: goto label_2f54ec;
        case 0x2f54f0u: goto label_2f54f0;
        case 0x2f54f4u: goto label_2f54f4;
        case 0x2f54f8u: goto label_2f54f8;
        case 0x2f54fcu: goto label_2f54fc;
        case 0x2f5500u: goto label_2f5500;
        case 0x2f5504u: goto label_2f5504;
        case 0x2f5508u: goto label_2f5508;
        case 0x2f550cu: goto label_2f550c;
        case 0x2f5510u: goto label_2f5510;
        case 0x2f5514u: goto label_2f5514;
        case 0x2f5518u: goto label_2f5518;
        case 0x2f551cu: goto label_2f551c;
        case 0x2f5520u: goto label_2f5520;
        case 0x2f5524u: goto label_2f5524;
        case 0x2f5528u: goto label_2f5528;
        case 0x2f552cu: goto label_2f552c;
        case 0x2f5530u: goto label_2f5530;
        case 0x2f5534u: goto label_2f5534;
        case 0x2f5538u: goto label_2f5538;
        case 0x2f553cu: goto label_2f553c;
        case 0x2f5540u: goto label_2f5540;
        case 0x2f5544u: goto label_2f5544;
        case 0x2f5548u: goto label_2f5548;
        case 0x2f554cu: goto label_2f554c;
        case 0x2f5550u: goto label_2f5550;
        case 0x2f5554u: goto label_2f5554;
        case 0x2f5558u: goto label_2f5558;
        case 0x2f555cu: goto label_2f555c;
        case 0x2f5560u: goto label_2f5560;
        case 0x2f5564u: goto label_2f5564;
        case 0x2f5568u: goto label_2f5568;
        case 0x2f556cu: goto label_2f556c;
        case 0x2f5570u: goto label_2f5570;
        case 0x2f5574u: goto label_2f5574;
        case 0x2f5578u: goto label_2f5578;
        case 0x2f557cu: goto label_2f557c;
        case 0x2f5580u: goto label_2f5580;
        case 0x2f5584u: goto label_2f5584;
        case 0x2f5588u: goto label_2f5588;
        case 0x2f558cu: goto label_2f558c;
        case 0x2f5590u: goto label_2f5590;
        case 0x2f5594u: goto label_2f5594;
        case 0x2f5598u: goto label_2f5598;
        case 0x2f559cu: goto label_2f559c;
        case 0x2f55a0u: goto label_2f55a0;
        case 0x2f55a4u: goto label_2f55a4;
        case 0x2f55a8u: goto label_2f55a8;
        case 0x2f55acu: goto label_2f55ac;
        case 0x2f55b0u: goto label_2f55b0;
        case 0x2f55b4u: goto label_2f55b4;
        case 0x2f55b8u: goto label_2f55b8;
        case 0x2f55bcu: goto label_2f55bc;
        case 0x2f55c0u: goto label_2f55c0;
        case 0x2f55c4u: goto label_2f55c4;
        case 0x2f55c8u: goto label_2f55c8;
        case 0x2f55ccu: goto label_2f55cc;
        case 0x2f55d0u: goto label_2f55d0;
        case 0x2f55d4u: goto label_2f55d4;
        case 0x2f55d8u: goto label_2f55d8;
        case 0x2f55dcu: goto label_2f55dc;
        case 0x2f55e0u: goto label_2f55e0;
        case 0x2f55e4u: goto label_2f55e4;
        case 0x2f55e8u: goto label_2f55e8;
        case 0x2f55ecu: goto label_2f55ec;
        case 0x2f55f0u: goto label_2f55f0;
        case 0x2f55f4u: goto label_2f55f4;
        case 0x2f55f8u: goto label_2f55f8;
        case 0x2f55fcu: goto label_2f55fc;
        case 0x2f5600u: goto label_2f5600;
        case 0x2f5604u: goto label_2f5604;
        case 0x2f5608u: goto label_2f5608;
        case 0x2f560cu: goto label_2f560c;
        case 0x2f5610u: goto label_2f5610;
        case 0x2f5614u: goto label_2f5614;
        case 0x2f5618u: goto label_2f5618;
        case 0x2f561cu: goto label_2f561c;
        case 0x2f5620u: goto label_2f5620;
        case 0x2f5624u: goto label_2f5624;
        case 0x2f5628u: goto label_2f5628;
        case 0x2f562cu: goto label_2f562c;
        case 0x2f5630u: goto label_2f5630;
        case 0x2f5634u: goto label_2f5634;
        case 0x2f5638u: goto label_2f5638;
        case 0x2f563cu: goto label_2f563c;
        case 0x2f5640u: goto label_2f5640;
        case 0x2f5644u: goto label_2f5644;
        case 0x2f5648u: goto label_2f5648;
        case 0x2f564cu: goto label_2f564c;
        case 0x2f5650u: goto label_2f5650;
        case 0x2f5654u: goto label_2f5654;
        case 0x2f5658u: goto label_2f5658;
        case 0x2f565cu: goto label_2f565c;
        case 0x2f5660u: goto label_2f5660;
        case 0x2f5664u: goto label_2f5664;
        case 0x2f5668u: goto label_2f5668;
        case 0x2f566cu: goto label_2f566c;
        case 0x2f5670u: goto label_2f5670;
        case 0x2f5674u: goto label_2f5674;
        case 0x2f5678u: goto label_2f5678;
        case 0x2f567cu: goto label_2f567c;
        case 0x2f5680u: goto label_2f5680;
        case 0x2f5684u: goto label_2f5684;
        case 0x2f5688u: goto label_2f5688;
        case 0x2f568cu: goto label_2f568c;
        case 0x2f5690u: goto label_2f5690;
        case 0x2f5694u: goto label_2f5694;
        case 0x2f5698u: goto label_2f5698;
        case 0x2f569cu: goto label_2f569c;
        case 0x2f56a0u: goto label_2f56a0;
        case 0x2f56a4u: goto label_2f56a4;
        case 0x2f56a8u: goto label_2f56a8;
        case 0x2f56acu: goto label_2f56ac;
        case 0x2f56b0u: goto label_2f56b0;
        case 0x2f56b4u: goto label_2f56b4;
        case 0x2f56b8u: goto label_2f56b8;
        case 0x2f56bcu: goto label_2f56bc;
        case 0x2f56c0u: goto label_2f56c0;
        case 0x2f56c4u: goto label_2f56c4;
        case 0x2f56c8u: goto label_2f56c8;
        case 0x2f56ccu: goto label_2f56cc;
        case 0x2f56d0u: goto label_2f56d0;
        case 0x2f56d4u: goto label_2f56d4;
        case 0x2f56d8u: goto label_2f56d8;
        case 0x2f56dcu: goto label_2f56dc;
        case 0x2f56e0u: goto label_2f56e0;
        case 0x2f56e4u: goto label_2f56e4;
        case 0x2f56e8u: goto label_2f56e8;
        case 0x2f56ecu: goto label_2f56ec;
        case 0x2f56f0u: goto label_2f56f0;
        case 0x2f56f4u: goto label_2f56f4;
        case 0x2f56f8u: goto label_2f56f8;
        case 0x2f56fcu: goto label_2f56fc;
        case 0x2f5700u: goto label_2f5700;
        case 0x2f5704u: goto label_2f5704;
        case 0x2f5708u: goto label_2f5708;
        case 0x2f570cu: goto label_2f570c;
        case 0x2f5710u: goto label_2f5710;
        case 0x2f5714u: goto label_2f5714;
        case 0x2f5718u: goto label_2f5718;
        case 0x2f571cu: goto label_2f571c;
        case 0x2f5720u: goto label_2f5720;
        case 0x2f5724u: goto label_2f5724;
        case 0x2f5728u: goto label_2f5728;
        case 0x2f572cu: goto label_2f572c;
        case 0x2f5730u: goto label_2f5730;
        case 0x2f5734u: goto label_2f5734;
        case 0x2f5738u: goto label_2f5738;
        case 0x2f573cu: goto label_2f573c;
        case 0x2f5740u: goto label_2f5740;
        case 0x2f5744u: goto label_2f5744;
        case 0x2f5748u: goto label_2f5748;
        case 0x2f574cu: goto label_2f574c;
        case 0x2f5750u: goto label_2f5750;
        case 0x2f5754u: goto label_2f5754;
        case 0x2f5758u: goto label_2f5758;
        case 0x2f575cu: goto label_2f575c;
        case 0x2f5760u: goto label_2f5760;
        case 0x2f5764u: goto label_2f5764;
        case 0x2f5768u: goto label_2f5768;
        case 0x2f576cu: goto label_2f576c;
        case 0x2f5770u: goto label_2f5770;
        case 0x2f5774u: goto label_2f5774;
        case 0x2f5778u: goto label_2f5778;
        case 0x2f577cu: goto label_2f577c;
        case 0x2f5780u: goto label_2f5780;
        case 0x2f5784u: goto label_2f5784;
        case 0x2f5788u: goto label_2f5788;
        case 0x2f578cu: goto label_2f578c;
        case 0x2f5790u: goto label_2f5790;
        case 0x2f5794u: goto label_2f5794;
        case 0x2f5798u: goto label_2f5798;
        case 0x2f579cu: goto label_2f579c;
        case 0x2f57a0u: goto label_2f57a0;
        case 0x2f57a4u: goto label_2f57a4;
        case 0x2f57a8u: goto label_2f57a8;
        case 0x2f57acu: goto label_2f57ac;
        case 0x2f57b0u: goto label_2f57b0;
        case 0x2f57b4u: goto label_2f57b4;
        case 0x2f57b8u: goto label_2f57b8;
        case 0x2f57bcu: goto label_2f57bc;
        case 0x2f57c0u: goto label_2f57c0;
        case 0x2f57c4u: goto label_2f57c4;
        case 0x2f57c8u: goto label_2f57c8;
        case 0x2f57ccu: goto label_2f57cc;
        case 0x2f57d0u: goto label_2f57d0;
        case 0x2f57d4u: goto label_2f57d4;
        default: break;
    }

    ctx->pc = 0x2f4d18u;

label_2f4d18:
    // 0x2f4d18: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2f4d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_2f4d1c:
    // 0x2f4d1c: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2f4d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
label_2f4d20:
    // 0x2f4d20: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2f4d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
label_2f4d24:
    // 0x2f4d24: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2f4d24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d28:
    // 0x2f4d28: 0xe7ba01c0  swc1        $f26, 0x1C0($sp)
    ctx->pc = 0x2f4d28u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_2f4d2c:
    // 0x2f4d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d30:
    // 0x2f4d30: 0xe7b901b8  swc1        $f25, 0x1B8($sp)
    ctx->pc = 0x2f4d30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2f4d34:
    // 0x2f4d34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f4d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d38:
    // 0x2f4d38: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2f4d38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2f4d3c:
    // 0x2f4d3c: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x2f4d3cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
label_2f4d40:
    // 0x2f4d40: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2f4d40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2f4d44:
    // 0x2f4d44: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x2f4d44u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
label_2f4d48:
    // 0x2f4d48: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2f4d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2f4d4c:
    // 0x2f4d4c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2f4d4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_2f4d50:
    // 0x2f4d50: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x2f4d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
label_2f4d54:
    // 0x2f4d54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2f4d54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2f4d58:
    // 0x2f4d58: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2f4d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
label_2f4d5c:
    // 0x2f4d5c: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x2f4d5cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
label_2f4d60:
    // 0x2f4d60: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2f4d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
label_2f4d64:
    // 0x2f4d64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f4d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4d68:
    // 0x2f4d68: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x2f4d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
label_2f4d6c:
    // 0x2f4d6c: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x2f4d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
label_2f4d70:
    // 0x2f4d70: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x2f4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
label_2f4d74:
    // 0x2f4d74: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x2f4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
label_2f4d78:
    // 0x2f4d78: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x2f4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
label_2f4d7c:
    // 0x2f4d7c: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2f4d7cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2f4d80:
    // 0x2f4d80: 0xc0f6a96  jal         func_3DAA58
label_2f4d84:
    if (ctx->pc == 0x2F4D84u) {
        ctx->pc = 0x2F4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D80u;
        // 0x2f4d84: 0xe7b701a8  swc1        $f23, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D88u;
        goto label_2f4d88;
    }
    ctx->pc = 0x2F4D80u;
    SET_GPR_U32(ctx, 31, 0x2F4D88u);
    ctx->pc = 0x2F4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D80u;
    // 0x2f4d84: 0xe7b701a8  swc1        $f23, 0x1A8($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F4D80u, 0x2F4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D88u;
label_2f4d88:
    // 0x2f4d88: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2f4d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_2f4d8c:
    // 0x2f4d8c: 0xc08da92  jal         func_236A48
label_2f4d90:
    if (ctx->pc == 0x2F4D90u) {
        ctx->pc = 0x2F4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D8Cu;
        // 0x2f4d90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D94u;
        goto label_2f4d94;
    }
    ctx->pc = 0x2F4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D94u);
    ctx->pc = 0x2F4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D8Cu;
    // 0x2f4d90: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2F4D8Cu, 0x2F4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D94u;
label_2f4d94:
    // 0x2f4d94: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2f4d98:
    if (ctx->pc == 0x2F4D98u) {
        ctx->pc = 0x2F4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D94u;
        // 0x2f4d98: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D9Cu;
        goto label_2f4d9c;
    }
    ctx->pc = 0x2F4D94u;
    {
        const bool branch_taken_0x2f4d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4d94) {
            ctx->pc = 0x2F4D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4D94u;
            // 0x2f4d98: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4DBCu;
            goto label_2f4dbc;
        }
    }
    ctx->pc = 0x2F4D9Cu;
label_2f4d9c:
    // 0x2f4d9c: 0xc0899bc  jal         func_2266F0
label_2f4da0:
    if (ctx->pc == 0x2F4DA0u) {
        ctx->pc = 0x2F4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D9Cu;
        // 0x2f4da0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4DA4u;
        goto label_2f4da4;
    }
    ctx->pc = 0x2F4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2F4DA4u);
    ctx->pc = 0x2F4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4D9Cu;
    // 0x2f4da0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F4D9Cu, 0x2F4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DA4u;
label_2f4da4:
    // 0x2f4da4: 0xc097f26  jal         func_25FC98
label_2f4da8:
    if (ctx->pc == 0x2F4DA8u) {
        ctx->pc = 0x2F4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DA4u;
        // 0x2f4da8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4DACu;
        goto label_2f4dac;
    }
    ctx->pc = 0x2F4DA4u;
    SET_GPR_U32(ctx, 31, 0x2F4DACu);
    ctx->pc = 0x2F4DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DA4u;
    // 0x2f4da8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2F4DA4u, 0x2F4DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DACu;
label_2f4dac:
    // 0x2f4dac: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2f4dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2f4db0:
    // 0x2f4db0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_2f4db4:
    if (ctx->pc == 0x2F4DB4u) {
        ctx->pc = 0x2F4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DB0u;
        // 0x2f4db4: 0x8ec211c0  lw          $v0, 0x11C0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4DB8u;
        goto label_2f4db8;
    }
    ctx->pc = 0x2F4DB0u;
    {
        const bool branch_taken_0x2f4db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4db0) {
            ctx->pc = 0x2F4DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4DB0u;
            // 0x2f4db4: 0x8ec211c0  lw          $v0, 0x11C0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4DC0u;
            goto label_2f4dc0;
        }
    }
    ctx->pc = 0x2F4DB8u;
label_2f4db8:
    // 0x2f4db8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f4db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4dbc:
    // 0x2f4dbc: 0x8ec211c0  lw          $v0, 0x11C0($s6)
    ctx->pc = 0x2f4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4544)));
label_2f4dc0:
    // 0x2f4dc0: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2f4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2f4dc4:
    // 0x2f4dc4: 0xaec01244  sw          $zero, 0x1244($s6)
    ctx->pc = 0x2f4dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4676), GPR_U32(ctx, 0));
label_2f4dc8:
    // 0x2f4dc8: 0x26c3120c  addiu       $v1, $s6, 0x120C
    ctx->pc = 0x2f4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4620));
label_2f4dcc:
    // 0x2f4dcc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2f4dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2f4dd0:
    // 0x2f4dd0: 0x2e740001  sltiu       $s4, $s3, 0x1
    ctx->pc = 0x2f4dd0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f4dd4:
    // 0x2f4dd4: 0x8ec4121c  lw          $a0, 0x121C($s6)
    ctx->pc = 0x2f4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4636)));
label_2f4dd8:
    // 0x2f4dd8: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x2f4dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
label_2f4ddc:
    // 0x2f4ddc: 0xaec211c0  sw          $v0, 0x11C0($s6)
    ctx->pc = 0x2f4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4544), GPR_U32(ctx, 2));
label_2f4de0:
    // 0x2f4de0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2f4de4:
    // 0x2f4de4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2f4de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2f4de8:
    // 0x2f4de8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2f4de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4dec:
    // 0x2f4dec: 0x0  nop
    ctx->pc = 0x2f4decu;
    // NOP
label_2f4df0:
    // 0x2f4df0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2f4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2f4df4:
    // 0x2f4df4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f4df8:
    if (ctx->pc == 0x2F4DF8u) {
        ctx->pc = 0x2F4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DF4u;
        // 0x2f4df8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4DFCu;
        goto label_2f4dfc;
    }
    ctx->pc = 0x2F4DF4u;
    {
        const bool branch_taken_0x2f4df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4DF4u;
        // 0x2f4df8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4df4) {
            ctx->pc = 0x2F4E00u;
            goto label_2f4e00;
        }
    }
    ctx->pc = 0x2F4DFCu;
label_2f4dfc:
    // 0x2f4dfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4e00:
    // 0x2f4e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f4e04:
    if (ctx->pc == 0x2F4E04u) {
        ctx->pc = 0x2F4E08u;
        goto label_2f4e08;
    }
    ctx->pc = 0x2F4E00u;
    {
        const bool branch_taken_0x2f4e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e00) {
            ctx->pc = 0x2F4E10u;
            goto label_2f4e10;
        }
    }
    ctx->pc = 0x2F4E08u;
label_2f4e08:
    // 0x2f4e08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f4e0c:
    // 0x2f4e0c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x2f4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_2f4e10:
    // 0x2f4e10: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2f4e14:
    if (ctx->pc == 0x2F4E14u) {
        ctx->pc = 0x2F4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E10u;
        // 0x2f4e14: 0xac601088  sw          $zero, 0x1088($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E18u;
        goto label_2f4e18;
    }
    ctx->pc = 0x2F4E10u;
    {
        const bool branch_taken_0x2f4e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e10) {
            ctx->pc = 0x2F4E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4E10u;
            // 0x2f4e14: 0xac601088  sw          $zero, 0x1088($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4df0;
        }
    }
    ctx->pc = 0x2F4E18u;
label_2f4e18:
    // 0x2f4e18: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2f4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f4e1c:
    // 0x2f4e1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f4e20:
    if (ctx->pc == 0x2F4E20u) {
        ctx->pc = 0x2F4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E1Cu;
        // 0x2f4e20: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E24u;
        goto label_2f4e24;
    }
    ctx->pc = 0x2F4E1Cu;
    {
        const bool branch_taken_0x2f4e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E1Cu;
        // 0x2f4e20: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e1c) {
            ctx->pc = 0x2F4E40u;
            goto label_2f4e40;
        }
    }
    ctx->pc = 0x2F4E24u;
label_2f4e24:
    // 0x2f4e24: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2f4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f4e28:
    // 0x2f4e28: 0xc0f6e9c  jal         func_3DBA70
label_2f4e2c:
    if (ctx->pc == 0x2F4E2Cu) {
        ctx->pc = 0x2F4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E28u;
        // 0x2f4e2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E30u;
        goto label_2f4e30;
    }
    ctx->pc = 0x2F4E28u;
    SET_GPR_U32(ctx, 31, 0x2F4E30u);
    ctx->pc = 0x2F4E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E28u;
    // 0x2f4e2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2F4E28u, 0x2F4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E30u;
label_2f4e30:
    // 0x2f4e30: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2f4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f4e34:
    // 0x2f4e34: 0x0  nop
    ctx->pc = 0x2f4e34u;
    // NOP
label_2f4e38:
    // 0x2f4e38: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_2f4e3c:
    if (ctx->pc == 0x2F4E3Cu) {
        ctx->pc = 0x2F4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E38u;
        // 0x2f4e3c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E40u;
        goto label_2f4e40;
    }
    ctx->pc = 0x2F4E38u;
    {
        const bool branch_taken_0x2f4e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e38) {
            ctx->pc = 0x2F4E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4E38u;
            // 0x2f4e3c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4e28;
        }
    }
    ctx->pc = 0x2F4E40u;
label_2f4e40:
    // 0x2f4e40: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2f4e40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2f4e44:
    // 0x2f4e44: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2f4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2f4e48:
    // 0x2f4e48: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x2f4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_2f4e4c:
    // 0x2f4e4c: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x2f4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_2f4e50:
    // 0x2f4e50: 0xaec0121c  sw          $zero, 0x121C($s6)
    ctx->pc = 0x2f4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4636), GPR_U32(ctx, 0));
label_2f4e54:
    // 0x2f4e54: 0xaed01208  sw          $s0, 0x1208($s6)
    ctx->pc = 0x2f4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4616), GPR_U32(ctx, 16));
label_2f4e58:
    // 0x2f4e58: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
label_2f4e5c:
    if (ctx->pc == 0x2F4E5Cu) {
        ctx->pc = 0x2F4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E58u;
        // 0x2f4e5c: 0xe6d41240  swc1        $f20, 0x1240($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4672), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E60u;
        goto label_2f4e60;
    }
    ctx->pc = 0x2F4E58u;
    {
        const bool branch_taken_0x2f4e58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E58u;
        // 0x2f4e5c: 0xe6d41240  swc1        $f20, 0x1240($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e58) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4E60u;
label_2f4e60:
    // 0x2f4e60: 0xc6c100d0  lwc1        $f1, 0xD0($s6)
    ctx->pc = 0x2f4e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4e64:
    // 0x2f4e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f4e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4e68:
    // 0x2f4e68: 0x0  nop
    ctx->pc = 0x2f4e68u;
    // NOP
label_2f4e6c:
    // 0x2f4e6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f4e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4e70:
    // 0x2f4e70: 0x0  nop
    ctx->pc = 0x2f4e70u;
    // NOP
label_2f4e74:
    // 0x2f4e74: 0x45030246  bc1tl       . + 4 + (0x246 << 2)
label_2f4e78:
    if (ctx->pc == 0x2F4E78u) {
        ctx->pc = 0x2F4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E74u;
        // 0x2f4e78: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E7Cu;
        goto label_2f4e7c;
    }
    ctx->pc = 0x2F4E74u;
    {
        const bool branch_taken_0x2f4e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4e74) {
            ctx->pc = 0x2F4E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4E74u;
            // 0x2f4e78: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5790u;
            goto label_2f5790;
        }
    }
    ctx->pc = 0x2F4E7Cu;
label_2f4e7c:
    // 0x2f4e7c: 0x92c2047d  lbu         $v0, 0x47D($s6)
    ctx->pc = 0x2f4e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1149)));
label_2f4e80:
    // 0x2f4e80: 0x54400243  bnel        $v0, $zero, . + 4 + (0x243 << 2)
label_2f4e84:
    if (ctx->pc == 0x2F4E84u) {
        ctx->pc = 0x2F4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E80u;
        // 0x2f4e84: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4E88u;
        goto label_2f4e88;
    }
    ctx->pc = 0x2F4E80u;
    {
        const bool branch_taken_0x2f4e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e80) {
            ctx->pc = 0x2F4E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4E80u;
            // 0x2f4e84: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5790u;
            goto label_2f5790;
        }
    }
    ctx->pc = 0x2F4E88u;
label_2f4e88:
    // 0x2f4e88: 0x8ec30218  lw          $v1, 0x218($s6)
    ctx->pc = 0x2f4e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 536)));
label_2f4e8c:
    // 0x2f4e8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f4e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e90:
    // 0x2f4e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f4e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4e94:
    // 0x2f4e94: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2f4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2f4e98:
    // 0x2f4e98: 0x40f809  jalr        $v0
label_2f4e9c:
    if (ctx->pc == 0x2F4E9Cu) {
        ctx->pc = 0x2F4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E98u;
        // 0x2f4e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EA0u;
        goto label_2f4ea0;
    }
    ctx->pc = 0x2F4E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F4EA0u);
        ctx->pc = 0x2F4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E98u;
        // 0x2f4e9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4E98u, 0x2F4EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4EA0u;
label_2f4ea0:
    // 0x2f4ea0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_2f4ea4:
    if (ctx->pc == 0x2F4EA4u) {
        ctx->pc = 0x2F4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EA0u;
        // 0x2f4ea4: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EA8u;
        goto label_2f4ea8;
    }
    ctx->pc = 0x2F4EA0u;
    {
        const bool branch_taken_0x2f4ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EA0u;
        // 0x2f4ea4: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ea0) {
            ctx->pc = 0x2F4F78u;
            goto label_2f4f78;
        }
    }
    ctx->pc = 0x2F4EA8u;
label_2f4ea8:
    // 0x2f4ea8: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
label_2f4eac:
    if (ctx->pc == 0x2F4EACu) {
        ctx->pc = 0x2F4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EA8u;
        // 0x2f4eac: 0x8ec50334  lw          $a1, 0x334($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EB0u;
        goto label_2f4eb0;
    }
    ctx->pc = 0x2F4EA8u;
    {
        const bool branch_taken_0x2f4ea8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EA8u;
        // 0x2f4eac: 0x8ec50334  lw          $a1, 0x334($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ea8) {
            ctx->pc = 0x2F4F10u;
            goto label_2f4f10;
        }
    }
    ctx->pc = 0x2F4EB0u;
label_2f4eb0:
    // 0x2f4eb0: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x2f4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2f4eb4:
    // 0x2f4eb4: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x2f4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2f4eb8:
    // 0x2f4eb8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_2f4ebc:
    if (ctx->pc == 0x2F4EBCu) {
        ctx->pc = 0x2F4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EB8u;
        // 0x2f4ebc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EC0u;
        goto label_2f4ec0;
    }
    ctx->pc = 0x2F4EB8u;
    {
        const bool branch_taken_0x2f4eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EB8u;
        // 0x2f4ebc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4eb8) {
            ctx->pc = 0x2F4F10u;
            goto label_2f4f10;
        }
    }
    ctx->pc = 0x2F4EC0u;
label_2f4ec0:
    // 0x2f4ec0: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2f4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_2f4ec4:
    // 0x2f4ec4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2f4ec8:
    if (ctx->pc == 0x2F4EC8u) {
        ctx->pc = 0x2F4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EC4u;
        // 0x2f4ec8: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4ECCu;
        goto label_2f4ecc;
    }
    ctx->pc = 0x2F4EC4u;
    {
        const bool branch_taken_0x2f4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ec4) {
            ctx->pc = 0x2F4EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4EC4u;
            // 0x2f4ec8: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4EF8u;
            goto label_2f4ef8;
        }
    }
    ctx->pc = 0x2F4ECCu;
label_2f4ecc:
    // 0x2f4ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f4eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ed0:
    // 0x2f4ed0: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x2f4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_2f4ed4:
    // 0x2f4ed4: 0x0  nop
    ctx->pc = 0x2f4ed4u;
    // NOP
label_2f4ed8:
    // 0x2f4ed8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f4edc:
    // 0x2f4edc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f4ee0:
    if (ctx->pc == 0x2F4EE0u) {
        ctx->pc = 0x2F4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EDCu;
        // 0x2f4ee0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EE4u;
        goto label_2f4ee4;
    }
    ctx->pc = 0x2F4EDCu;
    {
        const bool branch_taken_0x2f4edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EDCu;
        // 0x2f4ee0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4edc) {
            ctx->pc = 0x2F4EF4u;
            goto label_2f4ef4;
        }
    }
    ctx->pc = 0x2F4EE4u;
label_2f4ee4:
    // 0x2f4ee4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2f4ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f4ee8:
    // 0x2f4ee8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2f4eec:
    if (ctx->pc == 0x2F4EECu) {
        ctx->pc = 0x2F4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EE8u;
        // 0x2f4eec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4EF0u;
        goto label_2f4ef0;
    }
    ctx->pc = 0x2F4EE8u;
    {
        const bool branch_taken_0x2f4ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4EE8u;
        // 0x2f4eec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ee8) {
            ctx->pc = 0x2F4ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4ed8;
        }
    }
    ctx->pc = 0x2F4EF0u;
label_2f4ef0:
    // 0x2f4ef0: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x2f4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2f4ef4:
    // 0x2f4ef4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2f4ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4ef8:
    // 0x2f4ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f4ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4efc:
    // 0x2f4efc: 0x0  nop
    ctx->pc = 0x2f4efcu;
    // NOP
label_2f4f00:
    // 0x2f4f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f4f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4f04:
    // 0x2f4f04: 0x0  nop
    ctx->pc = 0x2f4f04u;
    // NOP
label_2f4f08:
    // 0x2f4f08: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_2f4f0c:
    if (ctx->pc == 0x2F4F0Cu) {
        ctx->pc = 0x2F4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F08u;
        // 0x2f4f0c: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F10u;
        goto label_2f4f10;
    }
    ctx->pc = 0x2F4F08u;
    {
        const bool branch_taken_0x2f4f08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F08u;
        // 0x2f4f0c: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f08) {
            ctx->pc = 0x2F4F78u;
            goto label_2f4f78;
        }
    }
    ctx->pc = 0x2F4F10u;
label_2f4f10:
    // 0x2f4f10: 0x8ca40150  lw          $a0, 0x150($a1)
    ctx->pc = 0x2f4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2f4f14:
    // 0x2f4f14: 0x2482ffe3  addiu       $v0, $a0, -0x1D
    ctx->pc = 0x2f4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
label_2f4f18:
    // 0x2f4f18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f4f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f4f1c:
    // 0x2f4f1c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_2f4f20:
    if (ctx->pc == 0x2F4F20u) {
        ctx->pc = 0x2F4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F1Cu;
        // 0x2f4f20: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F24u;
        goto label_2f4f24;
    }
    ctx->pc = 0x2F4F1Cu;
    {
        const bool branch_taken_0x2f4f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F1Cu;
        // 0x2f4f20: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f1c) {
            ctx->pc = 0x2F4F78u;
            goto label_2f4f78;
        }
    }
    ctx->pc = 0x2F4F24u;
label_2f4f24:
    // 0x2f4f24: 0x2482ffd9  addiu       $v0, $a0, -0x27
    ctx->pc = 0x2f4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967257));
label_2f4f28:
    // 0x2f4f28: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2f4f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2f4f2c:
    // 0x2f4f2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f4f30:
    if (ctx->pc == 0x2F4F30u) {
        ctx->pc = 0x2F4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F2Cu;
        // 0x2f4f30: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F34u;
        goto label_2f4f34;
    }
    ctx->pc = 0x2F4F2Cu;
    {
        const bool branch_taken_0x2f4f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F2Cu;
        // 0x2f4f30: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f2c) {
            ctx->pc = 0x2F4F44u;
            goto label_2f4f44;
        }
    }
    ctx->pc = 0x2F4F34u;
label_2f4f34:
    // 0x2f4f34: 0x8ec20338  lw          $v0, 0x338($s6)
    ctx->pc = 0x2f4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 824)));
label_2f4f38:
    // 0x2f4f38: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x2f4f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_2f4f3c:
    // 0x2f4f3c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2f4f40:
    if (ctx->pc == 0x2F4F40u) {
        ctx->pc = 0x2F4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F3Cu;
        // 0x2f4f40: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F44u;
        goto label_2f4f44;
    }
    ctx->pc = 0x2F4F3Cu;
    {
        const bool branch_taken_0x2f4f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F3Cu;
        // 0x2f4f40: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f3c) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F44u;
label_2f4f44:
    // 0x2f4f44: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_2f4f48:
    if (ctx->pc == 0x2F4F48u) {
        ctx->pc = 0x2F4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F44u;
        // 0x2f4f48: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F4Cu;
        goto label_2f4f4c;
    }
    ctx->pc = 0x2F4F44u;
    {
        const bool branch_taken_0x2f4f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F44u;
        // 0x2f4f48: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f44) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F4Cu;
label_2f4f4c:
    // 0x2f4f4c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_2f4f50:
    if (ctx->pc == 0x2F4F50u) {
        ctx->pc = 0x2F4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F4Cu;
        // 0x2f4f50: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F54u;
        goto label_2f4f54;
    }
    ctx->pc = 0x2F4F4Cu;
    {
        const bool branch_taken_0x2f4f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F4Cu;
        // 0x2f4f50: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f4c) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F54u;
label_2f4f54:
    // 0x2f4f54: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_2f4f58:
    if (ctx->pc == 0x2F4F58u) {
        ctx->pc = 0x2F4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F54u;
        // 0x2f4f58: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F5Cu;
        goto label_2f4f5c;
    }
    ctx->pc = 0x2F4F54u;
    {
        const bool branch_taken_0x2f4f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F54u;
        // 0x2f4f58: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f54) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F5Cu;
label_2f4f5c:
    // 0x2f4f5c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2f4f60:
    if (ctx->pc == 0x2F4F60u) {
        ctx->pc = 0x2F4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F5Cu;
        // 0x2f4f60: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F64u;
        goto label_2f4f64;
    }
    ctx->pc = 0x2F4F5Cu;
    {
        const bool branch_taken_0x2f4f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F5Cu;
        // 0x2f4f60: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f5c) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F64u;
label_2f4f64:
    // 0x2f4f64: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2f4f68:
    if (ctx->pc == 0x2F4F68u) {
        ctx->pc = 0x2F4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F64u;
        // 0x2f4f68: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F6Cu;
        goto label_2f4f6c;
    }
    ctx->pc = 0x2F4F64u;
    {
        const bool branch_taken_0x2f4f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F64u;
        // 0x2f4f68: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f64) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F6Cu;
label_2f4f6c:
    // 0x2f4f6c: 0x14820208  bne         $a0, $v0, . + 4 + (0x208 << 2)
label_2f4f70:
    if (ctx->pc == 0x2F4F70u) {
        ctx->pc = 0x2F4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F6Cu;
        // 0x2f4f70: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4F74u;
        goto label_2f4f74;
    }
    ctx->pc = 0x2F4F6Cu;
    {
        const bool branch_taken_0x2f4f6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4F6Cu;
        // 0x2f4f70: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f6c) {
            ctx->pc = 0x2F5790u;
            goto label_2f5790;
        }
    }
    ctx->pc = 0x2F4F74u;
label_2f4f74:
    // 0x2f4f74: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2f4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_2f4f78:
    // 0x2f4f78: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2f4f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f4f7c:
    // 0x2f4f7c: 0x24513d20  addiu       $s1, $v0, 0x3D20
    ctx->pc = 0x2f4f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_2f4f80:
    // 0x2f4f80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f4f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f84:
    // 0x2f4f84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f4f88:
    // 0x2f4f88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f4f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f8c:
    // 0x2f4f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f90:
    // 0x2f4f90: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2f4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2f4f94:
    // 0x2f4f94: 0x8ec30104  lw          $v1, 0x104($s6)
    ctx->pc = 0x2f4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 260)));
label_2f4f98:
    // 0x2f4f98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f4f9c:
    // 0x2f4f9c: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2f4f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4fa0:
    // 0x2f4fa0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f4fa4:
    // 0x2f4fa4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2f4fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2f4fa8:
    // 0x2f4fa8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f4fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4fac:
    // 0x2f4fac: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f4facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2f4fb0:
    // 0x2f4fb0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f4fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4fb4:
    // 0x2f4fb4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2f4fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2f4fb8:
    // 0x2f4fb8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f4fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4fbc:
    // 0x2f4fbc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f4fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2f4fc0:
    // 0x2f4fc0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2f4fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f4fc4:
    // 0x2f4fc4: 0xc0bff58  jal         func_2FFD60
label_2f4fc8:
    if (ctx->pc == 0x2F4FC8u) {
        ctx->pc = 0x2F4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FC4u;
        // 0x2f4fc8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4FCCu;
        goto label_2f4fcc;
    }
    ctx->pc = 0x2F4FC4u;
    SET_GPR_U32(ctx, 31, 0x2F4FCCu);
    ctx->pc = 0x2F4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4FC4u;
    // 0x2f4fc8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD60u, 0x2F4FC4u, 0x2F4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FCCu;
label_2f4fcc:
    // 0x2f4fcc: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
label_2f4fd0:
    if (ctx->pc == 0x2F4FD0u) {
        ctx->pc = 0x2F4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FCCu;
        // 0x2f4fd0: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4FD4u;
        goto label_2f4fd4;
    }
    ctx->pc = 0x2F4FCCu;
    {
        const bool branch_taken_0x2f4fcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FCCu;
        // 0x2f4fd0: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fcc) {
            ctx->pc = 0x2F5050u;
            goto label_2f5050;
        }
    }
    ctx->pc = 0x2F4FD4u;
label_2f4fd4:
    // 0x2f4fd4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2f4fd8:
    if (ctx->pc == 0x2F4FD8u) {
        ctx->pc = 0x2F4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FD4u;
        // 0x2f4fd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4FDCu;
        goto label_2f4fdc;
    }
    ctx->pc = 0x2F4FD4u;
    {
        const bool branch_taken_0x2f4fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FD4u;
        // 0x2f4fd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fd4) {
            ctx->pc = 0x2F5018u;
            goto label_2f5018;
        }
    }
    ctx->pc = 0x2F4FDCu;
label_2f4fdc:
    // 0x2f4fdc: 0x0  nop
    ctx->pc = 0x2f4fdcu;
    // NOP
label_2f4fe0:
    // 0x2f4fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4fe4:
    // 0x2f4fe4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f4fe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f4fe8:
    // 0x2f4fe8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2f4fe8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2f4fec:
    // 0x2f4fec: 0xc0bcea8  jal         func_2F3AA0
label_2f4ff0:
    if (ctx->pc == 0x2F4FF0u) {
        ctx->pc = 0x2F4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FECu;
        // 0x2f4ff0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4FF4u;
        goto label_2f4ff4;
    }
    ctx->pc = 0x2F4FECu;
    SET_GPR_U32(ctx, 31, 0x2F4FF4u);
    ctx->pc = 0x2F4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4FECu;
    // 0x2f4ff0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3AA0u, 0x2F4FECu, 0x2F4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FF4u;
label_2f4ff4:
    // 0x2f4ff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2f4ff8:
    if (ctx->pc == 0x2F4FF8u) {
        ctx->pc = 0x2F4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FF4u;
        // 0x2f4ff8: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4FFCu;
        goto label_2f4ffc;
    }
    ctx->pc = 0x2F4FF4u;
    {
        const bool branch_taken_0x2f4ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4FF4u;
        // 0x2f4ff8: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ff4) {
            ctx->pc = 0x2F5014u;
            goto label_2f5014;
        }
    }
    ctx->pc = 0x2F4FFCu;
label_2f4ffc:
    // 0x2f4ffc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2f4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2f5000:
    // 0x2f5000: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2f5004:
    // 0x2f5004: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f5004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f5008:
    // 0x2f5008: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2f5008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2f500c:
    // 0x2f500c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2f500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_2f5010:
    // 0x2f5010: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x2f5010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_2f5014:
    // 0x2f5014: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f5018:
    // 0x2f5018: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f501c:
    if (ctx->pc == 0x2F501Cu) {
        ctx->pc = 0x2F501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5018u;
        // 0x2f501c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5020u;
        goto label_2f5020;
    }
    ctx->pc = 0x2F5018u;
    {
        const bool branch_taken_0x2f5018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5018u;
        // 0x2f501c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5018) {
            ctx->pc = 0x2F5024u;
            goto label_2f5024;
        }
    }
    ctx->pc = 0x2F5020u;
label_2f5020:
    // 0x2f5020: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f5020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5024:
    // 0x2f5024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f5028:
    if (ctx->pc == 0x2F5028u) {
        ctx->pc = 0x2F5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5024u;
        // 0x2f5028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F502Cu;
        goto label_2f502c;
    }
    ctx->pc = 0x2F5024u;
    {
        const bool branch_taken_0x2f5024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5024u;
        // 0x2f5028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5024) {
            ctx->pc = 0x2F5034u;
            goto label_2f5034;
        }
    }
    ctx->pc = 0x2F502Cu;
label_2f502c:
    // 0x2f502c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f5030:
    // 0x2f5030: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2f5030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2f5034:
    // 0x2f5034: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_2f5038:
    if (ctx->pc == 0x2F5038u) {
        ctx->pc = 0x2F5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5034u;
        // 0x2f5038: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F503Cu;
        goto label_2f503c;
    }
    ctx->pc = 0x2F5034u;
    {
        const bool branch_taken_0x2f5034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5034u;
        // 0x2f5038: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5034) {
            ctx->pc = 0x2F50D8u;
            goto label_2f50d8;
        }
    }
    ctx->pc = 0x2F503Cu;
label_2f503c:
    // 0x2f503c: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x2f503cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_2f5040:
    // 0x2f5040: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_2f5044:
    if (ctx->pc == 0x2F5044u) {
        ctx->pc = 0x2F5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5040u;
        // 0x2f5044: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5048u;
        goto label_2f5048;
    }
    ctx->pc = 0x2F5040u;
    {
        const bool branch_taken_0x2f5040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5040u;
        // 0x2f5044: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5040) {
            ctx->pc = 0x2F4FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4fe0;
        }
    }
    ctx->pc = 0x2F5048u;
label_2f5048:
    // 0x2f5048: 0x10000024  b           . + 4 + (0x24 << 2)
label_2f504c:
    if (ctx->pc == 0x2F504Cu) {
        ctx->pc = 0x2F504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5048u;
        // 0x2f504c: 0x8e62bd48  lw          $v0, -0x42B8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5050u;
        goto label_2f5050;
    }
    ctx->pc = 0x2F5048u;
    {
        const bool branch_taken_0x2f5048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5048u;
        // 0x2f504c: 0x8e62bd48  lw          $v0, -0x42B8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5048) {
            ctx->pc = 0x2F50DCu;
            goto label_2f50dc;
        }
    }
    ctx->pc = 0x2F5050u;
label_2f5050:
    // 0x2f5050: 0x128001cf  beqz        $s4, . + 4 + (0x1CF << 2)
label_2f5054:
    if (ctx->pc == 0x2F5054u) {
        ctx->pc = 0x2F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5050u;
        // 0x2f5054: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5058u;
        goto label_2f5058;
    }
    ctx->pc = 0x2F5050u;
    {
        const bool branch_taken_0x2f5050 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5050u;
        // 0x2f5054: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5050) {
            ctx->pc = 0x2F5790u;
            goto label_2f5790;
        }
    }
    ctx->pc = 0x2F5058u;
label_2f5058:
    // 0x2f5058: 0x10000013  b           . + 4 + (0x13 << 2)
label_2f505c:
    if (ctx->pc == 0x2F505Cu) {
        ctx->pc = 0x2F505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5058u;
        // 0x2f505c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5060u;
        goto label_2f5060;
    }
    ctx->pc = 0x2F5058u;
    {
        const bool branch_taken_0x2f5058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5058u;
        // 0x2f505c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5058) {
            ctx->pc = 0x2F50A8u;
            goto label_2f50a8;
        }
    }
    ctx->pc = 0x2F5060u;
label_2f5060:
    // 0x2f5060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5064:
    // 0x2f5064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f5064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2f5068:
    // 0x2f5068: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2f5068u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2f506c:
    // 0x2f506c: 0xc0bcea8  jal         func_2F3AA0
label_2f5070:
    if (ctx->pc == 0x2F5070u) {
        ctx->pc = 0x2F5070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F506Cu;
        // 0x2f5070: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5074u;
        goto label_2f5074;
    }
    ctx->pc = 0x2F506Cu;
    SET_GPR_U32(ctx, 31, 0x2F5074u);
    ctx->pc = 0x2F5070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F506Cu;
    // 0x2f5070: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3AA0u, 0x2F506Cu, 0x2F5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5074u;
label_2f5074:
    // 0x2f5074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f5078:
    if (ctx->pc == 0x2F5078u) {
        ctx->pc = 0x2F5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5074u;
        // 0x2f5078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F507Cu;
        goto label_2f507c;
    }
    ctx->pc = 0x2F5074u;
    {
        const bool branch_taken_0x2f5074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5074u;
        // 0x2f5078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5074) {
            ctx->pc = 0x2F5098u;
            goto label_2f5098;
        }
    }
    ctx->pc = 0x2F507Cu;
label_2f507c:
    // 0x2f507c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2f507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2f5080:
    // 0x2f5080: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2f5084:
    // 0x2f5084: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f5084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2f5088:
    // 0x2f5088: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2f5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2f508c:
    // 0x2f508c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2f508cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_2f5090:
    // 0x2f5090: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f5094:
    if (ctx->pc == 0x2F5094u) {
        ctx->pc = 0x2F5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5090u;
        // 0x2f5094: 0xac700010  sw          $s0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5098u;
        goto label_2f5098;
    }
    ctx->pc = 0x2F5090u;
    {
        const bool branch_taken_0x2f5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5090u;
        // 0x2f5094: 0xac700010  sw          $s0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5090) {
            ctx->pc = 0x2F50A4u;
            goto label_2f50a4;
        }
    }
    ctx->pc = 0x2F5098u;
label_2f5098:
    // 0x2f5098: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2f5098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_2f509c:
    // 0x2f509c: 0xc08fed2  jal         func_23FB48
label_2f50a0:
    if (ctx->pc == 0x2F50A0u) {
        ctx->pc = 0x2F50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F509Cu;
        // 0x2f50a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50A4u;
        goto label_2f50a4;
    }
    ctx->pc = 0x2F509Cu;
    SET_GPR_U32(ctx, 31, 0x2F50A4u);
    ctx->pc = 0x2F50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F509Cu;
    // 0x2f50a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F509Cu, 0x2F50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50A4u;
label_2f50a4:
    // 0x2f50a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2f50a8:
    // 0x2f50a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f50ac:
    if (ctx->pc == 0x2F50ACu) {
        ctx->pc = 0x2F50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50A8u;
        // 0x2f50ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50B0u;
        goto label_2f50b0;
    }
    ctx->pc = 0x2F50A8u;
    {
        const bool branch_taken_0x2f50a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50A8u;
        // 0x2f50ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50a8) {
            ctx->pc = 0x2F50B4u;
            goto label_2f50b4;
        }
    }
    ctx->pc = 0x2F50B0u;
label_2f50b0:
    // 0x2f50b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f50b4:
    // 0x2f50b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f50b8:
    if (ctx->pc == 0x2F50B8u) {
        ctx->pc = 0x2F50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50B4u;
        // 0x2f50b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50BCu;
        goto label_2f50bc;
    }
    ctx->pc = 0x2F50B4u;
    {
        const bool branch_taken_0x2f50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50B4u;
        // 0x2f50b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50b4) {
            ctx->pc = 0x2F50C4u;
            goto label_2f50c4;
        }
    }
    ctx->pc = 0x2F50BCu;
label_2f50bc:
    // 0x2f50bc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f50c0:
    // 0x2f50c0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2f50c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2f50c4:
    // 0x2f50c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2f50c8:
    if (ctx->pc == 0x2F50C8u) {
        ctx->pc = 0x2F50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50C4u;
        // 0x2f50c8: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50CCu;
        goto label_2f50cc;
    }
    ctx->pc = 0x2F50C4u;
    {
        const bool branch_taken_0x2f50c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50C4u;
        // 0x2f50c8: 0x8fa30100  lw          $v1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50c4) {
            ctx->pc = 0x2F50D8u;
            goto label_2f50d8;
        }
    }
    ctx->pc = 0x2F50CCu;
label_2f50cc:
    // 0x2f50cc: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x2f50ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_2f50d0:
    // 0x2f50d0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_2f50d4:
    if (ctx->pc == 0x2F50D4u) {
        ctx->pc = 0x2F50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50D0u;
        // 0x2f50d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50D8u;
        goto label_2f50d8;
    }
    ctx->pc = 0x2F50D0u;
    {
        const bool branch_taken_0x2f50d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50D0u;
        // 0x2f50d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f50d0) {
            ctx->pc = 0x2F5060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5060;
        }
    }
    ctx->pc = 0x2F50D8u;
label_2f50d8:
    // 0x2f50d8: 0x8e62bd48  lw          $v0, -0x42B8($s3)
    ctx->pc = 0x2f50d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
label_2f50dc:
    // 0x2f50dc: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x2f50dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_2f50e0:
    // 0x2f50e0: 0xc0f70ce  jal         func_3DC338
label_2f50e4:
    if (ctx->pc == 0x2F50E4u) {
        ctx->pc = 0x2F50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50E0u;
        // 0x2f50e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50E8u;
        goto label_2f50e8;
    }
    ctx->pc = 0x2F50E0u;
    SET_GPR_U32(ctx, 31, 0x2F50E8u);
    ctx->pc = 0x2F50E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50E0u;
    // 0x2f50e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F50E0u, 0x2F50E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50E8u;
label_2f50e8:
    // 0x2f50e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f50ec:
    if (ctx->pc == 0x2F50ECu) {
        ctx->pc = 0x2F50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50E8u;
        // 0x2f50ec: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50F0u;
        goto label_2f50f0;
    }
    ctx->pc = 0x2F50E8u;
    {
        const bool branch_taken_0x2f50e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f50e8) {
            ctx->pc = 0x2F50ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F50E8u;
            // 0x2f50ec: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F50FCu;
            goto label_2f50fc;
        }
    }
    ctx->pc = 0x2F50F0u;
label_2f50f0:
    // 0x2f50f0: 0xc0c4900  jal         func_312400
label_2f50f4:
    if (ctx->pc == 0x2F50F4u) {
        ctx->pc = 0x2F50F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50F0u;
        // 0x2f50f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F50F8u;
        goto label_2f50f8;
    }
    ctx->pc = 0x2F50F0u;
    SET_GPR_U32(ctx, 31, 0x2F50F8u);
    ctx->pc = 0x2F50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F50F0u;
    // 0x2f50f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F50F0u, 0x2F50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F50F8u;
label_2f50f8:
    // 0x2f50f8: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x2f50f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2f50fc:
    // 0x2f50fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f5100:
    // 0x2f5100: 0xc0f6a96  jal         func_3DAA58
label_2f5104:
    if (ctx->pc == 0x2F5104u) {
        ctx->pc = 0x2F5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5100u;
        // 0x2f5104: 0xafb00108  sw          $s0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5108u;
        goto label_2f5108;
    }
    ctx->pc = 0x2F5100u;
    SET_GPR_U32(ctx, 31, 0x2F5108u);
    ctx->pc = 0x2F5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5100u;
    // 0x2f5104: 0xafb00108  sw          $s0, 0x108($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5100u, 0x2F5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5108u;
label_2f5108:
    // 0x2f5108: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2f5108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f510c:
    // 0x2f510c: 0xc0f6a96  jal         func_3DAA58
label_2f5110:
    if (ctx->pc == 0x2F5110u) {
        ctx->pc = 0x2F5110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F510Cu;
        // 0x2f5110: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5114u;
        goto label_2f5114;
    }
    ctx->pc = 0x2F510Cu;
    SET_GPR_U32(ctx, 31, 0x2F5114u);
    ctx->pc = 0x2F5110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F510Cu;
    // 0x2f5110: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F510Cu, 0x2F5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5114u;
label_2f5114:
    // 0x2f5114: 0xc0f6a96  jal         func_3DAA58
label_2f5118:
    if (ctx->pc == 0x2F5118u) {
        ctx->pc = 0x2F5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5114u;
        // 0x2f5118: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F511Cu;
        goto label_2f511c;
    }
    ctx->pc = 0x2F5114u;
    SET_GPR_U32(ctx, 31, 0x2F511Cu);
    ctx->pc = 0x2F5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5114u;
    // 0x2f5118: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5114u, 0x2F511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F511Cu;
label_2f511c:
    // 0x2f511c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2f511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f5120:
    // 0x2f5120: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f5124:
    if (ctx->pc == 0x2F5124u) {
        ctx->pc = 0x2F5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5120u;
        // 0x2f5124: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5128u;
        goto label_2f5128;
    }
    ctx->pc = 0x2F5120u;
    {
        const bool branch_taken_0x2f5120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5120u;
        // 0x2f5124: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5120) {
            ctx->pc = 0x2F5148u;
            goto label_2f5148;
        }
    }
    ctx->pc = 0x2F5128u;
label_2f5128:
    // 0x2f5128: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2f5128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f512c:
    // 0x2f512c: 0x0  nop
    ctx->pc = 0x2f512cu;
    // NOP
label_2f5130:
    // 0x2f5130: 0xc0f6e9c  jal         func_3DBA70
label_2f5134:
    if (ctx->pc == 0x2F5134u) {
        ctx->pc = 0x2F5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5130u;
        // 0x2f5134: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5138u;
        goto label_2f5138;
    }
    ctx->pc = 0x2F5130u;
    SET_GPR_U32(ctx, 31, 0x2F5138u);
    ctx->pc = 0x2F5134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5130u;
    // 0x2f5134: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2F5130u, 0x2F5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5138u;
label_2f5138:
    // 0x2f5138: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2f5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f513c:
    // 0x2f513c: 0x0  nop
    ctx->pc = 0x2f513cu;
    // NOP
label_2f5140:
    // 0x2f5140: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_2f5144:
    if (ctx->pc == 0x2F5144u) {
        ctx->pc = 0x2F5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5140u;
        // 0x2f5144: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5148u;
        goto label_2f5148;
    }
    ctx->pc = 0x2F5140u;
    {
        const bool branch_taken_0x2f5140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5140) {
            ctx->pc = 0x2F5144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5140u;
            // 0x2f5144: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5130;
        }
    }
    ctx->pc = 0x2F5148u;
label_2f5148:
    // 0x2f5148: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x2f5148u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_2f514c:
    // 0x2f514c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x2f514cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_2f5150:
    // 0x2f5150: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x2f5150u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_2f5154:
    // 0x2f5154: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x2f5154u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_2f5158:
    // 0x2f5158: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x2f5158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2f515c:
    // 0x2f515c: 0x188000b0  blez        $a0, . + 4 + (0xB0 << 2)
label_2f5160:
    if (ctx->pc == 0x2F5160u) {
        ctx->pc = 0x2F5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F515Cu;
        // 0x2f5160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5164u;
        goto label_2f5164;
    }
    ctx->pc = 0x2F515Cu;
    {
        const bool branch_taken_0x2f515c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2F5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F515Cu;
        // 0x2f5160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f515c) {
            ctx->pc = 0x2F5420u;
            goto label_2f5420;
        }
    }
    ctx->pc = 0x2F5164u;
label_2f5164:
    // 0x2f5164: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2f5164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2f5168:
    // 0x2f5168: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2f5168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f516c:
    // 0x2f516c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2f516cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2f5170:
    // 0x2f5170: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f5170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2f5174:
    // 0x2f5174: 0xafb50110  sw          $s5, 0x110($sp)
    ctx->pc = 0x2f5174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 21));
label_2f5178:
    // 0x2f5178: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f517c:
    // 0x2f517c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f517cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f5180:
    // 0x2f5180: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2f5180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_2f5184:
    // 0x2f5184: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x2f5184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
label_2f5188:
    // 0x2f5188: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2f5188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f518c:
    // 0x2f518c: 0x0  nop
    ctx->pc = 0x2f518cu;
    // NOP
label_2f5190:
    // 0x2f5190: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f5194:
    // 0x2f5194: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2f5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_2f5198:
    // 0x2f5198: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x2f5198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2f519c:
    // 0x2f519c: 0xc0bcdee  jal         func_2F37B8
label_2f51a0:
    if (ctx->pc == 0x2F51A0u) {
        ctx->pc = 0x2F51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F519Cu;
        // 0x2f51a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51A4u;
        goto label_2f51a4;
    }
    ctx->pc = 0x2F519Cu;
    SET_GPR_U32(ctx, 31, 0x2F51A4u);
    ctx->pc = 0x2F51A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F519Cu;
    // 0x2f51a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F37B8u, 0x2F519Cu, 0x2F51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51A4u;
label_2f51a4:
    // 0x2f51a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f51a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2f51a8:
    // 0x2f51a8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2f51ac:
    if (ctx->pc == 0x2F51ACu) {
        ctx->pc = 0x2F51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51A8u;
        // 0x2f51ac: 0xe6141088  swc1        $f20, 0x1088($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51B0u;
        goto label_2f51b0;
    }
    ctx->pc = 0x2F51A8u;
    {
        const bool branch_taken_0x2f51a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51A8u;
        // 0x2f51ac: 0xe6141088  swc1        $f20, 0x1088($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51a8) {
            ctx->pc = 0x2F51C0u;
            goto label_2f51c0;
        }
    }
    ctx->pc = 0x2F51B0u;
label_2f51b0:
    // 0x2f51b0: 0x4616b836  c.le.s      $f23, $f22
    ctx->pc = 0x2f51b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f51b4:
    // 0x2f51b4: 0x0  nop
    ctx->pc = 0x2f51b4u;
    // NOP
label_2f51b8:
    // 0x2f51b8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2f51bc:
    if (ctx->pc == 0x2F51BCu) {
        ctx->pc = 0x2F51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51B8u;
        // 0x2f51bc: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51C0u;
        goto label_2f51c0;
    }
    ctx->pc = 0x2F51B8u;
    {
        const bool branch_taken_0x2f51b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51B8u;
        // 0x2f51bc: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51b8) {
            ctx->pc = 0x2F51F4u;
            goto label_2f51f4;
        }
    }
    ctx->pc = 0x2F51C0u;
label_2f51c0:
    // 0x2f51c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f51c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f51c4:
    // 0x2f51c4: 0xc0f7676  jal         func_3DD9D8
label_2f51c8:
    if (ctx->pc == 0x2F51C8u) {
        ctx->pc = 0x2F51C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51C4u;
        // 0x2f51c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51CCu;
        goto label_2f51cc;
    }
    ctx->pc = 0x2F51C4u;
    SET_GPR_U32(ctx, 31, 0x2F51CCu);
    ctx->pc = 0x2F51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F51C4u;
    // 0x2f51c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x2F51C4u, 0x2F51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51CCu;
label_2f51cc:
    // 0x2f51cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f51ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f51d0:
    // 0x2f51d0: 0x4617b034  c.lt.s      $f22, $f23
    ctx->pc = 0x2f51d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f51d4:
    // 0x2f51d4: 0x0  nop
    ctx->pc = 0x2f51d4u;
    // NOP
label_2f51d8:
    // 0x2f51d8: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
label_2f51dc:
    if (ctx->pc == 0x2F51DCu) {
        ctx->pc = 0x2F51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51D8u;
        // 0x2f51dc: 0xafb10130  sw          $s1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51E0u;
        goto label_2f51e0;
    }
    ctx->pc = 0x2F51D8u;
    {
        const bool branch_taken_0x2f51d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F51DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51D8u;
        // 0x2f51dc: 0xafb10130  sw          $s1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51d8) {
            ctx->pc = 0x2F540Cu;
            goto label_2f540c;
        }
    }
    ctx->pc = 0x2F51E0u;
label_2f51e0:
    // 0x2f51e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f51e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f51e4:
    // 0x2f51e4: 0xc0bcdee  jal         func_2F37B8
label_2f51e8:
    if (ctx->pc == 0x2F51E8u) {
        ctx->pc = 0x2F51E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51E4u;
        // 0x2f51e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51ECu;
        goto label_2f51ec;
    }
    ctx->pc = 0x2F51E4u;
    SET_GPR_U32(ctx, 31, 0x2F51ECu);
    ctx->pc = 0x2F51E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F51E4u;
    // 0x2f51e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F37B8u, 0x2F51E4u, 0x2F51ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F51ECu;
label_2f51ec:
    // 0x2f51ec: 0x10000087  b           . + 4 + (0x87 << 2)
label_2f51f0:
    if (ctx->pc == 0x2F51F0u) {
        ctx->pc = 0x2F51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51ECu;
        // 0x2f51f0: 0xe6001088  swc1        $f0, 0x1088($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F51F4u;
        goto label_2f51f4;
    }
    ctx->pc = 0x2F51ECu;
    {
        const bool branch_taken_0x2f51ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F51ECu;
        // 0x2f51f0: 0xe6001088  swc1        $f0, 0x1088($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51ec) {
            ctx->pc = 0x2F540Cu;
            goto label_2f540c;
        }
    }
    ctx->pc = 0x2F51F4u;
label_2f51f4:
    // 0x2f51f4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f51f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f51f8:
    // 0x2f51f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2f51fc:
    // 0x2f51fc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2f51fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2f5200:
    // 0x2f5200: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f5200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f5204:
    // 0x2f5204: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2f5208:
    if (ctx->pc == 0x2F5208u) {
        ctx->pc = 0x2F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5204u;
        // 0x2f5208: 0xafb10130  sw          $s1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F520Cu;
        goto label_2f520c;
    }
    ctx->pc = 0x2F5204u;
    {
        const bool branch_taken_0x2f5204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5204u;
        // 0x2f5208: 0xafb10130  sw          $s1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5204) {
            ctx->pc = 0x2F53BCu;
            goto label_2f53bc;
        }
    }
    ctx->pc = 0x2F520Cu;
label_2f520c:
    // 0x2f520c: 0x0  nop
    ctx->pc = 0x2f520cu;
    // NOP
label_2f5210:
    // 0x2f5210: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2f5210u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5214:
    // 0x2f5214: 0x0  nop
    ctx->pc = 0x2f5214u;
    // NOP
label_2f5218:
    // 0x2f5218: 0x45000063  bc1f        . + 4 + (0x63 << 2)
label_2f521c:
    if (ctx->pc == 0x2F521Cu) {
        ctx->pc = 0x2F521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5218u;
        // 0x2f521c: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5220u;
        goto label_2f5220;
    }
    ctx->pc = 0x2F5218u;
    {
        const bool branch_taken_0x2f5218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5218u;
        // 0x2f521c: 0x27b10090  addiu       $s1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5218) {
            ctx->pc = 0x2F53A8u;
            goto label_2f53a8;
        }
    }
    ctx->pc = 0x2F5220u;
label_2f5220:
    // 0x2f5220: 0x8ec211c0  lw          $v0, 0x11C0($s6)
    ctx->pc = 0x2f5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4544)));
label_2f5224:
    // 0x2f5224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f5228:
    // 0x2f5228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f522c:
    if (ctx->pc == 0x2F522Cu) {
        ctx->pc = 0x2F522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5228u;
        // 0x2f522c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5230u;
        goto label_2f5230;
    }
    ctx->pc = 0x2F5228u;
    {
        const bool branch_taken_0x2f5228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5228u;
        // 0x2f522c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5228) {
            ctx->pc = 0x2F5240u;
            goto label_2f5240;
        }
    }
    ctx->pc = 0x2F5230u;
label_2f5230:
    // 0x2f5230: 0xc08dab6  jal         func_236AD8
label_2f5234:
    if (ctx->pc == 0x2F5234u) {
        ctx->pc = 0x2F5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5230u;
        // 0x2f5234: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5238u;
        goto label_2f5238;
    }
    ctx->pc = 0x2F5230u;
    SET_GPR_U32(ctx, 31, 0x2F5238u);
    ctx->pc = 0x2F5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5230u;
    // 0x2f5234: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F5230u, 0x2F5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5238u;
label_2f5238:
    // 0x2f5238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f5238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f523c:
    // 0x2f523c: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x2f523cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2f5240:
    // 0x2f5240: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f5240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f5244:
    // 0x2f5244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f5244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f5248:
    // 0x2f5248: 0xc0bcd58  jal         func_2F3560
label_2f524c:
    if (ctx->pc == 0x2F524Cu) {
        ctx->pc = 0x2F524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5248u;
        // 0x2f524c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5250u;
        goto label_2f5250;
    }
    ctx->pc = 0x2F5248u;
    SET_GPR_U32(ctx, 31, 0x2F5250u);
    ctx->pc = 0x2F524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5248u;
    // 0x2f524c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F5248u, 0x2F5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5250u;
label_2f5250:
    // 0x2f5250: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2f5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2f5254:
    // 0x2f5254: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x2f5254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2f5258:
    // 0x2f5258: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f5258u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f525c:
    // 0x2f525c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2f525cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5260:
    // 0x2f5260: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f5260u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5264:
    // 0x2f5264: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f5264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5268:
    // 0x2f5268: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2f5268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f526c:
    // 0x2f526c: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x2f526cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f5270:
    // 0x2f5270: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2f5270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5274:
    // 0x2f5274: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x2f5274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f5278:
    // 0x2f5278: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2f5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f527c:
    // 0x2f527c: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x2f527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5280:
    // 0x2f5280: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f5280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f5284:
    // 0x2f5284: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f5284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2f5288:
    // 0x2f5288: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2f5288u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2f528c:
    // 0x2f528c: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x2f528cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2f5290:
    // 0x2f5290: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f5290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f5294:
    // 0x2f5294: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2f5294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5298:
    // 0x2f5298: 0x8ec211c0  lw          $v0, 0x11C0($s6)
    ctx->pc = 0x2f5298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4544)));
label_2f529c:
    // 0x2f529c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f52a0:
    // 0x2f52a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f52a4:
    if (ctx->pc == 0x2F52A4u) {
        ctx->pc = 0x2F52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52A0u;
        // 0x2f52a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F52A8u;
        goto label_2f52a8;
    }
    ctx->pc = 0x2F52A0u;
    {
        const bool branch_taken_0x2f52a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52A0u;
        // 0x2f52a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52a0) {
            ctx->pc = 0x2F52B8u;
            goto label_2f52b8;
        }
    }
    ctx->pc = 0x2F52A8u;
label_2f52a8:
    // 0x2f52a8: 0xc08dab6  jal         func_236AD8
label_2f52ac:
    if (ctx->pc == 0x2F52ACu) {
        ctx->pc = 0x2F52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52A8u;
        // 0x2f52ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F52B0u;
        goto label_2f52b0;
    }
    ctx->pc = 0x2F52A8u;
    SET_GPR_U32(ctx, 31, 0x2F52B0u);
    ctx->pc = 0x2F52ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52A8u;
    // 0x2f52ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F52A8u, 0x2F52B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52B0u;
label_2f52b0:
    // 0x2f52b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f52b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f52b4:
    // 0x2f52b4: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x2f52b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2f52b8:
    // 0x2f52b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2f52b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f52bc:
    // 0x2f52bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2f52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f52c0:
    // 0x2f52c0: 0xc0bcd58  jal         func_2F3560
label_2f52c4:
    if (ctx->pc == 0x2F52C4u) {
        ctx->pc = 0x2F52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F52C0u;
        // 0x2f52c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F52C8u;
        goto label_2f52c8;
    }
    ctx->pc = 0x2F52C0u;
    SET_GPR_U32(ctx, 31, 0x2F52C8u);
    ctx->pc = 0x2F52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F52C0u;
    // 0x2f52c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F52C0u, 0x2F52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52C8u;
label_2f52c8:
    // 0x2f52c8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f52c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f52cc:
    // 0x2f52cc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2f52ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2f52d0:
    // 0x2f52d0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f52d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f52d4:
    // 0x2f52d4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2f52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f52d8:
    // 0x2f52d8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2f52d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f52dc:
    // 0x2f52dc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2f52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f52e0:
    // 0x2f52e0: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2f52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f52e4:
    // 0x2f52e4: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x2f52e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f52e8:
    // 0x2f52e8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f52e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f52ec:
    // 0x2f52ec: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2f52ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2f52f0:
    // 0x2f52f0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2f52f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2f52f4:
    // 0x2f52f4: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x2f52f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2f52f8:
    // 0x2f52f8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f52f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f52fc:
    // 0x2f52fc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2f52fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5300:
    // 0x2f5300: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f5300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f5304:
    // 0x2f5304: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f5304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5308:
    // 0x2f5308: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f5308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f530c:
    // 0x2f530c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f530cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5310:
    // 0x2f5310: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f5310u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f5314:
    // 0x2f5314: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f5314u;
    // VWAITQ (Q already resolved in this runtime)
label_2f5318:
    // 0x2f5318: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f5318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f531c:
    // 0x2f531c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2f531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5320:
    // 0x2f5320: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x2f5320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_2f5324:
    // 0x2f5324: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f5324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5328:
    // 0x2f5328: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f5328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f532c:
    // 0x2f532c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f532cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5330:
    // 0x2f5330: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f5330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5334:
    // 0x2f5334: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f5334u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f5338:
    // 0x2f5338: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f5338u;
    // VWAITQ (Q already resolved in this runtime)
label_2f533c:
    // 0x2f533c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f533cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5340:
    // 0x2f5340: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2f5340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5344:
    // 0x2f5344: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2f5344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2f5348:
    // 0x2f5348: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x2f5348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f534c:
    // 0x2f534c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2f534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5350:
    // 0x2f5350: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f5350u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f5354:
    // 0x2f5354: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x2f5354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5358:
    // 0x2f5358: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f5358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f535c:
    // 0x2f535c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f535cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f5360:
    // 0x2f5360: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x2f5360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5364:
    // 0x2f5364: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2f5364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5368:
    // 0x2f5368: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2f5368u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f536c:
    // 0x2f536c: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x2f536cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_2f5370:
    // 0x2f5370: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2f5370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5374:
    // 0x2f5374: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2f5374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5378:
    // 0x2f5378: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f5378u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f537c:
    // 0x2f537c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2f537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5380:
    // 0x2f5380: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f5380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5384:
    // 0x2f5384: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f5384u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f5388:
    // 0x2f5388: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2f5388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f538c:
    // 0x2f538c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2f538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5390:
    // 0x2f5390: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2f5390u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f5394:
    // 0x2f5394: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x2f5394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_2f5398:
    // 0x2f5398: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f5398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f539c:
    // 0x2f539c: 0x0  nop
    ctx->pc = 0x2f539cu;
    // NOP
label_2f53a0:
    // 0x2f53a0: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_2f53a4:
    if (ctx->pc == 0x2F53A4u) {
        ctx->pc = 0x2F53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53A0u;
        // 0x2f53a4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53A8u;
        goto label_2f53a8;
    }
    ctx->pc = 0x2F53A0u;
    {
        const bool branch_taken_0x2f53a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f53a0) {
            ctx->pc = 0x2F53A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F53A0u;
            // 0x2f53a4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F53ECu;
            goto label_2f53ec;
        }
    }
    ctx->pc = 0x2F53A8u;
label_2f53a8:
    // 0x2f53a8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2f53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2f53ac:
    // 0x2f53ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2f53b0:
    if (ctx->pc == 0x2F53B0u) {
        ctx->pc = 0x2F53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53ACu;
        // 0x2f53b0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53B4u;
        goto label_2f53b4;
    }
    ctx->pc = 0x2F53ACu;
    {
        const bool branch_taken_0x2f53ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53ACu;
        // 0x2f53b0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53ac) {
            ctx->pc = 0x2F53CCu;
            goto label_2f53cc;
        }
    }
    ctx->pc = 0x2F53B4u;
label_2f53b4:
    // 0x2f53b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f53b8:
    // 0x2f53b8: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x2f53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_2f53bc:
    // 0x2f53bc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2f53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2f53c0:
    // 0x2f53c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f53c4:
    if (ctx->pc == 0x2F53C4u) {
        ctx->pc = 0x2F53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53C0u;
        // 0x2f53c4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53C8u;
        goto label_2f53c8;
    }
    ctx->pc = 0x2F53C0u;
    {
        const bool branch_taken_0x2f53c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53C0u;
        // 0x2f53c4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53c0) {
            ctx->pc = 0x2F53CCu;
            goto label_2f53cc;
        }
    }
    ctx->pc = 0x2F53C8u;
label_2f53c8:
    // 0x2f53c8: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2f53c8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f53cc:
    // 0x2f53cc: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_2f53d0:
    if (ctx->pc == 0x2F53D0u) {
        ctx->pc = 0x2F53D4u;
        goto label_2f53d4;
    }
    ctx->pc = 0x2F53CCu;
    {
        const bool branch_taken_0x2f53cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f53cc) {
            ctx->pc = 0x2F53ECu;
            goto label_2f53ec;
        }
    }
    ctx->pc = 0x2F53D4u;
label_2f53d4:
    // 0x2f53d4: 0xc6e01088  lwc1        $f0, 0x1088($s7)
    ctx->pc = 0x2f53d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f53d8:
    // 0x2f53d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f53d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f53dc:
    // 0x2f53dc: 0x0  nop
    ctx->pc = 0x2f53dcu;
    // NOP
label_2f53e0:
    // 0x2f53e0: 0x4500ff8b  bc1f        . + 4 + (-0x75 << 2)
label_2f53e4:
    if (ctx->pc == 0x2F53E4u) {
        ctx->pc = 0x2F53E8u;
        goto label_2f53e8;
    }
    ctx->pc = 0x2F53E0u;
    {
        const bool branch_taken_0x2f53e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f53e0) {
            ctx->pc = 0x2F5210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5210;
        }
    }
    ctx->pc = 0x2F53E8u;
label_2f53e8:
    // 0x2f53e8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2f53e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f53ec:
    // 0x2f53ec: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_2f53f0:
    if (ctx->pc == 0x2F53F0u) {
        ctx->pc = 0x2F53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53ECu;
        // 0x2f53f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53F4u;
        goto label_2f53f4;
    }
    ctx->pc = 0x2F53ECu;
    {
        const bool branch_taken_0x2f53ec = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53ECu;
        // 0x2f53f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53ec) {
            ctx->pc = 0x2F5404u;
            goto label_2f5404;
        }
    }
    ctx->pc = 0x2F53F4u;
label_2f53f4:
    // 0x2f53f4: 0xc0fb898  jal         func_3EE260
label_2f53f8:
    if (ctx->pc == 0x2F53F8u) {
        ctx->pc = 0x2F53F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53F4u;
        // 0x2f53f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F53FCu;
        goto label_2f53fc;
    }
    ctx->pc = 0x2F53F4u;
    SET_GPR_U32(ctx, 31, 0x2F53FCu);
    ctx->pc = 0x2F53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F53F4u;
    // 0x2f53f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE260u, 0x2F53F4u, 0x2F53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F53FCu;
label_2f53fc:
    // 0x2f53fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f5400:
    if (ctx->pc == 0x2F5400u) {
        ctx->pc = 0x2F5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53FCu;
        // 0x2f5400: 0x8fb10130  lw          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5404u;
        goto label_2f5404;
    }
    ctx->pc = 0x2F53FCu;
    {
        const bool branch_taken_0x2f53fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F53FCu;
        // 0x2f5400: 0x8fb10130  lw          $s1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f53fc) {
            ctx->pc = 0x2F5410u;
            goto label_2f5410;
        }
    }
    ctx->pc = 0x2F5404u;
label_2f5404:
    // 0x2f5404: 0xc0f6dac  jal         func_3DB6B0
label_2f5408:
    if (ctx->pc == 0x2F5408u) {
        ctx->pc = 0x2F5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5404u;
        // 0x2f5408: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F540Cu;
        goto label_2f540c;
    }
    ctx->pc = 0x2F5404u;
    SET_GPR_U32(ctx, 31, 0x2F540Cu);
    ctx->pc = 0x2F5408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5404u;
    // 0x2f5408: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB6B0u, 0x2F5404u, 0x2F540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F540Cu;
label_2f540c:
    // 0x2f540c: 0x8fb10130  lw          $s1, 0x130($sp)
    ctx->pc = 0x2f540cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_2f5410:
    // 0x2f5410: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x2f5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2f5414:
    // 0x2f5414: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2f5414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f5418:
    // 0x2f5418: 0x1440ff5d  bnez        $v0, . + 4 + (-0xA3 << 2)
label_2f541c:
    if (ctx->pc == 0x2F541Cu) {
        ctx->pc = 0x2F541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5418u;
        // 0x2f541c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5420u;
        goto label_2f5420;
    }
    ctx->pc = 0x2F5418u;
    {
        const bool branch_taken_0x2f5418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5418u;
        // 0x2f541c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5418) {
            ctx->pc = 0x2F5190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5190;
        }
    }
    ctx->pc = 0x2F5420u;
label_2f5420:
    // 0x2f5420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f5420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5424:
    // 0x2f5424: 0x0  nop
    ctx->pc = 0x2f5424u;
    // NOP
label_2f5428:
    // 0x2f5428: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2f5428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f542c:
    // 0x2f542c: 0x0  nop
    ctx->pc = 0x2f542cu;
    // NOP
label_2f5430:
    // 0x2f5430: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2f5434:
    if (ctx->pc == 0x2F5434u) {
        ctx->pc = 0x2F5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5430u;
        // 0x2f5434: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5438u;
        goto label_2f5438;
    }
    ctx->pc = 0x2F5430u;
    {
        const bool branch_taken_0x2f5430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5430u;
        // 0x2f5434: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5430) {
            ctx->pc = 0x2F5450u;
            goto label_2f5450;
        }
    }
    ctx->pc = 0x2F5438u;
label_2f5438:
    // 0x2f5438: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2f5438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f543c:
    // 0x2f543c: 0x106000ce  beqz        $v1, . + 4 + (0xCE << 2)
label_2f5440:
    if (ctx->pc == 0x2F5440u) {
        ctx->pc = 0x2F5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F543Cu;
        // 0x2f5440: 0x8fa2010c  lw          $v0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5444u;
        goto label_2f5444;
    }
    ctx->pc = 0x2F543Cu;
    {
        const bool branch_taken_0x2f543c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F543Cu;
        // 0x2f5440: 0x8fa2010c  lw          $v0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f543c) {
            ctx->pc = 0x2F5778u;
            goto label_2f5778;
        }
    }
    ctx->pc = 0x2F5444u;
label_2f5444:
    // 0x2f5444: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5448:
    // 0x2f5448: 0x100000ca  b           . + 4 + (0xCA << 2)
label_2f544c:
    if (ctx->pc == 0x2F544Cu) {
        ctx->pc = 0x2F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5448u;
        // 0x2f544c: 0xafa3010c  sw          $v1, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5450u;
        goto label_2f5450;
    }
    ctx->pc = 0x2F5448u;
    {
        const bool branch_taken_0x2f5448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5448u;
        // 0x2f544c: 0xafa3010c  sw          $v1, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5448) {
            ctx->pc = 0x2F5774u;
            goto label_2f5774;
        }
    }
    ctx->pc = 0x2F5450u;
label_2f5450:
    // 0x2f5450: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2f5450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f5454:
    // 0x2f5454: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2f5454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_2f5458:
    // 0x2f5458: 0xc0f6a96  jal         func_3DAA58
label_2f545c:
    if (ctx->pc == 0x2F545Cu) {
        ctx->pc = 0x2F545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5458u;
        // 0x2f545c: 0xc4571b70  lwc1        $f23, 0x1B70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5460u;
        goto label_2f5460;
    }
    ctx->pc = 0x2F5458u;
    SET_GPR_U32(ctx, 31, 0x2F5460u);
    ctx->pc = 0x2F545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5458u;
    // 0x2f545c: 0xc4571b70  lwc1        $f23, 0x1B70($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5458u, 0x2F5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5460u;
label_2f5460:
    // 0x2f5460: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f5460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f5464:
    // 0x2f5464: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2f5464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_2f5468:
    // 0x2f5468: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2f5468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2f546c:
    // 0x2f546c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f546cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f5470:
    // 0x2f5470: 0xc0f6a96  jal         func_3DAA58
label_2f5474:
    if (ctx->pc == 0x2F5474u) {
        ctx->pc = 0x2F5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5470u;
        // 0x2f5474: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5478u;
        goto label_2f5478;
    }
    ctx->pc = 0x2F5470u;
    SET_GPR_U32(ctx, 31, 0x2F5478u);
    ctx->pc = 0x2F5474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5470u;
    // 0x2f5474: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5470u, 0x2F5478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5478u;
label_2f5478:
    // 0x2f5478: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2f5478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2f547c:
    // 0x2f547c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2f547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2f5480:
    // 0x2f5480: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2f5480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_2f5484:
    // 0x2f5484: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2f5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2f5488:
    // 0x2f5488: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x2f5488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_2f548c:
    // 0x2f548c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f5490:
    // 0x2f5490: 0xc0f6a96  jal         func_3DAA58
label_2f5494:
    if (ctx->pc == 0x2F5494u) {
        ctx->pc = 0x2F5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5490u;
        // 0x2f5494: 0xafa20128  sw          $v0, 0x128($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5498u;
        goto label_2f5498;
    }
    ctx->pc = 0x2F5490u;
    SET_GPR_U32(ctx, 31, 0x2F5498u);
    ctx->pc = 0x2F5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5490u;
    // 0x2f5494: 0xafa20128  sw          $v0, 0x128($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F5490u, 0x2F5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5498u;
label_2f5498:
    // 0x2f5498: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2f5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2f549c:
    // 0x2f549c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2f549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f54a0:
    // 0x2f54a0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2f54a4:
    // 0x2f54a4: 0xc0f6a96  jal         func_3DAA58
label_2f54a8:
    if (ctx->pc == 0x2F54A8u) {
        ctx->pc = 0x2F54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54A4u;
        // 0x2f54a8: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54ACu;
        goto label_2f54ac;
    }
    ctx->pc = 0x2F54A4u;
    SET_GPR_U32(ctx, 31, 0x2F54ACu);
    ctx->pc = 0x2F54A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F54A4u;
    // 0x2f54a8: 0xafa3012c  sw          $v1, 0x12C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F54A4u, 0x2F54ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F54ACu;
label_2f54ac:
    // 0x2f54ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2f54acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2f54b0:
    // 0x2f54b0: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x2f54b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f54b4:
    // 0x2f54b4: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x2f54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
label_2f54b8:
    // 0x2f54b8: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x2f54b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f54bc:
    // 0x2f54bc: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x2f54bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f54c0:
    // 0x2f54c0: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2f54c4:
    if (ctx->pc == 0x2F54C4u) {
        ctx->pc = 0x2F54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C0u;
        // 0x2f54c4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54C8u;
        goto label_2f54c8;
    }
    ctx->pc = 0x2F54C0u;
    {
        const bool branch_taken_0x2f54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C0u;
        // 0x2f54c4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54c0) {
            ctx->pc = 0x2F5744u;
            goto label_2f5744;
        }
    }
    ctx->pc = 0x2F54C8u;
label_2f54c8:
    // 0x2f54c8: 0x52e2009b  beql        $s7, $v0, . + 4 + (0x9B << 2)
label_2f54cc:
    if (ctx->pc == 0x2F54CCu) {
        ctx->pc = 0x2F54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54C8u;
        // 0x2f54cc: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54D0u;
        goto label_2f54d0;
    }
    ctx->pc = 0x2F54C8u;
    {
        const bool branch_taken_0x2f54c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f54c8) {
            ctx->pc = 0x2F54CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F54C8u;
            // 0x2f54cc: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5738u;
            goto label_2f5738;
        }
    }
    ctx->pc = 0x2F54D0u;
label_2f54d0:
    // 0x2f54d0: 0x8ec211c0  lw          $v0, 0x11C0($s6)
    ctx->pc = 0x2f54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4544)));
label_2f54d4:
    // 0x2f54d4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2f54d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2f54d8:
    // 0x2f54d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f54dc:
    if (ctx->pc == 0x2F54DCu) {
        ctx->pc = 0x2F54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54D8u;
        // 0x2f54dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54E0u;
        goto label_2f54e0;
    }
    ctx->pc = 0x2F54D8u;
    {
        const bool branch_taken_0x2f54d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54D8u;
        // 0x2f54dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54d8) {
            ctx->pc = 0x2F5508u;
            goto label_2f5508;
        }
    }
    ctx->pc = 0x2F54E0u;
label_2f54e0:
    // 0x2f54e0: 0x8ee300c0  lw          $v1, 0xC0($s7)
    ctx->pc = 0x2f54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 192)));
label_2f54e4:
    // 0x2f54e4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f54e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2f54e8:
    // 0x2f54e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f54ec:
    if (ctx->pc == 0x2F54ECu) {
        ctx->pc = 0x2F54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54E8u;
        // 0x2f54ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F54F0u;
        goto label_2f54f0;
    }
    ctx->pc = 0x2F54E8u;
    {
        const bool branch_taken_0x2f54e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F54E8u;
        // 0x2f54ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54e8) {
            ctx->pc = 0x2F54FCu;
            goto label_2f54fc;
        }
    }
    ctx->pc = 0x2F54F0u;
label_2f54f0:
    // 0x2f54f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f54f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f54f4:
    // 0x2f54f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f54f8:
    if (ctx->pc == 0x2F54F8u) {
        ctx->pc = 0x2F54FCu;
        goto label_2f54fc;
    }
    ctx->pc = 0x2F54F4u;
    {
        const bool branch_taken_0x2f54f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f54f4) {
            ctx->pc = 0x2F5500u;
            goto label_2f5500;
        }
    }
    ctx->pc = 0x2F54FCu;
label_2f54fc:
    // 0x2f54fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f54fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5500:
    // 0x2f5500: 0x1080008c  beqz        $a0, . + 4 + (0x8C << 2)
label_2f5504:
    if (ctx->pc == 0x2F5504u) {
        ctx->pc = 0x2F5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5500u;
        // 0x2f5504: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5508u;
        goto label_2f5508;
    }
    ctx->pc = 0x2F5500u;
    {
        const bool branch_taken_0x2f5500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5500u;
        // 0x2f5504: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5500) {
            ctx->pc = 0x2F5734u;
            goto label_2f5734;
        }
    }
    ctx->pc = 0x2F5508u;
label_2f5508:
    // 0x2f5508: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2f5508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f550c:
    // 0x2f550c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2f550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2f5510:
    // 0x2f5510: 0xc0bcd58  jal         func_2F3560
label_2f5514:
    if (ctx->pc == 0x2F5514u) {
        ctx->pc = 0x2F5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5510u;
        // 0x2f5514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5518u;
        goto label_2f5518;
    }
    ctx->pc = 0x2F5510u;
    SET_GPR_U32(ctx, 31, 0x2F5518u);
    ctx->pc = 0x2F5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5510u;
    // 0x2f5514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x2F5510u, 0x2F5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5518u;
label_2f5518:
    // 0x2f5518: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x2f5518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2f551c:
    // 0x2f551c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f551cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f5520:
    // 0x2f5520: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2f5520u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5524:
    // 0x2f5524: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f5524u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5528:
    // 0x2f5528: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2f5528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f552c:
    // 0x2f552c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2f552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f5530:
    // 0x2f5530: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2f5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f5534:
    // 0x2f5534: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x2f5534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5538:
    // 0x2f5538: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x2f5538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f553c:
    // 0x2f553c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2f553cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2f5540:
    // 0x2f5540: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2f5540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2f5544:
    // 0x2f5544: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2f5544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2f5548:
    // 0x2f5548: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x2f5548u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_2f554c:
    // 0x2f554c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2f554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2f5550:
    // 0x2f5550: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f5550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5554:
    // 0x2f5554: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2f5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5558:
    // 0x2f5558: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2f5558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f555c:
    // 0x2f555c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f555cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5560:
    // 0x2f5560: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f5560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5564:
    // 0x2f5564: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f5564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5568:
    // 0x2f5568: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f5568u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f556c:
    // 0x2f556c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f556cu;
    // VWAITQ (Q already resolved in this runtime)
label_2f5570:
    // 0x2f5570: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f5570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f5574:
    // 0x2f5574: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2f5574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5578:
    // 0x2f5578: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2f5578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2f557c:
    // 0x2f557c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f557cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5580:
    // 0x2f5580: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x2f5580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_2f5584:
    // 0x2f5584: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2f5584u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f5588:
    // 0x2f5588: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2f5588u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f558c:
    // 0x2f558c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2f558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f5590:
    // 0x2f5590: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f5590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f5594:
    // 0x2f5594: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f5594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f5598:
    // 0x2f5598: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f5598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f559c:
    // 0x2f559c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f559cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f55a0:
    // 0x2f55a0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f55a0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f55a4:
    // 0x2f55a4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f55a4u;
    // VWAITQ (Q already resolved in this runtime)
label_2f55a8:
    // 0x2f55a8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f55a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f55ac:
    // 0x2f55ac: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2f55acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f55b0:
    // 0x2f55b0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2f55b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2f55b4:
    // 0x2f55b4: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2f55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f55b8:
    // 0x2f55b8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2f55b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f55bc:
    // 0x2f55bc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f55bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f55c0:
    // 0x2f55c0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2f55c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f55c4:
    // 0x2f55c4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2f55c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f55c8:
    // 0x2f55c8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f55c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f55cc:
    // 0x2f55cc: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2f55ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f55d0:
    // 0x2f55d0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2f55d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f55d4:
    // 0x2f55d4: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2f55d4u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f55d8:
    // 0x2f55d8: 0x46186834  c.lt.s      $f13, $f24
    ctx->pc = 0x2f55d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f55dc:
    // 0x2f55dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f55dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f55e0:
    // 0x2f55e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f55e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f55e4:
    // 0x2f55e4: 0x24720020  addiu       $s2, $v1, 0x20
    ctx->pc = 0x2f55e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2f55e8:
    // 0x2f55e8: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2f55e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f55ec:
    // 0x2f55ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2f55f0:
    if (ctx->pc == 0x2F55F0u) {
        ctx->pc = 0x2F55F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55ECu;
        // 0x2f55f0: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F55F4u;
        goto label_2f55f4;
    }
    ctx->pc = 0x2F55ECu;
    {
        const bool branch_taken_0x2f55ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F55F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55ECu;
        // 0x2f55f0: 0x27b000d0  addiu       $s0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55ec) {
            ctx->pc = 0x2F5604u;
            goto label_2f5604;
        }
    }
    ctx->pc = 0x2F55F4u;
label_2f55f4:
    // 0x2f55f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f55f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2f55f8:
    // 0x2f55f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2f55f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f55fc:
    // 0x2f55fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f5600:
    if (ctx->pc == 0x2F5600u) {
        ctx->pc = 0x2F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55FCu;
        // 0x2f5600: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5604u;
        goto label_2f5604;
    }
    ctx->pc = 0x2F55FCu;
    {
        const bool branch_taken_0x2f55fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55FCu;
        // 0x2f5600: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55fc) {
            ctx->pc = 0x2F5618u;
            goto label_2f5618;
        }
    }
    ctx->pc = 0x2F5604u;
label_2f5604:
    // 0x2f5604: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2f5604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5608:
    // 0x2f5608: 0x0  nop
    ctx->pc = 0x2f5608u;
    // NOP
label_2f560c:
    // 0x2f560c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f5610:
    if (ctx->pc == 0x2F5610u) {
        ctx->pc = 0x2F5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F560Cu;
        // 0x2f5610: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5614u;
        goto label_2f5614;
    }
    ctx->pc = 0x2F560Cu;
    {
        const bool branch_taken_0x2f560c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f560c) {
            ctx->pc = 0x2F5610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F560Cu;
            // 0x2f5610: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5614u;
            goto label_2f5614;
        }
    }
    ctx->pc = 0x2F5614u;
label_2f5614:
    // 0x2f5614: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x2f5614u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_2f5618:
    // 0x2f5618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f561c:
    // 0x2f561c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f561cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f5620:
    // 0x2f5620: 0x0  nop
    ctx->pc = 0x2f5620u;
    // NOP
label_2f5624:
    // 0x2f5624: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2f5624u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_2f5628:
    // 0x2f5628: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f5628u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_2f562c:
    // 0x2f562c: 0xc0e404c  jal         func_390130
label_2f5630:
    if (ctx->pc == 0x2F5630u) {
        ctx->pc = 0x2F5634u;
        goto label_2f5634;
    }
    ctx->pc = 0x2F562Cu;
    SET_GPR_U32(ctx, 31, 0x2F5634u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F562Cu, 0x2F5634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5634u;
label_2f5634:
    // 0x2f5634: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f5634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_2f5638:
    // 0x2f5638: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f5638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_2f563c:
    // 0x2f563c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f563cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5640:
    // 0x2f5640: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x2f5640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_2f5644:
    // 0x2f5644: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2f5644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2f5648:
    // 0x2f5648: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2f5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f564c:
    // 0x2f564c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2f564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5650:
    // 0x2f5650: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f5650u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f5654:
    // 0x2f5654: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2f5654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5658:
    // 0x2f5658: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f5658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f565c:
    // 0x2f565c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f565cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f5660:
    // 0x2f5660: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2f5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f5664:
    // 0x2f5664: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2f5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f5668:
    // 0x2f5668: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x2f5668u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f566c:
    // 0x2f566c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f566cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5670:
    // 0x2f5670: 0x0  nop
    ctx->pc = 0x2f5670u;
    // NOP
label_2f5674:
    // 0x2f5674: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2f5674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5678:
    // 0x2f5678: 0x0  nop
    ctx->pc = 0x2f5678u;
    // NOP
label_2f567c:
    // 0x2f567c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f5680:
    if (ctx->pc == 0x2F5680u) {
        ctx->pc = 0x2F5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F567Cu;
        // 0x2f5680: 0x4601a841  sub.s       $f1, $f21, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5684u;
        goto label_2f5684;
    }
    ctx->pc = 0x2F567Cu;
    {
        const bool branch_taken_0x2f567c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f567c) {
            ctx->pc = 0x2F5680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F567Cu;
            // 0x2f5680: 0x4601a841  sub.s       $f1, $f21, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5684u;
            goto label_2f5684;
        }
    }
    ctx->pc = 0x2F5684u;
label_2f5684:
    // 0x2f5684: 0x46160801  sub.s       $f0, $f1, $f22
    ctx->pc = 0x2f5684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_2f5688:
    // 0x2f5688: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2f5688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2f568c:
    // 0x2f568c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f568cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f5690:
    // 0x2f5690: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f5690u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2f5694:
    // 0x2f5694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f5694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5698:
    // 0x2f5698: 0x0  nop
    ctx->pc = 0x2f5698u;
    // NOP
label_2f569c:
    // 0x2f569c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f56a0:
    if (ctx->pc == 0x2F56A0u) {
        ctx->pc = 0x2F56A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F569Cu;
        // 0x2f56a0: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56A4u;
        goto label_2f56a4;
    }
    ctx->pc = 0x2F569Cu;
    {
        const bool branch_taken_0x2f569c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f569c) {
            ctx->pc = 0x2F56A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F569Cu;
            // 0x2f56a0: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F56A4u;
            goto label_2f56a4;
        }
    }
    ctx->pc = 0x2F56A4u;
label_2f56a4:
    // 0x2f56a4: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x2f56a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f56a8:
    // 0x2f56a8: 0x0  nop
    ctx->pc = 0x2f56a8u;
    // NOP
label_2f56ac:
    // 0x2f56ac: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
label_2f56b0:
    if (ctx->pc == 0x2F56B0u) {
        ctx->pc = 0x2F56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56ACu;
        // 0x2f56b0: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56B4u;
        goto label_2f56b4;
    }
    ctx->pc = 0x2F56ACu;
    {
        const bool branch_taken_0x2f56ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f56ac) {
            ctx->pc = 0x2F56B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F56ACu;
            // 0x2f56b0: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5738u;
            goto label_2f5738;
        }
    }
    ctx->pc = 0x2F56B4u;
label_2f56b4:
    // 0x2f56b4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2f56b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f56b8:
    // 0x2f56b8: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x2f56b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f56bc:
    // 0x2f56bc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f56bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f56c0:
    // 0x2f56c0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x2f56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f56c4:
    // 0x2f56c4: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x2f56c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f56c8:
    // 0x2f56c8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f56c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f56cc:
    // 0x2f56cc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2f56ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f56d0:
    // 0x2f56d0: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2f56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f56d4:
    // 0x2f56d4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2f56d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f56d8:
    // 0x2f56d8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2f56d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2f56dc:
    // 0x2f56dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f56dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2f56e0:
    // 0x2f56e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f56e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f56e4:
    // 0x2f56e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f56e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f56e8:
    // 0x2f56e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f56e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f56ec:
    // 0x2f56ec: 0x8ec21220  lw          $v0, 0x1220($s6)
    ctx->pc = 0x2f56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4640)));
label_2f56f0:
    // 0x2f56f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f56f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f56f4:
    // 0x2f56f4: 0x16e20009  bne         $s7, $v0, . + 4 + (0x9 << 2)
label_2f56f8:
    if (ctx->pc == 0x2F56F8u) {
        ctx->pc = 0x2F56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56F4u;
        // 0x2f56f8: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F56FCu;
        goto label_2f56fc;
    }
    ctx->pc = 0x2F56F4u;
    {
        const bool branch_taken_0x2f56f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56F4u;
        // 0x2f56f8: 0x46020302  mul.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56f4) {
            ctx->pc = 0x2F571Cu;
            goto label_2f571c;
        }
    }
    ctx->pc = 0x2F56FCu;
label_2f56fc:
    // 0x2f56fc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2f56fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_2f5700:
    // 0x2f5700: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2f5700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_2f5704:
    // 0x2f5704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f5708:
    // 0x2f5708: 0x0  nop
    ctx->pc = 0x2f5708u;
    // NOP
label_2f570c:
    // 0x2f570c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2f570cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5710:
    // 0x2f5710: 0x0  nop
    ctx->pc = 0x2f5710u;
    // NOP
label_2f5714:
    // 0x2f5714: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_2f5718:
    if (ctx->pc == 0x2F5718u) {
        ctx->pc = 0x2F5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5714u;
        // 0x2f5718: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F571Cu;
        goto label_2f571c;
    }
    ctx->pc = 0x2F5714u;
    {
        const bool branch_taken_0x2f5714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5714) {
            ctx->pc = 0x2F5718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5714u;
            // 0x2f5718: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5738u;
            goto label_2f5738;
        }
    }
    ctx->pc = 0x2F571Cu;
label_2f571c:
    // 0x2f571c: 0x46176034  c.lt.s      $f12, $f23
    ctx->pc = 0x2f571cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f5720:
    // 0x2f5720: 0x0  nop
    ctx->pc = 0x2f5720u;
    // NOP
label_2f5724:
    // 0x2f5724: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2f5728:
    if (ctx->pc == 0x2F5728u) {
        ctx->pc = 0x2F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5724u;
        // 0x2f5728: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F572Cu;
        goto label_2f572c;
    }
    ctx->pc = 0x2F5724u;
    {
        const bool branch_taken_0x2f5724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5724u;
        // 0x2f5728: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5724) {
            ctx->pc = 0x2F5738u;
            goto label_2f5738;
        }
    }
    ctx->pc = 0x2F572Cu;
label_2f572c:
    // 0x2f572c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2f572cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_2f5730:
    // 0x2f5730: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x2f5730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_2f5734:
    // 0x2f5734: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2f5734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2f5738:
    // 0x2f5738: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f573c:
    if (ctx->pc == 0x2F573Cu) {
        ctx->pc = 0x2F573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5738u;
        // 0x2f573c: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5740u;
        goto label_2f5740;
    }
    ctx->pc = 0x2F5738u;
    {
        const bool branch_taken_0x2f5738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5738) {
            ctx->pc = 0x2F573Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5738u;
            // 0x2f573c: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F574Cu;
            goto label_2f574c;
        }
    }
    ctx->pc = 0x2F5740u;
label_2f5740:
    // 0x2f5740: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f5740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f5744:
    // 0x2f5744: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x2f5744u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_2f5748:
    // 0x2f5748: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2f5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2f574c:
    // 0x2f574c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f5750:
    if (ctx->pc == 0x2F5750u) {
        ctx->pc = 0x2F5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F574Cu;
        // 0x2f5750: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5754u;
        goto label_2f5754;
    }
    ctx->pc = 0x2F574Cu;
    {
        const bool branch_taken_0x2f574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F574Cu;
        // 0x2f5750: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f574c) {
            ctx->pc = 0x2F5758u;
            goto label_2f5758;
        }
    }
    ctx->pc = 0x2F5754u;
label_2f5754:
    // 0x2f5754: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2f5754u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5758:
    // 0x2f5758: 0x16e0ff5b  bnez        $s7, . + 4 + (-0xA5 << 2)
label_2f575c:
    if (ctx->pc == 0x2F575Cu) {
        ctx->pc = 0x2F575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5758u;
        // 0x2f575c: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5760u;
        goto label_2f5760;
    }
    ctx->pc = 0x2F5758u;
    {
        const bool branch_taken_0x2f5758 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5758u;
        // 0x2f575c: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5758) {
            ctx->pc = 0x2F54C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f54c8;
        }
    }
    ctx->pc = 0x2F5760u;
label_2f5760:
    // 0x2f5760: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2f5760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2f5764:
    // 0x2f5764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2f5768:
    if (ctx->pc == 0x2F5768u) {
        ctx->pc = 0x2F5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5764u;
        // 0x2f5768: 0x8fa2010c  lw          $v0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F576Cu;
        goto label_2f576c;
    }
    ctx->pc = 0x2F5764u;
    {
        const bool branch_taken_0x2f5764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5764u;
        // 0x2f5768: 0x8fa2010c  lw          $v0, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5764) {
            ctx->pc = 0x2F5778u;
            goto label_2f5778;
        }
    }
    ctx->pc = 0x2F576Cu;
label_2f576c:
    // 0x2f576c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f5770:
    // 0x2f5770: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x2f5770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
label_2f5774:
    // 0x2f5774: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2f5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2f5778:
    // 0x2f5778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f577c:
    if (ctx->pc == 0x2F577Cu) {
        ctx->pc = 0x2F577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5778u;
        // 0x2f577c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5780u;
        goto label_2f5780;
    }
    ctx->pc = 0x2F5778u;
    {
        const bool branch_taken_0x2f5778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5778u;
        // 0x2f577c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5778) {
            ctx->pc = 0x2F578Cu;
            goto label_2f578c;
        }
    }
    ctx->pc = 0x2F5780u;
label_2f5780:
    // 0x2f5780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f5780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5784:
    // 0x2f5784: 0xc0bd5f6  jal         func_2F57D8
label_2f5788:
    if (ctx->pc == 0x2F5788u) {
        ctx->pc = 0x2F5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5784u;
        // 0x2f5788: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F578Cu;
        goto label_2f578c;
    }
    ctx->pc = 0x2F5784u;
    SET_GPR_U32(ctx, 31, 0x2F578Cu);
    ctx->pc = 0x2F5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5784u;
    // 0x2f5788: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57D8u, 0x2F5784u, 0x2F578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F578Cu;
label_2f578c:
    // 0x2f578c: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x2f578cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2f5790:
    // 0x2f5790: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x2f5790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_2f5794:
    // 0x2f5794: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x2f5794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2f5798:
    // 0x2f5798: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x2f5798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_2f579c:
    // 0x2f579c: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x2f579cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2f57a0:
    // 0x2f57a0: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x2f57a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_2f57a4:
    // 0x2f57a4: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x2f57a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2f57a8:
    // 0x2f57a8: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x2f57a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_2f57ac:
    // 0x2f57ac: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x2f57acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2f57b0:
    // 0x2f57b0: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x2f57b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_2f57b4:
    // 0x2f57b4: 0xc7ba01c0  lwc1        $f26, 0x1C0($sp)
    ctx->pc = 0x2f57b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2f57b8:
    // 0x2f57b8: 0xc7b901b8  lwc1        $f25, 0x1B8($sp)
    ctx->pc = 0x2f57b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2f57bc:
    // 0x2f57bc: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2f57bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2f57c0:
    // 0x2f57c0: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2f57c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2f57c4:
    // 0x2f57c4: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2f57c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f57c8:
    // 0x2f57c8: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2f57c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f57cc:
    // 0x2f57cc: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2f57ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f57d0:
    // 0x2f57d0: 0x3e00008  jr          $ra
label_2f57d4:
    if (ctx->pc == 0x2F57D4u) {
        ctx->pc = 0x2F57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57D0u;
        // 0x2f57d4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F57D8u;
        goto label_fallthrough_0x2f57d0;
    }
    ctx->pc = 0x2F57D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F57D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57D0u;
        // 0x2f57d4: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F57D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f57d0:
    ctx->pc = 0x2F57D8u;
}
