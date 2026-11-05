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

// Function: sub_00306A98
// Address: 0x306a98 - 0x3072e8
void sub_00306A98_0x306a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306A98_0x306a98");
#endif

    switch (ctx->pc) {
        case 0x306a98u: goto label_306a98;
        case 0x306a9cu: goto label_306a9c;
        case 0x306aa0u: goto label_306aa0;
        case 0x306aa4u: goto label_306aa4;
        case 0x306aa8u: goto label_306aa8;
        case 0x306aacu: goto label_306aac;
        case 0x306ab0u: goto label_306ab0;
        case 0x306ab4u: goto label_306ab4;
        case 0x306ab8u: goto label_306ab8;
        case 0x306abcu: goto label_306abc;
        case 0x306ac0u: goto label_306ac0;
        case 0x306ac4u: goto label_306ac4;
        case 0x306ac8u: goto label_306ac8;
        case 0x306accu: goto label_306acc;
        case 0x306ad0u: goto label_306ad0;
        case 0x306ad4u: goto label_306ad4;
        case 0x306ad8u: goto label_306ad8;
        case 0x306adcu: goto label_306adc;
        case 0x306ae0u: goto label_306ae0;
        case 0x306ae4u: goto label_306ae4;
        case 0x306ae8u: goto label_306ae8;
        case 0x306aecu: goto label_306aec;
        case 0x306af0u: goto label_306af0;
        case 0x306af4u: goto label_306af4;
        case 0x306af8u: goto label_306af8;
        case 0x306afcu: goto label_306afc;
        case 0x306b00u: goto label_306b00;
        case 0x306b04u: goto label_306b04;
        case 0x306b08u: goto label_306b08;
        case 0x306b0cu: goto label_306b0c;
        case 0x306b10u: goto label_306b10;
        case 0x306b14u: goto label_306b14;
        case 0x306b18u: goto label_306b18;
        case 0x306b1cu: goto label_306b1c;
        case 0x306b20u: goto label_306b20;
        case 0x306b24u: goto label_306b24;
        case 0x306b28u: goto label_306b28;
        case 0x306b2cu: goto label_306b2c;
        case 0x306b30u: goto label_306b30;
        case 0x306b34u: goto label_306b34;
        case 0x306b38u: goto label_306b38;
        case 0x306b3cu: goto label_306b3c;
        case 0x306b40u: goto label_306b40;
        case 0x306b44u: goto label_306b44;
        case 0x306b48u: goto label_306b48;
        case 0x306b4cu: goto label_306b4c;
        case 0x306b50u: goto label_306b50;
        case 0x306b54u: goto label_306b54;
        case 0x306b58u: goto label_306b58;
        case 0x306b5cu: goto label_306b5c;
        case 0x306b60u: goto label_306b60;
        case 0x306b64u: goto label_306b64;
        case 0x306b68u: goto label_306b68;
        case 0x306b6cu: goto label_306b6c;
        case 0x306b70u: goto label_306b70;
        case 0x306b74u: goto label_306b74;
        case 0x306b78u: goto label_306b78;
        case 0x306b7cu: goto label_306b7c;
        case 0x306b80u: goto label_306b80;
        case 0x306b84u: goto label_306b84;
        case 0x306b88u: goto label_306b88;
        case 0x306b8cu: goto label_306b8c;
        case 0x306b90u: goto label_306b90;
        case 0x306b94u: goto label_306b94;
        case 0x306b98u: goto label_306b98;
        case 0x306b9cu: goto label_306b9c;
        case 0x306ba0u: goto label_306ba0;
        case 0x306ba4u: goto label_306ba4;
        case 0x306ba8u: goto label_306ba8;
        case 0x306bacu: goto label_306bac;
        case 0x306bb0u: goto label_306bb0;
        case 0x306bb4u: goto label_306bb4;
        case 0x306bb8u: goto label_306bb8;
        case 0x306bbcu: goto label_306bbc;
        case 0x306bc0u: goto label_306bc0;
        case 0x306bc4u: goto label_306bc4;
        case 0x306bc8u: goto label_306bc8;
        case 0x306bccu: goto label_306bcc;
        case 0x306bd0u: goto label_306bd0;
        case 0x306bd4u: goto label_306bd4;
        case 0x306bd8u: goto label_306bd8;
        case 0x306bdcu: goto label_306bdc;
        case 0x306be0u: goto label_306be0;
        case 0x306be4u: goto label_306be4;
        case 0x306be8u: goto label_306be8;
        case 0x306becu: goto label_306bec;
        case 0x306bf0u: goto label_306bf0;
        case 0x306bf4u: goto label_306bf4;
        case 0x306bf8u: goto label_306bf8;
        case 0x306bfcu: goto label_306bfc;
        case 0x306c00u: goto label_306c00;
        case 0x306c04u: goto label_306c04;
        case 0x306c08u: goto label_306c08;
        case 0x306c0cu: goto label_306c0c;
        case 0x306c10u: goto label_306c10;
        case 0x306c14u: goto label_306c14;
        case 0x306c18u: goto label_306c18;
        case 0x306c1cu: goto label_306c1c;
        case 0x306c20u: goto label_306c20;
        case 0x306c24u: goto label_306c24;
        case 0x306c28u: goto label_306c28;
        case 0x306c2cu: goto label_306c2c;
        case 0x306c30u: goto label_306c30;
        case 0x306c34u: goto label_306c34;
        case 0x306c38u: goto label_306c38;
        case 0x306c3cu: goto label_306c3c;
        case 0x306c40u: goto label_306c40;
        case 0x306c44u: goto label_306c44;
        case 0x306c48u: goto label_306c48;
        case 0x306c4cu: goto label_306c4c;
        case 0x306c50u: goto label_306c50;
        case 0x306c54u: goto label_306c54;
        case 0x306c58u: goto label_306c58;
        case 0x306c5cu: goto label_306c5c;
        case 0x306c60u: goto label_306c60;
        case 0x306c64u: goto label_306c64;
        case 0x306c68u: goto label_306c68;
        case 0x306c6cu: goto label_306c6c;
        case 0x306c70u: goto label_306c70;
        case 0x306c74u: goto label_306c74;
        case 0x306c78u: goto label_306c78;
        case 0x306c7cu: goto label_306c7c;
        case 0x306c80u: goto label_306c80;
        case 0x306c84u: goto label_306c84;
        case 0x306c88u: goto label_306c88;
        case 0x306c8cu: goto label_306c8c;
        case 0x306c90u: goto label_306c90;
        case 0x306c94u: goto label_306c94;
        case 0x306c98u: goto label_306c98;
        case 0x306c9cu: goto label_306c9c;
        case 0x306ca0u: goto label_306ca0;
        case 0x306ca4u: goto label_306ca4;
        case 0x306ca8u: goto label_306ca8;
        case 0x306cacu: goto label_306cac;
        case 0x306cb0u: goto label_306cb0;
        case 0x306cb4u: goto label_306cb4;
        case 0x306cb8u: goto label_306cb8;
        case 0x306cbcu: goto label_306cbc;
        case 0x306cc0u: goto label_306cc0;
        case 0x306cc4u: goto label_306cc4;
        case 0x306cc8u: goto label_306cc8;
        case 0x306cccu: goto label_306ccc;
        case 0x306cd0u: goto label_306cd0;
        case 0x306cd4u: goto label_306cd4;
        case 0x306cd8u: goto label_306cd8;
        case 0x306cdcu: goto label_306cdc;
        case 0x306ce0u: goto label_306ce0;
        case 0x306ce4u: goto label_306ce4;
        case 0x306ce8u: goto label_306ce8;
        case 0x306cecu: goto label_306cec;
        case 0x306cf0u: goto label_306cf0;
        case 0x306cf4u: goto label_306cf4;
        case 0x306cf8u: goto label_306cf8;
        case 0x306cfcu: goto label_306cfc;
        case 0x306d00u: goto label_306d00;
        case 0x306d04u: goto label_306d04;
        case 0x306d08u: goto label_306d08;
        case 0x306d0cu: goto label_306d0c;
        case 0x306d10u: goto label_306d10;
        case 0x306d14u: goto label_306d14;
        case 0x306d18u: goto label_306d18;
        case 0x306d1cu: goto label_306d1c;
        case 0x306d20u: goto label_306d20;
        case 0x306d24u: goto label_306d24;
        case 0x306d28u: goto label_306d28;
        case 0x306d2cu: goto label_306d2c;
        case 0x306d30u: goto label_306d30;
        case 0x306d34u: goto label_306d34;
        case 0x306d38u: goto label_306d38;
        case 0x306d3cu: goto label_306d3c;
        case 0x306d40u: goto label_306d40;
        case 0x306d44u: goto label_306d44;
        case 0x306d48u: goto label_306d48;
        case 0x306d4cu: goto label_306d4c;
        case 0x306d50u: goto label_306d50;
        case 0x306d54u: goto label_306d54;
        case 0x306d58u: goto label_306d58;
        case 0x306d5cu: goto label_306d5c;
        case 0x306d60u: goto label_306d60;
        case 0x306d64u: goto label_306d64;
        case 0x306d68u: goto label_306d68;
        case 0x306d6cu: goto label_306d6c;
        case 0x306d70u: goto label_306d70;
        case 0x306d74u: goto label_306d74;
        case 0x306d78u: goto label_306d78;
        case 0x306d7cu: goto label_306d7c;
        case 0x306d80u: goto label_306d80;
        case 0x306d84u: goto label_306d84;
        case 0x306d88u: goto label_306d88;
        case 0x306d8cu: goto label_306d8c;
        case 0x306d90u: goto label_306d90;
        case 0x306d94u: goto label_306d94;
        case 0x306d98u: goto label_306d98;
        case 0x306d9cu: goto label_306d9c;
        case 0x306da0u: goto label_306da0;
        case 0x306da4u: goto label_306da4;
        case 0x306da8u: goto label_306da8;
        case 0x306dacu: goto label_306dac;
        case 0x306db0u: goto label_306db0;
        case 0x306db4u: goto label_306db4;
        case 0x306db8u: goto label_306db8;
        case 0x306dbcu: goto label_306dbc;
        case 0x306dc0u: goto label_306dc0;
        case 0x306dc4u: goto label_306dc4;
        case 0x306dc8u: goto label_306dc8;
        case 0x306dccu: goto label_306dcc;
        case 0x306dd0u: goto label_306dd0;
        case 0x306dd4u: goto label_306dd4;
        case 0x306dd8u: goto label_306dd8;
        case 0x306ddcu: goto label_306ddc;
        case 0x306de0u: goto label_306de0;
        case 0x306de4u: goto label_306de4;
        case 0x306de8u: goto label_306de8;
        case 0x306decu: goto label_306dec;
        case 0x306df0u: goto label_306df0;
        case 0x306df4u: goto label_306df4;
        case 0x306df8u: goto label_306df8;
        case 0x306dfcu: goto label_306dfc;
        case 0x306e00u: goto label_306e00;
        case 0x306e04u: goto label_306e04;
        case 0x306e08u: goto label_306e08;
        case 0x306e0cu: goto label_306e0c;
        case 0x306e10u: goto label_306e10;
        case 0x306e14u: goto label_306e14;
        case 0x306e18u: goto label_306e18;
        case 0x306e1cu: goto label_306e1c;
        case 0x306e20u: goto label_306e20;
        case 0x306e24u: goto label_306e24;
        case 0x306e28u: goto label_306e28;
        case 0x306e2cu: goto label_306e2c;
        case 0x306e30u: goto label_306e30;
        case 0x306e34u: goto label_306e34;
        case 0x306e38u: goto label_306e38;
        case 0x306e3cu: goto label_306e3c;
        case 0x306e40u: goto label_306e40;
        case 0x306e44u: goto label_306e44;
        case 0x306e48u: goto label_306e48;
        case 0x306e4cu: goto label_306e4c;
        case 0x306e50u: goto label_306e50;
        case 0x306e54u: goto label_306e54;
        case 0x306e58u: goto label_306e58;
        case 0x306e5cu: goto label_306e5c;
        case 0x306e60u: goto label_306e60;
        case 0x306e64u: goto label_306e64;
        case 0x306e68u: goto label_306e68;
        case 0x306e6cu: goto label_306e6c;
        case 0x306e70u: goto label_306e70;
        case 0x306e74u: goto label_306e74;
        case 0x306e78u: goto label_306e78;
        case 0x306e7cu: goto label_306e7c;
        case 0x306e80u: goto label_306e80;
        case 0x306e84u: goto label_306e84;
        case 0x306e88u: goto label_306e88;
        case 0x306e8cu: goto label_306e8c;
        case 0x306e90u: goto label_306e90;
        case 0x306e94u: goto label_306e94;
        case 0x306e98u: goto label_306e98;
        case 0x306e9cu: goto label_306e9c;
        case 0x306ea0u: goto label_306ea0;
        case 0x306ea4u: goto label_306ea4;
        case 0x306ea8u: goto label_306ea8;
        case 0x306eacu: goto label_306eac;
        case 0x306eb0u: goto label_306eb0;
        case 0x306eb4u: goto label_306eb4;
        case 0x306eb8u: goto label_306eb8;
        case 0x306ebcu: goto label_306ebc;
        case 0x306ec0u: goto label_306ec0;
        case 0x306ec4u: goto label_306ec4;
        case 0x306ec8u: goto label_306ec8;
        case 0x306eccu: goto label_306ecc;
        case 0x306ed0u: goto label_306ed0;
        case 0x306ed4u: goto label_306ed4;
        case 0x306ed8u: goto label_306ed8;
        case 0x306edcu: goto label_306edc;
        case 0x306ee0u: goto label_306ee0;
        case 0x306ee4u: goto label_306ee4;
        case 0x306ee8u: goto label_306ee8;
        case 0x306eecu: goto label_306eec;
        case 0x306ef0u: goto label_306ef0;
        case 0x306ef4u: goto label_306ef4;
        case 0x306ef8u: goto label_306ef8;
        case 0x306efcu: goto label_306efc;
        case 0x306f00u: goto label_306f00;
        case 0x306f04u: goto label_306f04;
        case 0x306f08u: goto label_306f08;
        case 0x306f0cu: goto label_306f0c;
        case 0x306f10u: goto label_306f10;
        case 0x306f14u: goto label_306f14;
        case 0x306f18u: goto label_306f18;
        case 0x306f1cu: goto label_306f1c;
        case 0x306f20u: goto label_306f20;
        case 0x306f24u: goto label_306f24;
        case 0x306f28u: goto label_306f28;
        case 0x306f2cu: goto label_306f2c;
        case 0x306f30u: goto label_306f30;
        case 0x306f34u: goto label_306f34;
        case 0x306f38u: goto label_306f38;
        case 0x306f3cu: goto label_306f3c;
        case 0x306f40u: goto label_306f40;
        case 0x306f44u: goto label_306f44;
        case 0x306f48u: goto label_306f48;
        case 0x306f4cu: goto label_306f4c;
        case 0x306f50u: goto label_306f50;
        case 0x306f54u: goto label_306f54;
        case 0x306f58u: goto label_306f58;
        case 0x306f5cu: goto label_306f5c;
        case 0x306f60u: goto label_306f60;
        case 0x306f64u: goto label_306f64;
        case 0x306f68u: goto label_306f68;
        case 0x306f6cu: goto label_306f6c;
        case 0x306f70u: goto label_306f70;
        case 0x306f74u: goto label_306f74;
        case 0x306f78u: goto label_306f78;
        case 0x306f7cu: goto label_306f7c;
        case 0x306f80u: goto label_306f80;
        case 0x306f84u: goto label_306f84;
        case 0x306f88u: goto label_306f88;
        case 0x306f8cu: goto label_306f8c;
        case 0x306f90u: goto label_306f90;
        case 0x306f94u: goto label_306f94;
        case 0x306f98u: goto label_306f98;
        case 0x306f9cu: goto label_306f9c;
        case 0x306fa0u: goto label_306fa0;
        case 0x306fa4u: goto label_306fa4;
        case 0x306fa8u: goto label_306fa8;
        case 0x306facu: goto label_306fac;
        case 0x306fb0u: goto label_306fb0;
        case 0x306fb4u: goto label_306fb4;
        case 0x306fb8u: goto label_306fb8;
        case 0x306fbcu: goto label_306fbc;
        case 0x306fc0u: goto label_306fc0;
        case 0x306fc4u: goto label_306fc4;
        case 0x306fc8u: goto label_306fc8;
        case 0x306fccu: goto label_306fcc;
        case 0x306fd0u: goto label_306fd0;
        case 0x306fd4u: goto label_306fd4;
        case 0x306fd8u: goto label_306fd8;
        case 0x306fdcu: goto label_306fdc;
        case 0x306fe0u: goto label_306fe0;
        case 0x306fe4u: goto label_306fe4;
        case 0x306fe8u: goto label_306fe8;
        case 0x306fecu: goto label_306fec;
        case 0x306ff0u: goto label_306ff0;
        case 0x306ff4u: goto label_306ff4;
        case 0x306ff8u: goto label_306ff8;
        case 0x306ffcu: goto label_306ffc;
        case 0x307000u: goto label_307000;
        case 0x307004u: goto label_307004;
        case 0x307008u: goto label_307008;
        case 0x30700cu: goto label_30700c;
        case 0x307010u: goto label_307010;
        case 0x307014u: goto label_307014;
        case 0x307018u: goto label_307018;
        case 0x30701cu: goto label_30701c;
        case 0x307020u: goto label_307020;
        case 0x307024u: goto label_307024;
        case 0x307028u: goto label_307028;
        case 0x30702cu: goto label_30702c;
        case 0x307030u: goto label_307030;
        case 0x307034u: goto label_307034;
        case 0x307038u: goto label_307038;
        case 0x30703cu: goto label_30703c;
        case 0x307040u: goto label_307040;
        case 0x307044u: goto label_307044;
        case 0x307048u: goto label_307048;
        case 0x30704cu: goto label_30704c;
        case 0x307050u: goto label_307050;
        case 0x307054u: goto label_307054;
        case 0x307058u: goto label_307058;
        case 0x30705cu: goto label_30705c;
        case 0x307060u: goto label_307060;
        case 0x307064u: goto label_307064;
        case 0x307068u: goto label_307068;
        case 0x30706cu: goto label_30706c;
        case 0x307070u: goto label_307070;
        case 0x307074u: goto label_307074;
        case 0x307078u: goto label_307078;
        case 0x30707cu: goto label_30707c;
        case 0x307080u: goto label_307080;
        case 0x307084u: goto label_307084;
        case 0x307088u: goto label_307088;
        case 0x30708cu: goto label_30708c;
        case 0x307090u: goto label_307090;
        case 0x307094u: goto label_307094;
        case 0x307098u: goto label_307098;
        case 0x30709cu: goto label_30709c;
        case 0x3070a0u: goto label_3070a0;
        case 0x3070a4u: goto label_3070a4;
        case 0x3070a8u: goto label_3070a8;
        case 0x3070acu: goto label_3070ac;
        case 0x3070b0u: goto label_3070b0;
        case 0x3070b4u: goto label_3070b4;
        case 0x3070b8u: goto label_3070b8;
        case 0x3070bcu: goto label_3070bc;
        case 0x3070c0u: goto label_3070c0;
        case 0x3070c4u: goto label_3070c4;
        case 0x3070c8u: goto label_3070c8;
        case 0x3070ccu: goto label_3070cc;
        case 0x3070d0u: goto label_3070d0;
        case 0x3070d4u: goto label_3070d4;
        case 0x3070d8u: goto label_3070d8;
        case 0x3070dcu: goto label_3070dc;
        case 0x3070e0u: goto label_3070e0;
        case 0x3070e4u: goto label_3070e4;
        case 0x3070e8u: goto label_3070e8;
        case 0x3070ecu: goto label_3070ec;
        case 0x3070f0u: goto label_3070f0;
        case 0x3070f4u: goto label_3070f4;
        case 0x3070f8u: goto label_3070f8;
        case 0x3070fcu: goto label_3070fc;
        case 0x307100u: goto label_307100;
        case 0x307104u: goto label_307104;
        case 0x307108u: goto label_307108;
        case 0x30710cu: goto label_30710c;
        case 0x307110u: goto label_307110;
        case 0x307114u: goto label_307114;
        case 0x307118u: goto label_307118;
        case 0x30711cu: goto label_30711c;
        case 0x307120u: goto label_307120;
        case 0x307124u: goto label_307124;
        case 0x307128u: goto label_307128;
        case 0x30712cu: goto label_30712c;
        case 0x307130u: goto label_307130;
        case 0x307134u: goto label_307134;
        case 0x307138u: goto label_307138;
        case 0x30713cu: goto label_30713c;
        case 0x307140u: goto label_307140;
        case 0x307144u: goto label_307144;
        case 0x307148u: goto label_307148;
        case 0x30714cu: goto label_30714c;
        case 0x307150u: goto label_307150;
        case 0x307154u: goto label_307154;
        case 0x307158u: goto label_307158;
        case 0x30715cu: goto label_30715c;
        case 0x307160u: goto label_307160;
        case 0x307164u: goto label_307164;
        case 0x307168u: goto label_307168;
        case 0x30716cu: goto label_30716c;
        case 0x307170u: goto label_307170;
        case 0x307174u: goto label_307174;
        case 0x307178u: goto label_307178;
        case 0x30717cu: goto label_30717c;
        case 0x307180u: goto label_307180;
        case 0x307184u: goto label_307184;
        case 0x307188u: goto label_307188;
        case 0x30718cu: goto label_30718c;
        case 0x307190u: goto label_307190;
        case 0x307194u: goto label_307194;
        case 0x307198u: goto label_307198;
        case 0x30719cu: goto label_30719c;
        case 0x3071a0u: goto label_3071a0;
        case 0x3071a4u: goto label_3071a4;
        case 0x3071a8u: goto label_3071a8;
        case 0x3071acu: goto label_3071ac;
        case 0x3071b0u: goto label_3071b0;
        case 0x3071b4u: goto label_3071b4;
        case 0x3071b8u: goto label_3071b8;
        case 0x3071bcu: goto label_3071bc;
        case 0x3071c0u: goto label_3071c0;
        case 0x3071c4u: goto label_3071c4;
        case 0x3071c8u: goto label_3071c8;
        case 0x3071ccu: goto label_3071cc;
        case 0x3071d0u: goto label_3071d0;
        case 0x3071d4u: goto label_3071d4;
        case 0x3071d8u: goto label_3071d8;
        case 0x3071dcu: goto label_3071dc;
        case 0x3071e0u: goto label_3071e0;
        case 0x3071e4u: goto label_3071e4;
        case 0x3071e8u: goto label_3071e8;
        case 0x3071ecu: goto label_3071ec;
        case 0x3071f0u: goto label_3071f0;
        case 0x3071f4u: goto label_3071f4;
        case 0x3071f8u: goto label_3071f8;
        case 0x3071fcu: goto label_3071fc;
        case 0x307200u: goto label_307200;
        case 0x307204u: goto label_307204;
        case 0x307208u: goto label_307208;
        case 0x30720cu: goto label_30720c;
        case 0x307210u: goto label_307210;
        case 0x307214u: goto label_307214;
        case 0x307218u: goto label_307218;
        case 0x30721cu: goto label_30721c;
        case 0x307220u: goto label_307220;
        case 0x307224u: goto label_307224;
        case 0x307228u: goto label_307228;
        case 0x30722cu: goto label_30722c;
        case 0x307230u: goto label_307230;
        case 0x307234u: goto label_307234;
        case 0x307238u: goto label_307238;
        case 0x30723cu: goto label_30723c;
        case 0x307240u: goto label_307240;
        case 0x307244u: goto label_307244;
        case 0x307248u: goto label_307248;
        case 0x30724cu: goto label_30724c;
        case 0x307250u: goto label_307250;
        case 0x307254u: goto label_307254;
        case 0x307258u: goto label_307258;
        case 0x30725cu: goto label_30725c;
        case 0x307260u: goto label_307260;
        case 0x307264u: goto label_307264;
        case 0x307268u: goto label_307268;
        case 0x30726cu: goto label_30726c;
        case 0x307270u: goto label_307270;
        case 0x307274u: goto label_307274;
        case 0x307278u: goto label_307278;
        case 0x30727cu: goto label_30727c;
        case 0x307280u: goto label_307280;
        case 0x307284u: goto label_307284;
        case 0x307288u: goto label_307288;
        case 0x30728cu: goto label_30728c;
        case 0x307290u: goto label_307290;
        case 0x307294u: goto label_307294;
        case 0x307298u: goto label_307298;
        case 0x30729cu: goto label_30729c;
        case 0x3072a0u: goto label_3072a0;
        case 0x3072a4u: goto label_3072a4;
        case 0x3072a8u: goto label_3072a8;
        case 0x3072acu: goto label_3072ac;
        case 0x3072b0u: goto label_3072b0;
        case 0x3072b4u: goto label_3072b4;
        case 0x3072b8u: goto label_3072b8;
        case 0x3072bcu: goto label_3072bc;
        case 0x3072c0u: goto label_3072c0;
        case 0x3072c4u: goto label_3072c4;
        case 0x3072c8u: goto label_3072c8;
        case 0x3072ccu: goto label_3072cc;
        case 0x3072d0u: goto label_3072d0;
        case 0x3072d4u: goto label_3072d4;
        case 0x3072d8u: goto label_3072d8;
        case 0x3072dcu: goto label_3072dc;
        case 0x3072e0u: goto label_3072e0;
        case 0x3072e4u: goto label_3072e4;
        default: break;
    }

    ctx->pc = 0x306a98u;

