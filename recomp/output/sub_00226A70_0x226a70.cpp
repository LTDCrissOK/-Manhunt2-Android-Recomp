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

// Function: sub_00226A70
// Address: 0x226a70 - 0x227700
void sub_00226A70_0x226a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226A70_0x226a70");
#endif

    switch (ctx->pc) {
        case 0x226a70u: goto label_226a70;
        case 0x226a74u: goto label_226a74;
        case 0x226a78u: goto label_226a78;
        case 0x226a7cu: goto label_226a7c;
        case 0x226a80u: goto label_226a80;
        case 0x226a84u: goto label_226a84;
        case 0x226a88u: goto label_226a88;
        case 0x226a8cu: goto label_226a8c;
        case 0x226a90u: goto label_226a90;
        case 0x226a94u: goto label_226a94;
        case 0x226a98u: goto label_226a98;
        case 0x226a9cu: goto label_226a9c;
        case 0x226aa0u: goto label_226aa0;
        case 0x226aa4u: goto label_226aa4;
        case 0x226aa8u: goto label_226aa8;
        case 0x226aacu: goto label_226aac;
        case 0x226ab0u: goto label_226ab0;
        case 0x226ab4u: goto label_226ab4;
        case 0x226ab8u: goto label_226ab8;
        case 0x226abcu: goto label_226abc;
        case 0x226ac0u: goto label_226ac0;
        case 0x226ac4u: goto label_226ac4;
        case 0x226ac8u: goto label_226ac8;
        case 0x226accu: goto label_226acc;
        case 0x226ad0u: goto label_226ad0;
        case 0x226ad4u: goto label_226ad4;
        case 0x226ad8u: goto label_226ad8;
        case 0x226adcu: goto label_226adc;
        case 0x226ae0u: goto label_226ae0;
        case 0x226ae4u: goto label_226ae4;
        case 0x226ae8u: goto label_226ae8;
        case 0x226aecu: goto label_226aec;
        case 0x226af0u: goto label_226af0;
        case 0x226af4u: goto label_226af4;
        case 0x226af8u: goto label_226af8;
        case 0x226afcu: goto label_226afc;
        case 0x226b00u: goto label_226b00;
        case 0x226b04u: goto label_226b04;
        case 0x226b08u: goto label_226b08;
        case 0x226b0cu: goto label_226b0c;
        case 0x226b10u: goto label_226b10;
        case 0x226b14u: goto label_226b14;
        case 0x226b18u: goto label_226b18;
        case 0x226b1cu: goto label_226b1c;
        case 0x226b20u: goto label_226b20;
        case 0x226b24u: goto label_226b24;
        case 0x226b28u: goto label_226b28;
        case 0x226b2cu: goto label_226b2c;
        case 0x226b30u: goto label_226b30;
        case 0x226b34u: goto label_226b34;
        case 0x226b38u: goto label_226b38;
        case 0x226b3cu: goto label_226b3c;
        case 0x226b40u: goto label_226b40;
        case 0x226b44u: goto label_226b44;
        case 0x226b48u: goto label_226b48;
        case 0x226b4cu: goto label_226b4c;
        case 0x226b50u: goto label_226b50;
        case 0x226b54u: goto label_226b54;
        case 0x226b58u: goto label_226b58;
        case 0x226b5cu: goto label_226b5c;
        case 0x226b60u: goto label_226b60;
        case 0x226b64u: goto label_226b64;
        case 0x226b68u: goto label_226b68;
        case 0x226b6cu: goto label_226b6c;
        case 0x226b70u: goto label_226b70;
        case 0x226b74u: goto label_226b74;
        case 0x226b78u: goto label_226b78;
        case 0x226b7cu: goto label_226b7c;
        case 0x226b80u: goto label_226b80;
        case 0x226b84u: goto label_226b84;
        case 0x226b88u: goto label_226b88;
        case 0x226b8cu: goto label_226b8c;
        case 0x226b90u: goto label_226b90;
        case 0x226b94u: goto label_226b94;
        case 0x226b98u: goto label_226b98;
        case 0x226b9cu: goto label_226b9c;
        case 0x226ba0u: goto label_226ba0;
        case 0x226ba4u: goto label_226ba4;
        case 0x226ba8u: goto label_226ba8;
        case 0x226bacu: goto label_226bac;
        case 0x226bb0u: goto label_226bb0;
        case 0x226bb4u: goto label_226bb4;
        case 0x226bb8u: goto label_226bb8;
        case 0x226bbcu: goto label_226bbc;
        case 0x226bc0u: goto label_226bc0;
        case 0x226bc4u: goto label_226bc4;
        case 0x226bc8u: goto label_226bc8;
        case 0x226bccu: goto label_226bcc;
        case 0x226bd0u: goto label_226bd0;
        case 0x226bd4u: goto label_226bd4;
        case 0x226bd8u: goto label_226bd8;
        case 0x226bdcu: goto label_226bdc;
        case 0x226be0u: goto label_226be0;
        case 0x226be4u: goto label_226be4;
        case 0x226be8u: goto label_226be8;
        case 0x226becu: goto label_226bec;
        case 0x226bf0u: goto label_226bf0;
        case 0x226bf4u: goto label_226bf4;
        case 0x226bf8u: goto label_226bf8;
        case 0x226bfcu: goto label_226bfc;
        case 0x226c00u: goto label_226c00;
        case 0x226c04u: goto label_226c04;
        case 0x226c08u: goto label_226c08;
        case 0x226c0cu: goto label_226c0c;
        case 0x226c10u: goto label_226c10;
        case 0x226c14u: goto label_226c14;
        case 0x226c18u: goto label_226c18;
        case 0x226c1cu: goto label_226c1c;
        case 0x226c20u: goto label_226c20;
        case 0x226c24u: goto label_226c24;
        case 0x226c28u: goto label_226c28;
        case 0x226c2cu: goto label_226c2c;
        case 0x226c30u: goto label_226c30;
        case 0x226c34u: goto label_226c34;
        case 0x226c38u: goto label_226c38;
        case 0x226c3cu: goto label_226c3c;
        case 0x226c40u: goto label_226c40;
        case 0x226c44u: goto label_226c44;
        case 0x226c48u: goto label_226c48;
        case 0x226c4cu: goto label_226c4c;
        case 0x226c50u: goto label_226c50;
        case 0x226c54u: goto label_226c54;
        case 0x226c58u: goto label_226c58;
        case 0x226c5cu: goto label_226c5c;
        case 0x226c60u: goto label_226c60;
        case 0x226c64u: goto label_226c64;
        case 0x226c68u: goto label_226c68;
        case 0x226c6cu: goto label_226c6c;
        case 0x226c70u: goto label_226c70;
        case 0x226c74u: goto label_226c74;
        case 0x226c78u: goto label_226c78;
        case 0x226c7cu: goto label_226c7c;
        case 0x226c80u: goto label_226c80;
        case 0x226c84u: goto label_226c84;
        case 0x226c88u: goto label_226c88;
        case 0x226c8cu: goto label_226c8c;
        case 0x226c90u: goto label_226c90;
        case 0x226c94u: goto label_226c94;
        case 0x226c98u: goto label_226c98;
        case 0x226c9cu: goto label_226c9c;
        case 0x226ca0u: goto label_226ca0;
        case 0x226ca4u: goto label_226ca4;
        case 0x226ca8u: goto label_226ca8;
        case 0x226cacu: goto label_226cac;
        case 0x226cb0u: goto label_226cb0;
        case 0x226cb4u: goto label_226cb4;
        case 0x226cb8u: goto label_226cb8;
        case 0x226cbcu: goto label_226cbc;
        case 0x226cc0u: goto label_226cc0;
        case 0x226cc4u: goto label_226cc4;
        case 0x226cc8u: goto label_226cc8;
        case 0x226cccu: goto label_226ccc;
        case 0x226cd0u: goto label_226cd0;
        case 0x226cd4u: goto label_226cd4;
        case 0x226cd8u: goto label_226cd8;
        case 0x226cdcu: goto label_226cdc;
        case 0x226ce0u: goto label_226ce0;
        case 0x226ce4u: goto label_226ce4;
        case 0x226ce8u: goto label_226ce8;
        case 0x226cecu: goto label_226cec;
        case 0x226cf0u: goto label_226cf0;
        case 0x226cf4u: goto label_226cf4;
        case 0x226cf8u: goto label_226cf8;
        case 0x226cfcu: goto label_226cfc;
        case 0x226d00u: goto label_226d00;
        case 0x226d04u: goto label_226d04;
        case 0x226d08u: goto label_226d08;
        case 0x226d0cu: goto label_226d0c;
        case 0x226d10u: goto label_226d10;
        case 0x226d14u: goto label_226d14;
        case 0x226d18u: goto label_226d18;
        case 0x226d1cu: goto label_226d1c;
        case 0x226d20u: goto label_226d20;
        case 0x226d24u: goto label_226d24;
        case 0x226d28u: goto label_226d28;
        case 0x226d2cu: goto label_226d2c;
        case 0x226d30u: goto label_226d30;
        case 0x226d34u: goto label_226d34;
        case 0x226d38u: goto label_226d38;
        case 0x226d3cu: goto label_226d3c;
        case 0x226d40u: goto label_226d40;
        case 0x226d44u: goto label_226d44;
        case 0x226d48u: goto label_226d48;
        case 0x226d4cu: goto label_226d4c;
        case 0x226d50u: goto label_226d50;
        case 0x226d54u: goto label_226d54;
        case 0x226d58u: goto label_226d58;
        case 0x226d5cu: goto label_226d5c;
        case 0x226d60u: goto label_226d60;
        case 0x226d64u: goto label_226d64;
        case 0x226d68u: goto label_226d68;
        case 0x226d6cu: goto label_226d6c;
        case 0x226d70u: goto label_226d70;
        case 0x226d74u: goto label_226d74;
        case 0x226d78u: goto label_226d78;
        case 0x226d7cu: goto label_226d7c;
        case 0x226d80u: goto label_226d80;
        case 0x226d84u: goto label_226d84;
        case 0x226d88u: goto label_226d88;
        case 0x226d8cu: goto label_226d8c;
        case 0x226d90u: goto label_226d90;
        case 0x226d94u: goto label_226d94;
        case 0x226d98u: goto label_226d98;
        case 0x226d9cu: goto label_226d9c;
        case 0x226da0u: goto label_226da0;
        case 0x226da4u: goto label_226da4;
        case 0x226da8u: goto label_226da8;
        case 0x226dacu: goto label_226dac;
        case 0x226db0u: goto label_226db0;
        case 0x226db4u: goto label_226db4;
        case 0x226db8u: goto label_226db8;
        case 0x226dbcu: goto label_226dbc;
        case 0x226dc0u: goto label_226dc0;
        case 0x226dc4u: goto label_226dc4;
        case 0x226dc8u: goto label_226dc8;
        case 0x226dccu: goto label_226dcc;
        case 0x226dd0u: goto label_226dd0;
        case 0x226dd4u: goto label_226dd4;
        case 0x226dd8u: goto label_226dd8;
        case 0x226ddcu: goto label_226ddc;
        case 0x226de0u: goto label_226de0;
        case 0x226de4u: goto label_226de4;
        case 0x226de8u: goto label_226de8;
        case 0x226decu: goto label_226dec;
        case 0x226df0u: goto label_226df0;
        case 0x226df4u: goto label_226df4;
        case 0x226df8u: goto label_226df8;
        case 0x226dfcu: goto label_226dfc;
        case 0x226e00u: goto label_226e00;
        case 0x226e04u: goto label_226e04;
        case 0x226e08u: goto label_226e08;
        case 0x226e0cu: goto label_226e0c;
        case 0x226e10u: goto label_226e10;
        case 0x226e14u: goto label_226e14;
        case 0x226e18u: goto label_226e18;
        case 0x226e1cu: goto label_226e1c;
        case 0x226e20u: goto label_226e20;
        case 0x226e24u: goto label_226e24;
        case 0x226e28u: goto label_226e28;
        case 0x226e2cu: goto label_226e2c;
        case 0x226e30u: goto label_226e30;
        case 0x226e34u: goto label_226e34;
        case 0x226e38u: goto label_226e38;
        case 0x226e3cu: goto label_226e3c;
        case 0x226e40u: goto label_226e40;
        case 0x226e44u: goto label_226e44;
        case 0x226e48u: goto label_226e48;
        case 0x226e4cu: goto label_226e4c;
        case 0x226e50u: goto label_226e50;
        case 0x226e54u: goto label_226e54;
        case 0x226e58u: goto label_226e58;
        case 0x226e5cu: goto label_226e5c;
        case 0x226e60u: goto label_226e60;
        case 0x226e64u: goto label_226e64;
        case 0x226e68u: goto label_226e68;
        case 0x226e6cu: goto label_226e6c;
        case 0x226e70u: goto label_226e70;
        case 0x226e74u: goto label_226e74;
        case 0x226e78u: goto label_226e78;
        case 0x226e7cu: goto label_226e7c;
        case 0x226e80u: goto label_226e80;
        case 0x226e84u: goto label_226e84;
        case 0x226e88u: goto label_226e88;
        case 0x226e8cu: goto label_226e8c;
        case 0x226e90u: goto label_226e90;
        case 0x226e94u: goto label_226e94;
        case 0x226e98u: goto label_226e98;
        case 0x226e9cu: goto label_226e9c;
        case 0x226ea0u: goto label_226ea0;
        case 0x226ea4u: goto label_226ea4;
        case 0x226ea8u: goto label_226ea8;
        case 0x226eacu: goto label_226eac;
        case 0x226eb0u: goto label_226eb0;
        case 0x226eb4u: goto label_226eb4;
        case 0x226eb8u: goto label_226eb8;
        case 0x226ebcu: goto label_226ebc;
        case 0x226ec0u: goto label_226ec0;
        case 0x226ec4u: goto label_226ec4;
        case 0x226ec8u: goto label_226ec8;
        case 0x226eccu: goto label_226ecc;
        case 0x226ed0u: goto label_226ed0;
        case 0x226ed4u: goto label_226ed4;
        case 0x226ed8u: goto label_226ed8;
        case 0x226edcu: goto label_226edc;
        case 0x226ee0u: goto label_226ee0;
        case 0x226ee4u: goto label_226ee4;
        case 0x226ee8u: goto label_226ee8;
        case 0x226eecu: goto label_226eec;
        case 0x226ef0u: goto label_226ef0;
        case 0x226ef4u: goto label_226ef4;
        case 0x226ef8u: goto label_226ef8;
        case 0x226efcu: goto label_226efc;
        case 0x226f00u: goto label_226f00;
        case 0x226f04u: goto label_226f04;
        case 0x226f08u: goto label_226f08;
        case 0x226f0cu: goto label_226f0c;
        case 0x226f10u: goto label_226f10;
        case 0x226f14u: goto label_226f14;
        case 0x226f18u: goto label_226f18;
        case 0x226f1cu: goto label_226f1c;
        case 0x226f20u: goto label_226f20;
        case 0x226f24u: goto label_226f24;
        case 0x226f28u: goto label_226f28;
        case 0x226f2cu: goto label_226f2c;
        case 0x226f30u: goto label_226f30;
        case 0x226f34u: goto label_226f34;
        case 0x226f38u: goto label_226f38;
        case 0x226f3cu: goto label_226f3c;
        case 0x226f40u: goto label_226f40;
        case 0x226f44u: goto label_226f44;
        case 0x226f48u: goto label_226f48;
        case 0x226f4cu: goto label_226f4c;
        case 0x226f50u: goto label_226f50;
        case 0x226f54u: goto label_226f54;
        case 0x226f58u: goto label_226f58;
        case 0x226f5cu: goto label_226f5c;
        case 0x226f60u: goto label_226f60;
        case 0x226f64u: goto label_226f64;
        case 0x226f68u: goto label_226f68;
        case 0x226f6cu: goto label_226f6c;
        case 0x226f70u: goto label_226f70;
        case 0x226f74u: goto label_226f74;
        case 0x226f78u: goto label_226f78;
        case 0x226f7cu: goto label_226f7c;
        case 0x226f80u: goto label_226f80;
        case 0x226f84u: goto label_226f84;
        case 0x226f88u: goto label_226f88;
        case 0x226f8cu: goto label_226f8c;
        case 0x226f90u: goto label_226f90;
        case 0x226f94u: goto label_226f94;
        case 0x226f98u: goto label_226f98;
        case 0x226f9cu: goto label_226f9c;
        case 0x226fa0u: goto label_226fa0;
        case 0x226fa4u: goto label_226fa4;
        case 0x226fa8u: goto label_226fa8;
        case 0x226facu: goto label_226fac;
        case 0x226fb0u: goto label_226fb0;
        case 0x226fb4u: goto label_226fb4;
        case 0x226fb8u: goto label_226fb8;
        case 0x226fbcu: goto label_226fbc;
        case 0x226fc0u: goto label_226fc0;
        case 0x226fc4u: goto label_226fc4;
        case 0x226fc8u: goto label_226fc8;
        case 0x226fccu: goto label_226fcc;
        case 0x226fd0u: goto label_226fd0;
        case 0x226fd4u: goto label_226fd4;
        case 0x226fd8u: goto label_226fd8;
        case 0x226fdcu: goto label_226fdc;
        case 0x226fe0u: goto label_226fe0;
        case 0x226fe4u: goto label_226fe4;
        case 0x226fe8u: goto label_226fe8;
        case 0x226fecu: goto label_226fec;
        case 0x226ff0u: goto label_226ff0;
        case 0x226ff4u: goto label_226ff4;
        case 0x226ff8u: goto label_226ff8;
        case 0x226ffcu: goto label_226ffc;
        case 0x227000u: goto label_227000;
        case 0x227004u: goto label_227004;
        case 0x227008u: goto label_227008;
        case 0x22700cu: goto label_22700c;
        case 0x227010u: goto label_227010;
        case 0x227014u: goto label_227014;
        case 0x227018u: goto label_227018;
        case 0x22701cu: goto label_22701c;
        case 0x227020u: goto label_227020;
        case 0x227024u: goto label_227024;
        case 0x227028u: goto label_227028;
        case 0x22702cu: goto label_22702c;
        case 0x227030u: goto label_227030;
        case 0x227034u: goto label_227034;
        case 0x227038u: goto label_227038;
        case 0x22703cu: goto label_22703c;
        case 0x227040u: goto label_227040;
        case 0x227044u: goto label_227044;
        case 0x227048u: goto label_227048;
        case 0x22704cu: goto label_22704c;
        case 0x227050u: goto label_227050;
        case 0x227054u: goto label_227054;
        case 0x227058u: goto label_227058;
        case 0x22705cu: goto label_22705c;
        case 0x227060u: goto label_227060;
        case 0x227064u: goto label_227064;
        case 0x227068u: goto label_227068;
        case 0x22706cu: goto label_22706c;
        case 0x227070u: goto label_227070;
        case 0x227074u: goto label_227074;
        case 0x227078u: goto label_227078;
        case 0x22707cu: goto label_22707c;
        case 0x227080u: goto label_227080;
        case 0x227084u: goto label_227084;
        case 0x227088u: goto label_227088;
        case 0x22708cu: goto label_22708c;
        case 0x227090u: goto label_227090;
        case 0x227094u: goto label_227094;
        case 0x227098u: goto label_227098;
        case 0x22709cu: goto label_22709c;
        case 0x2270a0u: goto label_2270a0;
        case 0x2270a4u: goto label_2270a4;
        case 0x2270a8u: goto label_2270a8;
        case 0x2270acu: goto label_2270ac;
        case 0x2270b0u: goto label_2270b0;
        case 0x2270b4u: goto label_2270b4;
        case 0x2270b8u: goto label_2270b8;
        case 0x2270bcu: goto label_2270bc;
        case 0x2270c0u: goto label_2270c0;
        case 0x2270c4u: goto label_2270c4;
        case 0x2270c8u: goto label_2270c8;
        case 0x2270ccu: goto label_2270cc;
        case 0x2270d0u: goto label_2270d0;
        case 0x2270d4u: goto label_2270d4;
        case 0x2270d8u: goto label_2270d8;
        case 0x2270dcu: goto label_2270dc;
        case 0x2270e0u: goto label_2270e0;
        case 0x2270e4u: goto label_2270e4;
        case 0x2270e8u: goto label_2270e8;
        case 0x2270ecu: goto label_2270ec;
        case 0x2270f0u: goto label_2270f0;
        case 0x2270f4u: goto label_2270f4;
        case 0x2270f8u: goto label_2270f8;
        case 0x2270fcu: goto label_2270fc;
        case 0x227100u: goto label_227100;
        case 0x227104u: goto label_227104;
        case 0x227108u: goto label_227108;
        case 0x22710cu: goto label_22710c;
        case 0x227110u: goto label_227110;
        case 0x227114u: goto label_227114;
        case 0x227118u: goto label_227118;
        case 0x22711cu: goto label_22711c;
        case 0x227120u: goto label_227120;
        case 0x227124u: goto label_227124;
        case 0x227128u: goto label_227128;
        case 0x22712cu: goto label_22712c;
        case 0x227130u: goto label_227130;
        case 0x227134u: goto label_227134;
        case 0x227138u: goto label_227138;
        case 0x22713cu: goto label_22713c;
        case 0x227140u: goto label_227140;
        case 0x227144u: goto label_227144;
        case 0x227148u: goto label_227148;
        case 0x22714cu: goto label_22714c;
        case 0x227150u: goto label_227150;
        case 0x227154u: goto label_227154;
        case 0x227158u: goto label_227158;
        case 0x22715cu: goto label_22715c;
        case 0x227160u: goto label_227160;
        case 0x227164u: goto label_227164;
        case 0x227168u: goto label_227168;
        case 0x22716cu: goto label_22716c;
        case 0x227170u: goto label_227170;
        case 0x227174u: goto label_227174;
        case 0x227178u: goto label_227178;
        case 0x22717cu: goto label_22717c;
        case 0x227180u: goto label_227180;
        case 0x227184u: goto label_227184;
        case 0x227188u: goto label_227188;
        case 0x22718cu: goto label_22718c;
        case 0x227190u: goto label_227190;
        case 0x227194u: goto label_227194;
        case 0x227198u: goto label_227198;
        case 0x22719cu: goto label_22719c;
        case 0x2271a0u: goto label_2271a0;
        case 0x2271a4u: goto label_2271a4;
        case 0x2271a8u: goto label_2271a8;
        case 0x2271acu: goto label_2271ac;
        case 0x2271b0u: goto label_2271b0;
        case 0x2271b4u: goto label_2271b4;
        case 0x2271b8u: goto label_2271b8;
        case 0x2271bcu: goto label_2271bc;
        case 0x2271c0u: goto label_2271c0;
        case 0x2271c4u: goto label_2271c4;
        case 0x2271c8u: goto label_2271c8;
        case 0x2271ccu: goto label_2271cc;
        case 0x2271d0u: goto label_2271d0;
        case 0x2271d4u: goto label_2271d4;
        case 0x2271d8u: goto label_2271d8;
        case 0x2271dcu: goto label_2271dc;
        case 0x2271e0u: goto label_2271e0;
        case 0x2271e4u: goto label_2271e4;
        case 0x2271e8u: goto label_2271e8;
        case 0x2271ecu: goto label_2271ec;
        case 0x2271f0u: goto label_2271f0;
        case 0x2271f4u: goto label_2271f4;
        case 0x2271f8u: goto label_2271f8;
        case 0x2271fcu: goto label_2271fc;
        case 0x227200u: goto label_227200;
        case 0x227204u: goto label_227204;
        case 0x227208u: goto label_227208;
        case 0x22720cu: goto label_22720c;
        case 0x227210u: goto label_227210;
        case 0x227214u: goto label_227214;
        case 0x227218u: goto label_227218;
        case 0x22721cu: goto label_22721c;
        case 0x227220u: goto label_227220;
        case 0x227224u: goto label_227224;
        case 0x227228u: goto label_227228;
        case 0x22722cu: goto label_22722c;
        case 0x227230u: goto label_227230;
        case 0x227234u: goto label_227234;
        case 0x227238u: goto label_227238;
        case 0x22723cu: goto label_22723c;
        case 0x227240u: goto label_227240;
        case 0x227244u: goto label_227244;
        case 0x227248u: goto label_227248;
        case 0x22724cu: goto label_22724c;
        case 0x227250u: goto label_227250;
        case 0x227254u: goto label_227254;
        case 0x227258u: goto label_227258;
        case 0x22725cu: goto label_22725c;
        case 0x227260u: goto label_227260;
        case 0x227264u: goto label_227264;
        case 0x227268u: goto label_227268;
        case 0x22726cu: goto label_22726c;
        case 0x227270u: goto label_227270;
        case 0x227274u: goto label_227274;
        case 0x227278u: goto label_227278;
        case 0x22727cu: goto label_22727c;
        case 0x227280u: goto label_227280;
        case 0x227284u: goto label_227284;
        case 0x227288u: goto label_227288;
        case 0x22728cu: goto label_22728c;
        case 0x227290u: goto label_227290;
        case 0x227294u: goto label_227294;
        case 0x227298u: goto label_227298;
        case 0x22729cu: goto label_22729c;
        case 0x2272a0u: goto label_2272a0;
        case 0x2272a4u: goto label_2272a4;
        case 0x2272a8u: goto label_2272a8;
        case 0x2272acu: goto label_2272ac;
        case 0x2272b0u: goto label_2272b0;
        case 0x2272b4u: goto label_2272b4;
        case 0x2272b8u: goto label_2272b8;
        case 0x2272bcu: goto label_2272bc;
        case 0x2272c0u: goto label_2272c0;
        case 0x2272c4u: goto label_2272c4;
        case 0x2272c8u: goto label_2272c8;
        case 0x2272ccu: goto label_2272cc;
        case 0x2272d0u: goto label_2272d0;
        case 0x2272d4u: goto label_2272d4;
        case 0x2272d8u: goto label_2272d8;
        case 0x2272dcu: goto label_2272dc;
        case 0x2272e0u: goto label_2272e0;
        case 0x2272e4u: goto label_2272e4;
        case 0x2272e8u: goto label_2272e8;
        case 0x2272ecu: goto label_2272ec;
        case 0x2272f0u: goto label_2272f0;
        case 0x2272f4u: goto label_2272f4;
        case 0x2272f8u: goto label_2272f8;
        case 0x2272fcu: goto label_2272fc;
        case 0x227300u: goto label_227300;
        case 0x227304u: goto label_227304;
        case 0x227308u: goto label_227308;
        case 0x22730cu: goto label_22730c;
        case 0x227310u: goto label_227310;
        case 0x227314u: goto label_227314;
        case 0x227318u: goto label_227318;
        case 0x22731cu: goto label_22731c;
        case 0x227320u: goto label_227320;
        case 0x227324u: goto label_227324;
        case 0x227328u: goto label_227328;
        case 0x22732cu: goto label_22732c;
        case 0x227330u: goto label_227330;
        case 0x227334u: goto label_227334;
        case 0x227338u: goto label_227338;
        case 0x22733cu: goto label_22733c;
        case 0x227340u: goto label_227340;
        case 0x227344u: goto label_227344;
        case 0x227348u: goto label_227348;
        case 0x22734cu: goto label_22734c;
        case 0x227350u: goto label_227350;
        case 0x227354u: goto label_227354;
        case 0x227358u: goto label_227358;
        case 0x22735cu: goto label_22735c;
        case 0x227360u: goto label_227360;
        case 0x227364u: goto label_227364;
        case 0x227368u: goto label_227368;
        case 0x22736cu: goto label_22736c;
        case 0x227370u: goto label_227370;
        case 0x227374u: goto label_227374;
        case 0x227378u: goto label_227378;
        case 0x22737cu: goto label_22737c;
        case 0x227380u: goto label_227380;
        case 0x227384u: goto label_227384;
        case 0x227388u: goto label_227388;
        case 0x22738cu: goto label_22738c;
        case 0x227390u: goto label_227390;
        case 0x227394u: goto label_227394;
        case 0x227398u: goto label_227398;
        case 0x22739cu: goto label_22739c;
        case 0x2273a0u: goto label_2273a0;
        case 0x2273a4u: goto label_2273a4;
        case 0x2273a8u: goto label_2273a8;
        case 0x2273acu: goto label_2273ac;
        case 0x2273b0u: goto label_2273b0;
        case 0x2273b4u: goto label_2273b4;
        case 0x2273b8u: goto label_2273b8;
        case 0x2273bcu: goto label_2273bc;
        case 0x2273c0u: goto label_2273c0;
        case 0x2273c4u: goto label_2273c4;
        case 0x2273c8u: goto label_2273c8;
        case 0x2273ccu: goto label_2273cc;
        case 0x2273d0u: goto label_2273d0;
        case 0x2273d4u: goto label_2273d4;
        case 0x2273d8u: goto label_2273d8;
        case 0x2273dcu: goto label_2273dc;
        case 0x2273e0u: goto label_2273e0;
        case 0x2273e4u: goto label_2273e4;
        case 0x2273e8u: goto label_2273e8;
        case 0x2273ecu: goto label_2273ec;
        case 0x2273f0u: goto label_2273f0;
        case 0x2273f4u: goto label_2273f4;
        case 0x2273f8u: goto label_2273f8;
        case 0x2273fcu: goto label_2273fc;
        case 0x227400u: goto label_227400;
        case 0x227404u: goto label_227404;
        case 0x227408u: goto label_227408;
        case 0x22740cu: goto label_22740c;
        case 0x227410u: goto label_227410;
        case 0x227414u: goto label_227414;
        case 0x227418u: goto label_227418;
        case 0x22741cu: goto label_22741c;
        case 0x227420u: goto label_227420;
        case 0x227424u: goto label_227424;
        case 0x227428u: goto label_227428;
        case 0x22742cu: goto label_22742c;
        case 0x227430u: goto label_227430;
        case 0x227434u: goto label_227434;
        case 0x227438u: goto label_227438;
        case 0x22743cu: goto label_22743c;
        case 0x227440u: goto label_227440;
        case 0x227444u: goto label_227444;
        case 0x227448u: goto label_227448;
        case 0x22744cu: goto label_22744c;
        case 0x227450u: goto label_227450;
        case 0x227454u: goto label_227454;
        case 0x227458u: goto label_227458;
        case 0x22745cu: goto label_22745c;
        case 0x227460u: goto label_227460;
        case 0x227464u: goto label_227464;
        case 0x227468u: goto label_227468;
        case 0x22746cu: goto label_22746c;
        case 0x227470u: goto label_227470;
        case 0x227474u: goto label_227474;
        case 0x227478u: goto label_227478;
        case 0x22747cu: goto label_22747c;
        case 0x227480u: goto label_227480;
        case 0x227484u: goto label_227484;
        case 0x227488u: goto label_227488;
        case 0x22748cu: goto label_22748c;
        case 0x227490u: goto label_227490;
        case 0x227494u: goto label_227494;
        case 0x227498u: goto label_227498;
        case 0x22749cu: goto label_22749c;
        case 0x2274a0u: goto label_2274a0;
        case 0x2274a4u: goto label_2274a4;
        case 0x2274a8u: goto label_2274a8;
        case 0x2274acu: goto label_2274ac;
        case 0x2274b0u: goto label_2274b0;
        case 0x2274b4u: goto label_2274b4;
        case 0x2274b8u: goto label_2274b8;
        case 0x2274bcu: goto label_2274bc;
        case 0x2274c0u: goto label_2274c0;
        case 0x2274c4u: goto label_2274c4;
        case 0x2274c8u: goto label_2274c8;
        case 0x2274ccu: goto label_2274cc;
        case 0x2274d0u: goto label_2274d0;
        case 0x2274d4u: goto label_2274d4;
        case 0x2274d8u: goto label_2274d8;
        case 0x2274dcu: goto label_2274dc;
        case 0x2274e0u: goto label_2274e0;
        case 0x2274e4u: goto label_2274e4;
        case 0x2274e8u: goto label_2274e8;
        case 0x2274ecu: goto label_2274ec;
        case 0x2274f0u: goto label_2274f0;
        case 0x2274f4u: goto label_2274f4;
        case 0x2274f8u: goto label_2274f8;
        case 0x2274fcu: goto label_2274fc;
        case 0x227500u: goto label_227500;
        case 0x227504u: goto label_227504;
        case 0x227508u: goto label_227508;
        case 0x22750cu: goto label_22750c;
        case 0x227510u: goto label_227510;
        case 0x227514u: goto label_227514;
        case 0x227518u: goto label_227518;
        case 0x22751cu: goto label_22751c;
        case 0x227520u: goto label_227520;
        case 0x227524u: goto label_227524;
        case 0x227528u: goto label_227528;
        case 0x22752cu: goto label_22752c;
        case 0x227530u: goto label_227530;
        case 0x227534u: goto label_227534;
        case 0x227538u: goto label_227538;
        case 0x22753cu: goto label_22753c;
        case 0x227540u: goto label_227540;
        case 0x227544u: goto label_227544;
        case 0x227548u: goto label_227548;
        case 0x22754cu: goto label_22754c;
        case 0x227550u: goto label_227550;
        case 0x227554u: goto label_227554;
        case 0x227558u: goto label_227558;
        case 0x22755cu: goto label_22755c;
        case 0x227560u: goto label_227560;
        case 0x227564u: goto label_227564;
        case 0x227568u: goto label_227568;
        case 0x22756cu: goto label_22756c;
        case 0x227570u: goto label_227570;
        case 0x227574u: goto label_227574;
        case 0x227578u: goto label_227578;
        case 0x22757cu: goto label_22757c;
        case 0x227580u: goto label_227580;
        case 0x227584u: goto label_227584;
        case 0x227588u: goto label_227588;
        case 0x22758cu: goto label_22758c;
        case 0x227590u: goto label_227590;
        case 0x227594u: goto label_227594;
        case 0x227598u: goto label_227598;
        case 0x22759cu: goto label_22759c;
        case 0x2275a0u: goto label_2275a0;
        case 0x2275a4u: goto label_2275a4;
        case 0x2275a8u: goto label_2275a8;
        case 0x2275acu: goto label_2275ac;
        case 0x2275b0u: goto label_2275b0;
        case 0x2275b4u: goto label_2275b4;
        case 0x2275b8u: goto label_2275b8;
        case 0x2275bcu: goto label_2275bc;
        case 0x2275c0u: goto label_2275c0;
        case 0x2275c4u: goto label_2275c4;
        case 0x2275c8u: goto label_2275c8;
        case 0x2275ccu: goto label_2275cc;
        case 0x2275d0u: goto label_2275d0;
        case 0x2275d4u: goto label_2275d4;
        case 0x2275d8u: goto label_2275d8;
        case 0x2275dcu: goto label_2275dc;
        case 0x2275e0u: goto label_2275e0;
        case 0x2275e4u: goto label_2275e4;
        case 0x2275e8u: goto label_2275e8;
        case 0x2275ecu: goto label_2275ec;
        case 0x2275f0u: goto label_2275f0;
        case 0x2275f4u: goto label_2275f4;
        case 0x2275f8u: goto label_2275f8;
        case 0x2275fcu: goto label_2275fc;
        case 0x227600u: goto label_227600;
        case 0x227604u: goto label_227604;
        case 0x227608u: goto label_227608;
        case 0x22760cu: goto label_22760c;
        case 0x227610u: goto label_227610;
        case 0x227614u: goto label_227614;
        case 0x227618u: goto label_227618;
        case 0x22761cu: goto label_22761c;
        case 0x227620u: goto label_227620;
        case 0x227624u: goto label_227624;
        case 0x227628u: goto label_227628;
        case 0x22762cu: goto label_22762c;
        case 0x227630u: goto label_227630;
        case 0x227634u: goto label_227634;
        case 0x227638u: goto label_227638;
        case 0x22763cu: goto label_22763c;
        case 0x227640u: goto label_227640;
        case 0x227644u: goto label_227644;
        case 0x227648u: goto label_227648;
        case 0x22764cu: goto label_22764c;
        case 0x227650u: goto label_227650;
        case 0x227654u: goto label_227654;
        case 0x227658u: goto label_227658;
        case 0x22765cu: goto label_22765c;
        case 0x227660u: goto label_227660;
        case 0x227664u: goto label_227664;
        case 0x227668u: goto label_227668;
        case 0x22766cu: goto label_22766c;
        case 0x227670u: goto label_227670;
        case 0x227674u: goto label_227674;
        case 0x227678u: goto label_227678;
        case 0x22767cu: goto label_22767c;
        case 0x227680u: goto label_227680;
        case 0x227684u: goto label_227684;
        case 0x227688u: goto label_227688;
        case 0x22768cu: goto label_22768c;
        case 0x227690u: goto label_227690;
        case 0x227694u: goto label_227694;
        case 0x227698u: goto label_227698;
        case 0x22769cu: goto label_22769c;
        case 0x2276a0u: goto label_2276a0;
        case 0x2276a4u: goto label_2276a4;
        case 0x2276a8u: goto label_2276a8;
        case 0x2276acu: goto label_2276ac;
        case 0x2276b0u: goto label_2276b0;
        case 0x2276b4u: goto label_2276b4;
        case 0x2276b8u: goto label_2276b8;
        case 0x2276bcu: goto label_2276bc;
        case 0x2276c0u: goto label_2276c0;
        case 0x2276c4u: goto label_2276c4;
        case 0x2276c8u: goto label_2276c8;
        case 0x2276ccu: goto label_2276cc;
        case 0x2276d0u: goto label_2276d0;
        case 0x2276d4u: goto label_2276d4;
        case 0x2276d8u: goto label_2276d8;
        case 0x2276dcu: goto label_2276dc;
        case 0x2276e0u: goto label_2276e0;
        case 0x2276e4u: goto label_2276e4;
        case 0x2276e8u: goto label_2276e8;
        case 0x2276ecu: goto label_2276ec;
        case 0x2276f0u: goto label_2276f0;
        case 0x2276f4u: goto label_2276f4;
        case 0x2276f8u: goto label_2276f8;
        case 0x2276fcu: goto label_2276fc;
        default: break;
    }

    ctx->pc = 0x226a70u;