label_306a98:
    // 0x306a98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x306a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_306a9c:
    // 0x306a9c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x306a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_306aa0:
    // 0x306aa0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x306aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_306aa4:
    // 0x306aa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306aa8:
    // 0x306aa8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x306aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_306aac:
    // 0x306aac: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x306aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_306ab0:
    // 0x306ab0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x306ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_306ab4:
    // 0x306ab4: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x306ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_306ab8:
    // 0x306ab8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x306ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_306abc:
    // 0x306abc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x306abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_306ac0:
    // 0x306ac0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x306ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_306ac4:
    // 0x306ac4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x306ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_306ac8:
    // 0x306ac8: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x306ac8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_306acc:
    // 0x306acc: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x306accu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_306ad0:
    // 0x306ad0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x306ad0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_306ad4:
    // 0x306ad4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x306ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_306ad8:
    // 0x306ad8: 0x8e250334  lw          $a1, 0x334($s1)
    ctx->pc = 0x306ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_306adc:
    // 0x306adc: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x306adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_306ae0:
    // 0x306ae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_306ae4:
    if (ctx->pc == 0x306AE4u) {
        ctx->pc = 0x306AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AE0u;
        // 0x306ae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AE8u;
        goto label_306ae8;
    }
    ctx->pc = 0x306AE0u;
    {
        const bool branch_taken_0x306ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AE0u;
        // 0x306ae4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ae0) {
            ctx->pc = 0x306AF0u;
            goto label_306af0;
        }
    }
    ctx->pc = 0x306AE8u;
label_306ae8:
    // 0x306ae8: 0x1000000c  b           . + 4 + (0xC << 2)
label_306aec:
    if (ctx->pc == 0x306AECu) {
        ctx->pc = 0x306AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AE8u;
        // 0x306aec: 0x3c10005b  lui         $s0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AF0u;
        goto label_306af0;
    }
    ctx->pc = 0x306AE8u;
    {
        const bool branch_taken_0x306ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AE8u;
        // 0x306aec: 0x3c10005b  lui         $s0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ae8) {
            ctx->pc = 0x306B1Cu;
            goto label_306b1c;
        }
    }
    ctx->pc = 0x306AF0u;
label_306af0:
    // 0x306af0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306af4:
    // 0x306af4: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x306af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
label_306af8:
    // 0x306af8: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x306af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_306afc:
    // 0x306afc: 0x0  nop
    ctx->pc = 0x306afcu;
    // NOP
label_306b00:
    // 0x306b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x306b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306b04:
    // 0x306b04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_306b08:
    if (ctx->pc == 0x306B08u) {
        ctx->pc = 0x306B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B04u;
        // 0x306b08: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B0Cu;
        goto label_306b0c;
    }
    ctx->pc = 0x306B04u;
    {
        const bool branch_taken_0x306b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B04u;
        // 0x306b08: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b04) {
            ctx->pc = 0x306B1Cu;
            goto label_306b1c;
        }
    }
    ctx->pc = 0x306B0Cu;
label_306b0c:
    // 0x306b0c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x306b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_306b10:
    // 0x306b10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_306b14:
    if (ctx->pc == 0x306B14u) {
        ctx->pc = 0x306B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B10u;
        // 0x306b14: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B18u;
        goto label_306b18;
    }
    ctx->pc = 0x306B10u;
    {
        const bool branch_taken_0x306b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B10u;
        // 0x306b14: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b10) {
            ctx->pc = 0x306B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306b00;
        }
    }
    ctx->pc = 0x306B18u;
label_306b18:
    // 0x306b18: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x306b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_306b1c:
    // 0x306b1c: 0xc455001c  lwc1        $f21, 0x1C($v0)
    ctx->pc = 0x306b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_306b20:
    // 0x306b20: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x306b20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306b24:
    // 0x306b24: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x306b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
label_306b28:
    // 0x306b28: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x306b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_306b2c:
    // 0x306b2c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_306b30:
    if (ctx->pc == 0x306B30u) {
        ctx->pc = 0x306B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B2Cu;
        // 0x306b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B34u;
        goto label_306b34;
    }
    ctx->pc = 0x306B2Cu;
    {
        const bool branch_taken_0x306b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x306B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B2Cu;
        // 0x306b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b2c) {
            ctx->pc = 0x306B44u;
            goto label_306b44;
        }
    }
    ctx->pc = 0x306B34u;
label_306b34:
    // 0x306b34: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x306b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
label_306b38:
    // 0x306b38: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x306b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_306b3c:
    // 0x306b3c: 0x38420760  xori        $v0, $v0, 0x760
    ctx->pc = 0x306b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1888);
label_306b40:
    // 0x306b40: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x306b40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_306b44:
    // 0x306b44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_306b48:
    if (ctx->pc == 0x306B48u) {
        ctx->pc = 0x306B4Cu;
        goto label_306b4c;
    }
    ctx->pc = 0x306B44u;
    {
        const bool branch_taken_0x306b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b44) {
            ctx->pc = 0x306B58u;
            goto label_306b58;
        }
    }
    ctx->pc = 0x306B4Cu;
label_306b4c:
    // 0x306b4c: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x306b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306b50:
    // 0x306b50: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x306b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_306b54:
    // 0x306b54: 0x3f00a  movz        $fp, $zero, $v1
    ctx->pc = 0x306b54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 0));
label_306b58:
    // 0x306b58: 0xc0899bc  jal         func_2266F0
label_306b5c:
    if (ctx->pc == 0x306B5Cu) {
        ctx->pc = 0x306B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B58u;
        // 0x306b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B60u;
        goto label_306b60;
    }
    ctx->pc = 0x306B58u;
    SET_GPR_U32(ctx, 31, 0x306B60u);
    ctx->pc = 0x306B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B58u;
    // 0x306b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x306B58u, 0x306B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B60u;
label_306b60:
    // 0x306b60: 0x8c5300b8  lw          $s3, 0xB8($v0)
    ctx->pc = 0x306b60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_306b64:
    // 0x306b64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x306b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_306b68:
    // 0x306b68: 0x260221e8  addiu       $v0, $s0, 0x21E8
    ctx->pc = 0x306b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8680));
label_306b6c:
    // 0x306b6c: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x306b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306b70:
    // 0x306b70: 0x8c55008c  lw          $s5, 0x8C($v0)
    ctx->pc = 0x306b70u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_306b74:
    // 0x306b74: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x306b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_306b78:
    // 0x306b78: 0x8c92032c  lw          $s2, 0x32C($a0)
    ctx->pc = 0x306b78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
label_306b7c:
    // 0x306b7c: 0x8c900700  lw          $s0, 0x700($a0)
    ctx->pc = 0x306b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1792)));
label_306b80:
    // 0x306b80: 0x16a30008  bne         $s5, $v1, . + 4 + (0x8 << 2)
label_306b84:
    if (ctx->pc == 0x306B84u) {
        ctx->pc = 0x306B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B80u;
        // 0x306b84: 0x8c5601cc  lw          $s6, 0x1CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B88u;
        goto label_306b88;
    }
    ctx->pc = 0x306B80u;
    {
        const bool branch_taken_0x306b80 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x306B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B80u;
        // 0x306b84: 0x8c5601cc  lw          $s6, 0x1CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b80) {
            ctx->pc = 0x306BA4u;
            goto label_306ba4;
        }
    }
    ctx->pc = 0x306B88u;
label_306b88:
    // 0x306b88: 0x908206fc  lbu         $v0, 0x6FC($a0)
    ctx->pc = 0x306b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1788)));
label_306b8c:
    // 0x306b8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_306b90:
    if (ctx->pc == 0x306B90u) {
        ctx->pc = 0x306B94u;
        goto label_306b94;
    }
    ctx->pc = 0x306B8Cu;
    {
        const bool branch_taken_0x306b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306b8c) {
            ctx->pc = 0x306BA4u;
            goto label_306ba4;
        }
    }
    ctx->pc = 0x306B94u;
label_306b94:
    // 0x306b94: 0xc089f8a  jal         func_227E28
label_306b98:
    if (ctx->pc == 0x306B98u) {
        ctx->pc = 0x306B9Cu;
        goto label_306b9c;
    }
    ctx->pc = 0x306B94u;
    SET_GPR_U32(ctx, 31, 0x306B9Cu);
    ctx->pc = 0x227E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E28u, 0x306B94u, 0x306B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B9Cu;
label_306b9c:
    // 0x306b9c: 0xc089f20  jal         func_227C80
label_306ba0:
    if (ctx->pc == 0x306BA0u) {
        ctx->pc = 0x306BA4u;
        goto label_306ba4;
    }
    ctx->pc = 0x306B9Cu;
    SET_GPR_U32(ctx, 31, 0x306BA4u);
    ctx->pc = 0x227C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C80u, 0x306B9Cu, 0x306BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BA4u;
label_306ba4:
    // 0x306ba4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_306ba8:
    if (ctx->pc == 0x306BA8u) {
        ctx->pc = 0x306BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BA4u;
        // 0x306ba8: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BACu;
        goto label_306bac;
    }
    ctx->pc = 0x306BA4u;
    {
        const bool branch_taken_0x306ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BA4u;
        // 0x306ba8: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ba4) {
            ctx->pc = 0x306BE0u;
            goto label_306be0;
        }
    }
    ctx->pc = 0x306BACu;
label_306bac:
    // 0x306bac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_306bb0:
    if (ctx->pc == 0x306BB0u) {
        ctx->pc = 0x306BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BACu;
        // 0x306bb0: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BB4u;
        goto label_306bb4;
    }
    ctx->pc = 0x306BACu;
    {
        const bool branch_taken_0x306bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306bac) {
            ctx->pc = 0x306BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306BACu;
            // 0x306bb0: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306BD0u;
            goto label_306bd0;
        }
    }
    ctx->pc = 0x306BB4u;
label_306bb4:
    // 0x306bb4: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x306bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306bb8:
    // 0x306bb8: 0xc089faa  jal         func_227EA8
label_306bbc:
    if (ctx->pc == 0x306BBCu) {
        ctx->pc = 0x306BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BB8u;
        // 0x306bbc: 0x16a080  sll         $s4, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BC0u;
        goto label_306bc0;
    }
    ctx->pc = 0x306BB8u;
    SET_GPR_U32(ctx, 31, 0x306BC0u);
    ctx->pc = 0x306BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BB8u;
    // 0x306bbc: 0x16a080  sll         $s4, $s6, 2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EA8u, 0x306BB8u, 0x306BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BC0u;
label_306bc0:
    // 0x306bc0: 0xc089f68  jal         func_227DA0
label_306bc4:
    if (ctx->pc == 0x306BC4u) {
        ctx->pc = 0x306BC8u;
        goto label_306bc8;
    }
    ctx->pc = 0x306BC0u;
    SET_GPR_U32(ctx, 31, 0x306BC8u);
    ctx->pc = 0x227DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DA0u, 0x306BC0u, 0x306BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BC8u;
label_306bc8:
    // 0x306bc8: 0x100000bf  b           . + 4 + (0xBF << 2)
label_306bcc:
    if (ctx->pc == 0x306BCCu) {
        ctx->pc = 0x306BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BC8u;
        // 0x306bcc: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BD0u;
        goto label_306bd0;
    }
    ctx->pc = 0x306BC8u;
    {
        const bool branch_taken_0x306bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BC8u;
        // 0x306bcc: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bc8) {
            ctx->pc = 0x306EC8u;
            goto label_306ec8;
        }
    }
    ctx->pc = 0x306BD0u;
label_306bd0:
    // 0x306bd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x306bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_306bd4:
    // 0x306bd4: 0x16a080  sll         $s4, $s6, 2
    ctx->pc = 0x306bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_306bd8:
    // 0x306bd8: 0x100000ba  b           . + 4 + (0xBA << 2)
label_306bdc:
    if (ctx->pc == 0x306BDCu) {
        ctx->pc = 0x306BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BD8u;
        // 0x306bdc: 0xac500700  sw          $s0, 0x700($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1792), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BE0u;
        goto label_306be0;
    }
    ctx->pc = 0x306BD8u;
    {
        const bool branch_taken_0x306bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BD8u;
        // 0x306bdc: 0xac500700  sw          $s0, 0x700($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1792), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bd8) {
            ctx->pc = 0x306EC4u;
            goto label_306ec4;
        }
    }
    ctx->pc = 0x306BE0u;
label_306be0:
    // 0x306be0: 0x124000b8  beqz        $s2, . + 4 + (0xB8 << 2)
label_306be4:
    if (ctx->pc == 0x306BE4u) {
        ctx->pc = 0x306BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BE0u;
        // 0x306be4: 0x16a080  sll         $s4, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BE8u;
        goto label_306be8;
    }
    ctx->pc = 0x306BE0u;
    {
        const bool branch_taken_0x306be0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x306BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BE0u;
        // 0x306be4: 0x16a080  sll         $s4, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306be0) {
            ctx->pc = 0x306EC4u;
            goto label_306ec4;
        }
    }
    ctx->pc = 0x306BE8u;
label_306be8:
    // 0x306be8: 0x8e42022c  lw          $v0, 0x22C($s2)
    ctx->pc = 0x306be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_306bec:
    // 0x306bec: 0x544000b6  bnel        $v0, $zero, . + 4 + (0xB6 << 2)
label_306bf0:
    if (ctx->pc == 0x306BF0u) {
        ctx->pc = 0x306BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BECu;
        // 0x306bf0: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BF4u;
        goto label_306bf4;
    }
    ctx->pc = 0x306BECu;
    {
        const bool branch_taken_0x306bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306bec) {
            ctx->pc = 0x306BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306BECu;
            // 0x306bf0: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306EC8u;
            goto label_306ec8;
        }
    }
    ctx->pc = 0x306BF4u;
label_306bf4:
    // 0x306bf4: 0x8e420228  lw          $v0, 0x228($s2)
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_306bf8:
    // 0x306bf8: 0x544000b3  bnel        $v0, $zero, . + 4 + (0xB3 << 2)
label_306bfc:
    if (ctx->pc == 0x306BFCu) {
        ctx->pc = 0x306BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BF8u;
        // 0x306bfc: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C00u;
        goto label_306c00;
    }
    ctx->pc = 0x306BF8u;
    {
        const bool branch_taken_0x306bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306bf8) {
            ctx->pc = 0x306BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306BF8u;
            // 0x306bfc: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306EC8u;
            goto label_306ec8;
        }
    }
    ctx->pc = 0x306C00u;
label_306c00:
    // 0x306c00: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x306c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_306c04:
    // 0x306c04: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x306c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_306c08:
    // 0x306c08: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x306c08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306c0c:
    // 0x306c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306c10:
    // 0x306c10: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x306c10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
label_306c14:
    // 0x306c14: 0xc0b93fc  jal         func_2E4FF0
label_306c18:
    if (ctx->pc == 0x306C18u) {
        ctx->pc = 0x306C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C14u;
        // 0x306c18: 0x4600b5c6  mov.s       $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C1Cu;
        goto label_306c1c;
    }
    ctx->pc = 0x306C14u;
    SET_GPR_U32(ctx, 31, 0x306C1Cu);
    ctx->pc = 0x306C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C14u;
    // 0x306c18: 0x4600b5c6  mov.s       $f23, $f22 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF0u, 0x306C14u, 0x306C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C1Cu;
label_306c1c:
    // 0x306c1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_306c20:
    if (ctx->pc == 0x306C20u) {
        ctx->pc = 0x306C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C1Cu;
        // 0x306c20: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C24u;
        goto label_306c24;
    }
    ctx->pc = 0x306C1Cu;
    {
        const bool branch_taken_0x306c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C1Cu;
        // 0x306c20: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c1c) {
            ctx->pc = 0x306C60u;
            goto label_306c60;
        }
    }
    ctx->pc = 0x306C24u;