label_226a70:
    // 0x226a70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x226a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_226a74:
    // 0x226a74: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x226a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_226a78:
    // 0x226a78: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x226a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_226a7c:
    // 0x226a7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x226a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_226a80:
    // 0x226a80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226a84:
    // 0x226a84: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x226a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_226a88:
    // 0x226a88: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x226a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_226a8c:
    // 0x226a8c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x226a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_226a90:
    // 0x226a90: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x226a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_226a94:
    // 0x226a94: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x226a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_226a98:
    // 0x226a98: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x226a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_226a9c:
    // 0x226a9c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x226a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_226aa0:
    // 0x226aa0: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x226aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_226aa4:
    // 0x226aa4: 0xc0894aa  jal         func_2252A8
label_226aa8:
    if (ctx->pc == 0x226AA8u) {
        ctx->pc = 0x226AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AA4u;
        // 0x226aa8: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x226AACu;
        goto label_226aac;
    }
    ctx->pc = 0x226AA4u;
    SET_GPR_U32(ctx, 31, 0x226AACu);
    ctx->pc = 0x226AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AA4u;
    // 0x226aa8: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2252A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2252A8u, 0x226AA4u, 0x226AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AACu;
label_226aac:
    // 0x226aac: 0x3c01c7c3  lui         $at, 0xC7C3
    ctx->pc = 0x226aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51139 << 16));
label_226ab0:
    // 0x226ab0: 0x34214f80  ori         $at, $at, 0x4F80
    ctx->pc = 0x226ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20352);
label_226ab4:
    // 0x226ab4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_226ab8:
    // 0x226ab8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x226ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_226abc:
    // 0x226abc: 0x24421a90  addiu       $v0, $v0, 0x1A90
    ctx->pc = 0x226abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
label_226ac0:
    // 0x226ac0: 0x264302f0  addiu       $v1, $s2, 0x2F0
    ctx->pc = 0x226ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
label_226ac4:
    // 0x226ac4: 0xe64102f0  swc1        $f1, 0x2F0($s2)
    ctx->pc = 0x226ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
label_226ac8:
    // 0x226ac8: 0x264403c0  addiu       $a0, $s2, 0x3C0
    ctx->pc = 0x226ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
label_226acc:
    // 0x226acc: 0xae420218  sw          $v0, 0x218($s2)
    ctx->pc = 0x226accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
label_226ad0:
    // 0x226ad0: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
label_226ad4:
    // 0x226ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x226ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_226ad8:
    // 0x226ad8: 0x264203b0  addiu       $v0, $s2, 0x3B0
    ctx->pc = 0x226ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
label_226adc:
    // 0x226adc: 0xae400290  sw          $zero, 0x290($s2)
    ctx->pc = 0x226adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 0));
label_226ae0:
    // 0x226ae0: 0xae400294  sw          $zero, 0x294($s2)
    ctx->pc = 0x226ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 0));
label_226ae4:
    // 0x226ae4: 0xa2400298  sb          $zero, 0x298($s2)
    ctx->pc = 0x226ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 664), (uint8_t)GPR_U32(ctx, 0));
label_226ae8:
    // 0x226ae8: 0xa2400299  sb          $zero, 0x299($s2)
    ctx->pc = 0x226ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 665), (uint8_t)GPR_U32(ctx, 0));
label_226aec:
    // 0x226aec: 0xae40029c  sw          $zero, 0x29C($s2)
    ctx->pc = 0x226aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 0));
label_226af0:
    // 0x226af0: 0xae4002a0  sw          $zero, 0x2A0($s2)
    ctx->pc = 0x226af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 0));
label_226af4:
    // 0x226af4: 0xae4002d0  sw          $zero, 0x2D0($s2)
    ctx->pc = 0x226af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 720), GPR_U32(ctx, 0));
label_226af8:
    // 0x226af8: 0xae4002d4  sw          $zero, 0x2D4($s2)
    ctx->pc = 0x226af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 0));
label_226afc:
    // 0x226afc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x226afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_226b00:
    // 0x226b00: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x226b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_226b04:
    // 0x226b04: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x226b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_226b08:
    // 0x226b08: 0xe6400378  swc1        $f0, 0x378($s2)
    ctx->pc = 0x226b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 888), bits); }
label_226b0c:
    // 0x226b0c: 0xae40030c  sw          $zero, 0x30C($s2)
    ctx->pc = 0x226b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 0));
label_226b10:
    // 0x226b10: 0xae400310  sw          $zero, 0x310($s2)
    ctx->pc = 0x226b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 784), GPR_U32(ctx, 0));
label_226b14:
    // 0x226b14: 0xa2400314  sb          $zero, 0x314($s2)
    ctx->pc = 0x226b14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 788), (uint8_t)GPR_U32(ctx, 0));
label_226b18:
    // 0x226b18: 0xa2400315  sb          $zero, 0x315($s2)
    ctx->pc = 0x226b18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 789), (uint8_t)GPR_U32(ctx, 0));
label_226b1c:
    // 0x226b1c: 0xae400318  sw          $zero, 0x318($s2)
    ctx->pc = 0x226b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 792), GPR_U32(ctx, 0));
label_226b20:
    // 0x226b20: 0xae40031c  sw          $zero, 0x31C($s2)
    ctx->pc = 0x226b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 0));
label_226b24:
    // 0x226b24: 0xa2400320  sb          $zero, 0x320($s2)
    ctx->pc = 0x226b24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 800), (uint8_t)GPR_U32(ctx, 0));
label_226b28:
    // 0x226b28: 0xa2400321  sb          $zero, 0x321($s2)
    ctx->pc = 0x226b28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 801), (uint8_t)GPR_U32(ctx, 0));
label_226b2c:
    // 0x226b2c: 0xae400324  sw          $zero, 0x324($s2)
    ctx->pc = 0x226b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 0));
label_226b30:
    // 0x226b30: 0xae400328  sw          $zero, 0x328($s2)
    ctx->pc = 0x226b30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 0));
label_226b34:
    // 0x226b34: 0xae40032c  sw          $zero, 0x32C($s2)
    ctx->pc = 0x226b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 0));
label_226b38:
    // 0x226b38: 0xae400330  sw          $zero, 0x330($s2)
    ctx->pc = 0x226b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 0));
label_226b3c:
    // 0x226b3c: 0xae400334  sw          $zero, 0x334($s2)
    ctx->pc = 0x226b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 0));
label_226b40:
    // 0x226b40: 0xae400338  sw          $zero, 0x338($s2)
    ctx->pc = 0x226b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 0));
label_226b44:
    // 0x226b44: 0xae40033c  sw          $zero, 0x33C($s2)
    ctx->pc = 0x226b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 0));
label_226b48:
    // 0x226b48: 0xae400340  sw          $zero, 0x340($s2)
    ctx->pc = 0x226b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 0));
label_226b4c:
    // 0x226b4c: 0xae40036c  sw          $zero, 0x36C($s2)
    ctx->pc = 0x226b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 876), GPR_U32(ctx, 0));
label_226b50:
    // 0x226b50: 0xae400370  sw          $zero, 0x370($s2)
    ctx->pc = 0x226b50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 0));
label_226b54:
    // 0x226b54: 0xae400374  sw          $zero, 0x374($s2)
    ctx->pc = 0x226b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 884), GPR_U32(ctx, 0));
label_226b58:
    // 0x226b58: 0xae40037c  sw          $zero, 0x37C($s2)
    ctx->pc = 0x226b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 892), GPR_U32(ctx, 0));
label_226b5c:
    // 0x226b5c: 0xae400380  sw          $zero, 0x380($s2)
    ctx->pc = 0x226b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 896), GPR_U32(ctx, 0));
label_226b60:
    // 0x226b60: 0xae400384  sw          $zero, 0x384($s2)
    ctx->pc = 0x226b60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 900), GPR_U32(ctx, 0));
label_226b64:
    // 0x226b64: 0xae400388  sw          $zero, 0x388($s2)
    ctx->pc = 0x226b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 904), GPR_U32(ctx, 0));
label_226b68:
    // 0x226b68: 0xae40038c  sw          $zero, 0x38C($s2)
    ctx->pc = 0x226b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 908), GPR_U32(ctx, 0));
label_226b6c:
    // 0x226b6c: 0xae400394  sw          $zero, 0x394($s2)
    ctx->pc = 0x226b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 916), GPR_U32(ctx, 0));
label_226b70:
    // 0x226b70: 0xae400398  sw          $zero, 0x398($s2)
    ctx->pc = 0x226b70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 0));
label_226b74:
    // 0x226b74: 0xae40039c  sw          $zero, 0x39C($s2)
    ctx->pc = 0x226b74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 924), GPR_U32(ctx, 0));
label_226b78:
    // 0x226b78: 0xae4003a0  sw          $zero, 0x3A0($s2)
    ctx->pc = 0x226b78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 928), GPR_U32(ctx, 0));
label_226b7c:
    // 0x226b7c: 0xae4003a4  sw          $zero, 0x3A4($s2)
    ctx->pc = 0x226b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 932), GPR_U32(ctx, 0));
label_226b80:
    // 0x226b80: 0xae4003b0  sw          $zero, 0x3B0($s2)
    ctx->pc = 0x226b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 944), GPR_U32(ctx, 0));
label_226b84:
    // 0x226b84: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x226b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_226b88:
    // 0x226b88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_226b8c:
    // 0x226b8c: 0xc0f6a96  jal         func_3DAA58
label_226b90:
    if (ctx->pc == 0x226B90u) {
        ctx->pc = 0x226B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B8Cu;
        // 0x226b90: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B94u;
        goto label_226b94;
    }
    ctx->pc = 0x226B8Cu;
    SET_GPR_U32(ctx, 31, 0x226B94u);
    ctx->pc = 0x226B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B8Cu;
    // 0x226b90: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226B8Cu, 0x226B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B94u;
label_226b94:
    // 0x226b94: 0xc0f6a96  jal         func_3DAA58
label_226b98:
    if (ctx->pc == 0x226B98u) {
        ctx->pc = 0x226B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B94u;
        // 0x226b98: 0x264403d0  addiu       $a0, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226B9Cu;
        goto label_226b9c;
    }
    ctx->pc = 0x226B94u;
    SET_GPR_U32(ctx, 31, 0x226B9Cu);
    ctx->pc = 0x226B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B94u;
    // 0x226b98: 0x264403d0  addiu       $a0, $s2, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226B94u, 0x226B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B9Cu;
label_226b9c:
    // 0x226b9c: 0xc0f6a96  jal         func_3DAA58
label_226ba0:
    if (ctx->pc == 0x226BA0u) {
        ctx->pc = 0x226BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B9Cu;
        // 0x226ba0: 0x264403e0  addiu       $a0, $s2, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BA4u;
        goto label_226ba4;
    }
    ctx->pc = 0x226B9Cu;
    SET_GPR_U32(ctx, 31, 0x226BA4u);
    ctx->pc = 0x226BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B9Cu;
    // 0x226ba0: 0x264403e0  addiu       $a0, $s2, 0x3E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226B9Cu, 0x226BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BA4u;
label_226ba4:
    // 0x226ba4: 0xc0f6a96  jal         func_3DAA58
label_226ba8:
    if (ctx->pc == 0x226BA8u) {
        ctx->pc = 0x226BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BA4u;
        // 0x226ba8: 0x264403f0  addiu       $a0, $s2, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226BACu;
        goto label_226bac;
    }
    ctx->pc = 0x226BA4u;
    SET_GPR_U32(ctx, 31, 0x226BACu);
    ctx->pc = 0x226BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226BA4u;
    // 0x226ba8: 0x264403f0  addiu       $a0, $s2, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226BA4u, 0x226BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226BACu;
label_226bac:
    // 0x226bac: 0xae400400  sw          $zero, 0x400($s2)
    ctx->pc = 0x226bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 0));
label_226bb0:
    // 0x226bb0: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x226bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_226bb4:
    // 0x226bb4: 0xae400404  sw          $zero, 0x404($s2)
    ctx->pc = 0x226bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 0));
label_226bb8:
    // 0x226bb8: 0x24a25af0  addiu       $v0, $a1, 0x5AF0
    ctx->pc = 0x226bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 23280));
label_226bbc:
    // 0x226bbc: 0xae400408  sw          $zero, 0x408($s2)
    ctx->pc = 0x226bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1032), GPR_U32(ctx, 0));
label_226bc0:
    // 0x226bc0: 0x26430440  addiu       $v1, $s2, 0x440
    ctx->pc = 0x226bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
label_226bc4:
    // 0x226bc4: 0xae40040c  sw          $zero, 0x40C($s2)
    ctx->pc = 0x226bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1036), GPR_U32(ctx, 0));
label_226bc8:
    // 0x226bc8: 0x26460450  addiu       $a2, $s2, 0x450
    ctx->pc = 0x226bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1104));
label_226bcc:
    // 0x226bcc: 0xae400410  sw          $zero, 0x410($s2)
    ctx->pc = 0x226bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1040), GPR_U32(ctx, 0));
label_226bd0:
    // 0x226bd0: 0x26470460  addiu       $a3, $s2, 0x460
    ctx->pc = 0x226bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1120));
label_226bd4:
    // 0x226bd4: 0xae400414  sw          $zero, 0x414($s2)
    ctx->pc = 0x226bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1044), GPR_U32(ctx, 0));
label_226bd8:
    // 0x226bd8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x226bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_226bdc:
    // 0x226bdc: 0xae400418  sw          $zero, 0x418($s2)
    ctx->pc = 0x226bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1048), GPR_U32(ctx, 0));
label_226be0:
    // 0x226be0: 0x26440490  addiu       $a0, $s2, 0x490
    ctx->pc = 0x226be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_226be4:
    // 0x226be4: 0xae40041c  sw          $zero, 0x41C($s2)
    ctx->pc = 0x226be4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1052), GPR_U32(ctx, 0));
label_226be8:
    // 0x226be8: 0xae400420  sw          $zero, 0x420($s2)
    ctx->pc = 0x226be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 0));
label_226bec:
    // 0x226bec: 0xae400424  sw          $zero, 0x424($s2)
    ctx->pc = 0x226becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1060), GPR_U32(ctx, 0));
label_226bf0:
    // 0x226bf0: 0xae400428  sw          $zero, 0x428($s2)
    ctx->pc = 0x226bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1064), GPR_U32(ctx, 0));
label_226bf4:
    // 0x226bf4: 0xae40042c  sw          $zero, 0x42C($s2)
    ctx->pc = 0x226bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1068), GPR_U32(ctx, 0));
label_226bf8:
    // 0x226bf8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x226bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
label_226bfc:
    // 0x226bfc: 0xae400434  sw          $zero, 0x434($s2)
    ctx->pc = 0x226bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1076), GPR_U32(ctx, 0));
label_226c00:
    // 0x226c00: 0xc4a05af0  lwc1        $f0, 0x5AF0($a1)
    ctx->pc = 0x226c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 23280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226c04:
    // 0x226c04: 0xe6400440  swc1        $f0, 0x440($s2)
    ctx->pc = 0x226c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1088), bits); }
label_226c08:
    // 0x226c08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x226c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c0c:
    // 0x226c0c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x226c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_226c10:
    // 0x226c10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x226c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226c14:
    // 0x226c14: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x226c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_226c18:
    // 0x226c18: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x226c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c1c:
    // 0x226c1c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x226c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_226c20:
    // 0x226c20: 0xc4a05af0  lwc1        $f0, 0x5AF0($a1)
    ctx->pc = 0x226c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 23280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226c24:
    // 0x226c24: 0xe6400450  swc1        $f0, 0x450($s2)
    ctx->pc = 0x226c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1104), bits); }
label_226c28:
    // 0x226c28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x226c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c2c:
    // 0x226c2c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x226c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_226c30:
    // 0x226c30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x226c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226c34:
    // 0x226c34: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x226c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_226c38:
    // 0x226c38: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x226c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_226c3c:
    // 0x226c3c: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x226c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_226c40:
    // 0x226c40: 0xae400460  sw          $zero, 0x460($s2)
    ctx->pc = 0x226c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1120), GPR_U32(ctx, 0));
label_226c44:
    // 0x226c44: 0xa0e00008  sb          $zero, 0x8($a3)
    ctx->pc = 0x226c44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 0));
label_226c48:
    // 0x226c48: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x226c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_226c4c:
    // 0x226c4c: 0xae400470  sw          $zero, 0x470($s2)
    ctx->pc = 0x226c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1136), GPR_U32(ctx, 0));
label_226c50:
    // 0x226c50: 0xae400474  sw          $zero, 0x474($s2)
    ctx->pc = 0x226c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 0));
label_226c54:
    // 0x226c54: 0xae400478  sw          $zero, 0x478($s2)
    ctx->pc = 0x226c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 0));
label_226c58:
    // 0x226c58: 0xa240047d  sb          $zero, 0x47D($s2)
    ctx->pc = 0x226c58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1149), (uint8_t)GPR_U32(ctx, 0));
label_226c5c:
    // 0x226c5c: 0xae400480  sw          $zero, 0x480($s2)
    ctx->pc = 0x226c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1152), GPR_U32(ctx, 0));
label_226c60:
    // 0x226c60: 0xae400484  sw          $zero, 0x484($s2)
    ctx->pc = 0x226c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1156), GPR_U32(ctx, 0));
label_226c64:
    // 0x226c64: 0xae400488  sw          $zero, 0x488($s2)
    ctx->pc = 0x226c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1160), GPR_U32(ctx, 0));
label_226c68:
    // 0x226c68: 0xae40048c  sw          $zero, 0x48C($s2)
    ctx->pc = 0x226c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1164), GPR_U32(ctx, 0));
label_226c6c:
    // 0x226c6c: 0xc0f6a96  jal         func_3DAA58
label_226c70:
    if (ctx->pc == 0x226C70u) {
        ctx->pc = 0x226C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C6Cu;
        // 0x226c70: 0xa248047c  sb          $t0, 0x47C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1148), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226C74u;
        goto label_226c74;
    }
    ctx->pc = 0x226C6Cu;
    SET_GPR_U32(ctx, 31, 0x226C74u);
    ctx->pc = 0x226C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C6Cu;
    // 0x226c70: 0xa248047c  sb          $t0, 0x47C($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1148), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226C6Cu, 0x226C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C74u;
label_226c74:
    // 0x226c74: 0xae4004a0  sw          $zero, 0x4A0($s2)
    ctx->pc = 0x226c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1184), GPR_U32(ctx, 0));
label_226c78:
    // 0x226c78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226c7c:
    // 0x226c7c: 0xae4004a4  sw          $zero, 0x4A4($s2)
    ctx->pc = 0x226c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 0));
label_226c80:
    // 0x226c80: 0x26440760  addiu       $a0, $s2, 0x760
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1888));
label_226c84:
    // 0x226c84: 0xae4004a8  sw          $zero, 0x4A8($s2)
    ctx->pc = 0x226c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 0));
label_226c88:
    // 0x226c88: 0xae4004ac  sw          $zero, 0x4AC($s2)
    ctx->pc = 0x226c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 0));
label_226c8c:
    // 0x226c8c: 0xae4004b0  sw          $zero, 0x4B0($s2)
    ctx->pc = 0x226c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1200), GPR_U32(ctx, 0));
label_226c90:
    // 0x226c90: 0xae4004b4  sw          $zero, 0x4B4($s2)
    ctx->pc = 0x226c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
label_226c94:
    // 0x226c94: 0xae4004b8  sw          $zero, 0x4B8($s2)
    ctx->pc = 0x226c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1208), GPR_U32(ctx, 0));
label_226c98:
    // 0x226c98: 0xfe4004d0  sd          $zero, 0x4D0($s2)
    ctx->pc = 0x226c98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1232), GPR_U64(ctx, 0));
label_226c9c:
    // 0x226c9c: 0xae4004d8  sw          $zero, 0x4D8($s2)
    ctx->pc = 0x226c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1240), GPR_U32(ctx, 0));
label_226ca0:
    // 0x226ca0: 0xae4004dc  sw          $zero, 0x4DC($s2)
    ctx->pc = 0x226ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
label_226ca4:
    // 0x226ca4: 0xae4004e0  sw          $zero, 0x4E0($s2)
    ctx->pc = 0x226ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1248), GPR_U32(ctx, 0));
label_226ca8:
    // 0x226ca8: 0xae4004e4  sw          $zero, 0x4E4($s2)
    ctx->pc = 0x226ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1252), GPR_U32(ctx, 0));
label_226cac:
    // 0x226cac: 0xae4004e8  sw          $zero, 0x4E8($s2)
    ctx->pc = 0x226cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1256), GPR_U32(ctx, 0));
label_226cb0:
    // 0x226cb0: 0xae4004ec  sw          $zero, 0x4EC($s2)
    ctx->pc = 0x226cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1260), GPR_U32(ctx, 0));
label_226cb4:
    // 0x226cb4: 0xae4004f0  sw          $zero, 0x4F0($s2)
    ctx->pc = 0x226cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1264), GPR_U32(ctx, 0));
label_226cb8:
    // 0x226cb8: 0xae4004f4  sw          $zero, 0x4F4($s2)
    ctx->pc = 0x226cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1268), GPR_U32(ctx, 0));
label_226cbc:
    // 0x226cbc: 0xae4004f8  sw          $zero, 0x4F8($s2)
    ctx->pc = 0x226cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1272), GPR_U32(ctx, 0));
label_226cc0:
    // 0x226cc0: 0xae4004fc  sw          $zero, 0x4FC($s2)
    ctx->pc = 0x226cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1276), GPR_U32(ctx, 0));
label_226cc4:
    // 0x226cc4: 0xae400500  sw          $zero, 0x500($s2)
    ctx->pc = 0x226cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1280), GPR_U32(ctx, 0));
label_226cc8:
    // 0x226cc8: 0xae400504  sw          $zero, 0x504($s2)
    ctx->pc = 0x226cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1284), GPR_U32(ctx, 0));
label_226ccc:
    // 0x226ccc: 0xae400508  sw          $zero, 0x508($s2)
    ctx->pc = 0x226cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 0));
label_226cd0:
    // 0x226cd0: 0xae40050c  sw          $zero, 0x50C($s2)
    ctx->pc = 0x226cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1292), GPR_U32(ctx, 0));
label_226cd4:
    // 0x226cd4: 0xae400510  sw          $zero, 0x510($s2)
    ctx->pc = 0x226cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1296), GPR_U32(ctx, 0));
label_226cd8:
    // 0x226cd8: 0xae400514  sw          $zero, 0x514($s2)
    ctx->pc = 0x226cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1300), GPR_U32(ctx, 0));