label_306c24:
    // 0x306c24: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x306c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306c28:
    // 0x306c28: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_306c2c:
    if (ctx->pc == 0x306C2Cu) {
        ctx->pc = 0x306C30u;
        goto label_306c30;
    }
    ctx->pc = 0x306C28u;
    {
        const bool branch_taken_0x306c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c28) {
            ctx->pc = 0x306C7Cu;
            goto label_306c7c;
        }
    }
    ctx->pc = 0x306C30u;
label_306c30:
    // 0x306c30: 0x8c421100  lw          $v0, 0x1100($v0)
    ctx->pc = 0x306c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4352)));
label_306c34:
    // 0x306c34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_306c38:
    if (ctx->pc == 0x306C38u) {
        ctx->pc = 0x306C3Cu;
        goto label_306c3c;
    }
    ctx->pc = 0x306C34u;
    {
        const bool branch_taken_0x306c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c34) {
            ctx->pc = 0x306C7Cu;
            goto label_306c7c;
        }
    }
    ctx->pc = 0x306C3Cu;
label_306c3c:
    // 0x306c3c: 0x8c4202c8  lw          $v0, 0x2C8($v0)
    ctx->pc = 0x306c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
label_306c40:
    // 0x306c40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_306c44:
    if (ctx->pc == 0x306C44u) {
        ctx->pc = 0x306C48u;
        goto label_306c48;
    }
    ctx->pc = 0x306C40u;
    {
        const bool branch_taken_0x306c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c40) {
            ctx->pc = 0x306C7Cu;
            goto label_306c7c;
        }
    }
    ctx->pc = 0x306C48u;
label_306c48:
    // 0x306c48: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x306c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_306c4c:
    // 0x306c4c: 0xc4570144  lwc1        $f23, 0x144($v0)
    ctx->pc = 0x306c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_306c50:
    // 0x306c50: 0xc4540138  lwc1        $f20, 0x138($v0)
    ctx->pc = 0x306c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_306c54:
    // 0x306c54: 0xc456013c  lwc1        $f22, 0x13C($v0)
    ctx->pc = 0x306c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_306c58:
    // 0x306c58: 0x10000008  b           . + 4 + (0x8 << 2)
label_306c5c:
    if (ctx->pc == 0x306C5Cu) {
        ctx->pc = 0x306C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C58u;
        // 0x306c5c: 0x8c570140  lw          $s7, 0x140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C60u;
        goto label_306c60;
    }
    ctx->pc = 0x306C58u;
    {
        const bool branch_taken_0x306c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C58u;
        // 0x306c5c: 0x8c570140  lw          $s7, 0x140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c58) {
            ctx->pc = 0x306C7Cu;
            goto label_306c7c;
        }
    }
    ctx->pc = 0x306C60u;
label_306c60:
    // 0x306c60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x306c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306c64:
    // 0x306c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x306c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306c68:
    // 0x306c68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x306c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306c6c:
    // 0x306c6c: 0xc454042c  lwc1        $f20, 0x42C($v0)
    ctx->pc = 0x306c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_306c70:
    // 0x306c70: 0xc476043c  lwc1        $f22, 0x43C($v1)
    ctx->pc = 0x306c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_306c74:
    // 0x306c74: 0x8c97044c  lw          $s7, 0x44C($a0)
    ctx->pc = 0x306c74u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1100)));
label_306c78:
    // 0x306c78: 0xc4b704a0  lwc1        $f23, 0x4A0($a1)
    ctx->pc = 0x306c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_306c7c:
    // 0x306c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x306c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306c80:
    // 0x306c80: 0x0  nop
    ctx->pc = 0x306c80u;
    // NOP
label_306c84:
    // 0x306c84: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x306c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306c88:
    // 0x306c88: 0x0  nop
    ctx->pc = 0x306c88u;
    // NOP
label_306c8c:
    // 0x306c8c: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_306c90:
    if (ctx->pc == 0x306C90u) {
        ctx->pc = 0x306C94u;
        goto label_306c94;
    }
    ctx->pc = 0x306C8Cu;
    {
        const bool branch_taken_0x306c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306c8c) {
            ctx->pc = 0x306D88u;
            goto label_306d88;
        }
    }
    ctx->pc = 0x306C94u;
label_306c94:
    // 0x306c94: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x306c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306c98:
    // 0x306c98: 0x0  nop
    ctx->pc = 0x306c98u;
    // NOP
label_306c9c:
    // 0x306c9c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_306ca0:
    if (ctx->pc == 0x306CA0u) {
        ctx->pc = 0x306CA4u;
        goto label_306ca4;
    }
    ctx->pc = 0x306C9Cu;
    {
        const bool branch_taken_0x306c9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306c9c) {
            ctx->pc = 0x306D88u;
            goto label_306d88;
        }
    }
    ctx->pc = 0x306CA4u;
label_306ca4:
    // 0x306ca4: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x306ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306ca8:
    // 0x306ca8: 0xc08a1f2  jal         func_2287C8
label_306cac:
    if (ctx->pc == 0x306CACu) {
        ctx->pc = 0x306CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CA8u;
        // 0x306cac: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CB0u;
        goto label_306cb0;
    }
    ctx->pc = 0x306CA8u;
    SET_GPR_U32(ctx, 31, 0x306CB0u);
    ctx->pc = 0x306CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CA8u;
    // 0x306cac: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x306CA8u, 0x306CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CB0u;
label_306cb0:
    // 0x306cb0: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x306cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306cb4:
    // 0x306cb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306cb8:
    // 0x306cb8: 0xc08a1f2  jal         func_2287C8
label_306cbc:
    if (ctx->pc == 0x306CBCu) {
        ctx->pc = 0x306CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CB8u;
        // 0x306cbc: 0x24050410  addiu       $a1, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CC0u;
        goto label_306cc0;
    }
    ctx->pc = 0x306CB8u;
    SET_GPR_U32(ctx, 31, 0x306CC0u);
    ctx->pc = 0x306CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CB8u;
    // 0x306cbc: 0x24050410  addiu       $a1, $zero, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x306CB8u, 0x306CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CC0u;
label_306cc0:
    // 0x306cc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x306cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306cc4:
    // 0x306cc4: 0xc0f70ce  jal         func_3DC338
label_306cc8:
    if (ctx->pc == 0x306CC8u) {
        ctx->pc = 0x306CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CC4u;
        // 0x306cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CCCu;
        goto label_306ccc;
    }
    ctx->pc = 0x306CC4u;
    SET_GPR_U32(ctx, 31, 0x306CCCu);
    ctx->pc = 0x306CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CC4u;
    // 0x306cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x306CC4u, 0x306CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CCCu;
label_306ccc:
    // 0x306ccc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_306cd0:
    if (ctx->pc == 0x306CD0u) {
        ctx->pc = 0x306CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CCCu;
        // 0x306cd0: 0x261000b0  addiu       $s0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CD4u;
        goto label_306cd4;
    }
    ctx->pc = 0x306CCCu;
    {
        const bool branch_taken_0x306ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306ccc) {
            ctx->pc = 0x306CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306CCCu;
            // 0x306cd0: 0x261000b0  addiu       $s0, $s0, 0xB0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306CE0u;
            goto label_306ce0;
        }
    }
    ctx->pc = 0x306CD4u;
label_306cd4:
    // 0x306cd4: 0xc0c4900  jal         func_312400
label_306cd8:
    if (ctx->pc == 0x306CD8u) {
        ctx->pc = 0x306CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CD4u;
        // 0x306cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CDCu;
        goto label_306cdc;
    }
    ctx->pc = 0x306CD4u;
    SET_GPR_U32(ctx, 31, 0x306CDCu);
    ctx->pc = 0x306CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CD4u;
    // 0x306cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x306CD4u, 0x306CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CDCu;
label_306cdc:
    // 0x306cdc: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x306cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_306ce0:
    // 0x306ce0: 0xc0f70ce  jal         func_3DC338
label_306ce4:
    if (ctx->pc == 0x306CE4u) {
        ctx->pc = 0x306CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CE0u;
        // 0x306ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CE8u;
        goto label_306ce8;
    }
    ctx->pc = 0x306CE0u;
    SET_GPR_U32(ctx, 31, 0x306CE8u);
    ctx->pc = 0x306CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CE0u;
    // 0x306ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x306CE0u, 0x306CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CE8u;
label_306ce8:
    // 0x306ce8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_306cec:
    if (ctx->pc == 0x306CECu) {
        ctx->pc = 0x306CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CE8u;
        // 0x306cec: 0x264200b0  addiu       $v0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CF0u;
        goto label_306cf0;
    }
    ctx->pc = 0x306CE8u;
    {
        const bool branch_taken_0x306ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CE8u;
        // 0x306cec: 0x264200b0  addiu       $v0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ce8) {
            ctx->pc = 0x306CFCu;
            goto label_306cfc;
        }
    }
    ctx->pc = 0x306CF0u;
label_306cf0:
    // 0x306cf0: 0xc0c4900  jal         func_312400
label_306cf4:
    if (ctx->pc == 0x306CF4u) {
        ctx->pc = 0x306CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CF0u;
        // 0x306cf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CF8u;
        goto label_306cf8;
    }
    ctx->pc = 0x306CF0u;
    SET_GPR_U32(ctx, 31, 0x306CF8u);
    ctx->pc = 0x306CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CF0u;
    // 0x306cf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x306CF0u, 0x306CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CF8u;
label_306cf8:
    // 0x306cf8: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x306cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_306cfc:
    // 0x306cfc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x306cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_306d00:
    // 0x306d00: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x306d00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_306d04:
    // 0x306d04: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x306d04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_306d08:
    // 0x306d08: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x306d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_306d0c:
    // 0x306d0c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x306d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306d10:
    // 0x306d10: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x306d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306d14:
    // 0x306d14: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x306d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_306d18:
    // 0x306d18: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x306d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_306d1c:
    // 0x306d1c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x306d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_306d20:
    // 0x306d20: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x306d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_306d24:
    // 0x306d24: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x306d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_306d28:
    // 0x306d28: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x306d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_306d2c:
    // 0x306d2c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x306d2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_306d30:
    // 0x306d30: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x306d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_306d34:
    // 0x306d34: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x306d34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_306d38:
    // 0x306d38: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x306d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_306d3c:
    // 0x306d3c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x306d3cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_306d40:
    // 0x306d40: 0x4a0003bf  vwaitq
    ctx->pc = 0x306d40u;
    // VWAITQ (Q already resolved in this runtime)
label_306d44:
    // 0x306d44: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x306d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_306d48:
    // 0x306d48: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x306d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_306d4c:
    // 0x306d4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x306d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_306d50:
    // 0x306d50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x306d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306d54:
    // 0x306d54: 0x0  nop
    ctx->pc = 0x306d54u;
    // NOP
label_306d58:
    // 0x306d58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x306d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_306d5c:
    // 0x306d5c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x306d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_306d60:
    // 0x306d60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x306d60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_306d64:
    // 0x306d64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x306d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_306d68:
    // 0x306d68: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x306d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_306d6c:
    // 0x306d6c: 0xc0899bc  jal         func_2266F0
label_306d70:
    if (ctx->pc == 0x306D70u) {
        ctx->pc = 0x306D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D6Cu;
        // 0x306d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D74u;
        goto label_306d74;
    }
    ctx->pc = 0x306D6Cu;
    SET_GPR_U32(ctx, 31, 0x306D74u);
    ctx->pc = 0x306D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D6Cu;
    // 0x306d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x306D6Cu, 0x306D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D74u;
label_306d74:
    // 0x306d74: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x306d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306d78:
    // 0x306d78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x306d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306d7c:
    // 0x306d7c: 0xc08a0a8  jal         func_2282A0
label_306d80:
    if (ctx->pc == 0x306D80u) {
        ctx->pc = 0x306D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D7Cu;
        // 0x306d80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D84u;
        goto label_306d84;
    }
    ctx->pc = 0x306D7Cu;
    SET_GPR_U32(ctx, 31, 0x306D84u);
    ctx->pc = 0x306D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D7Cu;
    // 0x306d80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2282A0u, 0x306D7Cu, 0x306D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D84u;
label_306d84:
    // 0x306d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x306d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306d88:
    // 0x306d88: 0x0  nop
    ctx->pc = 0x306d88u;
    // NOP
label_306d8c:
    // 0x306d8c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x306d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306d90:
    // 0x306d90: 0x0  nop
    ctx->pc = 0x306d90u;
    // NOP
label_306d94:
    // 0x306d94: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_306d98:
    if (ctx->pc == 0x306D98u) {
        ctx->pc = 0x306D9Cu;
        goto label_306d9c;
    }
    ctx->pc = 0x306D94u;
    {
        const bool branch_taken_0x306d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306d94) {
            ctx->pc = 0x306DDCu;
            goto label_306ddc;
        }
    }
    ctx->pc = 0x306D9Cu;
label_306d9c:
    // 0x306d9c: 0x4615b836  c.le.s      $f23, $f21
    ctx->pc = 0x306d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306da0:
    // 0x306da0: 0x0  nop
    ctx->pc = 0x306da0u;
    // NOP
label_306da4:
    // 0x306da4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_306da8:
    if (ctx->pc == 0x306DA8u) {
        ctx->pc = 0x306DACu;
        goto label_306dac;
    }
    ctx->pc = 0x306DA4u;
    {
        const bool branch_taken_0x306da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306da4) {
            ctx->pc = 0x306DDCu;
            goto label_306ddc;
        }
    }
    ctx->pc = 0x306DACu;
label_306dac:
    // 0x306dac: 0x8e2211e8  lw          $v0, 0x11E8($s1)
    ctx->pc = 0x306dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306db0:
    // 0x306db0: 0x8c44032c  lw          $a0, 0x32C($v0)
    ctx->pc = 0x306db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