label_226cdc:
    // 0x226cdc: 0xae400518  sw          $zero, 0x518($s2)
    ctx->pc = 0x226cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1304), GPR_U32(ctx, 0));
label_226ce0:
    // 0x226ce0: 0xae40051c  sw          $zero, 0x51C($s2)
    ctx->pc = 0x226ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1308), GPR_U32(ctx, 0));
label_226ce4:
    // 0x226ce4: 0xae400520  sw          $zero, 0x520($s2)
    ctx->pc = 0x226ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1312), GPR_U32(ctx, 0));
label_226ce8:
    // 0x226ce8: 0xae400524  sw          $zero, 0x524($s2)
    ctx->pc = 0x226ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1316), GPR_U32(ctx, 0));
label_226cec:
    // 0x226cec: 0xae400528  sw          $zero, 0x528($s2)
    ctx->pc = 0x226cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1320), GPR_U32(ctx, 0));
label_226cf0:
    // 0x226cf0: 0xae40052c  sw          $zero, 0x52C($s2)
    ctx->pc = 0x226cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1324), GPR_U32(ctx, 0));
label_226cf4:
    // 0x226cf4: 0xae400530  sw          $zero, 0x530($s2)
    ctx->pc = 0x226cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1328), GPR_U32(ctx, 0));
label_226cf8:
    // 0x226cf8: 0xae4006dc  sw          $zero, 0x6DC($s2)
    ctx->pc = 0x226cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1756), GPR_U32(ctx, 0));
label_226cfc:
    // 0x226cfc: 0xae4006e0  sw          $zero, 0x6E0($s2)
    ctx->pc = 0x226cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1760), GPR_U32(ctx, 0));
label_226d00:
    // 0x226d00: 0xae4006e4  sw          $zero, 0x6E4($s2)
    ctx->pc = 0x226d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1764), GPR_U32(ctx, 0));
label_226d04:
    // 0x226d04: 0xae4006e8  sw          $zero, 0x6E8($s2)
    ctx->pc = 0x226d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1768), GPR_U32(ctx, 0));
label_226d08:
    // 0x226d08: 0xae4006ec  sw          $zero, 0x6EC($s2)
    ctx->pc = 0x226d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1772), GPR_U32(ctx, 0));
label_226d0c:
    // 0x226d0c: 0xae4006f0  sw          $zero, 0x6F0($s2)
    ctx->pc = 0x226d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1776), GPR_U32(ctx, 0));
label_226d10:
    // 0x226d10: 0xae4006f8  sw          $zero, 0x6F8($s2)
    ctx->pc = 0x226d10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1784), GPR_U32(ctx, 0));
label_226d14:
    // 0x226d14: 0xa24006fc  sb          $zero, 0x6FC($s2)
    ctx->pc = 0x226d14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1788), (uint8_t)GPR_U32(ctx, 0));
label_226d18:
    // 0x226d18: 0xae400700  sw          $zero, 0x700($s2)
    ctx->pc = 0x226d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1792), GPR_U32(ctx, 0));
label_226d1c:
    // 0x226d1c: 0xae400704  sw          $zero, 0x704($s2)
    ctx->pc = 0x226d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1796), GPR_U32(ctx, 0));
label_226d20:
    // 0x226d20: 0xa2400708  sb          $zero, 0x708($s2)
    ctx->pc = 0x226d20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1800), (uint8_t)GPR_U32(ctx, 0));
label_226d24:
    // 0x226d24: 0xa240070c  sb          $zero, 0x70C($s2)
    ctx->pc = 0x226d24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1804), (uint8_t)GPR_U32(ctx, 0));
label_226d28:
    // 0x226d28: 0xae40074c  sw          $zero, 0x74C($s2)
    ctx->pc = 0x226d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1868), GPR_U32(ctx, 0));
label_226d2c:
    // 0x226d2c: 0xae400750  sw          $zero, 0x750($s2)
    ctx->pc = 0x226d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1872), GPR_U32(ctx, 0));
label_226d30:
    // 0x226d30: 0xa642070a  sh          $v0, 0x70A($s2)
    ctx->pc = 0x226d30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1802), (uint16_t)GPR_U32(ctx, 2));
label_226d34:
    // 0x226d34: 0xc0f6a96  jal         func_3DAA58
label_226d38:
    if (ctx->pc == 0x226D38u) {
        ctx->pc = 0x226D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D34u;
        // 0x226d38: 0xae4206f4  sw          $v0, 0x6F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D3Cu;
        goto label_226d3c;
    }
    ctx->pc = 0x226D34u;
    SET_GPR_U32(ctx, 31, 0x226D3Cu);
    ctx->pc = 0x226D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D34u;
    // 0x226d38: 0xae4206f4  sw          $v0, 0x6F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1780), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226D34u, 0x226D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D3Cu;
label_226d3c:
    // 0x226d3c: 0xc0f6a96  jal         func_3DAA58
label_226d40:
    if (ctx->pc == 0x226D40u) {
        ctx->pc = 0x226D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D3Cu;
        // 0x226d40: 0x26440770  addiu       $a0, $s2, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D44u;
        goto label_226d44;
    }
    ctx->pc = 0x226D3Cu;
    SET_GPR_U32(ctx, 31, 0x226D44u);
    ctx->pc = 0x226D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D3Cu;
    // 0x226d40: 0x26440770  addiu       $a0, $s2, 0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226D3Cu, 0x226D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D44u;
label_226d44:
    // 0x226d44: 0xc0f6a96  jal         func_3DAA58
label_226d48:
    if (ctx->pc == 0x226D48u) {
        ctx->pc = 0x226D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D44u;
        // 0x226d48: 0x26440780  addiu       $a0, $s2, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D4Cu;
        goto label_226d4c;
    }
    ctx->pc = 0x226D44u;
    SET_GPR_U32(ctx, 31, 0x226D4Cu);
    ctx->pc = 0x226D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D44u;
    // 0x226d48: 0x26440780  addiu       $a0, $s2, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x226D44u, 0x226D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D4Cu;
label_226d4c:
    // 0x226d4c: 0xae400790  sw          $zero, 0x790($s2)
    ctx->pc = 0x226d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1936), GPR_U32(ctx, 0));
label_226d50:
    // 0x226d50: 0x264407a0  addiu       $a0, $s2, 0x7A0
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
label_226d54:
    // 0x226d54: 0xa2400794  sb          $zero, 0x794($s2)
    ctx->pc = 0x226d54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1940), (uint8_t)GPR_U32(ctx, 0));
label_226d58:
    // 0x226d58: 0xc093116  jal         func_24C458
label_226d5c:
    if (ctx->pc == 0x226D5Cu) {
        ctx->pc = 0x226D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D58u;
        // 0x226d5c: 0xa2400795  sb          $zero, 0x795($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1941), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D60u;
        goto label_226d60;
    }
    ctx->pc = 0x226D58u;
    SET_GPR_U32(ctx, 31, 0x226D60u);
    ctx->pc = 0x226D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D58u;
    // 0x226d5c: 0xa2400795  sb          $zero, 0x795($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1941), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C458u, 0x226D58u, 0x226D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D60u;
label_226d60:
    // 0x226d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226d64:
    // 0x226d64: 0xa2400fb0  sb          $zero, 0xFB0($s2)
    ctx->pc = 0x226d64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4016), (uint8_t)GPR_U32(ctx, 0));
label_226d68:
    // 0x226d68: 0xae400fb4  sw          $zero, 0xFB4($s2)
    ctx->pc = 0x226d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4020), GPR_U32(ctx, 0));
label_226d6c:
    // 0x226d6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226d70:
    // 0x226d70: 0xae400fbc  sw          $zero, 0xFBC($s2)
    ctx->pc = 0x226d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4028), GPR_U32(ctx, 0));
label_226d74:
    // 0x226d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226d78:
    // 0x226d78: 0xae400fc0  sw          $zero, 0xFC0($s2)
    ctx->pc = 0x226d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4032), GPR_U32(ctx, 0));
label_226d7c:
    // 0x226d7c: 0xae400fc4  sw          $zero, 0xFC4($s2)
    ctx->pc = 0x226d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4036), GPR_U32(ctx, 0));
label_226d80:
    // 0x226d80: 0xae400fc8  sw          $zero, 0xFC8($s2)
    ctx->pc = 0x226d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4040), GPR_U32(ctx, 0));
label_226d84:
    // 0x226d84: 0xae400fcc  sw          $zero, 0xFCC($s2)
    ctx->pc = 0x226d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4044), GPR_U32(ctx, 0));
label_226d88:
    // 0x226d88: 0xc08faf2  jal         func_23EBC8
label_226d8c:
    if (ctx->pc == 0x226D8Cu) {
        ctx->pc = 0x226D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D88u;
        // 0x226d8c: 0xa2420fb8  sb          $v0, 0xFB8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4024), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D90u;
        goto label_226d90;
    }
    ctx->pc = 0x226D88u;
    SET_GPR_U32(ctx, 31, 0x226D90u);
    ctx->pc = 0x226D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D88u;
    // 0x226d8c: 0xa2420fb8  sb          $v0, 0xFB8($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 4024), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EBC8u, 0x226D88u, 0x226D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D90u;
label_226d90:
    // 0x226d90: 0xae400300  sw          $zero, 0x300($s2)
    ctx->pc = 0x226d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 768), GPR_U32(ctx, 0));
label_226d94:
    // 0x226d94: 0xae400304  sw          $zero, 0x304($s2)
    ctx->pc = 0x226d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 0));
label_226d98:
    // 0x226d98: 0xae400308  sw          $zero, 0x308($s2)
    ctx->pc = 0x226d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 0));
label_226d9c:
    // 0x226d9c: 0xae400434  sw          $zero, 0x434($s2)
    ctx->pc = 0x226d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1076), GPR_U32(ctx, 0));
label_226da0:
    // 0x226da0: 0x8e0401c8  lw          $a0, 0x1C8($s0)
    ctx->pc = 0x226da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_226da4:
    // 0x226da4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_226da8:
    if (ctx->pc == 0x226DA8u) {
        ctx->pc = 0x226DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DA4u;
        // 0x226da8: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DACu;
        goto label_226dac;
    }
    ctx->pc = 0x226DA4u;
    {
        const bool branch_taken_0x226da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DA4u;
        // 0x226da8: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226da4) {
            ctx->pc = 0x226DCCu;
            goto label_226dcc;
        }
    }
    ctx->pc = 0x226DACu;
label_226dac:
    // 0x226dac: 0xc0c31d0  jal         func_30C740
label_226db0:
    if (ctx->pc == 0x226DB0u) {
        ctx->pc = 0x226DB4u;
        goto label_226db4;
    }
    ctx->pc = 0x226DACu;
    SET_GPR_U32(ctx, 31, 0x226DB4u);
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x226DACu, 0x226DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DB4u;
label_226db4:
    // 0x226db4: 0xae420328  sw          $v0, 0x328($s2)
    ctx->pc = 0x226db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 2));
label_226db8:
    // 0x226db8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226dbc:
    // 0x226dbc: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x226dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_226dc0:
    // 0x226dc0: 0x8e450328  lw          $a1, 0x328($s2)
    ctx->pc = 0x226dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_226dc4:
    // 0x226dc4: 0xc0849de  jal         func_212778
label_226dc8:
    if (ctx->pc == 0x226DC8u) {
        ctx->pc = 0x226DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DC4u;
        // 0x226dc8: 0x8e460104  lw          $a2, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DCCu;
        goto label_226dcc;
    }
    ctx->pc = 0x226DC4u;
    SET_GPR_U32(ctx, 31, 0x226DCCu);
    ctx->pc = 0x226DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DC4u;
    // 0x226dc8: 0x8e460104  lw          $a2, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212778u, 0x226DC4u, 0x226DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DCCu;
label_226dcc:
    // 0x226dcc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x226dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_226dd0:
    // 0x226dd0: 0x26315ad0  addiu       $s1, $s1, 0x5AD0
    ctx->pc = 0x226dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23248));
label_226dd4:
    // 0x226dd4: 0xc0b2af0  jal         func_2CABC0
label_226dd8:
    if (ctx->pc == 0x226DD8u) {
        ctx->pc = 0x226DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DD4u;
        // 0x226dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DDCu;
        goto label_226ddc;
    }
    ctx->pc = 0x226DD4u;
    SET_GPR_U32(ctx, 31, 0x226DDCu);
    ctx->pc = 0x226DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DD4u;
    // 0x226dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x226DD4u, 0x226DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DDCu;
label_226ddc:
    // 0x226ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226de0:
    // 0x226de0: 0xc0b1488  jal         func_2C5220
label_226de4:
    if (ctx->pc == 0x226DE4u) {
        ctx->pc = 0x226DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DE0u;
        // 0x226de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DE8u;
        goto label_226de8;
    }
    ctx->pc = 0x226DE0u;
    SET_GPR_U32(ctx, 31, 0x226DE8u);
    ctx->pc = 0x226DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DE0u;
    // 0x226de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x226DE0u, 0x226DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DE8u;
label_226de8:
    // 0x226de8: 0xc0b1488  jal         func_2C5220
label_226dec:
    if (ctx->pc == 0x226DECu) {
        ctx->pc = 0x226DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DE8u;
        // 0x226dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DF0u;
        goto label_226df0;
    }
    ctx->pc = 0x226DE8u;
    SET_GPR_U32(ctx, 31, 0x226DF0u);
    ctx->pc = 0x226DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DE8u;
    // 0x226dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x226DE8u, 0x226DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DF0u;
label_226df0:
    // 0x226df0: 0xae500470  sw          $s0, 0x470($s2)
    ctx->pc = 0x226df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1136), GPR_U32(ctx, 16));
label_226df4:
    // 0x226df4: 0xc0b1488  jal         func_2C5220
label_226df8:
    if (ctx->pc == 0x226DF8u) {
        ctx->pc = 0x226DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DF4u;
        // 0x226df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DFCu;
        goto label_226dfc;
    }
    ctx->pc = 0x226DF4u;
    SET_GPR_U32(ctx, 31, 0x226DFCu);
    ctx->pc = 0x226DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DF4u;
    // 0x226df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x226DF4u, 0x226DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DFCu;
label_226dfc:
    // 0x226dfc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x226dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_226e00:
    // 0x226e00: 0xc0b2af0  jal         func_2CABC0
label_226e04:
    if (ctx->pc == 0x226E04u) {
        ctx->pc = 0x226E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E00u;
        // 0x226e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E08u;
        goto label_226e08;
    }
    ctx->pc = 0x226E00u;
    SET_GPR_U32(ctx, 31, 0x226E08u);
    ctx->pc = 0x226E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E00u;
    // 0x226e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x226E00u, 0x226E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E08u;
label_226e08:
    // 0x226e08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226e0c:
    // 0x226e0c: 0xc0b1488  jal         func_2C5220
label_226e10:
    if (ctx->pc == 0x226E10u) {
        ctx->pc = 0x226E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E0Cu;
        // 0x226e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E14u;
        goto label_226e14;
    }
    ctx->pc = 0x226E0Cu;
    SET_GPR_U32(ctx, 31, 0x226E14u);
    ctx->pc = 0x226E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E0Cu;
    // 0x226e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x226E0Cu, 0x226E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E14u;
label_226e14:
    // 0x226e14: 0xc0b1488  jal         func_2C5220
label_226e18:
    if (ctx->pc == 0x226E18u) {
        ctx->pc = 0x226E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E14u;
        // 0x226e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E1Cu;
        goto label_226e1c;
    }
    ctx->pc = 0x226E14u;
    SET_GPR_U32(ctx, 31, 0x226E1Cu);
    ctx->pc = 0x226E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E14u;
    // 0x226e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x226E14u, 0x226E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E1Cu;
label_226e1c:
    // 0x226e1c: 0xae500474  sw          $s0, 0x474($s2)
    ctx->pc = 0x226e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1140), GPR_U32(ctx, 16));
label_226e20:
    // 0x226e20: 0xc0b1488  jal         func_2C5220
label_226e24:
    if (ctx->pc == 0x226E24u) {
        ctx->pc = 0x226E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E20u;
        // 0x226e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E28u;
        goto label_226e28;
    }
    ctx->pc = 0x226E20u;
    SET_GPR_U32(ctx, 31, 0x226E28u);
    ctx->pc = 0x226E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E20u;
    // 0x226e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x226E20u, 0x226E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E28u;
label_226e28:
    // 0x226e28: 0x8e5000b8  lw          $s0, 0xB8($s2)
    ctx->pc = 0x226e28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_226e2c:
    // 0x226e2c: 0x860201d0  lh          $v0, 0x1D0($s0)
    ctx->pc = 0x226e2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 464)));
label_226e30:
    // 0x226e30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_226e34:
    if (ctx->pc == 0x226E34u) {
        ctx->pc = 0x226E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E30u;
        // 0x226e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E38u;
        goto label_226e38;
    }
    ctx->pc = 0x226E30u;
    {
        const bool branch_taken_0x226e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E30u;
        // 0x226e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e30) {
            ctx->pc = 0x226E3Cu;
            goto label_226e3c;
        }
    }
    ctx->pc = 0x226E38u;
label_226e38:
    // 0x226e38: 0x8e0201cc  lw          $v0, 0x1CC($s0)
    ctx->pc = 0x226e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_226e3c:
    // 0x226e3c: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_226e40:
    if (ctx->pc == 0x226E40u) {
        ctx->pc = 0x226E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E3Cu;
        // 0x226e40: 0xae40032c  sw          $zero, 0x32C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E44u;
        goto label_226e44;
    }
    ctx->pc = 0x226E3Cu;
    {
        const bool branch_taken_0x226e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226e3c) {
            ctx->pc = 0x226E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226E3Cu;
            // 0x226e40: 0xae40032c  sw          $zero, 0x32C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226EF4u;
            goto label_226ef4;
        }
    }
    ctx->pc = 0x226E44u;
label_226e44:
    // 0x226e44: 0xc0d737c  jal         func_35CDF0
label_226e48:
    if (ctx->pc == 0x226E48u) {
        ctx->pc = 0x226E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E44u;
        // 0x226e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E4Cu;
        goto label_226e4c;
    }
    ctx->pc = 0x226E44u;
    SET_GPR_U32(ctx, 31, 0x226E4Cu);
    ctx->pc = 0x226E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E44u;
    // 0x226e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x226E44u, 0x226E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E4Cu;
label_226e4c:
    // 0x226e4c: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x226e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_226e50:
    // 0x226e50: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x226e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_226e54:
    // 0x226e54: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_226e58:
    if (ctx->pc == 0x226E58u) {
        ctx->pc = 0x226E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E54u;
        // 0x226e58: 0x860201d0  lh          $v0, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E5Cu;
        goto label_226e5c;
    }
    ctx->pc = 0x226E54u;
    {
        const bool branch_taken_0x226e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226e54) {
            ctx->pc = 0x226E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226E54u;
            // 0x226e58: 0x860201d0  lh          $v0, 0x1D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226EACu;
            goto label_226eac;
        }
    }
    ctx->pc = 0x226E5Cu;
label_226e5c:
    // 0x226e5c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x226e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_226e60:
    // 0x226e60: 0x260501cc  addiu       $a1, $s0, 0x1CC
    ctx->pc = 0x226e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 460));
label_226e64:
    // 0x226e64: 0xc0d7394  jal         func_35CE50
label_226e68:
    if (ctx->pc == 0x226E68u) {
        ctx->pc = 0x226E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E64u;
        // 0x226e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E6Cu;
        goto label_226e6c;
    }
    ctx->pc = 0x226E64u;
    SET_GPR_U32(ctx, 31, 0x226E6Cu);
    ctx->pc = 0x226E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E64u;
    // 0x226e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x226E64u, 0x226E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E6Cu;
label_226e6c:
    // 0x226e6c: 0x8e0601d4  lw          $a2, 0x1D4($s0)
    ctx->pc = 0x226e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_226e70:
    // 0x226e70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226e74:
    // 0x226e74: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x226e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_226e78:
    // 0x226e78: 0xc09e948  jal         func_27A520
label_226e7c:
    if (ctx->pc == 0x226E7Cu) {
        ctx->pc = 0x226E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E78u;
        // 0x226e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E80u;
        goto label_226e80;
    }
    ctx->pc = 0x226E78u;
    SET_GPR_U32(ctx, 31, 0x226E80u);
    ctx->pc = 0x226E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E78u;
    // 0x226e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A520u, 0x226E78u, 0x226E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E80u;
label_226e80:
    // 0x226e80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_226e84:
    // 0x226e84: 0xc0d745c  jal         func_35D170
label_226e88:
    if (ctx->pc == 0x226E88u) {
        ctx->pc = 0x226E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E84u;
        // 0x226e88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E8Cu;
        goto label_226e8c;
    }
    ctx->pc = 0x226E84u;
    SET_GPR_U32(ctx, 31, 0x226E8Cu);
    ctx->pc = 0x226E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E84u;
    // 0x226e88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x226E84u, 0x226E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E8Cu;
label_226e8c:
    // 0x226e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226e90:
    // 0x226e90: 0xc0d7412  jal         func_35D048
label_226e94:
    if (ctx->pc == 0x226E94u) {
        ctx->pc = 0x226E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E90u;
        // 0x226e94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E98u;
        goto label_226e98;
    }
    ctx->pc = 0x226E90u;
    SET_GPR_U32(ctx, 31, 0x226E98u);
    ctx->pc = 0x226E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E90u;
    // 0x226e94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x226E90u, 0x226E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E98u;
label_226e98:
    // 0x226e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226e9c:
    // 0x226e9c: 0xc0d7412  jal         func_35D048
label_226ea0:
    if (ctx->pc == 0x226EA0u) {
        ctx->pc = 0x226EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E9Cu;
        // 0x226ea0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EA4u;
        goto label_226ea4;
    }
    ctx->pc = 0x226E9Cu;
    SET_GPR_U32(ctx, 31, 0x226EA4u);
    ctx->pc = 0x226EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E9Cu;
    // 0x226ea0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x226E9Cu, 0x226EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EA4u;
label_226ea4:
    // 0x226ea4: 0x10000006  b           . + 4 + (0x6 << 2)
label_226ea8:
    if (ctx->pc == 0x226EA8u) {
        ctx->pc = 0x226EACu;
        goto label_226eac;
    }
    ctx->pc = 0x226EA4u;
    {
        const bool branch_taken_0x226ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ea4) {
            ctx->pc = 0x226EC0u;
            goto label_226ec0;
        }
    }
    ctx->pc = 0x226EACu;
label_226eac:
    // 0x226eac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_226eb0:
    if (ctx->pc == 0x226EB0u) {
        ctx->pc = 0x226EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EACu;
        // 0x226eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EB4u;
        goto label_226eb4;
    }
    ctx->pc = 0x226EACu;
    {
        const bool branch_taken_0x226eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EACu;
        // 0x226eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226eac) {
            ctx->pc = 0x226EB8u;
            goto label_226eb8;
        }
    }
    ctx->pc = 0x226EB4u;
label_226eb4:
    // 0x226eb4: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x226eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_226eb8:
    // 0x226eb8: 0xc0d7468  jal         func_35D1A0
label_226ebc:
    if (ctx->pc == 0x226EBCu) {
        ctx->pc = 0x226EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EB8u;
        // 0x226ebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EC0u;
        goto label_226ec0;
    }
    ctx->pc = 0x226EB8u;
    SET_GPR_U32(ctx, 31, 0x226EC0u);
    ctx->pc = 0x226EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EB8u;
    // 0x226ebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x226EB8u, 0x226EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EC0u;
label_226ec0:
    // 0x226ec0: 0xc085d2a  jal         func_2174A8
label_226ec4:
    if (ctx->pc == 0x226EC4u) {
        ctx->pc = 0x226EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EC0u;
        // 0x226ec4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EC8u;
        goto label_226ec8;
    }
    ctx->pc = 0x226EC0u;
    SET_GPR_U32(ctx, 31, 0x226EC8u);
    ctx->pc = 0x226EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EC0u;
    // 0x226ec4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x226EC0u, 0x226EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EC8u;
label_226ec8:
    // 0x226ec8: 0xc083072  jal         func_20C1C8
label_226ecc:
    if (ctx->pc == 0x226ECCu) {
        ctx->pc = 0x226ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EC8u;
        // 0x226ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226ED0u;
        goto label_226ed0;
    }
    ctx->pc = 0x226EC8u;
    SET_GPR_U32(ctx, 31, 0x226ED0u);
    ctx->pc = 0x226ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EC8u;
    // 0x226ecc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x226EC8u, 0x226ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226ED0u;
label_226ed0:
    // 0x226ed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226ed4:
    // 0x226ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226ed8:
    // 0x226ed8: 0xc0966b4  jal         func_259AD0
label_226edc:
    if (ctx->pc == 0x226EDCu) {
        ctx->pc = 0x226EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226ED8u;
        // 0x226edc: 0xae42032c  sw          $v0, 0x32C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EE0u;
        goto label_226ee0;
    }
    ctx->pc = 0x226ED8u;
    SET_GPR_U32(ctx, 31, 0x226EE0u);
    ctx->pc = 0x226EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226ED8u;
    // 0x226edc: 0xae42032c  sw          $v0, 0x32C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259AD0u, 0x226ED8u, 0x226EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EE0u;
label_226ee0:
    // 0x226ee0: 0xc08442a  jal         func_2110A8
label_226ee4:
    if (ctx->pc == 0x226EE4u) {
        ctx->pc = 0x226EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EE0u;
        // 0x226ee4: 0x8e44032c  lw          $a0, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EE8u;
        goto label_226ee8;
    }
    ctx->pc = 0x226EE0u;
    SET_GPR_U32(ctx, 31, 0x226EE8u);
    ctx->pc = 0x226EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EE0u;
    // 0x226ee4: 0x8e44032c  lw          $a0, 0x32C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110A8u, 0x226EE0u, 0x226EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EE8u;
label_226ee8:
    // 0x226ee8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x226ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_226eec:
    // 0x226eec: 0xc0d7412  jal         func_35D048
label_226ef0:
    if (ctx->pc == 0x226EF0u) {
        ctx->pc = 0x226EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EECu;
        // 0x226ef0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EF4u;
        goto label_226ef4;
    }
    ctx->pc = 0x226EECu;
    SET_GPR_U32(ctx, 31, 0x226EF4u);
    ctx->pc = 0x226EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EECu;
    // 0x226ef0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x226EECu, 0x226EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EF4u;
label_226ef4:
    // 0x226ef4: 0xc0f5240  jal         func_3D4900
label_226ef8:
    if (ctx->pc == 0x226EF8u) {
        ctx->pc = 0x226EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226EF4u;
        // 0x226ef8: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226EFCu;
        goto label_226efc;
    }
    ctx->pc = 0x226EF4u;
    SET_GPR_U32(ctx, 31, 0x226EFCu);
    ctx->pc = 0x226EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EF4u;
    // 0x226ef8: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x226EF4u, 0x226EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EFCu;
label_226efc:
    // 0x226efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226f00:
    // 0x226f00: 0xc0695c4  jal         func_1A5710
label_226f04:
    if (ctx->pc == 0x226F04u) {
        ctx->pc = 0x226F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F00u;
        // 0x226f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F08u;
        goto label_226f08;
    }
    ctx->pc = 0x226F00u;
    SET_GPR_U32(ctx, 31, 0x226F08u);
    ctx->pc = 0x226F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F00u;
    // 0x226f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5710u, 0x226F00u, 0x226F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F08u;
label_226f08:
    // 0x226f08: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_226f0c:
    // 0x226f0c: 0xc0f5240  jal         func_3D4900
label_226f10:
    if (ctx->pc == 0x226F10u) {
        ctx->pc = 0x226F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F0Cu;
        // 0x226f10: 0xae420334  sw          $v0, 0x334($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F14u;
        goto label_226f14;
    }
    ctx->pc = 0x226F0Cu;
    SET_GPR_U32(ctx, 31, 0x226F14u);
    ctx->pc = 0x226F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F0Cu;
    // 0x226f10: 0xae420334  sw          $v0, 0x334($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x226F0Cu, 0x226F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F14u;
label_226f14:
    // 0x226f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226f18:
    // 0x226f18: 0xc06b762  jal         func_1ADD88
label_226f1c:
    if (ctx->pc == 0x226F1Cu) {
        ctx->pc = 0x226F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F18u;
        // 0x226f1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F20u;
        goto label_226f20;
    }
    ctx->pc = 0x226F18u;
    SET_GPR_U32(ctx, 31, 0x226F20u);
    ctx->pc = 0x226F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F18u;
    // 0x226f1c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADD88u, 0x226F18u, 0x226F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F20u;
label_226f20:
    // 0x226f20: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_226f24:
    // 0x226f24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226f28:
    // 0x226f28: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_226f2c:
    // 0x226f2c: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x226f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_226f30:
    // 0x226f30: 0xae4002bc  sw          $zero, 0x2BC($s2)
    ctx->pc = 0x226f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 0));
label_226f34:
    // 0x226f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226f38:
    // 0x226f38: 0xae4002c0  sw          $zero, 0x2C0($s2)
    ctx->pc = 0x226f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 0));
label_226f3c:
    // 0x226f3c: 0x264502bc  addiu       $a1, $s2, 0x2BC
    ctx->pc = 0x226f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 700));
label_226f40:
    // 0x226f40: 0xae4002c4  sw          $zero, 0x2C4($s2)
    ctx->pc = 0x226f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 708), GPR_U32(ctx, 0));
label_226f44:
    // 0x226f44: 0xae4002c8  sw          $zero, 0x2C8($s2)
    ctx->pc = 0x226f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 0));
label_226f48:
    // 0x226f48: 0xae4002d8  sw          $zero, 0x2D8($s2)
    ctx->pc = 0x226f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 0));
label_226f4c:
    // 0x226f4c: 0xae4002dc  sw          $zero, 0x2DC($s2)
    ctx->pc = 0x226f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 732), GPR_U32(ctx, 0));
label_226f50:
    // 0x226f50: 0xae420338  sw          $v0, 0x338($s2)
    ctx->pc = 0x226f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 2));
label_226f54:
    // 0x226f54: 0xae4302cc  sw          $v1, 0x2CC($s2)
    ctx->pc = 0x226f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 716), GPR_U32(ctx, 3));
label_226f58:
    // 0x226f58: 0xc07e646  jal         func_1F9918
label_226f5c:
    if (ctx->pc == 0x226F5Cu) {
        ctx->pc = 0x226F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F58u;
        // 0x226f5c: 0xa64602b8  sh          $a2, 0x2B8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 696), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F60u;
        goto label_226f60;
    }
    ctx->pc = 0x226F58u;
    SET_GPR_U32(ctx, 31, 0x226F60u);
    ctx->pc = 0x226F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F58u;
    // 0x226f5c: 0xa64602b8  sh          $a2, 0x2B8($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 696), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x226F58u, 0x226F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F60u;
label_226f60:
    // 0x226f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226f64:
    // 0x226f64: 0xc07e646  jal         func_1F9918
label_226f68:
    if (ctx->pc == 0x226F68u) {
        ctx->pc = 0x226F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F64u;
        // 0x226f68: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F6Cu;
        goto label_226f6c;
    }
    ctx->pc = 0x226F64u;
    SET_GPR_U32(ctx, 31, 0x226F6Cu);
    ctx->pc = 0x226F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F64u;
    // 0x226f68: 0x264502c0  addiu       $a1, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x226F64u, 0x226F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F6Cu;
label_226f6c:
    // 0x226f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226f70:
    // 0x226f70: 0xc07e646  jal         func_1F9918
label_226f74:
    if (ctx->pc == 0x226F74u) {
        ctx->pc = 0x226F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F70u;
        // 0x226f74: 0x264502c4  addiu       $a1, $s2, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 708));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F78u;
        goto label_226f78;
    }
    ctx->pc = 0x226F70u;
    SET_GPR_U32(ctx, 31, 0x226F78u);
    ctx->pc = 0x226F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F70u;
    // 0x226f74: 0x264502c4  addiu       $a1, $s2, 0x2C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x226F70u, 0x226F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F78u;
label_226f78:
    // 0x226f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226f7c:
    // 0x226f7c: 0xc07e646  jal         func_1F9918
label_226f80:
    if (ctx->pc == 0x226F80u) {
        ctx->pc = 0x226F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F7Cu;
        // 0x226f80: 0x264502c8  addiu       $a1, $s2, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F84u;
        goto label_226f84;
    }
    ctx->pc = 0x226F7Cu;
    SET_GPR_U32(ctx, 31, 0x226F84u);
    ctx->pc = 0x226F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F7Cu;
    // 0x226f80: 0x264502c8  addiu       $a1, $s2, 0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x226F7Cu, 0x226F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F84u;
label_226f84:
    // 0x226f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226f88:
    // 0x226f88: 0xc07e646  jal         func_1F9918
label_226f8c:
    if (ctx->pc == 0x226F8Cu) {
        ctx->pc = 0x226F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F88u;
        // 0x226f8c: 0x264502d8  addiu       $a1, $s2, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F90u;
        goto label_226f90;
    }
    ctx->pc = 0x226F88u;
    SET_GPR_U32(ctx, 31, 0x226F90u);
    ctx->pc = 0x226F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F88u;
    // 0x226f8c: 0x264502d8  addiu       $a1, $s2, 0x2D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x226F88u, 0x226F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F90u;
label_226f90:
    // 0x226f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226f94:
    // 0x226f94: 0xc07e646  jal         func_1F9918
label_226f98:
    if (ctx->pc == 0x226F98u) {
        ctx->pc = 0x226F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F94u;
        // 0x226f98: 0x264502dc  addiu       $a1, $s2, 0x2DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 732));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226F9Cu;
        goto label_226f9c;
    }
    ctx->pc = 0x226F94u;
    SET_GPR_U32(ctx, 31, 0x226F9Cu);
    ctx->pc = 0x226F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F94u;
    // 0x226f98: 0x264502dc  addiu       $a1, $s2, 0x2DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x226F94u, 0x226F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F9Cu;
label_226f9c:
    // 0x226f9c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x226f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_226fa0:
    // 0x226fa0: 0xae4002e4  sw          $zero, 0x2E4($s2)
    ctx->pc = 0x226fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 740), GPR_U32(ctx, 0));
label_226fa4:
    // 0x226fa4: 0xa24202e0  sb          $v0, 0x2E0($s2)
    ctx->pc = 0x226fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 736), (uint8_t)GPR_U32(ctx, 2));
label_226fa8:
    // 0x226fa8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x226fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_226fac:
    // 0x226fac: 0xa2400fb1  sb          $zero, 0xFB1($s2)
    ctx->pc = 0x226facu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4017), (uint8_t)GPR_U32(ctx, 0));
label_226fb0:
    // 0x226fb0: 0xae4002e8  sw          $zero, 0x2E8($s2)
    ctx->pc = 0x226fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 744), GPR_U32(ctx, 0));
label_226fb4:
    // 0x226fb4: 0xae400390  sw          $zero, 0x390($s2)
    ctx->pc = 0x226fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 912), GPR_U32(ctx, 0));
label_226fb8:
    // 0x226fb8: 0xae400710  sw          $zero, 0x710($s2)
    ctx->pc = 0x226fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1808), GPR_U32(ctx, 0));
label_226fbc:
    // 0x226fbc: 0xae400714  sw          $zero, 0x714($s2)
    ctx->pc = 0x226fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1812), GPR_U32(ctx, 0));
label_226fc0:
    // 0x226fc0: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x226fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_226fc4:
    // 0x226fc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x226fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_226fc8:
    // 0x226fc8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_226fcc:
    if (ctx->pc == 0x226FCCu) {
        ctx->pc = 0x226FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FC8u;
        // 0x226fcc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226FD0u;
        goto label_226fd0;
    }
    ctx->pc = 0x226FC8u;
    {
        const bool branch_taken_0x226fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226fc8) {
            ctx->pc = 0x226FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226FC8u;
            // 0x226fcc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227008u;
            goto label_227008;
        }
    }
    ctx->pc = 0x226FD0u;
label_226fd0:
    // 0x226fd0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x226fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_226fd4:
    // 0x226fd4: 0xc085d2a  jal         func_2174A8
label_226fd8:
    if (ctx->pc == 0x226FD8u) {
        ctx->pc = 0x226FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FD4u;
        // 0x226fd8: 0x24844308  addiu       $a0, $a0, 0x4308 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226FDCu;
        goto label_226fdc;
    }
    ctx->pc = 0x226FD4u;
    SET_GPR_U32(ctx, 31, 0x226FDCu);
    ctx->pc = 0x226FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FD4u;
    // 0x226fd8: 0x24844308  addiu       $a0, $a0, 0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x226FD4u, 0x226FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FDCu;
label_226fdc:
    // 0x226fdc: 0xc083072  jal         func_20C1C8
label_226fe0:
    if (ctx->pc == 0x226FE0u) {
        ctx->pc = 0x226FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FDCu;
        // 0x226fe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226FE4u;
        goto label_226fe4;
    }
    ctx->pc = 0x226FDCu;
    SET_GPR_U32(ctx, 31, 0x226FE4u);
    ctx->pc = 0x226FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FDCu;
    // 0x226fe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x226FDCu, 0x226FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FE4u;
label_226fe4:
    // 0x226fe4: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x226fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_226fe8:
    // 0x226fe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226fec:
    // 0x226fec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_226ff0:
    // 0x226ff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x226ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226ff4:
    // 0x226ff4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x226ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_226ff8:
    // 0x226ff8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x226ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226ffc:
    // 0x226ffc: 0x40f809  jalr        $v0
label_227000:
    if (ctx->pc == 0x227000u) {
        ctx->pc = 0x227000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FFCu;
        // 0x227000: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227004u;
        goto label_227004;
    }
    ctx->pc = 0x226FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x227004u);
        ctx->pc = 0x227000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FFCu;
        // 0x227000: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226FFCu, 0x227004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x227004u;
label_227004:
    // 0x227004: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x227004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_227008:
    // 0x227008: 0x26430344  addiu       $v1, $s2, 0x344
    ctx->pc = 0x227008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 836));
label_22700c:
    // 0x22700c: 0x264207a0  addiu       $v0, $s2, 0x7A0
    ctx->pc = 0x22700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
label_227010:
    // 0x227010: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x227010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_227014:
    // 0x227014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227018:
    // 0x227018: 0xc06b85c  jal         func_1AE170
label_22701c:
    if (ctx->pc == 0x22701Cu) {
        ctx->pc = 0x22701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227018u;
        // 0x22701c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227020u;
        goto label_227020;
    }
    ctx->pc = 0x227018u;
    SET_GPR_U32(ctx, 31, 0x227020u);
    ctx->pc = 0x22701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227018u;
    // 0x22701c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x227018u, 0x227020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227020u;
label_227020:
    // 0x227020: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x227020u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_227024:
    // 0x227024: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x227024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_227028:
    // 0x227028: 0x26420534  addiu       $v0, $s2, 0x534
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1332));
label_22702c:
    // 0x22702c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x22702cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_227030:
    // 0x227030: 0x26420608  addiu       $v0, $s2, 0x608
    ctx->pc = 0x227030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1544));
label_227034:
    // 0x227034: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x227034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_227038:
    // 0x227038: 0x264204bc  addiu       $v0, $s2, 0x4BC
    ctx->pc = 0x227038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1212));
label_22703c:
    // 0x22703c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x22703cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_227040:
    // 0x227040: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_227044:
    // 0x227044: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x227044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227048:
    // 0x227048: 0xc0f52a8  jal         func_3D4AA0
label_22704c:
    if (ctx->pc == 0x22704Cu) {
        ctx->pc = 0x22704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227048u;
        // 0x22704c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227050u;
        goto label_227050;
    }
    ctx->pc = 0x227048u;
    SET_GPR_U32(ctx, 31, 0x227050u);
    ctx->pc = 0x22704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227048u;
    // 0x22704c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x227048u, 0x227050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227050u;
label_227050:
    // 0x227050: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x227050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_227054:
    // 0x227054: 0x24050447  addiu       $a1, $zero, 0x447
    ctx->pc = 0x227054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
label_227058:
    // 0x227058: 0xc0c326a  jal         func_30C9A8