label_306db4:
    // 0x306db4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_306db8:
    if (ctx->pc == 0x306DB8u) {
        ctx->pc = 0x306DBCu;
        goto label_306dbc;
    }
    ctx->pc = 0x306DB4u;
    {
        const bool branch_taken_0x306db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306db4) {
            ctx->pc = 0x306DDCu;
            goto label_306ddc;
        }
    }
    ctx->pc = 0x306DBCu;
label_306dbc:
    // 0x306dbc: 0x8c82022c  lw          $v0, 0x22C($a0)
    ctx->pc = 0x306dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 556)));
label_306dc0:
    // 0x306dc0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_306dc4:
    if (ctx->pc == 0x306DC4u) {
        ctx->pc = 0x306DC8u;
        goto label_306dc8;
    }
    ctx->pc = 0x306DC0u;
    {
        const bool branch_taken_0x306dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306dc0) {
            ctx->pc = 0x306DDCu;
            goto label_306ddc;
        }
    }
    ctx->pc = 0x306DC8u;
label_306dc8:
    // 0x306dc8: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x306dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_306dcc:
    // 0x306dcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_306dd0:
    if (ctx->pc == 0x306DD0u) {
        ctx->pc = 0x306DD4u;
        goto label_306dd4;
    }
    ctx->pc = 0x306DCCu;
    {
        const bool branch_taken_0x306dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306dcc) {
            ctx->pc = 0x306DDCu;
            goto label_306ddc;
        }
    }
    ctx->pc = 0x306DD4u;
label_306dd4:
    // 0x306dd4: 0xc0966a8  jal         func_259AA0
label_306dd8:
    if (ctx->pc == 0x306DD8u) {
        ctx->pc = 0x306DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DD4u;
        // 0x306dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DDCu;
        goto label_306ddc;
    }
    ctx->pc = 0x306DD4u;
    SET_GPR_U32(ctx, 31, 0x306DDCu);
    ctx->pc = 0x306DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DD4u;
    // 0x306dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259AA0u, 0x306DD4u, 0x306DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DDCu;
label_306ddc:
    // 0x306ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x306ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306de0:
    // 0x306de0: 0x0  nop
    ctx->pc = 0x306de0u;
    // NOP
label_306de4:
    // 0x306de4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x306de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306de8:
    // 0x306de8: 0x0  nop
    ctx->pc = 0x306de8u;
    // NOP
label_306dec:
    // 0x306dec: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_306df0:
    if (ctx->pc == 0x306DF0u) {
        ctx->pc = 0x306DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DECu;
        // 0x306df0: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DF4u;
        goto label_306df4;
    }
    ctx->pc = 0x306DECu;
    {
        const bool branch_taken_0x306dec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x306DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DECu;
        // 0x306df0: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306dec) {
            ctx->pc = 0x306E70u;
            goto label_306e70;
        }
    }
    ctx->pc = 0x306DF4u;
label_306df4:
    // 0x306df4: 0x4615b036  c.le.s      $f22, $f21
    ctx->pc = 0x306df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306df8:
    // 0x306df8: 0x0  nop
    ctx->pc = 0x306df8u;
    // NOP
label_306dfc:
    // 0x306dfc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_306e00:
    if (ctx->pc == 0x306E00u) {
        ctx->pc = 0x306E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DFCu;
        // 0x306e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E04u;
        goto label_306e04;
    }
    ctx->pc = 0x306DFCu;
    {
        const bool branch_taken_0x306dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x306E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DFCu;
        // 0x306e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306dfc) {
            ctx->pc = 0x306E70u;
            goto label_306e70;
        }
    }
    ctx->pc = 0x306E04u;
label_306e04:
    // 0x306e04: 0xc08a1f2  jal         func_2287C8
label_306e08:
    if (ctx->pc == 0x306E08u) {
        ctx->pc = 0x306E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E04u;
        // 0x306e08: 0x24050433  addiu       $a1, $zero, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E0Cu;
        goto label_306e0c;
    }
    ctx->pc = 0x306E04u;
    SET_GPR_U32(ctx, 31, 0x306E0Cu);
    ctx->pc = 0x306E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E04u;
    // 0x306e08: 0x24050433  addiu       $a1, $zero, 0x433 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x306E04u, 0x306E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E0Cu;
label_306e0c:
    // 0x306e0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e10:
    // 0x306e10: 0xc0f70ce  jal         func_3DC338
label_306e14:
    if (ctx->pc == 0x306E14u) {
        ctx->pc = 0x306E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E10u;
        // 0x306e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E18u;
        goto label_306e18;
    }
    ctx->pc = 0x306E10u;
    SET_GPR_U32(ctx, 31, 0x306E18u);
    ctx->pc = 0x306E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E10u;
    // 0x306e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x306E10u, 0x306E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E18u;
label_306e18:
    // 0x306e18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_306e1c:
    if (ctx->pc == 0x306E1Cu) {
        ctx->pc = 0x306E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E18u;
        // 0x306e1c: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E20u;
        goto label_306e20;
    }
    ctx->pc = 0x306E18u;
    {
        const bool branch_taken_0x306e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306e18) {
            ctx->pc = 0x306E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306E18u;
            // 0x306e1c: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x306E2Cu;
            goto label_306e2c;
        }
    }
    ctx->pc = 0x306E20u;
label_306e20:
    // 0x306e20: 0xc0c4900  jal         func_312400
label_306e24:
    if (ctx->pc == 0x306E24u) {
        ctx->pc = 0x306E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E20u;
        // 0x306e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E28u;
        goto label_306e28;
    }
    ctx->pc = 0x306E20u;
    SET_GPR_U32(ctx, 31, 0x306E28u);
    ctx->pc = 0x306E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E20u;
    // 0x306e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x306E20u, 0x306E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E28u;
label_306e28:
    // 0x306e28: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x306e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306e2c:
    // 0x306e2c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x306e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_306e30:
    // 0x306e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_306e34:
    // 0x306e34: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x306e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_306e38:
    // 0x306e38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x306e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306e3c:
    // 0x306e3c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x306e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_306e40:
    // 0x306e40: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x306e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_306e44:
    // 0x306e44: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x306e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_306e48:
    // 0x306e48: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x306e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306e4c:
    // 0x306e4c: 0xc0899bc  jal         func_2266F0
label_306e50:
    if (ctx->pc == 0x306E50u) {
        ctx->pc = 0x306E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E4Cu;
        // 0x306e50: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E54u;
        goto label_306e54;
    }
    ctx->pc = 0x306E4Cu;
    SET_GPR_U32(ctx, 31, 0x306E54u);
    ctx->pc = 0x306E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E4Cu;
    // 0x306e50: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x306E4Cu, 0x306E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E54u;
label_306e54:
    // 0x306e54: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x306e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306e58:
    // 0x306e58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x306e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306e5c:
    // 0x306e5c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x306e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_306e60:
    // 0x306e60: 0xc08a008  jal         func_228020
label_306e64:
    if (ctx->pc == 0x306E64u) {
        ctx->pc = 0x306E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E60u;
        // 0x306e64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E68u;
        goto label_306e68;
    }
    ctx->pc = 0x306E60u;
    SET_GPR_U32(ctx, 31, 0x306E68u);
    ctx->pc = 0x306E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E60u;
    // 0x306e64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228020u, 0x306E60u, 0x306E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E68u;
label_306e68:
    // 0x306e68: 0x10000017  b           . + 4 + (0x17 << 2)
label_306e6c:
    if (ctx->pc == 0x306E6Cu) {
        ctx->pc = 0x306E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E68u;
        // 0x306e6c: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E70u;
        goto label_306e70;
    }
    ctx->pc = 0x306E68u;
    {
        const bool branch_taken_0x306e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E68u;
        // 0x306e6c: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e68) {
            ctx->pc = 0x306EC8u;
            goto label_306ec8;
        }
    }
    ctx->pc = 0x306E70u;
label_306e70:
    // 0x306e70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x306e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_306e74:
    // 0x306e74: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_306e78:
    if (ctx->pc == 0x306E78u) {
        ctx->pc = 0x306E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E74u;
        // 0x306e78: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E7Cu;
        goto label_306e7c;
    }
    ctx->pc = 0x306E74u;
    {
        const bool branch_taken_0x306e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306e74) {
            ctx->pc = 0x306E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306E74u;
            // 0x306e78: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306EC8u;
            goto label_306ec8;
        }
    }
    ctx->pc = 0x306E7Cu;
label_306e7c:
    // 0x306e7c: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x306e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306e80:
    // 0x306e80: 0x908206fc  lbu         $v0, 0x6FC($a0)
    ctx->pc = 0x306e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1788)));
label_306e84:
    // 0x306e84: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_306e88:
    if (ctx->pc == 0x306E88u) {
        ctx->pc = 0x306E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E84u;
        // 0x306e88: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E8Cu;
        goto label_306e8c;
    }
    ctx->pc = 0x306E84u;
    {
        const bool branch_taken_0x306e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306e84) {
            ctx->pc = 0x306E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306E84u;
            // 0x306e88: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306EC8u;
            goto label_306ec8;
        }
    }
    ctx->pc = 0x306E8Cu;
label_306e8c:
    // 0x306e8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x306e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_306e90:
    // 0x306e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x306e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_306e94:
    // 0x306e94: 0x0  nop
    ctx->pc = 0x306e94u;
    // NOP
label_306e98:
    // 0x306e98: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x306e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306e9c:
    // 0x306e9c: 0x0  nop
    ctx->pc = 0x306e9cu;
    // NOP
label_306ea0:
    // 0x306ea0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_306ea4:
    if (ctx->pc == 0x306EA4u) {
        ctx->pc = 0x306EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EA0u;
        // 0x306ea4: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EA8u;
        goto label_306ea8;
    }
    ctx->pc = 0x306EA0u;
    {
        const bool branch_taken_0x306ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306ea0) {
            ctx->pc = 0x306EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306EA0u;
            // 0x306ea4: 0x8e2510d8  lw          $a1, 0x10D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306EC8u;
            goto label_306ec8;
        }
    }
    ctx->pc = 0x306EA8u;
label_306ea8:
    // 0x306ea8: 0xc089f8a  jal         func_227E28
label_306eac:
    if (ctx->pc == 0x306EACu) {
        ctx->pc = 0x306EB0u;
        goto label_306eb0;
    }
    ctx->pc = 0x306EA8u;
    SET_GPR_U32(ctx, 31, 0x306EB0u);
    ctx->pc = 0x227E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E28u, 0x306EA8u, 0x306EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EB0u;
label_306eb0:
    // 0x306eb0: 0xc089f20  jal         func_227C80
label_306eb4:
    if (ctx->pc == 0x306EB4u) {
        ctx->pc = 0x306EB8u;
        goto label_306eb8;
    }
    ctx->pc = 0x306EB0u;
    SET_GPR_U32(ctx, 31, 0x306EB8u);
    ctx->pc = 0x227C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C80u, 0x306EB0u, 0x306EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EB8u;
label_306eb8:
    // 0x306eb8: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x306eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_306ebc:
    // 0x306ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306ec0:
    // 0x306ec0: 0xac620700  sw          $v0, 0x700($v1)
    ctx->pc = 0x306ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 2));
label_306ec4:
    // 0x306ec4: 0x8e2510d8  lw          $a1, 0x10D8($s1)
    ctx->pc = 0x306ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
label_306ec8:
    // 0x306ec8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x306ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_306ecc:
    // 0x306ecc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_306ed0:
    if (ctx->pc == 0x306ED0u) {
        ctx->pc = 0x306ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306ECCu;
        // 0x306ed0: 0x262410cf  addiu       $a0, $s1, 0x10CF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4303));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306ED4u;
        goto label_306ed4;
    }
    ctx->pc = 0x306ECCu;
    {
        const bool branch_taken_0x306ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306ECCu;
        // 0x306ed0: 0x262410cf  addiu       $a0, $s1, 0x10CF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ecc) {
            ctx->pc = 0x306FD0u;
            goto label_306fd0;
        }
    }
    ctx->pc = 0x306ED4u;
label_306ed4:
    // 0x306ed4: 0x161140  sll         $v0, $s6, 5
    ctx->pc = 0x306ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 5));
label_306ed8:
    // 0x306ed8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x306ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_306edc:
    // 0x306edc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x306edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_306ee0:
    // 0x306ee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x306ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_306ee4:
    // 0x306ee4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x306ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_306ee8:
    // 0x306ee8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x306ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_306eec:
    // 0x306eec: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x306eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_306ef0:
    // 0x306ef0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_306ef4:
    if (ctx->pc == 0x306EF4u) {
        ctx->pc = 0x306EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EF0u;
        // 0x306ef4: 0xc47404b0  lwc1        $f20, 0x4B0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EF8u;
        goto label_306ef8;
    }
    ctx->pc = 0x306EF0u;
    {
        const bool branch_taken_0x306ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EF0u;
        // 0x306ef4: 0xc47404b0  lwc1        $f20, 0x4B0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ef0) {
            ctx->pc = 0x306FD0u;
            goto label_306fd0;
        }
    }
    ctx->pc = 0x306EF8u;
label_306ef8:
    // 0x306ef8: 0xc0899bc  jal         func_2266F0
label_306efc:
    if (ctx->pc == 0x306EFCu) {
        ctx->pc = 0x306EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EF8u;
        // 0x306efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F00u;
        goto label_306f00;
    }
    ctx->pc = 0x306EF8u;
    SET_GPR_U32(ctx, 31, 0x306F00u);
    ctx->pc = 0x306EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306EF8u;
    // 0x306efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x306EF8u, 0x306F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F00u;
label_306f00:
    // 0x306f00: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_306f04:
    if (ctx->pc == 0x306F04u) {
        ctx->pc = 0x306F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F00u;
        // 0x306f04: 0x8e2211f8  lw          $v0, 0x11F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F08u;
        goto label_306f08;
    }
    ctx->pc = 0x306F00u;
    {
        const bool branch_taken_0x306f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306f00) {
            ctx->pc = 0x306F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306F00u;
            // 0x306f04: 0x8e2211f8  lw          $v0, 0x11F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306FD4u;
            goto label_306fd4;
        }
    }
    ctx->pc = 0x306F08u;