label_22705c:
    if (ctx->pc == 0x22705Cu) {
        ctx->pc = 0x22705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227058u;
        // 0x22705c: 0xae42033c  sw          $v0, 0x33C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227060u;
        goto label_227060;
    }
    ctx->pc = 0x227058u;
    SET_GPR_U32(ctx, 31, 0x227060u);
    ctx->pc = 0x22705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227058u;
    // 0x22705c: 0xae42033c  sw          $v0, 0x33C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 828), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9A8u, 0x227058u, 0x227060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227060u;
label_227060:
    // 0x227060: 0xae4206f0  sw          $v0, 0x6F0($s2)
    ctx->pc = 0x227060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1776), GPR_U32(ctx, 2));
label_227064:
    // 0x227064: 0x26420368  addiu       $v0, $s2, 0x368
    ctx->pc = 0x227064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 872));
label_227068:
    // 0x227068: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x227068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_22706c:
    // 0x22706c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x22706cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_227070:
    // 0x227070: 0x0  nop
    ctx->pc = 0x227070u;
    // NOP
label_227074:
    // 0x227074: 0x0  nop
    ctx->pc = 0x227074u;
    // NOP
label_227078:
    // 0x227078: 0x6a1fffb  bgez        $s5, . + 4 + (-0x5 << 2)
label_22707c:
    if (ctx->pc == 0x22707Cu) {
        ctx->pc = 0x22707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227078u;
        // 0x22707c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227080u;
        goto label_227080;
    }
    ctx->pc = 0x227078u;
    {
        const bool branch_taken_0x227078 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x22707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227078u;
        // 0x22707c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227078) {
            ctx->pc = 0x227068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227068;
        }
    }
    ctx->pc = 0x227080u;
label_227080:
    // 0x227080: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x227080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_227084:
    // 0x227084: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x227084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_227088:
    // 0x227088: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x227088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22708c:
    // 0x22708c: 0x18600097  blez        $v1, . + 4 + (0x97 << 2)
label_227090:
    if (ctx->pc == 0x227090u) {
        ctx->pc = 0x227090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22708Cu;
        // 0x227090: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227094u;
        goto label_227094;
    }
    ctx->pc = 0x22708Cu;
    {
        const bool branch_taken_0x22708c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x227090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22708Cu;
        // 0x227090: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22708c) {
            ctx->pc = 0x2272ECu;
            goto label_2272ec;
        }
    }
    ctx->pc = 0x227094u;
label_227094:
    // 0x227094: 0x8e42033c  lw          $v0, 0x33C($s2)
    ctx->pc = 0x227094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227098:
    // 0x227098: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x227098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22709c:
    // 0x22709c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x22709cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2270a0:
    // 0x2270a0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2270a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2270a4:
    // 0x2270a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2270a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2270a8:
    // 0x2270a8: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x2270a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2270ac:
    // 0x2270ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2270acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2270b0:
    // 0x2270b0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2270b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2270b4:
    // 0x2270b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2270b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2270b8:
    // 0x2270b8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2270b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_2270bc:
    // 0x2270bc: 0x24c697f8  addiu       $a2, $a2, -0x6808
    ctx->pc = 0x2270bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940664));
label_2270c0:
    // 0x2270c0: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2270c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2270c4:
    // 0x2270c4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2270c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_2270c8:
    // 0x2270c8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2270c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2270cc:
    // 0x2270cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2270ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2270d0:
    // 0x2270d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2270d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2270d4:
    // 0x2270d4: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x2270d4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2270d8:
    // 0x2270d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2270d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2270dc:
    // 0x2270dc: 0x10540030  beq         $v0, $s4, . + 4 + (0x30 << 2)
label_2270e0:
    if (ctx->pc == 0x2270E0u) {
        ctx->pc = 0x2270E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270DCu;
        // 0x2270e0: 0x15b0c0  sll         $s6, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270E4u;
        goto label_2270e4;
    }
    ctx->pc = 0x2270DCu;
    {
        const bool branch_taken_0x2270dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2270E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270DCu;
        // 0x2270e0: 0x15b0c0  sll         $s6, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270dc) {
            ctx->pc = 0x2271A0u;
            goto label_2271a0;
        }
    }
    ctx->pc = 0x2270E4u;
label_2270e4:
    // 0x2270e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2270e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2270e8:
    // 0x2270e8: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x2270e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
label_2270ec:
    // 0x2270ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2270f0:
    if (ctx->pc == 0x2270F0u) {
        ctx->pc = 0x2270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ECu;
        // 0x2270f0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2270F4u;
        goto label_2270f4;
    }
    ctx->pc = 0x2270ECu;
    {
        const bool branch_taken_0x2270ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ECu;
        // 0x2270f0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270ec) {
            ctx->pc = 0x2270D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2270d8;
        }
    }
    ctx->pc = 0x2270F4u;
label_2270f4:
    // 0x2270f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2270f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2270f8:
    // 0x2270f8: 0x56a20075  bnel        $s5, $v0, . + 4 + (0x75 << 2)
label_2270fc:
    if (ctx->pc == 0x2270FCu) {
        ctx->pc = 0x2270FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270F8u;
        // 0x2270fc: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227100u;
        goto label_227100;
    }
    ctx->pc = 0x2270F8u;
    {
        const bool branch_taken_0x2270f8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2270f8) {
            ctx->pc = 0x2270FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2270F8u;
            // 0x2270fc: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2272D0u;
            goto label_2272d0;
        }
    }
    ctx->pc = 0x227100u;
label_227100:
    // 0x227100: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x227100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_227104:
    // 0x227104: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227108:
    // 0x227108: 0x24439848  addiu       $v1, $v0, -0x67B8
    ctx->pc = 0x227108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940744));
label_22710c:
    // 0x22710c: 0x0  nop
    ctx->pc = 0x22710cu;
    // NOP
label_227110:
    // 0x227110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227114:
    // 0x227114: 0x12820012  beq         $s4, $v0, . + 4 + (0x12 << 2)
label_227118:
    if (ctx->pc == 0x227118u) {
        ctx->pc = 0x227118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227114u;
        // 0x227118: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22711Cu;
        goto label_22711c;
    }
    ctx->pc = 0x227114u;
    {
        const bool branch_taken_0x227114 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x227118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227114u;
        // 0x227118: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227114) {
            ctx->pc = 0x227160u;
            goto label_227160;
        }
    }
    ctx->pc = 0x22711Cu;
label_22711c:
    // 0x22711c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22711cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_227120:
    // 0x227120: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x227120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_227124:
    // 0x227124: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_227128:
    if (ctx->pc == 0x227128u) {
        ctx->pc = 0x227128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227124u;
        // 0x227128: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22712Cu;
        goto label_22712c;
    }
    ctx->pc = 0x227124u;
    {
        const bool branch_taken_0x227124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227124u;
        // 0x227128: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227124) {
            ctx->pc = 0x227110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227110;
        }
    }
    ctx->pc = 0x22712Cu;
label_22712c:
    // 0x22712c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22712cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_227130:
    // 0x227130: 0x56020067  bnel        $s0, $v0, . + 4 + (0x67 << 2)
label_227134:
    if (ctx->pc == 0x227134u) {
        ctx->pc = 0x227134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227130u;
        // 0x227134: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227138u;
        goto label_227138;
    }
    ctx->pc = 0x227130u;
    {
        const bool branch_taken_0x227130 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x227130) {
            ctx->pc = 0x227134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227130u;
            // 0x227134: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2272D0u;
            goto label_2272d0;
        }
    }
    ctx->pc = 0x227138u;
label_227138:
    // 0x227138: 0x2683fc18  addiu       $v1, $s4, -0x3E8
    ctx->pc = 0x227138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966296));
label_22713c:
    // 0x22713c: 0x2c620060  sltiu       $v0, $v1, 0x60
    ctx->pc = 0x22713cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
label_227140:
    // 0x227140: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_227144:
    if (ctx->pc == 0x227144u) {
        ctx->pc = 0x227144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227140u;
        // 0x227144: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227148u;
        goto label_227148;
    }
    ctx->pc = 0x227140u;
    {
        const bool branch_taken_0x227140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227140u;
        // 0x227144: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227140) {
            ctx->pc = 0x2272CCu;
            goto label_2272cc;
        }
    }
    ctx->pc = 0x227148u;
label_227148:
    // 0x227148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x227148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22714c:
    // 0x22714c: 0x24424310  addiu       $v0, $v0, 0x4310
    ctx->pc = 0x22714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17168));
label_227150:
    // 0x227150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_227154:
    // 0x227154: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x227154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227158:
    // 0x227158: 0x800008  jr          $a0
label_22715c:
    if (ctx->pc == 0x22715Cu) {
        ctx->pc = 0x227160u;
        goto label_227160;
    }
    ctx->pc = 0x227158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22723Cu: goto label_22723c;
            case 0x227280u: goto label_227280;
            case 0x2272CCu: goto label_2272cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227158u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x227160u;
label_227160:
    // 0x227160: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_227164:
    // 0x227164: 0xc0b2af0  jal         func_2CABC0
label_227168:
    if (ctx->pc == 0x227168u) {
        ctx->pc = 0x227168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227164u;
        // 0x227168: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22716Cu;
        goto label_22716c;
    }
    ctx->pc = 0x227164u;
    SET_GPR_U32(ctx, 31, 0x22716Cu);
    ctx->pc = 0x227168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227164u;
    // 0x227168: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x227164u, 0x22716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22716Cu;
label_22716c:
    // 0x22716c: 0xc0c4808  jal         func_312020
label_227170:
    if (ctx->pc == 0x227170u) {
        ctx->pc = 0x227170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22716Cu;
        // 0x227170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227174u;
        goto label_227174;
    }
    ctx->pc = 0x22716Cu;
    SET_GPR_U32(ctx, 31, 0x227174u);
    ctx->pc = 0x227170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22716Cu;
    // 0x227170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x22716Cu, 0x227174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227174u;
label_227174:
    // 0x227174: 0x8e43033c  lw          $v1, 0x33C($s2)
    ctx->pc = 0x227174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227178:
    // 0x227178: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x227178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22717c:
    // 0x22717c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x22717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_227180:
    // 0x227180: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x227180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_227184:
    // 0x227184: 0x8e42033c  lw          $v0, 0x33C($s2)
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227188:
    // 0x227188: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x227188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_22718c:
    // 0x22718c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x22718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_227190:
    // 0x227190: 0xc0c3044  jal         func_30C110
label_227194:
    if (ctx->pc == 0x227194u) {
        ctx->pc = 0x227194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227190u;
        // 0x227194: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227198u;
        goto label_227198;
    }
    ctx->pc = 0x227190u;
    SET_GPR_U32(ctx, 31, 0x227198u);
    ctx->pc = 0x227194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227190u;
    // 0x227194: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C110u, 0x227190u, 0x227198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227198u;
label_227198:
    // 0x227198: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_22719c:
    if (ctx->pc == 0x22719Cu) {
        ctx->pc = 0x22719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227198u;
        // 0x22719c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2271A0u;
        goto label_2271a0;
    }
    ctx->pc = 0x227198u;
    {
        const bool branch_taken_0x227198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227198u;
        // 0x22719c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227198) {
            ctx->pc = 0x227130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227130;
        }
    }
    ctx->pc = 0x2271A0u;
label_2271a0:
    // 0x2271a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2271a4:
    // 0x2271a4: 0x158880  sll         $s1, $s5, 2
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_2271a8:
    // 0x2271a8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2271a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2271ac:
    // 0x2271ac: 0xc0f5240  jal         func_3D4900
label_2271b0:
    if (ctx->pc == 0x2271B0u) {
        ctx->pc = 0x2271B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271ACu;
        // 0x2271b0: 0x518821  addu        $s1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2271B4u;
        goto label_2271b4;
    }
    ctx->pc = 0x2271ACu;
    SET_GPR_U32(ctx, 31, 0x2271B4u);
    ctx->pc = 0x2271B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271ACu;
    // 0x2271b0: 0x518821  addu        $s1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2271ACu, 0x2271B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271B4u;
label_2271b4:
    // 0x2271b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2271b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2271b8:
    // 0x2271b8: 0xc0f6a96  jal         func_3DAA58
label_2271bc:
    if (ctx->pc == 0x2271BCu) {
        ctx->pc = 0x2271BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271B8u;
        // 0x2271bc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2271C0u;
        goto label_2271c0;
    }
    ctx->pc = 0x2271B8u;
    SET_GPR_U32(ctx, 31, 0x2271C0u);
    ctx->pc = 0x2271BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271B8u;
    // 0x2271bc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2271B8u, 0x2271C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271C0u;
label_2271c0:
    // 0x2271c0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2271c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2271c4:
    // 0x2271c4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2271c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2271c8:
    // 0x2271c8: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x2271c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
label_2271cc:
    // 0x2271cc: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x2271ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
label_2271d0:
    // 0x2271d0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2271d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2271d4:
    // 0x2271d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2271d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2271d8:
    // 0x2271d8: 0x246397f8  addiu       $v1, $v1, -0x6808
    ctx->pc = 0x2271d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940664));
label_2271dc:
    // 0x2271dc: 0xae130050  sw          $s3, 0x50($s0)
    ctx->pc = 0x2271dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
label_2271e0:
    // 0x2271e0: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2271e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2271e4:
    // 0x2271e4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x2271e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_2271e8:
    // 0x2271e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2271e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2271ec:
    // 0x2271ec: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2271ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2271f0:
    // 0x2271f0: 0x24842170  addiu       $a0, $a0, 0x2170
    ctx->pc = 0x2271f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
label_2271f4:
    // 0x2271f4: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2271f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2271f8:
    // 0x2271f8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2271f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2271fc:
    // 0x2271fc: 0xc0b2af0  jal         func_2CABC0
label_227200:
    if (ctx->pc == 0x227200u) {
        ctx->pc = 0x227200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271FCu;
        // 0x227200: 0xe6010030  swc1        $f1, 0x30($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x227204u;
        goto label_227204;
    }
    ctx->pc = 0x2271FCu;
    SET_GPR_U32(ctx, 31, 0x227204u);
    ctx->pc = 0x227200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271FCu;
    // 0x227200: 0xe6010030  swc1        $f1, 0x30($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2271FCu, 0x227204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227204u;
label_227204:
    // 0x227204: 0xc0c4808  jal         func_312020
label_227208:
    if (ctx->pc == 0x227208u) {
        ctx->pc = 0x227208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227204u;
        // 0x227208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22720Cu;
        goto label_22720c;
    }
    ctx->pc = 0x227204u;
    SET_GPR_U32(ctx, 31, 0x22720Cu);
    ctx->pc = 0x227208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227204u;
    // 0x227208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x227204u, 0x22720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22720Cu;
label_22720c:
    // 0x22720c: 0x8e43033c  lw          $v1, 0x33C($s2)
    ctx->pc = 0x22720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227210:
    // 0x227210: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_227214:
    // 0x227214: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x227214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_227218:
    // 0x227218: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x227218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_22721c:
    // 0x22721c: 0x8e43033c  lw          $v1, 0x33C($s2)
    ctx->pc = 0x22721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227220:
    // 0x227220: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x227220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_227224:
    // 0x227224: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x227224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_227228:
    // 0x227228: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22722c:
    // 0x22722c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22722cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227230:
    // 0x227230: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x227230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_227234:
    // 0x227234: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
label_227238:
    if (ctx->pc == 0x227238u) {
        ctx->pc = 0x227238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227234u;
        // 0x227238: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22723Cu;
        goto label_22723c;
    }
    ctx->pc = 0x227234u;
    {
        const bool branch_taken_0x227234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227234u;
        // 0x227238: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227234) {
            ctx->pc = 0x2270F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2270f4;
        }
    }
    ctx->pc = 0x22723Cu;
label_22723c:
    // 0x22723c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x22723cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_227240:
    // 0x227240: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x227240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_227244:
    // 0x227244: 0xc0b2af0  jal         func_2CABC0
label_227248:
    if (ctx->pc == 0x227248u) {
        ctx->pc = 0x227248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227244u;
        // 0x227248: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22724Cu;
        goto label_22724c;
    }
    ctx->pc = 0x227244u;
    SET_GPR_U32(ctx, 31, 0x22724Cu);
    ctx->pc = 0x227248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227244u;
    // 0x227248: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x227244u, 0x22724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22724Cu;
label_22724c:
    // 0x22724c: 0xc0c4808  jal         func_312020
label_227250:
    if (ctx->pc == 0x227250u) {
        ctx->pc = 0x227250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22724Cu;
        // 0x227250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227254u;
        goto label_227254;
    }
    ctx->pc = 0x22724Cu;
    SET_GPR_U32(ctx, 31, 0x227254u);
    ctx->pc = 0x227250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22724Cu;
    // 0x227250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x22724Cu, 0x227254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227254u;
label_227254:
    // 0x227254: 0x8e43033c  lw          $v1, 0x33C($s2)
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227258:
    // 0x227258: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x227258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22725c:
    // 0x22725c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_227260:
    // 0x227260: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x227260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_227264:
    // 0x227264: 0x8e42033c  lw          $v0, 0x33C($s2)
    ctx->pc = 0x227264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_227268:
    // 0x227268: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x227268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_22726c:
    // 0x22726c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_227270:
    // 0x227270: 0xc0c3044  jal         func_30C110
label_227274:
    if (ctx->pc == 0x227274u) {
        ctx->pc = 0x227274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227270u;
        // 0x227274: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227278u;
        goto label_227278;
    }
    ctx->pc = 0x227270u;
    SET_GPR_U32(ctx, 31, 0x227278u);
    ctx->pc = 0x227274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227270u;
    // 0x227274: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C110u, 0x227270u, 0x227278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227278u;
label_227278:
    // 0x227278: 0x10000015  b           . + 4 + (0x15 << 2)
label_22727c:
    if (ctx->pc == 0x22727Cu) {
        ctx->pc = 0x22727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227278u;
        // 0x22727c: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227280u;
        goto label_227280;
    }
    ctx->pc = 0x227278u;
    {
        const bool branch_taken_0x227278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227278u;
        // 0x22727c: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227278) {
            ctx->pc = 0x2272D0u;
            goto label_2272d0;
        }
    }
    ctx->pc = 0x227280u;
label_227280:
    // 0x227280: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_227284:
    // 0x227284: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x227284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_227288:
    // 0x227288: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_22728c:
    if (ctx->pc == 0x22728Cu) {
        ctx->pc = 0x22728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227288u;
        // 0x22728c: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227290u;
        goto label_227290;
    }
    ctx->pc = 0x227288u;
    {
        const bool branch_taken_0x227288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227288) {
            ctx->pc = 0x22728Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227288u;
            // 0x22728c: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2272D0u;
            goto label_2272d0;
        }
    }
    ctx->pc = 0x227290u;
label_227290:
    // 0x227290: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x227290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_227294:
    // 0x227294: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_227298:
    // 0x227298: 0xc0b2af0  jal         func_2CABC0
label_22729c:
    if (ctx->pc == 0x22729Cu) {
        ctx->pc = 0x22729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227298u;
        // 0x22729c: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272A0u;
        goto label_2272a0;
    }
    ctx->pc = 0x227298u;
    SET_GPR_U32(ctx, 31, 0x2272A0u);
    ctx->pc = 0x22729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227298u;
    // 0x22729c: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x227298u, 0x2272A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272A0u;
label_2272a0:
    // 0x2272a0: 0xc0c4808  jal         func_312020
label_2272a4:
    if (ctx->pc == 0x2272A4u) {
        ctx->pc = 0x2272A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272A0u;
        // 0x2272a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272A8u;
        goto label_2272a8;
    }
    ctx->pc = 0x2272A0u;
    SET_GPR_U32(ctx, 31, 0x2272A8u);
    ctx->pc = 0x2272A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272A0u;
    // 0x2272a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x2272A0u, 0x2272A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272A8u;
label_2272a8:
    // 0x2272a8: 0x8e43033c  lw          $v1, 0x33C($s2)
    ctx->pc = 0x2272a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_2272ac:
    // 0x2272ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2272acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2272b0:
    // 0x2272b0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_2272b4:
    // 0x2272b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2272b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2272b8:
    // 0x2272b8: 0x8e42033c  lw          $v0, 0x33C($s2)
    ctx->pc = 0x2272b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_2272bc:
    // 0x2272bc: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2272c0:
    // 0x2272c0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2272c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2272c4:
    // 0x2272c4: 0xc0c3044  jal         func_30C110
label_2272c8:
    if (ctx->pc == 0x2272C8u) {
        ctx->pc = 0x2272C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272C4u;
        // 0x2272c8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272CCu;
        goto label_2272cc;
    }
    ctx->pc = 0x2272C4u;
    SET_GPR_U32(ctx, 31, 0x2272CCu);
    ctx->pc = 0x2272C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272C4u;
    // 0x2272c8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C110u, 0x2272C4u, 0x2272CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272CCu;
label_2272cc:
    // 0x2272cc: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2272ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2272d0:
    // 0x2272d0: 0x8fb30030  lw          $s3, 0x30($sp)
    ctx->pc = 0x2272d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2272d4:
    // 0x2272d4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2272d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2272d8:
    // 0x2272d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2272dc:
    // 0x2272dc: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2272dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2272e0:
    // 0x2272e0: 0x5460ff6d  bnel        $v1, $zero, . + 4 + (-0x93 << 2)
label_2272e4:
    if (ctx->pc == 0x2272E4u) {
        ctx->pc = 0x2272E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272E0u;
        // 0x2272e4: 0x8e42033c  lw          $v0, 0x33C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272E8u;
        goto label_2272e8;
    }
    ctx->pc = 0x2272E0u;
    {
        const bool branch_taken_0x2272e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2272e0) {
            ctx->pc = 0x2272E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2272E0u;
            // 0x2272e4: 0x8e42033c  lw          $v0, 0x33C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227098;
        }
    }
    ctx->pc = 0x2272E8u;
label_2272e8:
    // 0x2272e8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2272e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2272ec:
    // 0x2272ec: 0xc07508c  jal         func_1D4230
label_2272f0:
    if (ctx->pc == 0x2272F0u) {
        ctx->pc = 0x2272F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272ECu;
        // 0x2272f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2272F4u;
        goto label_2272f4;
    }
    ctx->pc = 0x2272ECu;
    SET_GPR_U32(ctx, 31, 0x2272F4u);
    ctx->pc = 0x2272F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272ECu;
    // 0x2272f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x2272ECu, 0x2272F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272F4u;
label_2272f4:
    // 0x2272f4: 0x8e430328  lw          $v1, 0x328($s2)
    ctx->pc = 0x2272f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_2272f8:
    // 0x2272f8: 0x50600076  beql        $v1, $zero, . + 4 + (0x76 << 2)
label_2272fc:
    if (ctx->pc == 0x2272FCu) {
        ctx->pc = 0x2272FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272F8u;
        // 0x2272fc: 0xae400340  sw          $zero, 0x340($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227300u;
        goto label_227300;
    }
    ctx->pc = 0x2272F8u;
    {
        const bool branch_taken_0x2272f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2272f8) {
            ctx->pc = 0x2272FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2272F8u;
            // 0x2272fc: 0xae400340  sw          $zero, 0x340($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2274D4u;
            goto label_2274d4;
        }
    }
    ctx->pc = 0x227300u;
label_227300:
    // 0x227300: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x227300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_227304:
    // 0x227304: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x227304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_227308:
    // 0x227308: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_22730c:
    if (ctx->pc == 0x22730Cu) {
        ctx->pc = 0x22730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227308u;
        // 0x22730c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227310u;
        goto label_227310;
    }
    ctx->pc = 0x227308u;
    {
        const bool branch_taken_0x227308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227308u;
        // 0x22730c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227308) {
            ctx->pc = 0x2274D0u;
            goto label_2274d0;
        }
    }
    ctx->pc = 0x227310u;
label_227310:
    // 0x227310: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x227310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_227314:
    // 0x227314: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x227314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227318:
    // 0x227318: 0xc0f52a8  jal         func_3D4AA0
label_22731c:
    if (ctx->pc == 0x22731Cu) {
        ctx->pc = 0x22731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227318u;
        // 0x22731c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227320u;
        goto label_227320;
    }
    ctx->pc = 0x227318u;
    SET_GPR_U32(ctx, 31, 0x227320u);
    ctx->pc = 0x22731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227318u;
    // 0x22731c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x227318u, 0x227320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227320u;
label_227320:
    // 0x227320: 0xae420340  sw          $v0, 0x340($s2)
    ctx->pc = 0x227320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 2));
label_227324:
    // 0x227324: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x227324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_227328:
    // 0x227328: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x227328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_22732c:
    // 0x22732c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_227330:
    // 0x227330: 0x18800061  blez        $a0, . + 4 + (0x61 << 2)
label_227334:
    if (ctx->pc == 0x227334u) {
        ctx->pc = 0x227334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227330u;
        // 0x227334: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227338u;
        goto label_227338;
    }
    ctx->pc = 0x227330u;
    {
        const bool branch_taken_0x227330 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x227334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227330u;
        // 0x227334: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227330) {
            ctx->pc = 0x2274B8u;
            goto label_2274b8;
        }
    }
    ctx->pc = 0x227338u;
label_227338:
    // 0x227338: 0x3c11005b  lui         $s1, 0x5B
    ctx->pc = 0x227338u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)91 << 16));
label_22733c:
    // 0x22733c: 0x245697f8  addiu       $s6, $v0, -0x6808
    ctx->pc = 0x22733cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940664));
label_227340:
    // 0x227340: 0x8e430340  lw          $v1, 0x340($s2)
    ctx->pc = 0x227340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_227344:
    // 0x227344: 0x0  nop
    ctx->pc = 0x227344u;
    // NOP
label_227348:
    // 0x227348: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x227348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_22734c:
    // 0x22734c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x22734cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227350:
    // 0x227350: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x227350u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_227354:
    // 0x227354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227358:
    // 0x227358: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x227358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22735c:
    // 0x22735c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22735cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_227360:
    // 0x227360: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x227360u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_227364:
    // 0x227364: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x227364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_227368:
    // 0x227368: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x227368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22736c:
    // 0x22736c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x22736cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_227370:
    // 0x227370: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x227370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_227374:
    // 0x227374: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x227374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_227378:
    // 0x227378: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x227378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_22737c:
    // 0x22737c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x22737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_227380:
    // 0x227380: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_227384:
    // 0x227384: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x227384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_227388:
    // 0x227388: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x227388u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22738c:
    // 0x22738c: 0x0  nop
    ctx->pc = 0x22738cu;
    // NOP
label_227390:
    // 0x227390: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x227390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_227394:
    // 0x227394: 0x54540014  bnel        $v0, $s4, . + 4 + (0x14 << 2)
label_227398:
    if (ctx->pc == 0x227398u) {
        ctx->pc = 0x227398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227394u;
        // 0x227398: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22739Cu;
        goto label_22739c;
    }
    ctx->pc = 0x227394u;
    {
        const bool branch_taken_0x227394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x227394) {
            ctx->pc = 0x227398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227394u;
            // 0x227398: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2273E8u;
            goto label_2273e8;
        }
    }
    ctx->pc = 0x22739Cu;
label_22739c:
    // 0x22739c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2273a0:
    // 0x2273a0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2273a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2273a4:
    // 0x2273a4: 0x26242170  addiu       $a0, $s1, 0x2170
    ctx->pc = 0x2273a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8560));
label_2273a8:
    // 0x2273a8: 0xc0b2af0  jal         func_2CABC0
label_2273ac:
    if (ctx->pc == 0x2273ACu) {
        ctx->pc = 0x2273ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273A8u;
        // 0x2273ac: 0xac530054  sw          $s3, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2273B0u;
        goto label_2273b0;
    }
    ctx->pc = 0x2273A8u;
    SET_GPR_U32(ctx, 31, 0x2273B0u);
    ctx->pc = 0x2273ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273A8u;
    // 0x2273ac: 0xac530054  sw          $s3, 0x54($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2273A8u, 0x2273B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273B0u;
label_2273b0:
    // 0x2273b0: 0xc0c4808  jal         func_312020
label_2273b4:
    if (ctx->pc == 0x2273B4u) {
        ctx->pc = 0x2273B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273B0u;
        // 0x2273b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2273B8u;
        goto label_2273b8;
    }
    ctx->pc = 0x2273B0u;
    SET_GPR_U32(ctx, 31, 0x2273B8u);
    ctx->pc = 0x2273B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273B0u;
    // 0x2273b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x2273B0u, 0x2273B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273B8u;
label_2273b8:
    // 0x2273b8: 0x8e430340  lw          $v1, 0x340($s2)
    ctx->pc = 0x2273b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_2273bc:
    // 0x2273bc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2273bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2273c0:
    // 0x2273c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2273c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2273c4:
    // 0x2273c4: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_2273c8:
    // 0x2273c8: 0x8e430340  lw          $v1, 0x340($s2)
    ctx->pc = 0x2273c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_2273cc:
    // 0x2273cc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2273d0:
    // 0x2273d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2273d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2273d4:
    // 0x2273d4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2273d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2273d8:
    // 0x2273d8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2273d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2273dc:
    // 0x2273dc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2273dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2273e0:
    // 0x2273e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2273e4:
    if (ctx->pc == 0x2273E4u) {
        ctx->pc = 0x2273E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273E0u;
        // 0x2273e4: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2273E8u;
        goto label_2273e8;
    }
    ctx->pc = 0x2273E0u;
    {
        const bool branch_taken_0x2273e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273E0u;
        // 0x2273e4: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273e0) {
            ctx->pc = 0x2273F8u;
            goto label_2273f8;
        }
    }
    ctx->pc = 0x2273E8u;
label_2273e8:
    // 0x2273e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2273e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2273ec:
    // 0x2273ec: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x2273ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
label_2273f0:
    // 0x2273f0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_2273f4:
    if (ctx->pc == 0x2273F4u) {
        ctx->pc = 0x2273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273F0u;
        // 0x2273f4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2273F8u;
        goto label_2273f8;
    }
    ctx->pc = 0x2273F0u;
    {
        const bool branch_taken_0x2273f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273F0u;
        // 0x2273f4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273f0) {
            ctx->pc = 0x227390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227390;
        }
    }
    ctx->pc = 0x2273F8u;
label_2273f8:
    // 0x2273f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2273f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2273fc:
    // 0x2273fc: 0x56a20028  bnel        $s5, $v0, . + 4 + (0x28 << 2)
label_227400:
    if (ctx->pc == 0x227400u) {
        ctx->pc = 0x227400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273FCu;
        // 0x227400: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227404u;
        goto label_227404;
    }
    ctx->pc = 0x2273FCu;
    {
        const bool branch_taken_0x2273fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x2273fc) {
            ctx->pc = 0x227400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2273FCu;
            // 0x227400: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2274A0u;
            goto label_2274a0;
        }
    }
    ctx->pc = 0x227404u;
label_227404:
    // 0x227404: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x227404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_227408:
    // 0x227408: 0x12820016  beq         $s4, $v0, . + 4 + (0x16 << 2)
label_22740c:
    if (ctx->pc == 0x22740Cu) {
        ctx->pc = 0x22740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227408u;
        // 0x22740c: 0x24020410  addiu       $v0, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227410u;
        goto label_227410;
    }
    ctx->pc = 0x227408u;
    {
        const bool branch_taken_0x227408 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x22740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227408u;
        // 0x22740c: 0x24020410  addiu       $v0, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227408) {
            ctx->pc = 0x227464u;
            goto label_227464;
        }
    }
    ctx->pc = 0x227410u;
label_227410:
    // 0x227410: 0x12820014  beq         $s4, $v0, . + 4 + (0x14 << 2)
label_227414:
    if (ctx->pc == 0x227414u) {
        ctx->pc = 0x227414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227410u;
        // 0x227414: 0x24020446  addiu       $v0, $zero, 0x446 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227418u;
        goto label_227418;
    }
    ctx->pc = 0x227410u;
    {
        const bool branch_taken_0x227410 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x227414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227410u;
        // 0x227414: 0x24020446  addiu       $v0, $zero, 0x446 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227410) {
            ctx->pc = 0x227464u;
            goto label_227464;
        }
    }
    ctx->pc = 0x227418u;
label_227418:
    // 0x227418: 0x12820013  beq         $s4, $v0, . + 4 + (0x13 << 2)
label_22741c:
    if (ctx->pc == 0x22741Cu) {
        ctx->pc = 0x22741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227418u;
        // 0x22741c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227420u;
        goto label_227420;
    }
    ctx->pc = 0x227418u;
    {
        const bool branch_taken_0x227418 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x22741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227418u;
        // 0x22741c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227418) {
            ctx->pc = 0x227468u;
            goto label_227468;
        }
    }
    ctx->pc = 0x227420u;
label_227420:
    // 0x227420: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x227420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_227424:
    // 0x227424: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x227424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_227428:
    // 0x227428: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x227428u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22742c:
    // 0x22742c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_227430:
    if (ctx->pc == 0x227430u) {
        ctx->pc = 0x227430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22742Cu;
        // 0x227430: 0x24020447  addiu       $v0, $zero, 0x447 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227434u;
        goto label_227434;
    }
    ctx->pc = 0x22742Cu;
    {
        const bool branch_taken_0x22742c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x227430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22742Cu;
        // 0x227430: 0x24020447  addiu       $v0, $zero, 0x447 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1095));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22742c) {
            ctx->pc = 0x22743Cu;
            goto label_22743c;
        }
    }
    ctx->pc = 0x227434u;
label_227434:
    // 0x227434: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
label_227438:
    if (ctx->pc == 0x227438u) {
        ctx->pc = 0x22743Cu;
        goto label_22743c;
    }
    ctx->pc = 0x227434u;
    {
        const bool branch_taken_0x227434 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x227434) {
            ctx->pc = 0x227468u;
            goto label_227468;
        }
    }
    ctx->pc = 0x22743Cu;
label_22743c:
    // 0x22743c: 0x24020415  addiu       $v0, $zero, 0x415
    ctx->pc = 0x22743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
label_227440:
    // 0x227440: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
label_227444:
    if (ctx->pc == 0x227444u) {
        ctx->pc = 0x227444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227440u;
        // 0x227444: 0x24020433  addiu       $v0, $zero, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227448u;
        goto label_227448;
    }
    ctx->pc = 0x227440u;
    {
        const bool branch_taken_0x227440 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x227444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227440u;
        // 0x227444: 0x24020433  addiu       $v0, $zero, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227440) {
            ctx->pc = 0x227464u;
            goto label_227464;
        }
    }
    ctx->pc = 0x227448u;
label_227448:
    // 0x227448: 0x52820007  beql        $s4, $v0, . + 4 + (0x7 << 2)
label_22744c:
    if (ctx->pc == 0x22744Cu) {
        ctx->pc = 0x22744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227448u;
        // 0x22744c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227450u;
        goto label_227450;
    }
    ctx->pc = 0x227448u;
    {
        const bool branch_taken_0x227448 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x227448) {
            ctx->pc = 0x22744Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227448u;
            // 0x22744c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227468u;
            goto label_227468;
        }
    }
    ctx->pc = 0x227450u;
label_227450:
    // 0x227450: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
label_227454:
    if (ctx->pc == 0x227454u) {
        ctx->pc = 0x227454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227450u;
        // 0x227454: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227458u;
        goto label_227458;
    }
    ctx->pc = 0x227450u;
    {
        const bool branch_taken_0x227450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x227450) {
            ctx->pc = 0x227454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227450u;
            // 0x227454: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2274A0u;
            goto label_2274a0;
        }
    }
    ctx->pc = 0x227458u;
label_227458:
    // 0x227458: 0x240203fd  addiu       $v0, $zero, 0x3FD
    ctx->pc = 0x227458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
label_22745c:
    // 0x22745c: 0x56820010  bnel        $s4, $v0, . + 4 + (0x10 << 2)
label_227460:
    if (ctx->pc == 0x227460u) {
        ctx->pc = 0x227460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22745Cu;
        // 0x227460: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227464u;
        goto label_227464;
    }
    ctx->pc = 0x22745Cu;
    {
        const bool branch_taken_0x22745c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x22745c) {
            ctx->pc = 0x227460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22745Cu;
            // 0x227460: 0x8e440328  lw          $a0, 0x328($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2274A0u;
            goto label_2274a0;
        }
    }
    ctx->pc = 0x227464u;
label_227464:
    // 0x227464: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x227464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_227468:
    // 0x227468: 0xc0b2af0  jal         func_2CABC0
label_22746c:
    if (ctx->pc == 0x22746Cu) {
        ctx->pc = 0x22746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227468u;
        // 0x22746c: 0x26242170  addiu       $a0, $s1, 0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227470u;
        goto label_227470;
    }
    ctx->pc = 0x227468u;
    SET_GPR_U32(ctx, 31, 0x227470u);
    ctx->pc = 0x22746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227468u;
    // 0x22746c: 0x26242170  addiu       $a0, $s1, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x227468u, 0x227470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227470u;
label_227470:
    // 0x227470: 0xc0c4808  jal         func_312020
label_227474:
    if (ctx->pc == 0x227474u) {
        ctx->pc = 0x227474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227470u;
        // 0x227474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227478u;
        goto label_227478;
    }
    ctx->pc = 0x227470u;
    SET_GPR_U32(ctx, 31, 0x227478u);
    ctx->pc = 0x227474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227470u;
    // 0x227474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x227470u, 0x227478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227478u;
label_227478:
    // 0x227478: 0x8e430340  lw          $v1, 0x340($s2)
    ctx->pc = 0x227478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_22747c:
    // 0x22747c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22747cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_227480:
    // 0x227480: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x227480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_227484:
    // 0x227484: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x227484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_227488:
    // 0x227488: 0x8e420340  lw          $v0, 0x340($s2)
    ctx->pc = 0x227488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_22748c:
    // 0x22748c: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x22748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_227490:
    // 0x227490: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x227490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_227494:
    // 0x227494: 0xc0c3044  jal         func_30C110
label_227498:
    if (ctx->pc == 0x227498u) {
        ctx->pc = 0x227498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227494u;
        // 0x227498: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22749Cu;
        goto label_22749c;
    }
    ctx->pc = 0x227494u;
    SET_GPR_U32(ctx, 31, 0x22749Cu);
    ctx->pc = 0x227498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227494u;
    // 0x227498: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C110u, 0x227494u, 0x22749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22749Cu;
label_22749c:
    // 0x22749c: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x22749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_2274a0:
    // 0x2274a0: 0x8fb30030  lw          $s3, 0x30($sp)
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2274a4:
    // 0x2274a4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2274a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2274a8:
    // 0x2274a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2274a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2274ac:
    // 0x2274ac: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2274acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2274b0:
    // 0x2274b0: 0x5440ffa5  bnel        $v0, $zero, . + 4 + (-0x5B << 2)
label_2274b4:
    if (ctx->pc == 0x2274B4u) {
        ctx->pc = 0x2274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274B0u;
        // 0x2274b4: 0x8e430340  lw          $v1, 0x340($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274B8u;
        goto label_2274b8;
    }
    ctx->pc = 0x2274B0u;
    {
        const bool branch_taken_0x2274b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2274b0) {
            ctx->pc = 0x2274B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2274B0u;
            // 0x2274b4: 0x8e430340  lw          $v1, 0x340($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227348;
        }
    }
    ctx->pc = 0x2274B8u;
label_2274b8:
    // 0x2274b8: 0x8e420328  lw          $v0, 0x328($s2)
    ctx->pc = 0x2274b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
label_2274bc:
    // 0x2274bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2274bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2274c0:
    // 0x2274c0: 0xc07508c  jal         func_1D4230
label_2274c4:
    if (ctx->pc == 0x2274C4u) {
        ctx->pc = 0x2274C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274C0u;
        // 0x2274c4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274C8u;
        goto label_2274c8;
    }
    ctx->pc = 0x2274C0u;
    SET_GPR_U32(ctx, 31, 0x2274C8u);
    ctx->pc = 0x2274C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274C0u;
    // 0x2274c4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x2274C0u, 0x2274C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274C8u;
label_2274c8:
    // 0x2274c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2274cc:
    if (ctx->pc == 0x2274CCu) {
        ctx->pc = 0x2274CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274C8u;
        // 0x2274cc: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274D0u;
        goto label_2274d0;
    }
    ctx->pc = 0x2274C8u;
    {
        const bool branch_taken_0x2274c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274C8u;
        // 0x2274cc: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274c8) {
            ctx->pc = 0x2274D8u;
            goto label_2274d8;
        }
    }
    ctx->pc = 0x2274D0u;