label_306f08:
    // 0x306f08: 0xc0899bc  jal         func_2266F0
label_306f0c:
    if (ctx->pc == 0x306F0Cu) {
        ctx->pc = 0x306F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F08u;
        // 0x306f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F10u;
        goto label_306f10;
    }
    ctx->pc = 0x306F08u;
    SET_GPR_U32(ctx, 31, 0x306F10u);
    ctx->pc = 0x306F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F08u;
    // 0x306f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x306F08u, 0x306F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F10u;
label_306f10:
    // 0x306f10: 0x8e240ff0  lw          $a0, 0xFF0($s1)
    ctx->pc = 0x306f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4080)));
label_306f14:
    // 0x306f14: 0xc06e0fa  jal         func_1B83E8
label_306f18:
    if (ctx->pc == 0x306F18u) {
        ctx->pc = 0x306F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F14u;
        // 0x306f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F1Cu;
        goto label_306f1c;
    }
    ctx->pc = 0x306F14u;
    SET_GPR_U32(ctx, 31, 0x306F1Cu);
    ctx->pc = 0x306F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F14u;
    // 0x306f18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x306F14u, 0x306F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F1Cu;
label_306f1c:
    // 0x306f1c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_306f20:
    if (ctx->pc == 0x306F20u) {
        ctx->pc = 0x306F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F1Cu;
        // 0x306f20: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F24u;
        goto label_306f24;
    }
    ctx->pc = 0x306F1Cu;
    {
        const bool branch_taken_0x306f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F1Cu;
        // 0x306f20: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f1c) {
            ctx->pc = 0x306FD0u;
            goto label_306fd0;
        }
    }
    ctx->pc = 0x306F24u;
label_306f24:
    // 0x306f24: 0xc4401e64  lwc1        $f0, 0x1E64($v0)
    ctx->pc = 0x306f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_306f28:
    // 0x306f28: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x306f28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306f2c:
    // 0x306f2c: 0x0  nop
    ctx->pc = 0x306f2cu;
    // NOP
label_306f30:
    // 0x306f30: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_306f34:
    if (ctx->pc == 0x306F34u) {
        ctx->pc = 0x306F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F30u;
        // 0x306f34: 0x8e2211f8  lw          $v0, 0x11F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F38u;
        goto label_306f38;
    }
    ctx->pc = 0x306F30u;
    {
        const bool branch_taken_0x306f30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x306F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F30u;
        // 0x306f34: 0x8e2211f8  lw          $v0, 0x11F8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f30) {
            ctx->pc = 0x306FD4u;
            goto label_306fd4;
        }
    }
    ctx->pc = 0x306F38u;
label_306f38:
    // 0x306f38: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x306f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_306f3c:
    // 0x306f3c: 0x0  nop
    ctx->pc = 0x306f3cu;
    // NOP
label_306f40:
    // 0x306f40: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_306f44:
    if (ctx->pc == 0x306F44u) {
        ctx->pc = 0x306F48u;
        goto label_306f48;
    }
    ctx->pc = 0x306F40u;
    {
        const bool branch_taken_0x306f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306f40) {
            ctx->pc = 0x306FD4u;
            goto label_306fd4;
        }
    }
    ctx->pc = 0x306F48u;
label_306f48:
    // 0x306f48: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_306f4c:
    if (ctx->pc == 0x306F4Cu) {
        ctx->pc = 0x306F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F48u;
        // 0x306f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F50u;
        goto label_306f50;
    }
    ctx->pc = 0x306F48u;
    {
        const bool branch_taken_0x306f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F48u;
        // 0x306f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f48) {
            ctx->pc = 0x306F84u;
            goto label_306f84;
        }
    }
    ctx->pc = 0x306F50u;
label_306f50:
    // 0x306f50: 0xc097f90  jal         func_25FE40
label_306f54:
    if (ctx->pc == 0x306F54u) {
        ctx->pc = 0x306F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F50u;
        // 0x306f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F58u;
        goto label_306f58;
    }
    ctx->pc = 0x306F50u;
    SET_GPR_U32(ctx, 31, 0x306F58u);
    ctx->pc = 0x306F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F50u;
    // 0x306f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x306F50u, 0x306F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F58u;
label_306f58:
    // 0x306f58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_306f5c:
    if (ctx->pc == 0x306F5Cu) {
        ctx->pc = 0x306F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F58u;
        // 0x306f5c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F60u;
        goto label_306f60;
    }
    ctx->pc = 0x306F58u;
    {
        const bool branch_taken_0x306f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F58u;
        // 0x306f5c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f58) {
            ctx->pc = 0x306F74u;
            goto label_306f74;
        }
    }
    ctx->pc = 0x306F60u;
label_306f60:
    // 0x306f60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x306f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306f64:
    // 0x306f64: 0xc0ae6b8  jal         func_2B9AE0
label_306f68:
    if (ctx->pc == 0x306F68u) {
        ctx->pc = 0x306F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F64u;
        // 0x306f68: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F6Cu;
        goto label_306f6c;
    }
    ctx->pc = 0x306F64u;
    SET_GPR_U32(ctx, 31, 0x306F6Cu);
    ctx->pc = 0x306F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F64u;
    // 0x306f68: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x306F64u, 0x306F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F6Cu;
label_306f6c:
    // 0x306f6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_306f70:
    if (ctx->pc == 0x306F70u) {
        ctx->pc = 0x306F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F6Cu;
        // 0x306f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F74u;
        goto label_306f74;
    }
    ctx->pc = 0x306F6Cu;
    {
        const bool branch_taken_0x306f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F6Cu;
        // 0x306f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f6c) {
            ctx->pc = 0x306F84u;
            goto label_306f84;
        }
    }
    ctx->pc = 0x306F74u;
label_306f74:
    // 0x306f74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x306f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306f78:
    // 0x306f78: 0xc0ae6b8  jal         func_2B9AE0
label_306f7c:
    if (ctx->pc == 0x306F7Cu) {
        ctx->pc = 0x306F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F78u;
        // 0x306f7c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F80u;
        goto label_306f80;
    }
    ctx->pc = 0x306F78u;
    SET_GPR_U32(ctx, 31, 0x306F80u);
    ctx->pc = 0x306F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F78u;
    // 0x306f7c: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x306F78u, 0x306F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F80u;
label_306f80:
    // 0x306f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x306f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_306f84:
    // 0x306f84: 0xc0989a0  jal         func_262680
label_306f88:
    if (ctx->pc == 0x306F88u) {
        ctx->pc = 0x306F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F84u;
        // 0x306f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F8Cu;
        goto label_306f8c;
    }
    ctx->pc = 0x306F84u;
    SET_GPR_U32(ctx, 31, 0x306F8Cu);
    ctx->pc = 0x306F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F84u;
    // 0x306f88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262680u, 0x306F84u, 0x306F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F8Cu;
label_306f8c:
    // 0x306f8c: 0x8e2311f8  lw          $v1, 0x11F8($s1)
    ctx->pc = 0x306f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4600)));
label_306f90:
    // 0x306f90: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_306f94:
    if (ctx->pc == 0x306F94u) {
        ctx->pc = 0x306F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F90u;
        // 0x306f94: 0x8e2210d8  lw          $v0, 0x10D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F98u;
        goto label_306f98;
    }
    ctx->pc = 0x306F90u;
    {
        const bool branch_taken_0x306f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306f90) {
            ctx->pc = 0x306F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306F90u;
            // 0x306f94: 0x8e2210d8  lw          $v0, 0x10D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306FB8u;
            goto label_306fb8;
        }
    }
    ctx->pc = 0x306F98u;
label_306f98:
    // 0x306f98: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x306f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_306f9c:
    // 0x306f9c: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x306f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_306fa0:
    // 0x306fa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x306fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_306fa4:
    // 0x306fa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x306fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_306fa8:
    // 0x306fa8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x306fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_306fac:
    // 0x306fac: 0xc07f4c2  jal         func_1FD308
label_306fb0:
    if (ctx->pc == 0x306FB0u) {
        ctx->pc = 0x306FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FACu;
        // 0x306fb0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FB4u;
        goto label_306fb4;
    }
    ctx->pc = 0x306FACu;
    SET_GPR_U32(ctx, 31, 0x306FB4u);
    ctx->pc = 0x306FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306FACu;
    // 0x306fb0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x306FACu, 0x306FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FB4u;
label_306fb4:
    // 0x306fb4: 0x8e2210d8  lw          $v0, 0x10D8($s1)
    ctx->pc = 0x306fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
label_306fb8:
    // 0x306fb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306fbc:
    // 0x306fbc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x306fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_306fc0:
    // 0x306fc0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x306fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_306fc4:
    // 0x306fc4: 0x8e2310d8  lw          $v1, 0x10D8($s1)
    ctx->pc = 0x306fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4312)));
label_306fc8:
    // 0x306fc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_306fcc:
    // 0x306fcc: 0xae2310d8  sw          $v1, 0x10D8($s1)
    ctx->pc = 0x306fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4312), GPR_U32(ctx, 3));
label_306fd0:
    // 0x306fd0: 0x8e2211f8  lw          $v0, 0x11F8($s1)
    ctx->pc = 0x306fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4600)));
label_306fd4:
    // 0x306fd4: 0x2663045c  addiu       $v1, $s3, 0x45C
    ctx->pc = 0x306fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1116));
label_306fd8:
    // 0x306fd8: 0x2677037c  addiu       $s7, $s3, 0x37C
    ctx->pc = 0x306fd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 892));
label_306fdc:
    // 0x306fdc: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_306fe0:
    if (ctx->pc == 0x306FE0u) {
        ctx->pc = 0x306FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FDCu;
        // 0x306fe0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FE4u;
        goto label_306fe4;
    }
    ctx->pc = 0x306FDCu;
    {
        const bool branch_taken_0x306fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FDCu;
        // 0x306fe0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fdc) {
            ctx->pc = 0x307054u;
            goto label_307054;
        }
    }
    ctx->pc = 0x306FE4u;
label_306fe4:
    // 0x306fe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_306fe8:
    if (ctx->pc == 0x306FE8u) {
        ctx->pc = 0x306FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FE4u;
        // 0x306fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FECu;
        goto label_306fec;
    }
    ctx->pc = 0x306FE4u;
    {
        const bool branch_taken_0x306fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FE4u;
        // 0x306fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306fe4) {
            ctx->pc = 0x306FF4u;
            goto label_306ff4;
        }
    }
    ctx->pc = 0x306FECu;
label_306fec:
    // 0x306fec: 0x0  nop
    ctx->pc = 0x306fecu;
    // NOP
label_306ff0:
    // 0x306ff0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x306ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_306ff4:
    // 0x306ff4: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x306ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_306ff8:
    // 0x306ff8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_306ffc:
    if (ctx->pc == 0x306FFCu) {
        ctx->pc = 0x306FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FF8u;
        // 0x306ffc: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307000u;
        goto label_307000;
    }
    ctx->pc = 0x306FF8u;
    {
        const bool branch_taken_0x306ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FF8u;
        // 0x306ffc: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ff8) {
            ctx->pc = 0x307054u;
            goto label_307054;
        }
    }
    ctx->pc = 0x307000u;
label_307000:
    // 0x307000: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x307000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_307004:
    // 0x307004: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x307004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_307008:
    // 0x307008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x307008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30700c:
    // 0x30700c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x30700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_307010:
    // 0x307010: 0xc4410530  lwc1        $f1, 0x530($v0)
    ctx->pc = 0x307010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_307014:
    // 0x307014: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x307014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307018:
    // 0x307018: 0x0  nop
    ctx->pc = 0x307018u;
    // NOP
label_30701c:
    // 0x30701c: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
label_307020:
    if (ctx->pc == 0x307020u) {
        ctx->pc = 0x307020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30701Cu;
        // 0x307020: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307024u;
        goto label_307024;
    }
    ctx->pc = 0x30701Cu;
    {
        const bool branch_taken_0x30701c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30701c) {
            ctx->pc = 0x307020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30701Cu;
            // 0x307020: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306ff4;
        }
    }
    ctx->pc = 0x307024u;
label_307024:
    // 0x307024: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x307024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_307028:
    // 0x307028: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x307028u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_30702c:
    // 0x30702c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30702cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_307030:
    // 0x307030: 0x0  nop
    ctx->pc = 0x307030u;
    // NOP
label_307034:
    // 0x307034: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x307034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_307038:
    // 0x307038: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x307038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30703c:
    // 0x30703c: 0x0  nop
    ctx->pc = 0x30703cu;
    // NOP
label_307040:
    // 0x307040: 0x4500ffeb  bc1f        . + 4 + (-0x15 << 2)
label_307044:
    if (ctx->pc == 0x307044u) {
        ctx->pc = 0x307044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307040u;
        // 0x307044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307048u;
        goto label_307048;
    }
    ctx->pc = 0x307040u;
    {
        const bool branch_taken_0x307040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307040u;
        // 0x307044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307040) {
            ctx->pc = 0x306FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306ff0;
        }
    }
    ctx->pc = 0x307048u;
label_307048:
    // 0x307048: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x307048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_30704c:
    // 0x30704c: 0xc0ae6b8  jal         func_2B9AE0
label_307050:
    if (ctx->pc == 0x307050u) {
        ctx->pc = 0x307050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30704Cu;
        // 0x307050: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307054u;
        goto label_307054;
    }
    ctx->pc = 0x30704Cu;
    SET_GPR_U32(ctx, 31, 0x307054u);
    ctx->pc = 0x307050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30704Cu;
    // 0x307050: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x30704Cu, 0x307054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307054u;
label_307054:
    // 0x307054: 0x13c0003e  beqz        $fp, . + 4 + (0x3E << 2)
label_307058:
    if (ctx->pc == 0x307058u) {
        ctx->pc = 0x307058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307054u;
        // 0x307058: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30705Cu;
        goto label_30705c;
    }
    ctx->pc = 0x307054u;
    {
        const bool branch_taken_0x307054 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x307058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307054u;
        // 0x307058: 0x2741021  addu        $v0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307054) {
            ctx->pc = 0x307150u;
            goto label_307150;
        }
    }
    ctx->pc = 0x30705Cu;
label_30705c:
    // 0x30705c: 0xc440036c  lwc1        $f0, 0x36C($v0)
    ctx->pc = 0x30705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307060:
    // 0x307060: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x307060u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307064:
    // 0x307064: 0x0  nop
    ctx->pc = 0x307064u;
    // NOP
label_307068:
    // 0x307068: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_30706c:
    if (ctx->pc == 0x30706Cu) {
        ctx->pc = 0x30706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307068u;
        // 0x30706c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307070u;
        goto label_307070;
    }
    ctx->pc = 0x307068u;
    {
        const bool branch_taken_0x307068 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307068u;
        // 0x30706c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307068) {
            ctx->pc = 0x307150u;
            goto label_307150;
        }
    }
    ctx->pc = 0x307070u;
label_307070:
    // 0x307070: 0xc0899bc  jal         func_2266F0
label_307074:
    if (ctx->pc == 0x307074u) {
        ctx->pc = 0x307074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307070u;
        // 0x307074: 0x3c120080  lui         $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307078u;
        goto label_307078;
    }
    ctx->pc = 0x307070u;
    SET_GPR_U32(ctx, 31, 0x307078u);
    ctx->pc = 0x307074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307070u;
    // 0x307074: 0x3c120080  lui         $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)128 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307070u, 0x307078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307078u;
label_307078:
    // 0x307078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30707c:
    // 0x30707c: 0xc098fae  jal         func_263EB8
label_307080:
    if (ctx->pc == 0x307080u) {
        ctx->pc = 0x307080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30707Cu;
        // 0x307080: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307084u;
        goto label_307084;
    }
    ctx->pc = 0x30707Cu;
    SET_GPR_U32(ctx, 31, 0x307084u);
    ctx->pc = 0x307080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30707Cu;
    // 0x307080: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x30707Cu, 0x307084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307084u;
label_307084:
    // 0x307084: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x307084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307088:
    // 0x307088: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x307088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_30708c:
    // 0x30708c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x30708cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_307090:
    // 0x307090: 0x1052001b  beq         $v0, $s2, . + 4 + (0x1B << 2)
label_307094:
    if (ctx->pc == 0x307094u) {
        ctx->pc = 0x307098u;
        goto label_307098;
    }
    ctx->pc = 0x307090u;
    {
        const bool branch_taken_0x307090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x307090) {
            ctx->pc = 0x307100u;
            goto label_307100;
        }
    }
    ctx->pc = 0x307098u;
label_307098:
    // 0x307098: 0xc08dbbc  jal         func_236EF0
label_30709c:
    if (ctx->pc == 0x30709Cu) {
        ctx->pc = 0x30709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307098u;
        // 0x30709c: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070A0u;
        goto label_3070a0;
    }
    ctx->pc = 0x307098u;
    SET_GPR_U32(ctx, 31, 0x3070A0u);
    ctx->pc = 0x30709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307098u;
    // 0x30709c: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EF0u, 0x307098u, 0x3070A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070A0u;
label_3070a0:
    // 0x3070a0: 0x52a00015  beql        $s5, $zero, . + 4 + (0x15 << 2)
label_3070a4:
    if (ctx->pc == 0x3070A4u) {
        ctx->pc = 0x3070A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070A0u;
        // 0x3070a4: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070A8u;
        goto label_3070a8;
    }
    ctx->pc = 0x3070A0u;
    {
        const bool branch_taken_0x3070a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070a0) {
            ctx->pc = 0x3070A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3070A0u;
            // 0x3070a4: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3070F8u;
            goto label_3070f8;
        }
    }
    ctx->pc = 0x3070A8u;
label_3070a8:
    // 0x3070a8: 0xc0899bc  jal         func_2266F0
label_3070ac:
    if (ctx->pc == 0x3070ACu) {
        ctx->pc = 0x3070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070A8u;
        // 0x3070ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070B0u;
        goto label_3070b0;
    }
    ctx->pc = 0x3070A8u;
    SET_GPR_U32(ctx, 31, 0x3070B0u);
    ctx->pc = 0x3070ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070A8u;
    // 0x3070ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3070A8u, 0x3070B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070B0u;
label_3070b0:
    // 0x3070b0: 0xc097f26  jal         func_25FC98
label_3070b4:
    if (ctx->pc == 0x3070B4u) {
        ctx->pc = 0x3070B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070B0u;
        // 0x3070b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070B8u;
        goto label_3070b8;
    }
    ctx->pc = 0x3070B0u;
    SET_GPR_U32(ctx, 31, 0x3070B8u);
    ctx->pc = 0x3070B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070B0u;
    // 0x3070b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x3070B0u, 0x3070B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070B8u;
label_3070b8:
    // 0x3070b8: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x3070b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_3070bc:
    // 0x3070bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3070bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3070c0:
    // 0x3070c0: 0xc08da04  jal         func_236810
label_3070c4:
    if (ctx->pc == 0x3070C4u) {
        ctx->pc = 0x3070C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070C0u;
        // 0x3070c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070C8u;
        goto label_3070c8;
    }
    ctx->pc = 0x3070C0u;
    SET_GPR_U32(ctx, 31, 0x3070C8u);
    ctx->pc = 0x3070C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070C0u;
    // 0x3070c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236810u, 0x3070C0u, 0x3070C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070C8u;
label_3070c8:
    // 0x3070c8: 0xc0899bc  jal         func_2266F0
label_3070cc:
    if (ctx->pc == 0x3070CCu) {
        ctx->pc = 0x3070CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070C8u;
        // 0x3070cc: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070D0u;
        goto label_3070d0;
    }
    ctx->pc = 0x3070C8u;
    SET_GPR_U32(ctx, 31, 0x3070D0u);
    ctx->pc = 0x3070CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070C8u;
    // 0x3070cc: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3070C8u, 0x3070D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070D0u;
label_3070d0:
    // 0x3070d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3070d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3070d4:
    // 0x3070d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3070d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3070d8:
    // 0x3070d8: 0xc098fc6  jal         func_263F18
label_3070dc:
    if (ctx->pc == 0x3070DCu) {
        ctx->pc = 0x3070DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070D8u;
        // 0x3070dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070E0u;
        goto label_3070e0;
    }
    ctx->pc = 0x3070D8u;
    SET_GPR_U32(ctx, 31, 0x3070E0u);
    ctx->pc = 0x3070DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070D8u;
    // 0x3070dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263F18u, 0x3070D8u, 0x3070E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070E0u;
label_3070e0:
    // 0x3070e0: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x3070e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_3070e4:
    // 0x3070e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3070e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3070e8:
    // 0x3070e8: 0x8c4502bc  lw          $a1, 0x2BC($v0)
    ctx->pc = 0x3070e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
label_3070ec:
    // 0x3070ec: 0xc0984bc  jal         func_2612F0
label_3070f0:
    if (ctx->pc == 0x3070F0u) {
        ctx->pc = 0x3070F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070ECu;
        // 0x3070f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3070F4u;
        goto label_3070f4;
    }
    ctx->pc = 0x3070ECu;
    SET_GPR_U32(ctx, 31, 0x3070F4u);
    ctx->pc = 0x3070F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070ECu;
    // 0x3070f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x3070ECu, 0x3070F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070F4u;
label_3070f4:
    // 0x3070f4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x3070f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_3070f8:
    // 0x3070f8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x3070f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_3070fc:
    // 0x3070fc: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x3070fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_307100:
    // 0x307100: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
label_307104:
    if (ctx->pc == 0x307104u) {
        ctx->pc = 0x307104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307100u;
        // 0x307104: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307108u;
        goto label_307108;
    }
    ctx->pc = 0x307100u;
    {
        const bool branch_taken_0x307100 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x307104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307100u;
        // 0x307104: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307100) {
            ctx->pc = 0x307168u;
            goto label_307168;
        }
    }
    ctx->pc = 0x307108u;
label_307108:
    // 0x307108: 0xc0899bc  jal         func_2266F0
label_30710c:
    if (ctx->pc == 0x30710Cu) {
        ctx->pc = 0x30710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307108u;
        // 0x30710c: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307110u;
        goto label_307110;
    }
    ctx->pc = 0x307108u;
    SET_GPR_U32(ctx, 31, 0x307110u);
    ctx->pc = 0x30710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307108u;
    // 0x30710c: 0x8e2411e8  lw          $a0, 0x11E8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307108u, 0x307110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307110u;
label_307110:
    // 0x307110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307114:
    // 0x307114: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_307118:
    if (ctx->pc == 0x307118u) {
        ctx->pc = 0x307118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307114u;
        // 0x307118: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30711Cu;
        goto label_30711c;
    }
    ctx->pc = 0x307114u;
    {
        const bool branch_taken_0x307114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307114u;
        // 0x307118: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307114) {
            ctx->pc = 0x307168u;
            goto label_307168;
        }
    }
    ctx->pc = 0x30711Cu;
label_30711c:
    // 0x30711c: 0x8e04025c  lw          $a0, 0x25C($s0)
    ctx->pc = 0x30711cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_307120:
    // 0x307120: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_307124:
    if (ctx->pc == 0x307124u) {
        ctx->pc = 0x307128u;
        goto label_307128;
    }
    ctx->pc = 0x307120u;
    {
        const bool branch_taken_0x307120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307120) {
            ctx->pc = 0x307168u;
            goto label_307168;
        }
    }
    ctx->pc = 0x307128u;
label_307128:
    // 0x307128: 0xc073e86  jal         func_1CFA18
label_30712c:
    if (ctx->pc == 0x30712Cu) {
        ctx->pc = 0x30712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307128u;
        // 0x30712c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x307130u;
        goto label_307130;
    }
    ctx->pc = 0x307128u;
    SET_GPR_U32(ctx, 31, 0x307130u);
    ctx->pc = 0x30712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307128u;
    // 0x30712c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x307128u, 0x307130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307130u;
label_307130:
    // 0x307130: 0x8e04025c  lw          $a0, 0x25C($s0)
    ctx->pc = 0x307130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
label_307134:
    // 0x307134: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_307138:
    // 0x307138: 0xc073f08  jal         func_1CFC20
label_30713c:
    if (ctx->pc == 0x30713Cu) {
        ctx->pc = 0x30713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307138u;
        // 0x30713c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307140u;
        goto label_307140;
    }
    ctx->pc = 0x307138u;
    SET_GPR_U32(ctx, 31, 0x307140u);
    ctx->pc = 0x30713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307138u;
    // 0x30713c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x307138u, 0x307140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307140u;
label_307140:
    // 0x307140: 0xc09823c  jal         func_2608F0
label_307144:
    if (ctx->pc == 0x307144u) {
        ctx->pc = 0x307144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307140u;
        // 0x307144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307148u;
        goto label_307148;
    }
    ctx->pc = 0x307140u;
    SET_GPR_U32(ctx, 31, 0x307148u);
    ctx->pc = 0x307144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307140u;
    // 0x307144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2608F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2608F0u, 0x307140u, 0x307148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307148u;
label_307148:
    // 0x307148: 0x10000007  b           . + 4 + (0x7 << 2)
label_30714c:
    if (ctx->pc == 0x30714Cu) {
        ctx->pc = 0x30714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307148u;
        // 0x30714c: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307150u;
        goto label_307150;
    }
    ctx->pc = 0x307148u;
    {
        const bool branch_taken_0x307148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307148u;
        // 0x30714c: 0x2f41021  addu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307148) {
            ctx->pc = 0x307168u;
            goto label_307168;
        }
    }
    ctx->pc = 0x307150u;
label_307150:
    // 0x307150: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x307150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_307154:
    // 0x307154: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x307154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_307158:
    // 0x307158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x307158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30715c:
    // 0x30715c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30715cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_307160:
    // 0x307160: 0xae2311c0  sw          $v1, 0x11C0($s1)
    ctx->pc = 0x307160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
label_307164:
    // 0x307164: 0x2f41021  addu        $v0, $s7, $s4
    ctx->pc = 0x307164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_307168:
    // 0x307168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x307168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30716c:
    // 0x30716c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x30716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_307170:
    // 0x307170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x307170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307174:
    // 0x307174: 0x0  nop
    ctx->pc = 0x307174u;
    // NOP
label_307178:
    // 0x307178: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_30717c:
    if (ctx->pc == 0x30717Cu) {
        ctx->pc = 0x30717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307178u;
        // 0x30717c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307180u;
        goto label_307180;
    }
    ctx->pc = 0x307178u;
    {
        const bool branch_taken_0x307178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307178u;
        // 0x30717c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307178) {
            ctx->pc = 0x3071E8u;
            goto label_3071e8;
        }
    }
    ctx->pc = 0x307180u;
label_307180:
    // 0x307180: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x307180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307184:
    // 0x307184: 0x0  nop
    ctx->pc = 0x307184u;
    // NOP
label_307188:
    // 0x307188: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_30718c:
    if (ctx->pc == 0x30718Cu) {
        ctx->pc = 0x30718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307188u;
        // 0x30718c: 0x741021  addu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307190u;
        goto label_307190;
    }
    ctx->pc = 0x307188u;
    {
        const bool branch_taken_0x307188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307188u;
        // 0x30718c: 0x741021  addu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307188) {
            ctx->pc = 0x3071ECu;
            goto label_3071ec;
        }
    }
    ctx->pc = 0x307190u;