label_2274d0:
    // 0x2274d0: 0xae400340  sw          $zero, 0x340($s2)
    ctx->pc = 0x2274d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 832), GPR_U32(ctx, 0));
label_2274d4:
    // 0x2274d4: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2274d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2274d8:
    // 0x2274d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2274d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2274dc:
    // 0x2274dc: 0xc0b1260  jal         func_2C4980
label_2274e0:
    if (ctx->pc == 0x2274E0u) {
        ctx->pc = 0x2274E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274DCu;
        // 0x2274e0: 0x8c4513f8  lw          $a1, 0x13F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274E4u;
        goto label_2274e4;
    }
    ctx->pc = 0x2274DCu;
    SET_GPR_U32(ctx, 31, 0x2274E4u);
    ctx->pc = 0x2274E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274DCu;
    // 0x2274e0: 0x8c4513f8  lw          $a1, 0x13F8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x2274DCu, 0x2274E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274E4u;
label_2274e4:
    // 0x2274e4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2274e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2274e8:
    // 0x2274e8: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x2274e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_2274ec:
    // 0x2274ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2274f0:
    if (ctx->pc == 0x2274F0u) {
        ctx->pc = 0x2274F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274ECu;
        // 0x2274f0: 0xae430478  sw          $v1, 0x478($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2274F4u;
        goto label_2274f4;
    }
    ctx->pc = 0x2274ECu;
    {
        const bool branch_taken_0x2274ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2274F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274ECu;
        // 0x2274f0: 0xae430478  sw          $v1, 0x478($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274ec) {
            ctx->pc = 0x227504u;
            goto label_227504;
        }
    }
    ctx->pc = 0x2274F4u;
label_2274f4:
    // 0x2274f4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2274f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2274f8:
    // 0x2274f8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2274fc:
    if (ctx->pc == 0x2274FCu) {
        ctx->pc = 0x2274FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274F8u;
        // 0x2274fc: 0xac800230  sw          $zero, 0x230($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227500u;
        goto label_227500;
    }
    ctx->pc = 0x2274F8u;
    {
        const bool branch_taken_0x2274f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2274f8) {
            ctx->pc = 0x2274FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2274F8u;
            // 0x2274fc: 0xac800230  sw          $zero, 0x230($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227504u;
            goto label_227504;
        }
    }
    ctx->pc = 0x227500u;
label_227500:
    // 0x227500: 0xac830230  sw          $v1, 0x230($a0)
    ctx->pc = 0x227500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 3));
label_227504:
    // 0x227504: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_227508:
    // 0x227508: 0xc0f5240  jal         func_3D4900
label_22750c:
    if (ctx->pc == 0x22750Cu) {
        ctx->pc = 0x22750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227508u;
        // 0x22750c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227510u;
        goto label_227510;
    }
    ctx->pc = 0x227508u;
    SET_GPR_U32(ctx, 31, 0x227510u);
    ctx->pc = 0x22750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227508u;
    // 0x22750c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x227508u, 0x227510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227510u;
label_227510:
    // 0x227510: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x227510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_227514:
    // 0x227514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227518:
    // 0x227518: 0xc06cbba  jal         func_1B2EE8
label_22751c:
    if (ctx->pc == 0x22751Cu) {
        ctx->pc = 0x22751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227518u;
        // 0x22751c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227520u;
        goto label_227520;
    }
    ctx->pc = 0x227518u;
    SET_GPR_U32(ctx, 31, 0x227520u);
    ctx->pc = 0x22751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227518u;
    // 0x22751c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EE8u, 0x227518u, 0x227520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227520u;
label_227520:
    // 0x227520: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x227520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_227524:
    // 0x227524: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x227524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_227528:
    // 0x227528: 0x24631a78  addiu       $v1, $v1, 0x1A78
    ctx->pc = 0x227528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6776));
label_22752c:
    // 0x22752c: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x22752cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
label_227530:
    // 0x227530: 0xc0f6a96  jal         func_3DAA58
label_227534:
    if (ctx->pc == 0x227534u) {
        ctx->pc = 0x227534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227530u;
        // 0x227534: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227538u;
        goto label_227538;
    }
    ctx->pc = 0x227530u;
    SET_GPR_U32(ctx, 31, 0x227538u);
    ctx->pc = 0x227534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227530u;
    // 0x227534: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x227530u, 0x227538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227538u;
label_227538:
    // 0x227538: 0xc0f6a96  jal         func_3DAA58
label_22753c:
    if (ctx->pc == 0x22753Cu) {
        ctx->pc = 0x22753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227538u;
        // 0x22753c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227540u;
        goto label_227540;
    }
    ctx->pc = 0x227538u;
    SET_GPR_U32(ctx, 31, 0x227540u);
    ctx->pc = 0x22753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227538u;
    // 0x22753c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x227538u, 0x227540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227540u;
label_227540:
    // 0x227540: 0xae500330  sw          $s0, 0x330($s2)
    ctx->pc = 0x227540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 16));
label_227544:
    // 0x227544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_227548:
    // 0x227548: 0xc08a1f2  jal         func_2287C8
label_22754c:
    if (ctx->pc == 0x22754Cu) {
        ctx->pc = 0x22754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227548u;
        // 0x22754c: 0x24050410  addiu       $a1, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227550u;
        goto label_227550;
    }
    ctx->pc = 0x227548u;
    SET_GPR_U32(ctx, 31, 0x227550u);
    ctx->pc = 0x22754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227548u;
    // 0x22754c: 0x24050410  addiu       $a1, $zero, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x227548u, 0x227550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227550u;
label_227550:
    // 0x227550: 0x8e440330  lw          $a0, 0x330($s2)
    ctx->pc = 0x227550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 816)));
label_227554:
    // 0x227554: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x227554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227558:
    // 0x227558: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x227558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_22755c:
    // 0x22755c: 0xc06cc7c  jal         func_1B31F0
label_227560:
    if (ctx->pc == 0x227560u) {
        ctx->pc = 0x227560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22755Cu;
        // 0x227560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227564u;
        goto label_227564;
    }
    ctx->pc = 0x22755Cu;
    SET_GPR_U32(ctx, 31, 0x227564u);
    ctx->pc = 0x227560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22755Cu;
    // 0x227560: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B31F0u, 0x22755Cu, 0x227564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227564u;
label_227564:
    // 0x227564: 0xc08bd98  jal         func_22F660
label_227568:
    if (ctx->pc == 0x227568u) {
        ctx->pc = 0x227568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227564u;
        // 0x227568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22756Cu;
        goto label_22756c;
    }
    ctx->pc = 0x227564u;
    SET_GPR_U32(ctx, 31, 0x22756Cu);
    ctx->pc = 0x227568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227564u;
    // 0x227568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x227564u, 0x22756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22756Cu;
label_22756c:
    // 0x22756c: 0x8e42041c  lw          $v0, 0x41C($s2)
    ctx->pc = 0x22756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1052)));
label_227570:
    // 0x227570: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x227570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_227574:
    // 0x227574: 0xae40041c  sw          $zero, 0x41C($s2)
    ctx->pc = 0x227574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1052), GPR_U32(ctx, 0));
label_227578:
    // 0x227578: 0xc0f5240  jal         func_3D4900
label_22757c:
    if (ctx->pc == 0x22757Cu) {
        ctx->pc = 0x22757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227578u;
        // 0x22757c: 0xae420420  sw          $v0, 0x420($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227580u;
        goto label_227580;
    }
    ctx->pc = 0x227578u;
    SET_GPR_U32(ctx, 31, 0x227580u);
    ctx->pc = 0x22757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227578u;
    // 0x22757c: 0xae420420  sw          $v0, 0x420($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x227578u, 0x227580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227580u;
label_227580:
    // 0x227580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x227580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227584:
    // 0x227584: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x227584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_227588:
    // 0x227588: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x227588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_22758c:
    // 0x22758c: 0x0  nop
    ctx->pc = 0x22758cu;
    // NOP
label_227590:
    // 0x227590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227594:
    // 0x227594: 0xc0f7d04  jal         func_3DF410
label_227598:
    if (ctx->pc == 0x227598u) {
        ctx->pc = 0x227598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227594u;
        // 0x227598: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22759Cu;
        goto label_22759c;
    }
    ctx->pc = 0x227594u;
    SET_GPR_U32(ctx, 31, 0x22759Cu);
    ctx->pc = 0x227598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227594u;
    // 0x227598: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF410u, 0x227594u, 0x22759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22759Cu;
label_22759c:
    // 0x22759c: 0x0  nop
    ctx->pc = 0x22759cu;
    // NOP
label_2275a0:
    // 0x2275a0: 0x1674fffb  bne         $s3, $s4, . + 4 + (-0x5 << 2)
label_2275a4:
    if (ctx->pc == 0x2275A4u) {
        ctx->pc = 0x2275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275A0u;
        // 0x2275a4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275A8u;
        goto label_2275a8;
    }
    ctx->pc = 0x2275A0u;
    {
        const bool branch_taken_0x2275a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x2275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275A0u;
        // 0x2275a4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275a0) {
            ctx->pc = 0x227590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227590;
        }
    }
    ctx->pc = 0x2275A8u;
label_2275a8:
    // 0x2275a8: 0xae5102a0  sw          $s1, 0x2A0($s2)
    ctx->pc = 0x2275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 17));
label_2275ac:
    // 0x2275ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2275acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2275b0:
    // 0x2275b0: 0xa220003a  sb          $zero, 0x3A($s1)
    ctx->pc = 0x2275b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 58), (uint8_t)GPR_U32(ctx, 0));
label_2275b4:
    // 0x2275b4: 0xc0cf216  jal         func_33C858
label_2275b8:
    if (ctx->pc == 0x2275B8u) {
        ctx->pc = 0x2275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275B4u;
        // 0x2275b8: 0x24130034  addiu       $s3, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275BCu;
        goto label_2275bc;
    }
    ctx->pc = 0x2275B4u;
    SET_GPR_U32(ctx, 31, 0x2275BCu);
    ctx->pc = 0x2275B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275B4u;
    // 0x2275b8: 0x24130034  addiu       $s3, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C858u, 0x2275B4u, 0x2275BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275BCu;
label_2275bc:
    // 0x2275bc: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x2275bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_2275c0:
    // 0x2275c0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2275c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2275c4:
    // 0x2275c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2275c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2275c8:
    // 0x2275c8: 0xc0cf252  jal         func_33C948
label_2275cc:
    if (ctx->pc == 0x2275CCu) {
        ctx->pc = 0x2275CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275C8u;
        // 0x2275cc: 0x8e4402a0  lw          $a0, 0x2A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275D0u;
        goto label_2275d0;
    }
    ctx->pc = 0x2275C8u;
    SET_GPR_U32(ctx, 31, 0x2275D0u);
    ctx->pc = 0x2275CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275C8u;
    // 0x2275cc: 0x8e4402a0  lw          $a0, 0x2A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C948u, 0x2275C8u, 0x2275D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275D0u;
label_2275d0:
    // 0x2275d0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2275d4:
    // 0x2275d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2275d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2275d8:
    // 0x2275d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2275d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2275dc:
    // 0x2275dc: 0xc0dc10e  jal         func_370438
label_2275e0:
    if (ctx->pc == 0x2275E0u) {
        ctx->pc = 0x2275E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275DCu;
        // 0x2275e0: 0xe64002a4  swc1        $f0, 0x2A4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2275E4u;
        goto label_2275e4;
    }
    ctx->pc = 0x2275DCu;
    SET_GPR_U32(ctx, 31, 0x2275E4u);
    ctx->pc = 0x2275E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275DCu;
    // 0x2275e0: 0xe64002a4  swc1        $f0, 0x2A4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 676), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2275DCu, 0x2275E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275E4u;
label_2275e4:
    // 0x2275e4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2275e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2275e8:
    // 0x2275e8: 0x3421ccd0  ori         $at, $at, 0xCCD0
    ctx->pc = 0x2275e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52432);
label_2275ec:
    // 0x2275ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2275ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2275f0:
    // 0x2275f0: 0x0  nop
    ctx->pc = 0x2275f0u;
    // NOP
label_2275f4:
    // 0x2275f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2275f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2275f8:
    // 0x2275f8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2275f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2275fc:
    // 0x2275fc: 0xc0dc10e  jal         func_370438
label_227600:
    if (ctx->pc == 0x227600u) {
        ctx->pc = 0x227600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275FCu;
        // 0x227600: 0xe64002a8  swc1        $f0, 0x2A8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 680), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x227604u;
        goto label_227604;
    }
    ctx->pc = 0x2275FCu;
    SET_GPR_U32(ctx, 31, 0x227604u);
    ctx->pc = 0x227600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275FCu;
    // 0x227600: 0xe64002a8  swc1        $f0, 0x2A8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 680), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2275FCu, 0x227604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227604u;
label_227604:
    // 0x227604: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x227604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
label_227608:
    // 0x227608: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x227608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
label_22760c:
    // 0x22760c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22760cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_227610:
    // 0x227610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x227610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_227614:
    // 0x227614: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x227614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_227618:
    // 0x227618: 0xae4202b0  sw          $v0, 0x2B0($s2)
    ctx->pc = 0x227618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 2));
label_22761c:
    // 0x22761c: 0xae4302b4  sw          $v1, 0x2B4($s2)
    ctx->pc = 0x22761cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 692), GPR_U32(ctx, 3));
label_227620:
    // 0x227620: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x227620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_227624:
    // 0x227624: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x227624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_227628:
    // 0x227628: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_22762c:
    // 0x22762c: 0xe64002ac  swc1        $f0, 0x2AC($s2)
    ctx->pc = 0x22762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 684), bits); }
label_227630:
    // 0x227630: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x227630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_227634:
    // 0x227634: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x227634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_227638:
    // 0x227638: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x227638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_22763c:
    // 0x22763c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x22763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_227640:
    // 0x227640: 0x661fffb  bgez        $s3, . + 4 + (-0x5 << 2)
label_227644:
    if (ctx->pc == 0x227644u) {
        ctx->pc = 0x227644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227640u;
        // 0x227644: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227648u;
        goto label_227648;
    }
    ctx->pc = 0x227640u;
    {
        const bool branch_taken_0x227640 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x227644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227640u;
        // 0x227644: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227640) {
            ctx->pc = 0x227630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227630;
        }
    }
    ctx->pc = 0x227648u;
label_227648:
    // 0x227648: 0xae400290  sw          $zero, 0x290($s2)
    ctx->pc = 0x227648u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 656), GPR_U32(ctx, 0));
label_22764c:
    // 0x22764c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22764cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_227650:
    // 0x227650: 0xae400294  sw          $zero, 0x294($s2)
    ctx->pc = 0x227650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 0));
label_227654:
    // 0x227654: 0xc0931cc  jal         func_24C730
label_227658:
    if (ctx->pc == 0x227658u) {
        ctx->pc = 0x227658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227654u;
        // 0x227658: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22765Cu;
        goto label_22765c;
    }
    ctx->pc = 0x227654u;
    SET_GPR_U32(ctx, 31, 0x22765Cu);
    ctx->pc = 0x227658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227654u;
    // 0x227658: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C730u, 0x227654u, 0x22765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22765Cu;
label_22765c:
    // 0x22765c: 0xc0931ce  jal         func_24C738
label_227660:
    if (ctx->pc == 0x227660u) {
        ctx->pc = 0x227660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22765Cu;
        // 0x227660: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227664u;
        goto label_227664;
    }
    ctx->pc = 0x22765Cu;
    SET_GPR_U32(ctx, 31, 0x227664u);
    ctx->pc = 0x227660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22765Cu;
    // 0x227660: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C738u, 0x22765Cu, 0x227664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227664u;
label_227664:
    // 0x227664: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x227664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_227668:
    // 0x227668: 0xae400fb4  sw          $zero, 0xFB4($s2)
    ctx->pc = 0x227668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4020), GPR_U32(ctx, 0));
label_22766c:
    // 0x22766c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x22766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_227670:
    // 0x227670: 0xc0f5240  jal         func_3D4900
label_227674:
    if (ctx->pc == 0x227674u) {
        ctx->pc = 0x227674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227670u;
        // 0x227674: 0xae420790  sw          $v0, 0x790($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227678u;
        goto label_227678;
    }
    ctx->pc = 0x227670u;
    SET_GPR_U32(ctx, 31, 0x227678u);
    ctx->pc = 0x227674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227670u;
    // 0x227674: 0xae420790  sw          $v0, 0x790($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1936), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x227670u, 0x227678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227678u;
label_227678:
    // 0x227678: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x227678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22767c:
    // 0x22767c: 0xc096bfc  jal         func_25AFF0
label_227680:
    if (ctx->pc == 0x227680u) {
        ctx->pc = 0x227680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22767Cu;
        // 0x227680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227684u;
        goto label_227684;
    }
    ctx->pc = 0x22767Cu;
    SET_GPR_U32(ctx, 31, 0x227684u);
    ctx->pc = 0x227680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22767Cu;
    // 0x227680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AFF0u, 0x22767Cu, 0x227684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227684u;
label_227684:
    // 0x227684: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x227684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_227688:
    // 0x227688: 0xc0f5240  jal         func_3D4900
label_22768c:
    if (ctx->pc == 0x22768Cu) {
        ctx->pc = 0x22768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227688u;
        // 0x22768c: 0xae420fc4  sw          $v0, 0xFC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227690u;
        goto label_227690;
    }
    ctx->pc = 0x227688u;
    SET_GPR_U32(ctx, 31, 0x227690u);
    ctx->pc = 0x22768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227688u;
    // 0x22768c: 0xae420fc4  sw          $v0, 0xFC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x227688u, 0x227690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227690u;
label_227690:
    // 0x227690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_227694:
    // 0x227694: 0xc096fbe  jal         func_25BEF8
label_227698:
    if (ctx->pc == 0x227698u) {
        ctx->pc = 0x227698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227694u;
        // 0x227698: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22769Cu;
        goto label_22769c;
    }
    ctx->pc = 0x227694u;
    SET_GPR_U32(ctx, 31, 0x22769Cu);
    ctx->pc = 0x227698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227694u;
    // 0x227698: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEF8u, 0x227694u, 0x22769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22769Cu;
label_22769c:
    // 0x22769c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x22769cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2276a0:
    // 0x2276a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2276a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2276a4:
    // 0x2276a4: 0xae420fcc  sw          $v0, 0xFCC($s2)
    ctx->pc = 0x2276a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4044), GPR_U32(ctx, 2));
label_2276a8:
    // 0x2276a8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2276a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_2276ac:
    // 0x2276ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2276acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2276b0:
    // 0x2276b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2276b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2276b4:
    // 0x2276b4: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x2276b4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_2276b8:
    // 0x2276b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2276b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2276bc:
    // 0x2276bc: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x2276bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_2276c0:
    // 0x2276c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2276c4:
    if (ctx->pc == 0x2276C4u) {
        ctx->pc = 0x2276C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276C0u;
        // 0x2276c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2276C8u;
        goto label_2276c8;
    }
    ctx->pc = 0x2276C0u;
    {
        const bool branch_taken_0x2276c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2276C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276C0u;
        // 0x2276c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276c0) {
            ctx->pc = 0x2276A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2276a8;
        }
    }
    ctx->pc = 0x2276C8u;
label_2276c8:
    // 0x2276c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2276c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2276cc:
    // 0x2276cc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2276ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2276d0:
    // 0x2276d0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2276d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2276d4:
    // 0x2276d4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2276d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2276d8:
    // 0x2276d8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2276d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2276dc:
    // 0x2276dc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2276dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2276e0:
    // 0x2276e0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2276e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2276e4:
    // 0x2276e4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2276e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2276e8:
    // 0x2276e8: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2276e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2276ec:
    // 0x2276ec: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2276ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2276f0:
    // 0x2276f0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2276f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2276f4:
    // 0x2276f4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2276f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2276f8:
    // 0x2276f8: 0x3e00008  jr          $ra
label_2276fc:
    if (ctx->pc == 0x2276FCu) {
        ctx->pc = 0x2276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276F8u;
        // 0x2276fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x227700u;
        goto label_fallthrough_0x2276f8;
    }
    ctx->pc = 0x2276F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276F8u;
        // 0x2276fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2276F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2276f8:
    ctx->pc = 0x227700u;
}