label_307190:
    // 0x307190: 0xc0899bc  jal         func_2266F0
label_307194:
    if (ctx->pc == 0x307194u) {
        ctx->pc = 0x307194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307190u;
        // 0x307194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307198u;
        goto label_307198;
    }
    ctx->pc = 0x307190u;
    SET_GPR_U32(ctx, 31, 0x307198u);
    ctx->pc = 0x307194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307190u;
    // 0x307194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307190u, 0x307198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307198u;
label_307198:
    // 0x307198: 0xc097f26  jal         func_25FC98
label_30719c:
    if (ctx->pc == 0x30719Cu) {
        ctx->pc = 0x30719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307198u;
        // 0x30719c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071A0u;
        goto label_3071a0;
    }
    ctx->pc = 0x307198u;
    SET_GPR_U32(ctx, 31, 0x3071A0u);
    ctx->pc = 0x30719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307198u;
    // 0x30719c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x307198u, 0x3071A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071A0u;
label_3071a0:
    // 0x3071a0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3071a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3071a4:
    // 0x3071a4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_3071a8:
    if (ctx->pc == 0x3071A8u) {
        ctx->pc = 0x3071A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071A4u;
        // 0x3071a8: 0x8e300218  lw          $s0, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071ACu;
        goto label_3071ac;
    }
    ctx->pc = 0x3071A4u;
    {
        const bool branch_taken_0x3071a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3071a4) {
            ctx->pc = 0x3071A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3071A4u;
            // 0x3071a8: 0x8e300218  lw          $s0, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3071C4u;
            goto label_3071c4;
        }
    }
    ctx->pc = 0x3071ACu;
label_3071ac:
    // 0x3071ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3071acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3071b0:
    // 0x3071b0: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x3071b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_3071b4:
    // 0x3071b4: 0x24a51e58  addiu       $a1, $a1, 0x1E58
    ctx->pc = 0x3071b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7768));
label_3071b8:
    // 0x3071b8: 0xc089fca  jal         func_227F28
label_3071bc:
    if (ctx->pc == 0x3071BCu) {
        ctx->pc = 0x3071BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071B8u;
        // 0x3071bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071C0u;
        goto label_3071c0;
    }
    ctx->pc = 0x3071B8u;
    SET_GPR_U32(ctx, 31, 0x3071C0u);
    ctx->pc = 0x3071BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071B8u;
    // 0x3071bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F28u, 0x3071B8u, 0x3071C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071C0u;
label_3071c0:
    // 0x3071c0: 0x8e300218  lw          $s0, 0x218($s1)
    ctx->pc = 0x3071c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_3071c4:
    // 0x3071c4: 0xc0899bc  jal         func_2266F0
label_3071c8:
    if (ctx->pc == 0x3071C8u) {
        ctx->pc = 0x3071C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071C4u;
        // 0x3071c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071CCu;
        goto label_3071cc;
    }
    ctx->pc = 0x3071C4u;
    SET_GPR_U32(ctx, 31, 0x3071CCu);
    ctx->pc = 0x3071C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3071C4u;
    // 0x3071c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3071C4u, 0x3071CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3071CCu;
label_3071cc:
    // 0x3071cc: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x3071ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_3071d0:
    // 0x3071d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3071d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3071d4:
    // 0x3071d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3071d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3071d8:
    // 0x3071d8: 0x60f809  jalr        $v1
label_3071dc:
    if (ctx->pc == 0x3071DCu) {
        ctx->pc = 0x3071DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071D8u;
        // 0x3071dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3071E0u;
        goto label_3071e0;
    }
    ctx->pc = 0x3071D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3071E0u);
        ctx->pc = 0x3071DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071D8u;
        // 0x3071dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3071D8u, 0x3071E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3071E0u;
label_3071e0:
    // 0x3071e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3071e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3071e4:
    // 0x3071e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3071e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3071e8:
    // 0x3071e8: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x3071e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_3071ec:
    // 0x3071ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3071ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3071f0:
    // 0x3071f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3071f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3071f4:
    // 0x3071f4: 0x0  nop
    ctx->pc = 0x3071f4u;
    // NOP
label_3071f8:
    // 0x3071f8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_3071fc:
    if (ctx->pc == 0x3071FCu) {
        ctx->pc = 0x3071FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071F8u;
        // 0x3071fc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307200u;
        goto label_307200;
    }
    ctx->pc = 0x3071F8u;
    {
        const bool branch_taken_0x3071f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3071FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3071F8u;
        // 0x3071fc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3071f8) {
            ctx->pc = 0x3072ACu;
            goto label_3072ac;
        }
    }
    ctx->pc = 0x307200u;
label_307200:
    // 0x307200: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x307200u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307204:
    // 0x307204: 0x0  nop
    ctx->pc = 0x307204u;
    // NOP
label_307208:
    // 0x307208: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_30720c:
    if (ctx->pc == 0x30720Cu) {
        ctx->pc = 0x30720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307208u;
        // 0x30720c: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307210u;
        goto label_307210;
    }
    ctx->pc = 0x307208u;
    {
        const bool branch_taken_0x307208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307208u;
        // 0x30720c: 0x1610c0  sll         $v0, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307208) {
            ctx->pc = 0x3072ACu;
            goto label_3072ac;
        }
    }
    ctx->pc = 0x307210u;
label_307210:
    // 0x307210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307214:
    // 0x307214: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x307214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_307218:
    // 0x307218: 0x84430484  lh          $v1, 0x484($v0)
    ctx->pc = 0x307218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1156)));
label_30721c:
    // 0x30721c: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
label_307220:
    if (ctx->pc == 0x307220u) {
        ctx->pc = 0x307220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30721Cu;
        // 0x307220: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307224u;
        goto label_307224;
    }
    ctx->pc = 0x30721Cu;
    {
        const bool branch_taken_0x30721c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30721c) {
            ctx->pc = 0x307220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30721Cu;
            // 0x307220: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3072ACu;
            goto label_3072ac;
        }
    }
    ctx->pc = 0x307224u;
label_307224:
    // 0x307224: 0xc0d737c  jal         func_35CDF0
label_307228:
    if (ctx->pc == 0x307228u) {
        ctx->pc = 0x307228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307224u;
        // 0x307228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30722Cu;
        goto label_30722c;
    }
    ctx->pc = 0x307224u;
    SET_GPR_U32(ctx, 31, 0x30722Cu);
    ctx->pc = 0x307228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307224u;
    // 0x307228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x307224u, 0x30722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30722Cu;
label_30722c:
    // 0x30722c: 0x8e2311e8  lw          $v1, 0x11E8($s1)
    ctx->pc = 0x30722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_307230:
    // 0x307230: 0x8c6500b8  lw          $a1, 0xB8($v1)
    ctx->pc = 0x307230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_307234:
    // 0x307234: 0x8ca201d4  lw          $v0, 0x1D4($a1)
    ctx->pc = 0x307234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 468)));
label_307238:
    // 0x307238: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x307238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_30723c:
    // 0x30723c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_307240:
    if (ctx->pc == 0x307240u) {
        ctx->pc = 0x307240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30723Cu;
        // 0x307240: 0x8c65032c  lw          $a1, 0x32C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307244u;
        goto label_307244;
    }
    ctx->pc = 0x30723Cu;
    {
        const bool branch_taken_0x30723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30723c) {
            ctx->pc = 0x307240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30723Cu;
            // 0x307240: 0x8c65032c  lw          $a1, 0x32C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307264u;
            goto label_307264;
        }
    }
    ctx->pc = 0x307244u;
label_307244:
    // 0x307244: 0x84a201d0  lh          $v0, 0x1D0($a1)
    ctx->pc = 0x307244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 464)));
label_307248:
    // 0x307248: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_30724c:
    if (ctx->pc == 0x30724Cu) {
        ctx->pc = 0x30724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307248u;
        // 0x30724c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307250u;
        goto label_307250;
    }
    ctx->pc = 0x307248u;
    {
        const bool branch_taken_0x307248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307248) {
            ctx->pc = 0x30724Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307248u;
            // 0x30724c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307254u;
            goto label_307254;
        }
    }
    ctx->pc = 0x307250u;
label_307250:
    // 0x307250: 0x8ca501cc  lw          $a1, 0x1CC($a1)
    ctx->pc = 0x307250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 460)));
label_307254:
    // 0x307254: 0xc0d7468  jal         func_35D1A0
label_307258:
    if (ctx->pc == 0x307258u) {
        ctx->pc = 0x307258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307254u;
        // 0x307258: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30725Cu;
        goto label_30725c;
    }
    ctx->pc = 0x307254u;
    SET_GPR_U32(ctx, 31, 0x30725Cu);
    ctx->pc = 0x307258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307254u;
    // 0x307258: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x307254u, 0x30725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30725Cu;
label_30725c:
    // 0x30725c: 0x10000005  b           . + 4 + (0x5 << 2)
label_307260:
    if (ctx->pc == 0x307260u) {
        ctx->pc = 0x307260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30725Cu;
        // 0x307260: 0x26050480  addiu       $a1, $s0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307264u;
        goto label_307264;
    }
    ctx->pc = 0x30725Cu;
    {
        const bool branch_taken_0x30725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30725Cu;
        // 0x307260: 0x26050480  addiu       $a1, $s0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30725c) {
            ctx->pc = 0x307274u;
            goto label_307274;
        }
    }
    ctx->pc = 0x307264u;
label_307264:
    // 0x307264: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x307264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_307268:
    // 0x307268: 0xc0d745c  jal         func_35D170
label_30726c:
    if (ctx->pc == 0x30726Cu) {
        ctx->pc = 0x30726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307268u;
        // 0x30726c: 0x24a500f8  addiu       $a1, $a1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307270u;
        goto label_307270;
    }
    ctx->pc = 0x307268u;
    SET_GPR_U32(ctx, 31, 0x307270u);
    ctx->pc = 0x30726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307268u;
    // 0x30726c: 0x24a500f8  addiu       $a1, $a1, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x307268u, 0x307270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307270u;
label_307270:
    // 0x307270: 0x26050480  addiu       $a1, $s0, 0x480
    ctx->pc = 0x307270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_307274:
    // 0x307274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x307274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_307278:
    // 0x307278: 0xc0d756c  jal         func_35D5B0
label_30727c:
    if (ctx->pc == 0x30727Cu) {
        ctx->pc = 0x30727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307278u;
        // 0x30727c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307280u;
        goto label_307280;
    }
    ctx->pc = 0x307278u;
    SET_GPR_U32(ctx, 31, 0x307280u);
    ctx->pc = 0x30727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307278u;
    // 0x30727c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x307278u, 0x307280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307280u;
label_307280:
    // 0x307280: 0xc085d2a  jal         func_2174A8
label_307284:
    if (ctx->pc == 0x307284u) {
        ctx->pc = 0x307284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307280u;
        // 0x307284: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307288u;
        goto label_307288;
    }
    ctx->pc = 0x307280u;
    SET_GPR_U32(ctx, 31, 0x307288u);
    ctx->pc = 0x307284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307280u;
    // 0x307284: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x307280u, 0x307288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307288u;
label_307288:
    // 0x307288: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_30728c:
    if (ctx->pc == 0x30728Cu) {
        ctx->pc = 0x30728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307288u;
        // 0x30728c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x307290u;
        goto label_307290;
    }
    ctx->pc = 0x307288u;
    {
        const bool branch_taken_0x307288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307288u;
        // 0x30728c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307288) {
            ctx->pc = 0x30729Cu;
            goto label_30729c;
        }
    }
    ctx->pc = 0x307290u;
label_307290:
    // 0x307290: 0x8e2411e8  lw          $a0, 0x11E8($s1)
    ctx->pc = 0x307290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
label_307294:
    // 0x307294: 0xc089fca  jal         func_227F28
label_307298:
    if (ctx->pc == 0x307298u) {
        ctx->pc = 0x307298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307294u;
        // 0x307298: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30729Cu;
        goto label_30729c;
    }
    ctx->pc = 0x307294u;
    SET_GPR_U32(ctx, 31, 0x30729Cu);
    ctx->pc = 0x307298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307294u;
    // 0x307298: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F28u, 0x307294u, 0x30729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30729Cu;
label_30729c:
    // 0x30729c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x30729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3072a0:
    // 0x3072a0: 0xc0d7412  jal         func_35D048
label_3072a4:
    if (ctx->pc == 0x3072A4u) {
        ctx->pc = 0x3072A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072A0u;
        // 0x3072a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072A8u;
        goto label_3072a8;
    }
    ctx->pc = 0x3072A0u;
    SET_GPR_U32(ctx, 31, 0x3072A8u);
    ctx->pc = 0x3072A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072A0u;
    // 0x3072a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3072A0u, 0x3072A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3072A8u;
label_3072a8:
    // 0x3072a8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3072a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3072ac:
    // 0x3072ac: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3072acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3072b0:
    // 0x3072b0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3072b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3072b4:
    // 0x3072b4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3072b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3072b8:
    // 0x3072b8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3072b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3072bc:
    // 0x3072bc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x3072bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3072c0:
    // 0x3072c0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3072c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3072c4:
    // 0x3072c4: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x3072c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_3072c8:
    // 0x3072c8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x3072c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3072cc:
    // 0x3072cc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x3072ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_3072d0:
    // 0x3072d0: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x3072d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3072d4:
    // 0x3072d4: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x3072d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3072d8:
    // 0x3072d8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x3072d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3072dc:
    // 0x3072dc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3072dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3072e0:
    // 0x3072e0: 0x3e00008  jr          $ra
label_3072e4:
    if (ctx->pc == 0x3072E4u) {
        ctx->pc = 0x3072E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072E0u;
        // 0x3072e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3072E8u;
        goto label_fallthrough_0x3072e0;
    }
    ctx->pc = 0x3072E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3072E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3072E0u;
        // 0x3072e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3072E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3072e0:
    ctx->pc = 0x3072E8u;
}
