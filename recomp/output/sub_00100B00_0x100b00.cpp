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

// Function: sub_00100B00
// Address: 0x100b00 - 0x1017d8
void sub_00100B00_0x100b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100B00_0x100b00");
#endif

    switch (ctx->pc) {
        case 0x100b00u: goto label_100b00;
        case 0x100b04u: goto label_100b04;
        case 0x100b08u: goto label_100b08;
        case 0x100b0cu: goto label_100b0c;
        case 0x100b10u: goto label_100b10;
        case 0x100b14u: goto label_100b14;
        case 0x100b18u: goto label_100b18;
        case 0x100b1cu: goto label_100b1c;
        case 0x100b20u: goto label_100b20;
        case 0x100b24u: goto label_100b24;
        case 0x100b28u: goto label_100b28;
        case 0x100b2cu: goto label_100b2c;
        case 0x100b30u: goto label_100b30;
        case 0x100b34u: goto label_100b34;
        case 0x100b38u: goto label_100b38;
        case 0x100b3cu: goto label_100b3c;
        case 0x100b40u: goto label_100b40;
        case 0x100b44u: goto label_100b44;
        case 0x100b48u: goto label_100b48;
        case 0x100b4cu: goto label_100b4c;
        case 0x100b50u: goto label_100b50;
        case 0x100b54u: goto label_100b54;
        case 0x100b58u: goto label_100b58;
        case 0x100b5cu: goto label_100b5c;
        case 0x100b60u: goto label_100b60;
        case 0x100b64u: goto label_100b64;
        case 0x100b68u: goto label_100b68;
        case 0x100b6cu: goto label_100b6c;
        case 0x100b70u: goto label_100b70;
        case 0x100b74u: goto label_100b74;
        case 0x100b78u: goto label_100b78;
        case 0x100b7cu: goto label_100b7c;
        case 0x100b80u: goto label_100b80;
        case 0x100b84u: goto label_100b84;
        case 0x100b88u: goto label_100b88;
        case 0x100b8cu: goto label_100b8c;
        case 0x100b90u: goto label_100b90;
        case 0x100b94u: goto label_100b94;
        case 0x100b98u: goto label_100b98;
        case 0x100b9cu: goto label_100b9c;
        case 0x100ba0u: goto label_100ba0;
        case 0x100ba4u: goto label_100ba4;
        case 0x100ba8u: goto label_100ba8;
        case 0x100bacu: goto label_100bac;
        case 0x100bb0u: goto label_100bb0;
        case 0x100bb4u: goto label_100bb4;
        case 0x100bb8u: goto label_100bb8;
        case 0x100bbcu: goto label_100bbc;
        case 0x100bc0u: goto label_100bc0;
        case 0x100bc4u: goto label_100bc4;
        case 0x100bc8u: goto label_100bc8;
        case 0x100bccu: goto label_100bcc;
        case 0x100bd0u: goto label_100bd0;
        case 0x100bd4u: goto label_100bd4;
        case 0x100bd8u: goto label_100bd8;
        case 0x100bdcu: goto label_100bdc;
        case 0x100be0u: goto label_100be0;
        case 0x100be4u: goto label_100be4;
        case 0x100be8u: goto label_100be8;
        case 0x100becu: goto label_100bec;
        case 0x100bf0u: goto label_100bf0;
        case 0x100bf4u: goto label_100bf4;
        case 0x100bf8u: goto label_100bf8;
        case 0x100bfcu: goto label_100bfc;
        case 0x100c00u: goto label_100c00;
        case 0x100c04u: goto label_100c04;
        case 0x100c08u: goto label_100c08;
        case 0x100c0cu: goto label_100c0c;
        case 0x100c10u: goto label_100c10;
        case 0x100c14u: goto label_100c14;
        case 0x100c18u: goto label_100c18;
        case 0x100c1cu: goto label_100c1c;
        case 0x100c20u: goto label_100c20;
        case 0x100c24u: goto label_100c24;
        case 0x100c28u: goto label_100c28;
        case 0x100c2cu: goto label_100c2c;
        case 0x100c30u: goto label_100c30;
        case 0x100c34u: goto label_100c34;
        case 0x100c38u: goto label_100c38;
        case 0x100c3cu: goto label_100c3c;
        case 0x100c40u: goto label_100c40;
        case 0x100c44u: goto label_100c44;
        case 0x100c48u: goto label_100c48;
        case 0x100c4cu: goto label_100c4c;
        case 0x100c50u: goto label_100c50;
        case 0x100c54u: goto label_100c54;
        case 0x100c58u: goto label_100c58;
        case 0x100c5cu: goto label_100c5c;
        case 0x100c60u: goto label_100c60;
        case 0x100c64u: goto label_100c64;
        case 0x100c68u: goto label_100c68;
        case 0x100c6cu: goto label_100c6c;
        case 0x100c70u: goto label_100c70;
        case 0x100c74u: goto label_100c74;
        case 0x100c78u: goto label_100c78;
        case 0x100c7cu: goto label_100c7c;
        case 0x100c80u: goto label_100c80;
        case 0x100c84u: goto label_100c84;
        case 0x100c88u: goto label_100c88;
        case 0x100c8cu: goto label_100c8c;
        case 0x100c90u: goto label_100c90;
        case 0x100c94u: goto label_100c94;
        case 0x100c98u: goto label_100c98;
        case 0x100c9cu: goto label_100c9c;
        case 0x100ca0u: goto label_100ca0;
        case 0x100ca4u: goto label_100ca4;
        case 0x100ca8u: goto label_100ca8;
        case 0x100cacu: goto label_100cac;
        case 0x100cb0u: goto label_100cb0;
        case 0x100cb4u: goto label_100cb4;
        case 0x100cb8u: goto label_100cb8;
        case 0x100cbcu: goto label_100cbc;
        case 0x100cc0u: goto label_100cc0;
        case 0x100cc4u: goto label_100cc4;
        case 0x100cc8u: goto label_100cc8;
        case 0x100cccu: goto label_100ccc;
        case 0x100cd0u: goto label_100cd0;
        case 0x100cd4u: goto label_100cd4;
        case 0x100cd8u: goto label_100cd8;
        case 0x100cdcu: goto label_100cdc;
        case 0x100ce0u: goto label_100ce0;
        case 0x100ce4u: goto label_100ce4;
        case 0x100ce8u: goto label_100ce8;
        case 0x100cecu: goto label_100cec;
        case 0x100cf0u: goto label_100cf0;
        case 0x100cf4u: goto label_100cf4;
        case 0x100cf8u: goto label_100cf8;
        case 0x100cfcu: goto label_100cfc;
        case 0x100d00u: goto label_100d00;
        case 0x100d04u: goto label_100d04;
        case 0x100d08u: goto label_100d08;
        case 0x100d0cu: goto label_100d0c;
        case 0x100d10u: goto label_100d10;
        case 0x100d14u: goto label_100d14;
        case 0x100d18u: goto label_100d18;
        case 0x100d1cu: goto label_100d1c;
        case 0x100d20u: goto label_100d20;
        case 0x100d24u: goto label_100d24;
        case 0x100d28u: goto label_100d28;
        case 0x100d2cu: goto label_100d2c;
        case 0x100d30u: goto label_100d30;
        case 0x100d34u: goto label_100d34;
        case 0x100d38u: goto label_100d38;
        case 0x100d3cu: goto label_100d3c;
        case 0x100d40u: goto label_100d40;
        case 0x100d44u: goto label_100d44;
        case 0x100d48u: goto label_100d48;
        case 0x100d4cu: goto label_100d4c;
        case 0x100d50u: goto label_100d50;
        case 0x100d54u: goto label_100d54;
        case 0x100d58u: goto label_100d58;
        case 0x100d5cu: goto label_100d5c;
        case 0x100d60u: goto label_100d60;
        case 0x100d64u: goto label_100d64;
        case 0x100d68u: goto label_100d68;
        case 0x100d6cu: goto label_100d6c;
        case 0x100d70u: goto label_100d70;
        case 0x100d74u: goto label_100d74;
        case 0x100d78u: goto label_100d78;
        case 0x100d7cu: goto label_100d7c;
        case 0x100d80u: goto label_100d80;
        case 0x100d84u: goto label_100d84;
        case 0x100d88u: goto label_100d88;
        case 0x100d8cu: goto label_100d8c;
        case 0x100d90u: goto label_100d90;
        case 0x100d94u: goto label_100d94;
        case 0x100d98u: goto label_100d98;
        case 0x100d9cu: goto label_100d9c;
        case 0x100da0u: goto label_100da0;
        case 0x100da4u: goto label_100da4;
        case 0x100da8u: goto label_100da8;
        case 0x100dacu: goto label_100dac;
        case 0x100db0u: goto label_100db0;
        case 0x100db4u: goto label_100db4;
        case 0x100db8u: goto label_100db8;
        case 0x100dbcu: goto label_100dbc;
        case 0x100dc0u: goto label_100dc0;
        case 0x100dc4u: goto label_100dc4;
        case 0x100dc8u: goto label_100dc8;
        case 0x100dccu: goto label_100dcc;
        case 0x100dd0u: goto label_100dd0;
        case 0x100dd4u: goto label_100dd4;
        case 0x100dd8u: goto label_100dd8;
        case 0x100ddcu: goto label_100ddc;
        case 0x100de0u: goto label_100de0;
        case 0x100de4u: goto label_100de4;
        case 0x100de8u: goto label_100de8;
        case 0x100decu: goto label_100dec;
        case 0x100df0u: goto label_100df0;
        case 0x100df4u: goto label_100df4;
        case 0x100df8u: goto label_100df8;
        case 0x100dfcu: goto label_100dfc;
        case 0x100e00u: goto label_100e00;
        case 0x100e04u: goto label_100e04;
        case 0x100e08u: goto label_100e08;
        case 0x100e0cu: goto label_100e0c;
        case 0x100e10u: goto label_100e10;
        case 0x100e14u: goto label_100e14;
        case 0x100e18u: goto label_100e18;
        case 0x100e1cu: goto label_100e1c;
        case 0x100e20u: goto label_100e20;
        case 0x100e24u: goto label_100e24;
        case 0x100e28u: goto label_100e28;
        case 0x100e2cu: goto label_100e2c;
        case 0x100e30u: goto label_100e30;
        case 0x100e34u: goto label_100e34;
        case 0x100e38u: goto label_100e38;
        case 0x100e3cu: goto label_100e3c;
        case 0x100e40u: goto label_100e40;
        case 0x100e44u: goto label_100e44;
        case 0x100e48u: goto label_100e48;
        case 0x100e4cu: goto label_100e4c;
        case 0x100e50u: goto label_100e50;
        case 0x100e54u: goto label_100e54;
        case 0x100e58u: goto label_100e58;
        case 0x100e5cu: goto label_100e5c;
        case 0x100e60u: goto label_100e60;
        case 0x100e64u: goto label_100e64;
        case 0x100e68u: goto label_100e68;
        case 0x100e6cu: goto label_100e6c;
        case 0x100e70u: goto label_100e70;
        case 0x100e74u: goto label_100e74;
        case 0x100e78u: goto label_100e78;
        case 0x100e7cu: goto label_100e7c;
        case 0x100e80u: goto label_100e80;
        case 0x100e84u: goto label_100e84;
        case 0x100e88u: goto label_100e88;
        case 0x100e8cu: goto label_100e8c;
        case 0x100e90u: goto label_100e90;
        case 0x100e94u: goto label_100e94;
        case 0x100e98u: goto label_100e98;
        case 0x100e9cu: goto label_100e9c;
        case 0x100ea0u: goto label_100ea0;
        case 0x100ea4u: goto label_100ea4;
        case 0x100ea8u: goto label_100ea8;
        case 0x100eacu: goto label_100eac;
        case 0x100eb0u: goto label_100eb0;
        case 0x100eb4u: goto label_100eb4;
        case 0x100eb8u: goto label_100eb8;
        case 0x100ebcu: goto label_100ebc;
        case 0x100ec0u: goto label_100ec0;
        case 0x100ec4u: goto label_100ec4;
        case 0x100ec8u: goto label_100ec8;
        case 0x100eccu: goto label_100ecc;
        case 0x100ed0u: goto label_100ed0;
        case 0x100ed4u: goto label_100ed4;
        case 0x100ed8u: goto label_100ed8;
        case 0x100edcu: goto label_100edc;
        case 0x100ee0u: goto label_100ee0;
        case 0x100ee4u: goto label_100ee4;
        case 0x100ee8u: goto label_100ee8;
        case 0x100eecu: goto label_100eec;
        case 0x100ef0u: goto label_100ef0;
        case 0x100ef4u: goto label_100ef4;
        case 0x100ef8u: goto label_100ef8;
        case 0x100efcu: goto label_100efc;
        case 0x100f00u: goto label_100f00;
        case 0x100f04u: goto label_100f04;
        case 0x100f08u: goto label_100f08;
        case 0x100f0cu: goto label_100f0c;
        case 0x100f10u: goto label_100f10;
        case 0x100f14u: goto label_100f14;
        case 0x100f18u: goto label_100f18;
        case 0x100f1cu: goto label_100f1c;
        case 0x100f20u: goto label_100f20;
        case 0x100f24u: goto label_100f24;
        case 0x100f28u: goto label_100f28;
        case 0x100f2cu: goto label_100f2c;
        case 0x100f30u: goto label_100f30;
        case 0x100f34u: goto label_100f34;
        case 0x100f38u: goto label_100f38;
        case 0x100f3cu: goto label_100f3c;
        case 0x100f40u: goto label_100f40;
        case 0x100f44u: goto label_100f44;
        case 0x100f48u: goto label_100f48;
        case 0x100f4cu: goto label_100f4c;
        case 0x100f50u: goto label_100f50;
        case 0x100f54u: goto label_100f54;
        case 0x100f58u: goto label_100f58;
        case 0x100f5cu: goto label_100f5c;
        case 0x100f60u: goto label_100f60;
        case 0x100f64u: goto label_100f64;
        case 0x100f68u: goto label_100f68;
        case 0x100f6cu: goto label_100f6c;
        case 0x100f70u: goto label_100f70;
        case 0x100f74u: goto label_100f74;
        case 0x100f78u: goto label_100f78;
        case 0x100f7cu: goto label_100f7c;
        case 0x100f80u: goto label_100f80;
        case 0x100f84u: goto label_100f84;
        case 0x100f88u: goto label_100f88;
        case 0x100f8cu: goto label_100f8c;
        case 0x100f90u: goto label_100f90;
        case 0x100f94u: goto label_100f94;
        case 0x100f98u: goto label_100f98;
        case 0x100f9cu: goto label_100f9c;
        case 0x100fa0u: goto label_100fa0;
        case 0x100fa4u: goto label_100fa4;
        case 0x100fa8u: goto label_100fa8;
        case 0x100facu: goto label_100fac;
        case 0x100fb0u: goto label_100fb0;
        case 0x100fb4u: goto label_100fb4;
        case 0x100fb8u: goto label_100fb8;
        case 0x100fbcu: goto label_100fbc;
        case 0x100fc0u: goto label_100fc0;
        case 0x100fc4u: goto label_100fc4;
        case 0x100fc8u: goto label_100fc8;
        case 0x100fccu: goto label_100fcc;
        case 0x100fd0u: goto label_100fd0;
        case 0x100fd4u: goto label_100fd4;
        case 0x100fd8u: goto label_100fd8;
        case 0x100fdcu: goto label_100fdc;
        case 0x100fe0u: goto label_100fe0;
        case 0x100fe4u: goto label_100fe4;
        case 0x100fe8u: goto label_100fe8;
        case 0x100fecu: goto label_100fec;
        case 0x100ff0u: goto label_100ff0;
        case 0x100ff4u: goto label_100ff4;
        case 0x100ff8u: goto label_100ff8;
        case 0x100ffcu: goto label_100ffc;
        case 0x101000u: goto label_101000;
        case 0x101004u: goto label_101004;
        case 0x101008u: goto label_101008;
        case 0x10100cu: goto label_10100c;
        case 0x101010u: goto label_101010;
        case 0x101014u: goto label_101014;
        case 0x101018u: goto label_101018;
        case 0x10101cu: goto label_10101c;
        case 0x101020u: goto label_101020;
        case 0x101024u: goto label_101024;
        case 0x101028u: goto label_101028;
        case 0x10102cu: goto label_10102c;
        case 0x101030u: goto label_101030;
        case 0x101034u: goto label_101034;
        case 0x101038u: goto label_101038;
        case 0x10103cu: goto label_10103c;
        case 0x101040u: goto label_101040;
        case 0x101044u: goto label_101044;
        case 0x101048u: goto label_101048;
        case 0x10104cu: goto label_10104c;
        case 0x101050u: goto label_101050;
        case 0x101054u: goto label_101054;
        case 0x101058u: goto label_101058;
        case 0x10105cu: goto label_10105c;
        case 0x101060u: goto label_101060;
        case 0x101064u: goto label_101064;
        case 0x101068u: goto label_101068;
        case 0x10106cu: goto label_10106c;
        case 0x101070u: goto label_101070;
        case 0x101074u: goto label_101074;
        case 0x101078u: goto label_101078;
        case 0x10107cu: goto label_10107c;
        case 0x101080u: goto label_101080;
        case 0x101084u: goto label_101084;
        case 0x101088u: goto label_101088;
        case 0x10108cu: goto label_10108c;
        case 0x101090u: goto label_101090;
        case 0x101094u: goto label_101094;
        case 0x101098u: goto label_101098;
        case 0x10109cu: goto label_10109c;
        case 0x1010a0u: goto label_1010a0;
        case 0x1010a4u: goto label_1010a4;
        case 0x1010a8u: goto label_1010a8;
        case 0x1010acu: goto label_1010ac;
        case 0x1010b0u: goto label_1010b0;
        case 0x1010b4u: goto label_1010b4;
        case 0x1010b8u: goto label_1010b8;
        case 0x1010bcu: goto label_1010bc;
        case 0x1010c0u: goto label_1010c0;
        case 0x1010c4u: goto label_1010c4;
        case 0x1010c8u: goto label_1010c8;
        case 0x1010ccu: goto label_1010cc;
        case 0x1010d0u: goto label_1010d0;
        case 0x1010d4u: goto label_1010d4;
        case 0x1010d8u: goto label_1010d8;
        case 0x1010dcu: goto label_1010dc;
        case 0x1010e0u: goto label_1010e0;
        case 0x1010e4u: goto label_1010e4;
        case 0x1010e8u: goto label_1010e8;
        case 0x1010ecu: goto label_1010ec;
        case 0x1010f0u: goto label_1010f0;
        case 0x1010f4u: goto label_1010f4;
        case 0x1010f8u: goto label_1010f8;
        case 0x1010fcu: goto label_1010fc;
        case 0x101100u: goto label_101100;
        case 0x101104u: goto label_101104;
        case 0x101108u: goto label_101108;
        case 0x10110cu: goto label_10110c;
        case 0x101110u: goto label_101110;
        case 0x101114u: goto label_101114;
        case 0x101118u: goto label_101118;
        case 0x10111cu: goto label_10111c;
        case 0x101120u: goto label_101120;
        case 0x101124u: goto label_101124;
        case 0x101128u: goto label_101128;
        case 0x10112cu: goto label_10112c;
        case 0x101130u: goto label_101130;
        case 0x101134u: goto label_101134;
        case 0x101138u: goto label_101138;
        case 0x10113cu: goto label_10113c;
        case 0x101140u: goto label_101140;
        case 0x101144u: goto label_101144;
        case 0x101148u: goto label_101148;
        case 0x10114cu: goto label_10114c;
        case 0x101150u: goto label_101150;
        case 0x101154u: goto label_101154;
        case 0x101158u: goto label_101158;
        case 0x10115cu: goto label_10115c;
        case 0x101160u: goto label_101160;
        case 0x101164u: goto label_101164;
        case 0x101168u: goto label_101168;
        case 0x10116cu: goto label_10116c;
        case 0x101170u: goto label_101170;
        case 0x101174u: goto label_101174;
        case 0x101178u: goto label_101178;
        case 0x10117cu: goto label_10117c;
        case 0x101180u: goto label_101180;
        case 0x101184u: goto label_101184;
        case 0x101188u: goto label_101188;
        case 0x10118cu: goto label_10118c;
        case 0x101190u: goto label_101190;
        case 0x101194u: goto label_101194;
        case 0x101198u: goto label_101198;
        case 0x10119cu: goto label_10119c;
        case 0x1011a0u: goto label_1011a0;
        case 0x1011a4u: goto label_1011a4;
        case 0x1011a8u: goto label_1011a8;
        case 0x1011acu: goto label_1011ac;
        case 0x1011b0u: goto label_1011b0;
        case 0x1011b4u: goto label_1011b4;
        case 0x1011b8u: goto label_1011b8;
        case 0x1011bcu: goto label_1011bc;
        case 0x1011c0u: goto label_1011c0;
        case 0x1011c4u: goto label_1011c4;
        case 0x1011c8u: goto label_1011c8;
        case 0x1011ccu: goto label_1011cc;
        case 0x1011d0u: goto label_1011d0;
        case 0x1011d4u: goto label_1011d4;
        case 0x1011d8u: goto label_1011d8;
        case 0x1011dcu: goto label_1011dc;
        case 0x1011e0u: goto label_1011e0;
        case 0x1011e4u: goto label_1011e4;
        case 0x1011e8u: goto label_1011e8;
        case 0x1011ecu: goto label_1011ec;
        case 0x1011f0u: goto label_1011f0;
        case 0x1011f4u: goto label_1011f4;
        case 0x1011f8u: goto label_1011f8;
        case 0x1011fcu: goto label_1011fc;
        case 0x101200u: goto label_101200;
        case 0x101204u: goto label_101204;
        case 0x101208u: goto label_101208;
        case 0x10120cu: goto label_10120c;
        case 0x101210u: goto label_101210;
        case 0x101214u: goto label_101214;
        case 0x101218u: goto label_101218;
        case 0x10121cu: goto label_10121c;
        case 0x101220u: goto label_101220;
        case 0x101224u: goto label_101224;
        case 0x101228u: goto label_101228;
        case 0x10122cu: goto label_10122c;
        case 0x101230u: goto label_101230;
        case 0x101234u: goto label_101234;
        case 0x101238u: goto label_101238;
        case 0x10123cu: goto label_10123c;
        case 0x101240u: goto label_101240;
        case 0x101244u: goto label_101244;
        case 0x101248u: goto label_101248;
        case 0x10124cu: goto label_10124c;
        case 0x101250u: goto label_101250;
        case 0x101254u: goto label_101254;
        case 0x101258u: goto label_101258;
        case 0x10125cu: goto label_10125c;
        case 0x101260u: goto label_101260;
        case 0x101264u: goto label_101264;
        case 0x101268u: goto label_101268;
        case 0x10126cu: goto label_10126c;
        case 0x101270u: goto label_101270;
        case 0x101274u: goto label_101274;
        case 0x101278u: goto label_101278;
        case 0x10127cu: goto label_10127c;
        case 0x101280u: goto label_101280;
        case 0x101284u: goto label_101284;
        case 0x101288u: goto label_101288;
        case 0x10128cu: goto label_10128c;
        case 0x101290u: goto label_101290;
        case 0x101294u: goto label_101294;
        case 0x101298u: goto label_101298;
        case 0x10129cu: goto label_10129c;
        case 0x1012a0u: goto label_1012a0;
        case 0x1012a4u: goto label_1012a4;
        case 0x1012a8u: goto label_1012a8;
        case 0x1012acu: goto label_1012ac;
        case 0x1012b0u: goto label_1012b0;
        case 0x1012b4u: goto label_1012b4;
        case 0x1012b8u: goto label_1012b8;
        case 0x1012bcu: goto label_1012bc;
        case 0x1012c0u: goto label_1012c0;
        case 0x1012c4u: goto label_1012c4;
        case 0x1012c8u: goto label_1012c8;
        case 0x1012ccu: goto label_1012cc;
        case 0x1012d0u: goto label_1012d0;
        case 0x1012d4u: goto label_1012d4;
        case 0x1012d8u: goto label_1012d8;
        case 0x1012dcu: goto label_1012dc;
        case 0x1012e0u: goto label_1012e0;
        case 0x1012e4u: goto label_1012e4;
        case 0x1012e8u: goto label_1012e8;
        case 0x1012ecu: goto label_1012ec;
        case 0x1012f0u: goto label_1012f0;
        case 0x1012f4u: goto label_1012f4;
        case 0x1012f8u: goto label_1012f8;
        case 0x1012fcu: goto label_1012fc;
        case 0x101300u: goto label_101300;
        case 0x101304u: goto label_101304;
        case 0x101308u: goto label_101308;
        case 0x10130cu: goto label_10130c;
        case 0x101310u: goto label_101310;
        case 0x101314u: goto label_101314;
        case 0x101318u: goto label_101318;
        case 0x10131cu: goto label_10131c;
        case 0x101320u: goto label_101320;
        case 0x101324u: goto label_101324;
        case 0x101328u: goto label_101328;
        case 0x10132cu: goto label_10132c;
        case 0x101330u: goto label_101330;
        case 0x101334u: goto label_101334;
        case 0x101338u: goto label_101338;
        case 0x10133cu: goto label_10133c;
        case 0x101340u: goto label_101340;
        case 0x101344u: goto label_101344;
        case 0x101348u: goto label_101348;
        case 0x10134cu: goto label_10134c;
        case 0x101350u: goto label_101350;
        case 0x101354u: goto label_101354;
        case 0x101358u: goto label_101358;
        case 0x10135cu: goto label_10135c;
        case 0x101360u: goto label_101360;
        case 0x101364u: goto label_101364;
        case 0x101368u: goto label_101368;
        case 0x10136cu: goto label_10136c;
        case 0x101370u: goto label_101370;
        case 0x101374u: goto label_101374;
        case 0x101378u: goto label_101378;
        case 0x10137cu: goto label_10137c;
        case 0x101380u: goto label_101380;
        case 0x101384u: goto label_101384;
        case 0x101388u: goto label_101388;
        case 0x10138cu: goto label_10138c;
        case 0x101390u: goto label_101390;
        case 0x101394u: goto label_101394;
        case 0x101398u: goto label_101398;
        case 0x10139cu: goto label_10139c;
        case 0x1013a0u: goto label_1013a0;
        case 0x1013a4u: goto label_1013a4;
        case 0x1013a8u: goto label_1013a8;
        case 0x1013acu: goto label_1013ac;
        case 0x1013b0u: goto label_1013b0;
        case 0x1013b4u: goto label_1013b4;
        case 0x1013b8u: goto label_1013b8;
        case 0x1013bcu: goto label_1013bc;
        case 0x1013c0u: goto label_1013c0;
        case 0x1013c4u: goto label_1013c4;
        case 0x1013c8u: goto label_1013c8;
        case 0x1013ccu: goto label_1013cc;
        case 0x1013d0u: goto label_1013d0;
        case 0x1013d4u: goto label_1013d4;
        case 0x1013d8u: goto label_1013d8;
        case 0x1013dcu: goto label_1013dc;
        case 0x1013e0u: goto label_1013e0;
        case 0x1013e4u: goto label_1013e4;
        case 0x1013e8u: goto label_1013e8;
        case 0x1013ecu: goto label_1013ec;
        case 0x1013f0u: goto label_1013f0;
        case 0x1013f4u: goto label_1013f4;
        case 0x1013f8u: goto label_1013f8;
        case 0x1013fcu: goto label_1013fc;
        case 0x101400u: goto label_101400;
        case 0x101404u: goto label_101404;
        case 0x101408u: goto label_101408;
        case 0x10140cu: goto label_10140c;
        case 0x101410u: goto label_101410;
        case 0x101414u: goto label_101414;
        case 0x101418u: goto label_101418;
        case 0x10141cu: goto label_10141c;
        case 0x101420u: goto label_101420;
        case 0x101424u: goto label_101424;
        case 0x101428u: goto label_101428;
        case 0x10142cu: goto label_10142c;
        case 0x101430u: goto label_101430;
        case 0x101434u: goto label_101434;
        case 0x101438u: goto label_101438;
        case 0x10143cu: goto label_10143c;
        case 0x101440u: goto label_101440;
        case 0x101444u: goto label_101444;
        case 0x101448u: goto label_101448;
        case 0x10144cu: goto label_10144c;
        case 0x101450u: goto label_101450;
        case 0x101454u: goto label_101454;
        case 0x101458u: goto label_101458;
        case 0x10145cu: goto label_10145c;
        case 0x101460u: goto label_101460;
        case 0x101464u: goto label_101464;
        case 0x101468u: goto label_101468;
        case 0x10146cu: goto label_10146c;
        case 0x101470u: goto label_101470;
        case 0x101474u: goto label_101474;
        case 0x101478u: goto label_101478;
        case 0x10147cu: goto label_10147c;
        case 0x101480u: goto label_101480;
        case 0x101484u: goto label_101484;
        case 0x101488u: goto label_101488;
        case 0x10148cu: goto label_10148c;
        case 0x101490u: goto label_101490;
        case 0x101494u: goto label_101494;
        case 0x101498u: goto label_101498;
        case 0x10149cu: goto label_10149c;
        case 0x1014a0u: goto label_1014a0;
        case 0x1014a4u: goto label_1014a4;
        case 0x1014a8u: goto label_1014a8;
        case 0x1014acu: goto label_1014ac;
        case 0x1014b0u: goto label_1014b0;
        case 0x1014b4u: goto label_1014b4;
        case 0x1014b8u: goto label_1014b8;
        case 0x1014bcu: goto label_1014bc;
        case 0x1014c0u: goto label_1014c0;
        case 0x1014c4u: goto label_1014c4;
        case 0x1014c8u: goto label_1014c8;
        case 0x1014ccu: goto label_1014cc;
        case 0x1014d0u: goto label_1014d0;
        case 0x1014d4u: goto label_1014d4;
        case 0x1014d8u: goto label_1014d8;
        case 0x1014dcu: goto label_1014dc;
        case 0x1014e0u: goto label_1014e0;
        case 0x1014e4u: goto label_1014e4;
        case 0x1014e8u: goto label_1014e8;
        case 0x1014ecu: goto label_1014ec;
        case 0x1014f0u: goto label_1014f0;
        case 0x1014f4u: goto label_1014f4;
        case 0x1014f8u: goto label_1014f8;
        case 0x1014fcu: goto label_1014fc;
        case 0x101500u: goto label_101500;
        case 0x101504u: goto label_101504;
        case 0x101508u: goto label_101508;
        case 0x10150cu: goto label_10150c;
        case 0x101510u: goto label_101510;
        case 0x101514u: goto label_101514;
        case 0x101518u: goto label_101518;
        case 0x10151cu: goto label_10151c;
        case 0x101520u: goto label_101520;
        case 0x101524u: goto label_101524;
        case 0x101528u: goto label_101528;
        case 0x10152cu: goto label_10152c;
        case 0x101530u: goto label_101530;
        case 0x101534u: goto label_101534;
        case 0x101538u: goto label_101538;
        case 0x10153cu: goto label_10153c;
        case 0x101540u: goto label_101540;
        case 0x101544u: goto label_101544;
        case 0x101548u: goto label_101548;
        case 0x10154cu: goto label_10154c;
        case 0x101550u: goto label_101550;
        case 0x101554u: goto label_101554;
        case 0x101558u: goto label_101558;
        case 0x10155cu: goto label_10155c;
        case 0x101560u: goto label_101560;
        case 0x101564u: goto label_101564;
        case 0x101568u: goto label_101568;
        case 0x10156cu: goto label_10156c;
        case 0x101570u: goto label_101570;
        case 0x101574u: goto label_101574;
        case 0x101578u: goto label_101578;
        case 0x10157cu: goto label_10157c;
        case 0x101580u: goto label_101580;
        case 0x101584u: goto label_101584;
        case 0x101588u: goto label_101588;
        case 0x10158cu: goto label_10158c;
        case 0x101590u: goto label_101590;
        case 0x101594u: goto label_101594;
        case 0x101598u: goto label_101598;
        case 0x10159cu: goto label_10159c;
        case 0x1015a0u: goto label_1015a0;
        case 0x1015a4u: goto label_1015a4;
        case 0x1015a8u: goto label_1015a8;
        case 0x1015acu: goto label_1015ac;
        case 0x1015b0u: goto label_1015b0;
        case 0x1015b4u: goto label_1015b4;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015bcu: goto label_1015bc;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015c4u: goto label_1015c4;
        case 0x1015c8u: goto label_1015c8;
        case 0x1015ccu: goto label_1015cc;
        case 0x1015d0u: goto label_1015d0;
        case 0x1015d4u: goto label_1015d4;
        case 0x1015d8u: goto label_1015d8;
        case 0x1015dcu: goto label_1015dc;
        case 0x1015e0u: goto label_1015e0;
        case 0x1015e4u: goto label_1015e4;
        case 0x1015e8u: goto label_1015e8;
        case 0x1015ecu: goto label_1015ec;
        case 0x1015f0u: goto label_1015f0;
        case 0x1015f4u: goto label_1015f4;
        case 0x1015f8u: goto label_1015f8;
        case 0x1015fcu: goto label_1015fc;
        case 0x101600u: goto label_101600;
        case 0x101604u: goto label_101604;
        case 0x101608u: goto label_101608;
        case 0x10160cu: goto label_10160c;
        case 0x101610u: goto label_101610;
        case 0x101614u: goto label_101614;
        case 0x101618u: goto label_101618;
        case 0x10161cu: goto label_10161c;
        case 0x101620u: goto label_101620;
        case 0x101624u: goto label_101624;
        case 0x101628u: goto label_101628;
        case 0x10162cu: goto label_10162c;
        case 0x101630u: goto label_101630;
        case 0x101634u: goto label_101634;
        case 0x101638u: goto label_101638;
        case 0x10163cu: goto label_10163c;
        case 0x101640u: goto label_101640;
        case 0x101644u: goto label_101644;
        case 0x101648u: goto label_101648;
        case 0x10164cu: goto label_10164c;
        case 0x101650u: goto label_101650;
        case 0x101654u: goto label_101654;
        case 0x101658u: goto label_101658;
        case 0x10165cu: goto label_10165c;
        case 0x101660u: goto label_101660;
        case 0x101664u: goto label_101664;
        case 0x101668u: goto label_101668;
        case 0x10166cu: goto label_10166c;
        case 0x101670u: goto label_101670;
        case 0x101674u: goto label_101674;
        case 0x101678u: goto label_101678;
        case 0x10167cu: goto label_10167c;
        case 0x101680u: goto label_101680;
        case 0x101684u: goto label_101684;
        case 0x101688u: goto label_101688;
        case 0x10168cu: goto label_10168c;
        case 0x101690u: goto label_101690;
        case 0x101694u: goto label_101694;
        case 0x101698u: goto label_101698;
        case 0x10169cu: goto label_10169c;
        case 0x1016a0u: goto label_1016a0;
        case 0x1016a4u: goto label_1016a4;
        case 0x1016a8u: goto label_1016a8;
        case 0x1016acu: goto label_1016ac;
        case 0x1016b0u: goto label_1016b0;
        case 0x1016b4u: goto label_1016b4;
        case 0x1016b8u: goto label_1016b8;
        case 0x1016bcu: goto label_1016bc;
        case 0x1016c0u: goto label_1016c0;
        case 0x1016c4u: goto label_1016c4;
        case 0x1016c8u: goto label_1016c8;
        case 0x1016ccu: goto label_1016cc;
        case 0x1016d0u: goto label_1016d0;
        case 0x1016d4u: goto label_1016d4;
        case 0x1016d8u: goto label_1016d8;
        case 0x1016dcu: goto label_1016dc;
        case 0x1016e0u: goto label_1016e0;
        case 0x1016e4u: goto label_1016e4;
        case 0x1016e8u: goto label_1016e8;
        case 0x1016ecu: goto label_1016ec;
        case 0x1016f0u: goto label_1016f0;
        case 0x1016f4u: goto label_1016f4;
        case 0x1016f8u: goto label_1016f8;
        case 0x1016fcu: goto label_1016fc;
        case 0x101700u: goto label_101700;
        case 0x101704u: goto label_101704;
        case 0x101708u: goto label_101708;
        case 0x10170cu: goto label_10170c;
        case 0x101710u: goto label_101710;
        case 0x101714u: goto label_101714;
        case 0x101718u: goto label_101718;
        case 0x10171cu: goto label_10171c;
        case 0x101720u: goto label_101720;
        case 0x101724u: goto label_101724;
        case 0x101728u: goto label_101728;
        case 0x10172cu: goto label_10172c;
        case 0x101730u: goto label_101730;
        case 0x101734u: goto label_101734;
        case 0x101738u: goto label_101738;
        case 0x10173cu: goto label_10173c;
        case 0x101740u: goto label_101740;
        case 0x101744u: goto label_101744;
        case 0x101748u: goto label_101748;
        case 0x10174cu: goto label_10174c;
        case 0x101750u: goto label_101750;
        case 0x101754u: goto label_101754;
        case 0x101758u: goto label_101758;
        case 0x10175cu: goto label_10175c;
        case 0x101760u: goto label_101760;
        case 0x101764u: goto label_101764;
        case 0x101768u: goto label_101768;
        case 0x10176cu: goto label_10176c;
        case 0x101770u: goto label_101770;
        case 0x101774u: goto label_101774;
        case 0x101778u: goto label_101778;
        case 0x10177cu: goto label_10177c;
        case 0x101780u: goto label_101780;
        case 0x101784u: goto label_101784;
        case 0x101788u: goto label_101788;
        case 0x10178cu: goto label_10178c;
        case 0x101790u: goto label_101790;
        case 0x101794u: goto label_101794;
        case 0x101798u: goto label_101798;
        case 0x10179cu: goto label_10179c;
        case 0x1017a0u: goto label_1017a0;
        case 0x1017a4u: goto label_1017a4;
        case 0x1017a8u: goto label_1017a8;
        case 0x1017acu: goto label_1017ac;
        case 0x1017b0u: goto label_1017b0;
        case 0x1017b4u: goto label_1017b4;
        case 0x1017b8u: goto label_1017b8;
        case 0x1017bcu: goto label_1017bc;
        case 0x1017c0u: goto label_1017c0;
        case 0x1017c4u: goto label_1017c4;
        case 0x1017c8u: goto label_1017c8;
        case 0x1017ccu: goto label_1017cc;
        case 0x1017d0u: goto label_1017d0;
        case 0x1017d4u: goto label_1017d4;
        default: break;
    }

    ctx->pc = 0x100b00u;

label_100b00:
    // 0x100b00: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x100b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_100b04:
    // 0x100b04: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x100b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_100b08:
    // 0x100b08: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x100b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_100b0c:
    // 0x100b0c: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x100b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
label_100b10:
    // 0x100b10: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x100b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
label_100b14:
    // 0x100b14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100b18:
    // 0x100b18: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x100b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
label_100b1c:
    // 0x100b1c: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x100b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
label_100b20:
    // 0x100b20: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x100b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
label_100b24:
    // 0x100b24: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x100b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
label_100b28:
    // 0x100b28: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x100b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
label_100b2c:
    // 0x100b2c: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x100b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
label_100b30:
    // 0x100b30: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x100b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
label_100b34:
    // 0x100b34: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x100b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
label_100b38:
    // 0x100b38: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x100b38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_100b3c:
    // 0x100b3c: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x100b3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_100b40:
    // 0x100b40: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x100b40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_100b44:
    // 0x100b44: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x100b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_100b48:
    // 0x100b48: 0x14400311  bnez        $v0, . + 4 + (0x311 << 2)
label_100b4c:
    if (ctx->pc == 0x100B4Cu) {
        ctx->pc = 0x100B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B48u;
        // 0x100b4c: 0xafa50144  sw          $a1, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B50u;
        goto label_100b50;
    }
    ctx->pc = 0x100B48u;
    {
        const bool branch_taken_0x100b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B48u;
        // 0x100b4c: 0xafa50144  sw          $a1, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b48) {
            ctx->pc = 0x101790u;
            goto label_101790;
        }
    }
    ctx->pc = 0x100B50u;
label_100b50:
    // 0x100b50: 0xc09eb04  jal         func_27AC10
label_100b54:
    if (ctx->pc == 0x100B54u) {
        ctx->pc = 0x100B58u;
        goto label_100b58;
    }
    ctx->pc = 0x100B50u;
    SET_GPR_U32(ctx, 31, 0x100B58u);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x100B50u, 0x100B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B58u;
label_100b58:
    // 0x100b58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_100b5c:
    // 0x100b5c: 0xc0d7394  jal         func_35CE50
label_100b60:
    if (ctx->pc == 0x100B60u) {
        ctx->pc = 0x100B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B5Cu;
        // 0x100b60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B64u;
        goto label_100b64;
    }
    ctx->pc = 0x100B5Cu;
    SET_GPR_U32(ctx, 31, 0x100B64u);
    ctx->pc = 0x100B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B5Cu;
    // 0x100b60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x100B5Cu, 0x100B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B64u;
label_100b64:
    // 0x100b64: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x100b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_100b68:
    // 0x100b68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_100b6c:
    // 0x100b6c: 0xc0d756c  jal         func_35D5B0
label_100b70:
    if (ctx->pc == 0x100B70u) {
        ctx->pc = 0x100B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B6Cu;
        // 0x100b70: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B74u;
        goto label_100b74;
    }
    ctx->pc = 0x100B6Cu;
    SET_GPR_U32(ctx, 31, 0x100B74u);
    ctx->pc = 0x100B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B6Cu;
    // 0x100b70: 0x24a5ee90  addiu       $a1, $a1, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x100B6Cu, 0x100B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B74u;
label_100b74:
    // 0x100b74: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x100b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_100b78:
    // 0x100b78: 0xc09dcc6  jal         func_277318
label_100b7c:
    if (ctx->pc == 0x100B7Cu) {
        ctx->pc = 0x100B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B78u;
        // 0x100b7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B80u;
        goto label_100b80;
    }
    ctx->pc = 0x100B78u;
    SET_GPR_U32(ctx, 31, 0x100B80u);
    ctx->pc = 0x100B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B78u;
    // 0x100b7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x100B78u, 0x100B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B80u;
label_100b80:
    // 0x100b80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100b84:
    // 0x100b84: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_100b88:
    if (ctx->pc == 0x100B88u) {
        ctx->pc = 0x100B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B84u;
        // 0x100b88: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B8Cu;
        goto label_100b8c;
    }
    ctx->pc = 0x100B84u;
    {
        const bool branch_taken_0x100b84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x100b84) {
            ctx->pc = 0x100B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100B84u;
            // 0x100b88: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100BA0u;
            goto label_100ba0;
        }
    }
    ctx->pc = 0x100B8Cu;
label_100b8c:
    // 0x100b8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_100b90:
    // 0x100b90: 0xc0d7412  jal         func_35D048
label_100b94:
    if (ctx->pc == 0x100B94u) {
        ctx->pc = 0x100B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B90u;
        // 0x100b94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B98u;
        goto label_100b98;
    }
    ctx->pc = 0x100B90u;
    SET_GPR_U32(ctx, 31, 0x100B98u);
    ctx->pc = 0x100B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B90u;
    // 0x100b94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x100B90u, 0x100B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B98u;
label_100b98:
    // 0x100b98: 0x100002fe  b           . + 4 + (0x2FE << 2)
label_100b9c:
    if (ctx->pc == 0x100B9Cu) {
        ctx->pc = 0x100B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B98u;
        // 0x100b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BA0u;
        goto label_100ba0;
    }
    ctx->pc = 0x100B98u;
    {
        const bool branch_taken_0x100b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B98u;
        // 0x100b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b98) {
            ctx->pc = 0x101794u;
            goto label_101794;
        }
    }
    ctx->pc = 0x100BA0u;
label_100ba0:
    // 0x100ba0: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x100ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_100ba4:
    // 0x100ba4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x100ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_100ba8:
    // 0x100ba8: 0x40f809  jalr        $v0
label_100bac:
    if (ctx->pc == 0x100BACu) {
        ctx->pc = 0x100BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BA8u;
        // 0x100bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BB0u;
        goto label_100bb0;
    }
    ctx->pc = 0x100BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100BB0u);
        ctx->pc = 0x100BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BA8u;
        // 0x100bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BA8u, 0x100BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100BB0u;
label_100bb0:
    // 0x100bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100bb4:
    // 0x100bb4: 0xc0f52a8  jal         func_3D4AA0
label_100bb8:
    if (ctx->pc == 0x100BB8u) {
        ctx->pc = 0x100BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BB4u;
        // 0x100bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BBCu;
        goto label_100bbc;
    }
    ctx->pc = 0x100BB4u;
    SET_GPR_U32(ctx, 31, 0x100BBCu);
    ctx->pc = 0x100BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BB4u;
    // 0x100bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x100BB4u, 0x100BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BBCu;
label_100bbc:
    // 0x100bbc: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x100bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_100bc0:
    // 0x100bc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x100bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100bc4:
    // 0x100bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100bc8:
    // 0x100bc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100bcc:
    // 0x100bcc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_100bd0:
    // 0x100bd0: 0x40f809  jalr        $v0
label_100bd4:
    if (ctx->pc == 0x100BD4u) {
        ctx->pc = 0x100BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD0u;
        // 0x100bd4: 0x8fa50148  lw          $a1, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BD8u;
        goto label_100bd8;
    }
    ctx->pc = 0x100BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100BD8u);
        ctx->pc = 0x100BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD0u;
        // 0x100bd4: 0x8fa50148  lw          $a1, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BD0u, 0x100BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100BD8u;
label_100bd8:
    // 0x100bd8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_100bdc:
    // 0x100bdc: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_100be0:
    // 0x100be0: 0x60f809  jalr        $v1
label_100be4:
    if (ctx->pc == 0x100BE4u) {
        ctx->pc = 0x100BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE0u;
        // 0x100be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BE8u;
        goto label_100be8;
    }
    ctx->pc = 0x100BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x100BE8u);
        ctx->pc = 0x100BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE0u;
        // 0x100be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BE0u, 0x100BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100BE8u;
label_100be8:
    // 0x100be8: 0x8fb30148  lw          $s3, 0x148($sp)
    ctx->pc = 0x100be8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_100bec:
    // 0x100bec: 0x3c024149  lui         $v0, 0x4149
    ctx->pc = 0x100becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
label_100bf0:
    // 0x100bf0: 0x34424e47  ori         $v0, $v0, 0x4E47
    ctx->pc = 0x100bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20039);
label_100bf4:
    // 0x100bf4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x100bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100bf8:
    // 0x100bf8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_100bfc:
    if (ctx->pc == 0x100BFCu) {
        ctx->pc = 0x100BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BF8u;
        // 0x100bfc: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C00u;
        goto label_100c00;
    }
    ctx->pc = 0x100BF8u;
    {
        const bool branch_taken_0x100bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x100bf8) {
            ctx->pc = 0x100BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100BF8u;
            // 0x100bfc: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100C10u;
            goto label_100c10;
        }
    }
    ctx->pc = 0x100C00u;
label_100c00:
    // 0x100c00: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x100c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_100c04:
    // 0x100c04: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_100c08:
    // 0x100c08: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x100c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_100c0c:
    // 0x100c0c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x100c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100c10:
    // 0x100c10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x100c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_100c14:
    // 0x100c14: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x100c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100c18:
    // 0x100c18: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_100c1c:
    if (ctx->pc == 0x100C1Cu) {
        ctx->pc = 0x100C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C18u;
        // 0x100c1c: 0xac520700  sw          $s2, 0x700($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1792), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C20u;
        goto label_100c20;
    }
    ctx->pc = 0x100C18u;
    {
        const bool branch_taken_0x100c18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x100C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C18u;
        // 0x100c1c: 0xac520700  sw          $s2, 0x700($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1792), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c18) {
            ctx->pc = 0x100C34u;
            goto label_100c34;
        }
    }
    ctx->pc = 0x100C20u;
label_100c20:
    // 0x100c20: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x100c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_100c24:
    // 0x100c24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x100c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_100c28:
    // 0x100c28: 0xac400708  sw          $zero, 0x708($v0)
    ctx->pc = 0x100c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1800), GPR_U32(ctx, 0));
label_100c2c:
    // 0x100c2c: 0x100002d6  b           . + 4 + (0x2D6 << 2)
label_100c30:
    if (ctx->pc == 0x100C30u) {
        ctx->pc = 0x100C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C2Cu;
        // 0x100c30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C34u;
        goto label_100c34;
    }
    ctx->pc = 0x100C2Cu;
    {
        const bool branch_taken_0x100c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C2Cu;
        // 0x100c30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c2c) {
            ctx->pc = 0x101788u;
            goto label_101788;
        }
    }
    ctx->pc = 0x100C34u;
label_100c34:
    // 0x100c34: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x100c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_100c38:
    // 0x100c38: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x100c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_100c3c:
    // 0x100c3c: 0xafa30154  sw          $v1, 0x154($sp)
    ctx->pc = 0x100c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 3));
label_100c40:
    // 0x100c40: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x100c40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
label_100c44:
    // 0x100c44: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x100c44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
label_100c48:
    // 0x100c48: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x100c48u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
label_100c4c:
    // 0x100c4c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_100c50:
    if (ctx->pc == 0x100C50u) {
        ctx->pc = 0x100C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C4Cu;
        // 0x100c50: 0x3c1e0044  lui         $fp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C54u;
        goto label_100c54;
    }
    ctx->pc = 0x100C4Cu;
    {
        const bool branch_taken_0x100c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C4Cu;
        // 0x100c50: 0x3c1e0044  lui         $fp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c4c) {
            ctx->pc = 0x100C9Cu;
            goto label_100c9c;
        }
    }
    ctx->pc = 0x100C54u;
label_100c54:
    // 0x100c54: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x100c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_100c58:
    // 0x100c58: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x100c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_100c5c:
    // 0x100c5c: 0xc0f52a8  jal         func_3D4AA0
label_100c60:
    if (ctx->pc == 0x100C60u) {
        ctx->pc = 0x100C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C5Cu;
        // 0x100c60: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C64u;
        goto label_100c64;
    }
    ctx->pc = 0x100C5Cu;
    SET_GPR_U32(ctx, 31, 0x100C64u);
    ctx->pc = 0x100C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C5Cu;
    // 0x100c60: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x100C5Cu, 0x100C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C64u;
label_100c64:
    // 0x100c64: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x100c64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_100c68:
    // 0x100c68: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x100c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_100c6c:
    // 0x100c6c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_100c70:
    if (ctx->pc == 0x100C70u) {
        ctx->pc = 0x100C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C6Cu;
        // 0x100c70: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C74u;
        goto label_100c74;
    }
    ctx->pc = 0x100C6Cu;
    {
        const bool branch_taken_0x100c6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C6Cu;
        // 0x100c70: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c6c) {
            ctx->pc = 0x100C90u;
            goto label_100c90;
        }
    }
    ctx->pc = 0x100C74u;
label_100c74:
    // 0x100c74: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x100c74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_100c78:
    // 0x100c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100c7c:
    // 0x100c7c: 0xc041434  jal         func_1050D0
label_100c80:
    if (ctx->pc == 0x100C80u) {
        ctx->pc = 0x100C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C7Cu;
        // 0x100c80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C84u;
        goto label_100c84;
    }
    ctx->pc = 0x100C7Cu;
    SET_GPR_U32(ctx, 31, 0x100C84u);
    ctx->pc = 0x100C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C7Cu;
    // 0x100c80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1050D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1050D0u, 0x100C7Cu, 0x100C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C84u;
label_100c84:
    // 0x100c84: 0x0  nop
    ctx->pc = 0x100c84u;
    // NOP
label_100c88:
    // 0x100c88: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
label_100c8c:
    if (ctx->pc == 0x100C8Cu) {
        ctx->pc = 0x100C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C88u;
        // 0x100c8c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C90u;
        goto label_100c90;
    }
    ctx->pc = 0x100C88u;
    {
        const bool branch_taken_0x100c88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x100C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C88u;
        // 0x100c8c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c88) {
            ctx->pc = 0x100C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100c78;
        }
    }
    ctx->pc = 0x100C90u;
label_100c90:
    // 0x100c90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x100c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_100c94:
    // 0x100c94: 0x24420708  addiu       $v0, $v0, 0x708
    ctx->pc = 0x100c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1800));
label_100c98:
    // 0x100c98: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x100c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_100c9c:
    // 0x100c9c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x100c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_100ca0:
    // 0x100ca0: 0x26a5a4a0  addiu       $a1, $s5, -0x5B60
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943904));
label_100ca4:
    // 0x100ca4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x100ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_100ca8:
    // 0x100ca8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x100ca8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100cac:
    // 0x100cac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x100cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_100cb0:
    // 0x100cb0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x100cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_100cb4:
    // 0x100cb4: 0xc0d7424  jal         func_35D090
label_100cb8:
    if (ctx->pc == 0x100CB8u) {
        ctx->pc = 0x100CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CB4u;
        // 0x100cb8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100CBCu;
        goto label_100cbc;
    }
    ctx->pc = 0x100CB4u;
    SET_GPR_U32(ctx, 31, 0x100CBCu);
    ctx->pc = 0x100CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CB4u;
    // 0x100cb8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x100CB4u, 0x100CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CBCu;
label_100cbc:
    // 0x100cbc: 0xc0f52a8  jal         func_3D4AA0
label_100cc0:
    if (ctx->pc == 0x100CC0u) {
        ctx->pc = 0x100CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CBCu;
        // 0x100cc0: 0x240404b0  addiu       $a0, $zero, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100CC4u;
        goto label_100cc4;
    }
    ctx->pc = 0x100CBCu;
    SET_GPR_U32(ctx, 31, 0x100CC4u);
    ctx->pc = 0x100CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CBCu;
    // 0x100cc0: 0x240404b0  addiu       $a0, $zero, 0x4B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x100CBCu, 0x100CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CC4u;
label_100cc4:
    // 0x100cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100cc8:
    // 0x100cc8: 0xaec20728  sw          $v0, 0x728($s6)
    ctx->pc = 0x100cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1832), GPR_U32(ctx, 2));
label_100ccc:
    // 0x100ccc: 0xc0c580c  jal         func_316030
label_100cd0:
    if (ctx->pc == 0x100CD0u) {
        ctx->pc = 0x100CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CCCu;
        // 0x100cd0: 0xa2e0072c  sb          $zero, 0x72C($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 1836), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100CD4u;
        goto label_100cd4;
    }
    ctx->pc = 0x100CCCu;
    SET_GPR_U32(ctx, 31, 0x100CD4u);
    ctx->pc = 0x100CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CCCu;
    // 0x100cd0: 0xa2e0072c  sb          $zero, 0x72C($s7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 23), 1836), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x100CCCu, 0x100CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CD4u;
label_100cd4:
    // 0x100cd4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x100cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_100cd8:
    // 0x100cd8: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x100cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_100cdc:
    // 0x100cdc: 0xc7d4a4cc  lwc1        $f20, -0x5B34($fp)
    ctx->pc = 0x100cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294943948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_100ce0:
    // 0x100ce0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x100ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_100ce4:
    // 0x100ce4: 0xc475a4d0  lwc1        $f21, -0x5B30($v1)
    ctx->pc = 0x100ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294943952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_100ce8:
    // 0x100ce8: 0x8c820700  lw          $v0, 0x700($a0)
    ctx->pc = 0x100ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1792)));
label_100cec:
    // 0x100cec: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x100cecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
label_100cf0:
    // 0x100cf0: 0x10400111  beqz        $v0, . + 4 + (0x111 << 2)
label_100cf4:
    if (ctx->pc == 0x100CF4u) {
        ctx->pc = 0x100CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CF0u;
        // 0x100cf4: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x100CF8u;
        goto label_100cf8;
    }
    ctx->pc = 0x100CF0u;
    {
        const bool branch_taken_0x100cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CF0u;
        // 0x100cf4: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cf0) {
            ctx->pc = 0x101138u;
            goto label_101138;
        }
    }
    ctx->pc = 0x100CF8u;
label_100cf8:
    // 0x100cf8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x100cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_100cfc:
    // 0x100cfc: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x100cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_100d00:
    // 0x100d00: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_100d04:
    // 0x100d04: 0x0  nop
    ctx->pc = 0x100d04u;
    // NOP
label_100d08:
    // 0x100d08: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x100d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_100d0c:
    // 0x100d0c: 0x2465a4c8  addiu       $a1, $v1, -0x5B38
    ctx->pc = 0x100d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943944));
label_100d10:
    // 0x100d10: 0xc0d7468  jal         func_35D1A0
label_100d14:
    if (ctx->pc == 0x100D14u) {
        ctx->pc = 0x100D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D10u;
        // 0x100d14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D18u;
        goto label_100d18;
    }
    ctx->pc = 0x100D10u;
    SET_GPR_U32(ctx, 31, 0x100D18u);
    ctx->pc = 0x100D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D10u;
    // 0x100d14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x100D10u, 0x100D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D18u;
label_100d18:
    // 0x100d18: 0x14b180  sll         $s6, $s4, 6
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_100d1c:
    // 0x100d1c: 0x26840001  addiu       $a0, $s4, 0x1
    ctx->pc = 0x100d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_100d20:
    // 0x100d20: 0x10000007  b           . + 4 + (0x7 << 2)
label_100d24:
    if (ctx->pc == 0x100D24u) {
        ctx->pc = 0x100D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D20u;
        // 0x100d24: 0xafa4015c  sw          $a0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D28u;
        goto label_100d28;
    }
    ctx->pc = 0x100D20u;
    {
        const bool branch_taken_0x100d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D20u;
        // 0x100d24: 0xafa4015c  sw          $a0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d20) {
            ctx->pc = 0x100D40u;
            goto label_100d40;
        }
    }
    ctx->pc = 0x100D28u;
label_100d28:
    // 0x100d28: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_100d2c:
    // 0x100d2c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_100d30:
    // 0x100d30: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x100d30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
label_100d34:
    // 0x100d34: 0xc0d755e  jal         func_35D578
label_100d38:
    if (ctx->pc == 0x100D38u) {
        ctx->pc = 0x100D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D34u;
        // 0x100d38: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D3Cu;
        goto label_100d3c;
    }
    ctx->pc = 0x100D34u;
    SET_GPR_U32(ctx, 31, 0x100D3Cu);
    ctx->pc = 0x100D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D34u;
    // 0x100d38: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x100D34u, 0x100D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D3Cu;
label_100d3c:
    // 0x100d3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x100d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_100d40:
    // 0x100d40: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x100d40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_100d44:
    // 0x100d44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_100d48:
    if (ctx->pc == 0x100D48u) {
        ctx->pc = 0x100D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D44u;
        // 0x100d48: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D4Cu;
        goto label_100d4c;
    }
    ctx->pc = 0x100D44u;
    {
        const bool branch_taken_0x100d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D44u;
        // 0x100d48: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d44) {
            ctx->pc = 0x100D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100d28;
        }
    }
    ctx->pc = 0x100D4Cu;
label_100d4c:
    // 0x100d4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x100d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_100d50:
    // 0x100d50: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x100d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_100d54:
    // 0x100d54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_100d58:
    if (ctx->pc == 0x100D58u) {
        ctx->pc = 0x100D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D54u;
        // 0x100d58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D5Cu;
        goto label_100d5c;
    }
    ctx->pc = 0x100D54u;
    {
        const bool branch_taken_0x100d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D54u;
        // 0x100d58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d54) {
            ctx->pc = 0x100D64u;
            goto label_100d64;
        }
    }
    ctx->pc = 0x100D5Cu;
label_100d5c:
    // 0x100d5c: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x100d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100d60:
    // 0x100d60: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x100d60u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100d64:
    // 0x100d64: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x100d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_100d68:
    // 0x100d68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_100d6c:
    // 0x100d6c: 0x8c620708  lw          $v0, 0x708($v1)
    ctx->pc = 0x100d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1800)));
label_100d70:
    // 0x100d70: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x100d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_100d74:
    // 0x100d74: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x100d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_100d78:
    // 0x100d78: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x100d78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100d7c:
    // 0x100d7c: 0xc0f6a96  jal         func_3DAA58
label_100d80:
    if (ctx->pc == 0x100D80u) {
        ctx->pc = 0x100D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D7Cu;
        // 0x100d80: 0xa0430020  sb          $v1, 0x20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D84u;
        goto label_100d84;
    }
    ctx->pc = 0x100D7Cu;
    SET_GPR_U32(ctx, 31, 0x100D84u);
    ctx->pc = 0x100D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D7Cu;
    // 0x100d80: 0xa0430020  sb          $v1, 0x20($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x100D7Cu, 0x100D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D84u;
label_100d84:
    // 0x100d84: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x100d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_100d88:
    // 0x100d88: 0xc0b1ac6  jal         func_2C6B18
label_100d8c:
    if (ctx->pc == 0x100D8Cu) {
        ctx->pc = 0x100D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D88u;
        // 0x100d8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D90u;
        goto label_100d90;
    }
    ctx->pc = 0x100D88u;
    SET_GPR_U32(ctx, 31, 0x100D90u);
    ctx->pc = 0x100D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100D88u;
    // 0x100d8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B18u, 0x100D88u, 0x100D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D90u;
label_100d90:
    // 0x100d90: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x100d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_100d94:
    // 0x100d94: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
label_100d98:
    if (ctx->pc == 0x100D98u) {
        ctx->pc = 0x100D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D94u;
        // 0x100d98: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100D9Cu;
        goto label_100d9c;
    }
    ctx->pc = 0x100D94u;
    {
        const bool branch_taken_0x100d94 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x100D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100D94u;
        // 0x100d98: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d94) {
            ctx->pc = 0x100DB0u;
            goto label_100db0;
        }
    }
    ctx->pc = 0x100D9Cu;
label_100d9c:
    // 0x100d9c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x100d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_100da0:
    // 0x100da0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x100da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_100da4:
    // 0x100da4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x100da4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_100da8:
    // 0x100da8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x100da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_100dac:
    // 0x100dac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x100dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_100db0:
    // 0x100db0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x100db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_100db4:
    // 0x100db4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x100db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_100db8:
    // 0x100db8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x100db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_100dbc:
    // 0x100dbc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x100dbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_100dc0:
    // 0x100dc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x100dc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_100dc4:
    // 0x100dc4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x100dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_100dc8:
    // 0x100dc8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x100dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_100dcc:
    // 0x100dcc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x100dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_100dd0:
    // 0x100dd0: 0x8c820708  lw          $v0, 0x708($a0)
    ctx->pc = 0x100dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1800)));
label_100dd4:
    // 0x100dd4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x100dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_100dd8:
    // 0x100dd8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x100dd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_100ddc:
    // 0x100ddc: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x100ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_100de0:
    // 0x100de0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x100de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_100de4:
    // 0x100de4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x100de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_100de8:
    // 0x100de8: 0x0  nop
    ctx->pc = 0x100de8u;
    // NOP
label_100dec:
    // 0x100dec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_100df0:
    if (ctx->pc == 0x100DF0u) {
        ctx->pc = 0x100DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DECu;
        // 0x100df0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x100DF4u;
        goto label_100df4;
    }
    ctx->pc = 0x100DECu;
    {
        const bool branch_taken_0x100dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x100dec) {
            ctx->pc = 0x100DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100DECu;
            // 0x100df0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x100DF4u;
            goto label_100df4;
        }
    }
    ctx->pc = 0x100DF4u;
label_100df4:
    // 0x100df4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x100df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_100df8:
    // 0x100df8: 0x0  nop
    ctx->pc = 0x100df8u;
    // NOP
label_100dfc:
    // 0x100dfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_100e00:
    if (ctx->pc == 0x100E00u) {
        ctx->pc = 0x100E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100DFCu;
        // 0x100e00: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E04u;
        goto label_100e04;
    }
    ctx->pc = 0x100DFCu;
    {
        const bool branch_taken_0x100dfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x100dfc) {
            ctx->pc = 0x100E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100DFCu;
            // 0x100e00: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x100E04u;
            goto label_100e04;
        }
    }
    ctx->pc = 0x100E04u;
label_100e04:
    // 0x100e04: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x100e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_100e08:
    // 0x100e08: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x100e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_100e0c:
    // 0x100e0c: 0x0  nop
    ctx->pc = 0x100e0cu;
    // NOP
label_100e10:
    // 0x100e10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_100e14:
    if (ctx->pc == 0x100E14u) {
        ctx->pc = 0x100E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E10u;
        // 0x100e14: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E18u;
        goto label_100e18;
    }
    ctx->pc = 0x100E10u;
    {
        const bool branch_taken_0x100e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x100e10) {
            ctx->pc = 0x100E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100E10u;
            // 0x100e14: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x100E18u;
            goto label_100e18;
        }
    }
    ctx->pc = 0x100E18u;
label_100e18:
    // 0x100e18: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x100e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_100e1c:
    // 0x100e1c: 0x0  nop
    ctx->pc = 0x100e1cu;
    // NOP
label_100e20:
    // 0x100e20: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_100e24:
    if (ctx->pc == 0x100E24u) {
        ctx->pc = 0x100E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E20u;
        // 0x100e24: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E28u;
        goto label_100e28;
    }
    ctx->pc = 0x100E20u;
    {
        const bool branch_taken_0x100e20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x100e20) {
            ctx->pc = 0x100E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100E20u;
            // 0x100e24: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x100E28u;
            goto label_100e28;
        }
    }
    ctx->pc = 0x100E28u;
label_100e28:
    // 0x100e28: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x100e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100e2c:
    // 0x100e2c: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x100e2cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_100e30:
    // 0x100e30: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_100e34:
    if (ctx->pc == 0x100E34u) {
        ctx->pc = 0x100E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E30u;
        // 0x100e34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E38u;
        goto label_100e38;
    }
    ctx->pc = 0x100E30u;
    {
        const bool branch_taken_0x100e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E30u;
        // 0x100e34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e30) {
            ctx->pc = 0x100EE8u;
            goto label_100ee8;
        }
    }
    ctx->pc = 0x100E38u;
label_100e38:
    // 0x100e38: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x100e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_100e3c:
    // 0x100e3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x100e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_100e40:
    // 0x100e40: 0x2445a4c8  addiu       $a1, $v0, -0x5B38
    ctx->pc = 0x100e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943944));
label_100e44:
    // 0x100e44: 0xc0d7468  jal         func_35D1A0
label_100e48:
    if (ctx->pc == 0x100E48u) {
        ctx->pc = 0x100E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E44u;
        // 0x100e48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E4Cu;
        goto label_100e4c;
    }
    ctx->pc = 0x100E44u;
    SET_GPR_U32(ctx, 31, 0x100E4Cu);
    ctx->pc = 0x100E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E44u;
    // 0x100e48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x100E44u, 0x100E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E4Cu;
label_100e4c:
    // 0x100e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x100e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100e50:
    // 0x100e50: 0xc0d755e  jal         func_35D578
label_100e54:
    if (ctx->pc == 0x100E54u) {
        ctx->pc = 0x100E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E50u;
        // 0x100e54: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E58u;
        goto label_100e58;
    }
    ctx->pc = 0x100E50u;
    SET_GPR_U32(ctx, 31, 0x100E58u);
    ctx->pc = 0x100E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E50u;
    // 0x100e54: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x100E50u, 0x100E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E58u;
label_100e58:
    // 0x100e58: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x100e58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_100e5c:
    // 0x100e5c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x100e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_100e60:
    // 0x100e60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_100e64:
    if (ctx->pc == 0x100E64u) {
        ctx->pc = 0x100E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E60u;
        // 0x100e64: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E68u;
        goto label_100e68;
    }
    ctx->pc = 0x100E60u;
    {
        const bool branch_taken_0x100e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E60u;
        // 0x100e64: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e60) {
            ctx->pc = 0x100E8Cu;
            goto label_100e8c;
        }
    }
    ctx->pc = 0x100E68u;
label_100e68:
    // 0x100e68: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x100e68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_100e6c:
    // 0x100e6c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x100e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_100e70:
    // 0x100e70: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x100e70u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
label_100e74:
    // 0x100e74: 0xc0d755e  jal         func_35D578
label_100e78:
    if (ctx->pc == 0x100E78u) {
        ctx->pc = 0x100E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E74u;
        // 0x100e78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E7Cu;
        goto label_100e7c;
    }
    ctx->pc = 0x100E74u;
    SET_GPR_U32(ctx, 31, 0x100E7Cu);
    ctx->pc = 0x100E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100E74u;
    // 0x100e78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x100E74u, 0x100E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E7Cu;
label_100e7c:
    // 0x100e7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_100e80:
    // 0x100e80: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x100e80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_100e84:
    // 0x100e84: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_100e88:
    if (ctx->pc == 0x100E88u) {
        ctx->pc = 0x100E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E84u;
        // 0x100e88: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E8Cu;
        goto label_100e8c;
    }
    ctx->pc = 0x100E84u;
    {
        const bool branch_taken_0x100e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E84u;
        // 0x100e88: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e84) {
            ctx->pc = 0x100E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100e68;
        }
    }
    ctx->pc = 0x100E8Cu;
label_100e8c:
    // 0x100e8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_100e90:
    // 0x100e90: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x100e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_100e94:
    // 0x100e94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_100e98:
    if (ctx->pc == 0x100E98u) {
        ctx->pc = 0x100E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E94u;
        // 0x100e98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100E9Cu;
        goto label_100e9c;
    }
    ctx->pc = 0x100E94u;
    {
        const bool branch_taken_0x100e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E94u;
        // 0x100e98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e94) {
            ctx->pc = 0x100EA4u;
            goto label_100ea4;
        }
    }
    ctx->pc = 0x100E9Cu;
label_100e9c:
    // 0x100e9c: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x100e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100ea0:
    // 0x100ea0: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_100ea4:
    // 0x100ea4: 0xc0f5240  jal         func_3D4900
label_100ea8:
    if (ctx->pc == 0x100EA8u) {
        ctx->pc = 0x100EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EA4u;
        // 0x100ea8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EACu;
        goto label_100eac;
    }
    ctx->pc = 0x100EA4u;
    SET_GPR_U32(ctx, 31, 0x100EACu);
    ctx->pc = 0x100EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EA4u;
    // 0x100ea8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x100EA4u, 0x100EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EACu;
label_100eac:
    // 0x100eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100eb0:
    // 0x100eb0: 0xc0d737c  jal         func_35CDF0
label_100eb4:
    if (ctx->pc == 0x100EB4u) {
        ctx->pc = 0x100EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EB0u;
        // 0x100eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EB8u;
        goto label_100eb8;
    }
    ctx->pc = 0x100EB0u;
    SET_GPR_U32(ctx, 31, 0x100EB8u);
    ctx->pc = 0x100EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EB0u;
    // 0x100eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x100EB0u, 0x100EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EB8u;
label_100eb8:
    // 0x100eb8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_100ebc:
    // 0x100ebc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x100ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_100ec0:
    // 0x100ec0: 0x8c830708  lw          $v1, 0x708($a0)
    ctx->pc = 0x100ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1800)));
label_100ec4:
    // 0x100ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100ec8:
    // 0x100ec8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x100ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_100ecc:
    // 0x100ecc: 0xc0d745c  jal         func_35D170
label_100ed0:
    if (ctx->pc == 0x100ED0u) {
        ctx->pc = 0x100ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ECCu;
        // 0x100ed0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100ED4u;
        goto label_100ed4;
    }
    ctx->pc = 0x100ECCu;
    SET_GPR_U32(ctx, 31, 0x100ED4u);
    ctx->pc = 0x100ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100ECCu;
    // 0x100ed0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x100ECCu, 0x100ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100ED4u;
label_100ed4:
    // 0x100ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x100ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100ed8:
    // 0x100ed8: 0xc0f6398  jal         func_3D8E60
label_100edc:
    if (ctx->pc == 0x100EDCu) {
        ctx->pc = 0x100EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ED8u;
        // 0x100edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EE0u;
        goto label_100ee0;
    }
    ctx->pc = 0x100ED8u;
    SET_GPR_U32(ctx, 31, 0x100EE0u);
    ctx->pc = 0x100EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100ED8u;
    // 0x100edc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8E60u, 0x100ED8u, 0x100EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EE0u;
label_100ee0:
    // 0x100ee0: 0x10000003  b           . + 4 + (0x3 << 2)
label_100ee4:
    if (ctx->pc == 0x100EE4u) {
        ctx->pc = 0x100EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EE0u;
        // 0x100ee4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100EE8u;
        goto label_100ee8;
    }
    ctx->pc = 0x100EE0u;
    {
        const bool branch_taken_0x100ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EE0u;
        // 0x100ee4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ee0) {
            ctx->pc = 0x100EF0u;
            goto label_100ef0;
        }
    }
    ctx->pc = 0x100EE8u;
label_100ee8:
    // 0x100ee8: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x100ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_100eec:
    // 0x100eec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x100eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_100ef0:
    // 0x100ef0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x100ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100ef4:
    // 0x100ef4: 0x8c440708  lw          $a0, 0x708($v0)
    ctx->pc = 0x100ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1800)));
label_100ef8:
    // 0x100ef8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x100ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100efc:
    // 0x100efc: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x100efcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100f00:
    // 0x100f00: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x100f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_100f04:
    // 0x100f04: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x100f04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100f08:
    // 0x100f08: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x100f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_100f0c:
    // 0x100f0c: 0xc04001c  jal         func_100070
label_100f10:
    if (ctx->pc == 0x100F10u) {
        ctx->pc = 0x100F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F0Cu;
        // 0x100f10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F14u;
        goto label_100f14;
    }
    ctx->pc = 0x100F0Cu;
    SET_GPR_U32(ctx, 31, 0x100F14u);
    ctx->pc = 0x100F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F0Cu;
    // 0x100f10: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100070u, 0x100F0Cu, 0x100F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F14u;
label_100f14:
    // 0x100f14: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
label_100f18:
    if (ctx->pc == 0x100F18u) {
        ctx->pc = 0x100F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F14u;
        // 0x100f18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F1Cu;
        goto label_100f1c;
    }
    ctx->pc = 0x100F14u;
    {
        const bool branch_taken_0x100f14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F14u;
        // 0x100f18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f14) {
            ctx->pc = 0x100F48u;
            goto label_100f48;
        }
    }
    ctx->pc = 0x100F1Cu;
label_100f1c:
    // 0x100f1c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x100f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_100f20:
    // 0x100f20: 0x8ca20708  lw          $v0, 0x708($a1)
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1800)));
label_100f24:
    // 0x100f24: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x100f24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100f28:
    // 0x100f28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x100f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_100f2c:
    // 0x100f2c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100f30:
    // 0x100f30: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x100f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_100f34:
    // 0x100f34: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x100f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_100f38:
    // 0x100f38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x100f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_100f3c:
    // 0x100f3c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x100f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_100f40:
    // 0x100f40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_100f44:
    if (ctx->pc == 0x100F44u) {
        ctx->pc = 0x100F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F40u;
        // 0x100f44: 0xa0700000  sb          $s0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F48u;
        goto label_100f48;
    }
    ctx->pc = 0x100F40u;
    {
        const bool branch_taken_0x100f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F40u;
        // 0x100f44: 0xa0700000  sb          $s0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f40) {
            ctx->pc = 0x100F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100f20;
        }
    }
    ctx->pc = 0x100F48u;
label_100f48:
    // 0x100f48: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x100f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_100f4c:
    // 0x100f4c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x100f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100f50:
    // 0x100f50: 0x8c620708  lw          $v0, 0x708($v1)
    ctx->pc = 0x100f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1800)));
label_100f54:
    // 0x100f54: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x100f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_100f58:
    // 0x100f58: 0xa0440022  sb          $a0, 0x22($v0)
    ctx->pc = 0x100f58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 4));
label_100f5c:
    // 0x100f5c: 0x8c630708  lw          $v1, 0x708($v1)
    ctx->pc = 0x100f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1800)));
label_100f60:
    // 0x100f60: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x100f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_100f64:
    // 0x100f64: 0x90850022  lbu         $a1, 0x22($a0)
    ctx->pc = 0x100f64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
label_100f68:
    // 0x100f68: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_100f6c:
    if (ctx->pc == 0x100F6Cu) {
        ctx->pc = 0x100F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F68u;
        // 0x100f6c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F70u;
        goto label_100f70;
    }
    ctx->pc = 0x100F68u;
    {
        const bool branch_taken_0x100f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F68u;
        // 0x100f6c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f68) {
            ctx->pc = 0x100F84u;
            goto label_100f84;
        }
    }
    ctx->pc = 0x100F70u;
label_100f70:
    // 0x100f70: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x100f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_100f74:
    // 0x100f74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_100f78:
    if (ctx->pc == 0x100F78u) {
        ctx->pc = 0x100F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F74u;
        // 0x100f78: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F7Cu;
        goto label_100f7c;
    }
    ctx->pc = 0x100F74u;
    {
        const bool branch_taken_0x100f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F74u;
        // 0x100f78: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f74) {
            ctx->pc = 0x100F88u;
            goto label_100f88;
        }
    }
    ctx->pc = 0x100F7Cu;
label_100f7c:
    // 0x100f7c: 0xc041a2e  jal         func_1068B8
label_100f80:
    if (ctx->pc == 0x100F80u) {
        ctx->pc = 0x100F84u;
        goto label_100f84;
    }
    ctx->pc = 0x100F7Cu;
    SET_GPR_U32(ctx, 31, 0x100F84u);
    ctx->pc = 0x1068B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1068B8u, 0x100F7Cu, 0x100F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F84u;
label_100f84:
    // 0x100f84: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x100f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_100f88:
    // 0x100f88: 0x8c620708  lw          $v0, 0x708($v1)
    ctx->pc = 0x100f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1800)));
label_100f8c:
    // 0x100f8c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x100f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_100f90:
    // 0x100f90: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x100f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_100f94:
    // 0x100f94: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
label_100f98:
    if (ctx->pc == 0x100F98u) {
        ctx->pc = 0x100F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F94u;
        // 0x100f98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100F9Cu;
        goto label_100f9c;
    }
    ctx->pc = 0x100F94u;
    {
        const bool branch_taken_0x100f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F94u;
        // 0x100f98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f94) {
            ctx->pc = 0x1010FCu;
            goto label_1010fc;
        }
    }
    ctx->pc = 0x100F9Cu;
label_100f9c:
    // 0x100f9c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x100f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100fa0:
    // 0x100fa0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x100fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_100fa4:
    // 0x100fa4: 0x8c640708  lw          $a0, 0x708($v1)
    ctx->pc = 0x100fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1800)));
label_100fa8:
    // 0x100fa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x100fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100fac:
    // 0x100fac: 0x2a180  sll         $s4, $v0, 6
    ctx->pc = 0x100facu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_100fb0:
    // 0x100fb0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x100fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_100fb4:
    // 0x100fb4: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_100fb8:
    // 0x100fb8: 0xc041a52  jal         func_106948
label_100fbc:
    if (ctx->pc == 0x100FBCu) {
        ctx->pc = 0x100FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FB8u;
        // 0x100fbc: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100FC0u;
        goto label_100fc0;
    }
    ctx->pc = 0x100FB8u;
    SET_GPR_U32(ctx, 31, 0x100FC0u);
    ctx->pc = 0x100FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FB8u;
    // 0x100fbc: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106948u, 0x100FB8u, 0x100FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FC0u;
label_100fc0:
    // 0x100fc0: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x100fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_100fc4:
    // 0x100fc4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x100fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_100fc8:
    // 0x100fc8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_100fcc:
    if (ctx->pc == 0x100FCCu) {
        ctx->pc = 0x100FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FC8u;
        // 0x100fcc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100FD0u;
        goto label_100fd0;
    }
    ctx->pc = 0x100FC8u;
    {
        const bool branch_taken_0x100fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FC8u;
        // 0x100fcc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fc8) {
            ctx->pc = 0x100FF0u;
            goto label_100ff0;
        }
    }
    ctx->pc = 0x100FD0u;
label_100fd0:
    // 0x100fd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x100fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_100fd4:
    // 0x100fd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x100fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_100fd8:
    // 0x100fd8: 0x8c440708  lw          $a0, 0x708($v0)
    ctx->pc = 0x100fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1800)));
label_100fdc:
    // 0x100fdc: 0xc04147a  jal         func_1051E8
label_100fe0:
    if (ctx->pc == 0x100FE0u) {
        ctx->pc = 0x100FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FDCu;
        // 0x100fe0: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100FE4u;
        goto label_100fe4;
    }
    ctx->pc = 0x100FDCu;
    SET_GPR_U32(ctx, 31, 0x100FE4u);
    ctx->pc = 0x100FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FDCu;
    // 0x100fe0: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x100FDCu, 0x100FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FE4u;
label_100fe4:
    // 0x100fe4: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x100fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_100fe8:
    // 0x100fe8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x100fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_100fec:
    // 0x100fec: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x100fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
label_100ff0:
    // 0x100ff0: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
label_100ff4:
    // 0x100ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x100ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_100ff8:
    // 0x100ff8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_100ffc:
    if (ctx->pc == 0x100FFCu) {
        ctx->pc = 0x100FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FF8u;
        // 0x100ffc: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101000u;
        goto label_101000;
    }
    ctx->pc = 0x100FF8u;
    {
        const bool branch_taken_0x100ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FF8u;
        // 0x100ffc: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ff8) {
            ctx->pc = 0x10101Cu;
            goto label_10101c;
        }
    }
    ctx->pc = 0x101000u;
label_101000:
    // 0x101000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101004:
    // 0x101004: 0x8c640708  lw          $a0, 0x708($v1)
    ctx->pc = 0x101004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1800)));
label_101008:
    // 0x101008: 0xc04147a  jal         func_1051E8
label_10100c:
    if (ctx->pc == 0x10100Cu) {
        ctx->pc = 0x10100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101008u;
        // 0x10100c: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101010u;
        goto label_101010;
    }
    ctx->pc = 0x101008u;
    SET_GPR_U32(ctx, 31, 0x101010u);
    ctx->pc = 0x10100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101008u;
    // 0x10100c: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x101008u, 0x101010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101010u;
label_101010:
    // 0x101010: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x101010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_101014:
    // 0x101014: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x101014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_101018:
    // 0x101018: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x101018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
label_10101c:
    // 0x10101c: 0x101083  sra         $v0, $s0, 2
    ctx->pc = 0x10101cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 2));
label_101020:
    // 0x101020: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x101020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_101024:
    // 0x101024: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_101028:
    if (ctx->pc == 0x101028u) {
        ctx->pc = 0x101028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101024u;
        // 0x101028: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10102Cu;
        goto label_10102c;
    }
    ctx->pc = 0x101024u;
    {
        const bool branch_taken_0x101024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101024u;
        // 0x101028: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101024) {
            ctx->pc = 0x101048u;
            goto label_101048;
        }
    }
    ctx->pc = 0x10102Cu;
label_10102c:
    // 0x10102c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101030:
    // 0x101030: 0x8c440708  lw          $a0, 0x708($v0)
    ctx->pc = 0x101030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1800)));
label_101034:
    // 0x101034: 0xc04147a  jal         func_1051E8
label_101038:
    if (ctx->pc == 0x101038u) {
        ctx->pc = 0x101038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101034u;
        // 0x101038: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10103Cu;
        goto label_10103c;
    }
    ctx->pc = 0x101034u;
    SET_GPR_U32(ctx, 31, 0x10103Cu);
    ctx->pc = 0x101038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101034u;
    // 0x101038: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x101034u, 0x10103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10103Cu;
label_10103c:
    // 0x10103c: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x10103cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_101040:
    // 0x101040: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x101040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_101044:
    // 0x101044: 0xa0430014  sb          $v1, 0x14($v0)
    ctx->pc = 0x101044u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 3));
label_101048:
    // 0x101048: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_10104c:
    // 0x10104c: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_101050:
    // 0x101050: 0x8c640708  lw          $a0, 0x708($v1)
    ctx->pc = 0x101050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1800)));
label_101054:
    // 0x101054: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101058:
    // 0x101058: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x101058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10105c:
    // 0x10105c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x10105cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_101060:
    // 0x101060: 0xc04147a  jal         func_1051E8
label_101064:
    if (ctx->pc == 0x101064u) {
        ctx->pc = 0x101064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101060u;
        // 0x101064: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101068u;
        goto label_101068;
    }
    ctx->pc = 0x101060u;
    SET_GPR_U32(ctx, 31, 0x101068u);
    ctx->pc = 0x101064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101060u;
    // 0x101064: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x101060u, 0x101068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101068u;
label_101068:
    // 0x101068: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x101068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10106c:
    // 0x10106c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10106cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_101070:
    // 0x101070: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x101070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_101074:
    // 0x101074: 0xc04001c  jal         func_100070
label_101078:
    if (ctx->pc == 0x101078u) {
        ctx->pc = 0x101078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101074u;
        // 0x101078: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10107Cu;
        goto label_10107c;
    }
    ctx->pc = 0x101074u;
    SET_GPR_U32(ctx, 31, 0x10107Cu);
    ctx->pc = 0x101078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101074u;
    // 0x101078: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100070u, 0x101074u, 0x10107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10107Cu;
label_10107c:
    // 0x10107c: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
label_101080:
    if (ctx->pc == 0x101080u) {
        ctx->pc = 0x101080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10107Cu;
        // 0x101080: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101084u;
        goto label_101084;
    }
    ctx->pc = 0x10107Cu;
    {
        const bool branch_taken_0x10107c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x101080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10107Cu;
        // 0x101080: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10107c) {
            ctx->pc = 0x1010E0u;
            goto label_1010e0;
        }
    }
    ctx->pc = 0x101084u;
label_101084:
    // 0x101084: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x101084u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101088:
    // 0x101088: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x101088u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
label_10108c:
    // 0x10108c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x10108cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_101090:
    // 0x101090: 0x8ee40708  lw          $a0, 0x708($s7)
    ctx->pc = 0x101090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1800)));
label_101094:
    // 0x101094: 0x0  nop
    ctx->pc = 0x101094u;
    // NOP
label_101098:
    // 0x101098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10109c:
    // 0x10109c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x10109cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1010a0:
    // 0x1010a0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1010a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1010a4:
    // 0x1010a4: 0xc04147a  jal         func_1051E8
label_1010a8:
    if (ctx->pc == 0x1010A8u) {
        ctx->pc = 0x1010A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010A4u;
        // 0x1010a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1010ACu;
        goto label_1010ac;
    }
    ctx->pc = 0x1010A4u;
    SET_GPR_U32(ctx, 31, 0x1010ACu);
    ctx->pc = 0x1010A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010A4u;
    // 0x1010a8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1010A4u, 0x1010ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010ACu;
label_1010ac:
    // 0x1010ac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1010acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1010b0:
    // 0x1010b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1010b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1010b4:
    // 0x1010b4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1010b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1010b8:
    // 0x1010b8: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x1010b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
label_1010bc:
    // 0x1010bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1010bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1010c0:
    // 0x1010c0: 0x8ee50708  lw          $a1, 0x708($s7)
    ctx->pc = 0x1010c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1800)));
label_1010c4:
    // 0x1010c4: 0xbe3021  addu        $a2, $a1, $fp
    ctx->pc = 0x1010c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_1010c8:
    // 0x1010c8: 0xc04100c  jal         func_104030
label_1010cc:
    if (ctx->pc == 0x1010CCu) {
        ctx->pc = 0x1010CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010C8u;
        // 0x1010cc: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1010D0u;
        goto label_1010d0;
    }
    ctx->pc = 0x1010C8u;
    SET_GPR_U32(ctx, 31, 0x1010D0u);
    ctx->pc = 0x1010CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1010C8u;
    // 0x1010cc: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104030u, 0x1010C8u, 0x1010D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1010D0u;
label_1010d0:
    // 0x1010d0: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x1010d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_1010d4:
    // 0x1010d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1010d8:
    if (ctx->pc == 0x1010D8u) {
        ctx->pc = 0x1010D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010D4u;
        // 0x1010d8: 0x8ee40708  lw          $a0, 0x708($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1010DCu;
        goto label_1010dc;
    }
    ctx->pc = 0x1010D4u;
    {
        const bool branch_taken_0x1010d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1010D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010D4u;
        // 0x1010d8: 0x8ee40708  lw          $a0, 0x708($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010d4) {
            ctx->pc = 0x101098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101098;
        }
    }
    ctx->pc = 0x1010DCu;
label_1010dc:
    // 0x1010dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1010dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1010e0:
    // 0x1010e0: 0x8fb20160  lw          $s2, 0x160($sp)
    ctx->pc = 0x1010e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1010e4:
    // 0x1010e4: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x1010e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1800)));
label_1010e8:
    // 0x1010e8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1010e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_1010ec:
    // 0x1010ec: 0x90620022  lbu         $v0, 0x22($v1)
    ctx->pc = 0x1010ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_1010f0:
    // 0x1010f0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1010f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1010f4:
    // 0x1010f4: 0x5440ffaa  bnel        $v0, $zero, . + 4 + (-0x56 << 2)
label_1010f8:
    if (ctx->pc == 0x1010F8u) {
        ctx->pc = 0x1010F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1010F4u;
        // 0x1010f8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1010FCu;
        goto label_1010fc;
    }
    ctx->pc = 0x1010F4u;
    {
        const bool branch_taken_0x1010f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1010f4) {
            ctx->pc = 0x1010F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1010F4u;
            // 0x1010f8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100fa0;
        }
    }
    ctx->pc = 0x1010FCu;
label_1010fc:
    // 0x1010fc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1010fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_101100:
    // 0x101100: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_101104:
    if (ctx->pc == 0x101104u) {
        ctx->pc = 0x101104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101100u;
        // 0x101104: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101108u;
        goto label_101108;
    }
    ctx->pc = 0x101100u;
    {
        const bool branch_taken_0x101100 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x101104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101100u;
        // 0x101104: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101100) {
            ctx->pc = 0x101120u;
            goto label_101120;
        }
    }
    ctx->pc = 0x101108u;
label_101108:
    // 0x101108: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x101108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_10110c:
    // 0x10110c: 0x8c820708  lw          $v0, 0x708($a0)
    ctx->pc = 0x10110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1800)));
label_101110:
    // 0x101110: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x101110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101114:
    // 0x101114: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x101114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_101118:
    // 0x101118: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_10111c:
    // 0x10111c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x10111cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_101120:
    // 0x101120: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x101120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_101124:
    // 0x101124: 0x8fb4015c  lw          $s4, 0x15C($sp)
    ctx->pc = 0x101124u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_101128:
    // 0x101128: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x101128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
label_10112c:
    // 0x10112c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x10112cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101130:
    // 0x101130: 0x1440fef5  bnez        $v0, . + 4 + (-0x10B << 2)
label_101134:
    if (ctx->pc == 0x101134u) {
        ctx->pc = 0x101134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101130u;
        // 0x101134: 0x8fa40154  lw          $a0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101138u;
        goto label_101138;
    }
    ctx->pc = 0x101130u;
    {
        const bool branch_taken_0x101130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101130u;
        // 0x101134: 0x8fa40154  lw          $a0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101130) {
            ctx->pc = 0x100D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100d08;
        }
    }
    ctx->pc = 0x101138u;
label_101138:
    // 0x101138: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x101138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10113c:
    // 0x10113c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x10113cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_101140:
    // 0x101140: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x101140u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_101144:
    // 0x101144: 0xc041c16  jal         func_107058
label_101148:
    if (ctx->pc == 0x101148u) {
        ctx->pc = 0x101148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101144u;
        // 0x101148: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10114Cu;
        goto label_10114c;
    }
    ctx->pc = 0x101144u;
    SET_GPR_U32(ctx, 31, 0x10114Cu);
    ctx->pc = 0x101148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101144u;
    // 0x101148: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x107058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107058u, 0x101144u, 0x10114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10114Cu;
label_10114c:
    // 0x10114c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10114cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101150:
    // 0x101150: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x101150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_101154:
    // 0x101154: 0x8c820700  lw          $v0, 0x700($a0)
    ctx->pc = 0x101154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1792)));
label_101158:
    // 0x101158: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_10115c:
    if (ctx->pc == 0x10115Cu) {
        ctx->pc = 0x10115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101158u;
        // 0x10115c: 0x26770004  addiu       $s7, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101160u;
        goto label_101160;
    }
    ctx->pc = 0x101158u;
    {
        const bool branch_taken_0x101158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101158u;
        // 0x10115c: 0x26770004  addiu       $s7, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101158) {
            ctx->pc = 0x101230u;
            goto label_101230;
        }
    }
    ctx->pc = 0x101160u;
label_101160:
    // 0x101160: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
label_101164:
    // 0x101164: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x101164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_101168:
    // 0x101168: 0x8fc40708  lw          $a0, 0x708($fp)
    ctx->pc = 0x101168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1800)));
label_10116c:
    // 0x10116c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_101170:
    // 0x101170: 0xafb4015c  sw          $s4, 0x15C($sp)
    ctx->pc = 0x101170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 20));
label_101174:
    // 0x101174: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x101174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_101178:
    // 0x101178: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x101178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_10117c:
    // 0x10117c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_101180:
    if (ctx->pc == 0x101180u) {
        ctx->pc = 0x101180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10117Cu;
        // 0x101180: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101184u;
        goto label_101184;
    }
    ctx->pc = 0x10117Cu;
    {
        const bool branch_taken_0x10117c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10117Cu;
        // 0x101180: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10117c) {
            ctx->pc = 0x101218u;
            goto label_101218;
        }
    }
    ctx->pc = 0x101184u;
label_101184:
    // 0x101184: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x101184u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_101188:
    // 0x101188: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x101188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10118c:
    // 0x10118c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10118cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101190:
    // 0x101190: 0xc04147a  jal         func_1051E8
label_101194:
    if (ctx->pc == 0x101194u) {
        ctx->pc = 0x101194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101190u;
        // 0x101194: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101198u;
        goto label_101198;
    }
    ctx->pc = 0x101190u;
    SET_GPR_U32(ctx, 31, 0x101198u);
    ctx->pc = 0x101194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101190u;
    // 0x101194: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x101190u, 0x101198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101198u;
label_101198:
    // 0x101198: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10119c:
    // 0x10119c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1011a0:
    // 0x1011a0: 0xc041a5c  jal         func_106970
label_1011a4:
    if (ctx->pc == 0x1011A4u) {
        ctx->pc = 0x1011A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011A0u;
        // 0x1011a4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011A8u;
        goto label_1011a8;
    }
    ctx->pc = 0x1011A0u;
    SET_GPR_U32(ctx, 31, 0x1011A8u);
    ctx->pc = 0x1011A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011A0u;
    // 0x1011a4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106970u, 0x1011A0u, 0x1011A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011A8u;
label_1011a8:
    // 0x1011a8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1011a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1011ac:
    // 0x1011ac: 0xc0dde53  jal         func_37794C
label_1011b0:
    if (ctx->pc == 0x1011B0u) {
        ctx->pc = 0x1011B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011ACu;
        // 0x1011b0: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011B4u;
        goto label_1011b4;
    }
    ctx->pc = 0x1011ACu;
    SET_GPR_U32(ctx, 31, 0x1011B4u);
    ctx->pc = 0x1011B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011ACu;
    // 0x1011b0: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1011ACu, 0x1011B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011B4u;
label_1011b4:
    // 0x1011b4: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x1011b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_1011b8:
    // 0x1011b8: 0x3197a  dsrl        $v1, $v1, 5
    ctx->pc = 0x1011b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 5);
label_1011bc:
    // 0x1011bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1011bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1011c0:
    // 0x1011c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1011c4:
    if (ctx->pc == 0x1011C4u) {
        ctx->pc = 0x1011C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011C0u;
        // 0x1011c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011C8u;
        goto label_1011c8;
    }
    ctx->pc = 0x1011C0u;
    {
        const bool branch_taken_0x1011c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011C0u;
        // 0x1011c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011c0) {
            ctx->pc = 0x1011F0u;
            goto label_1011f0;
        }
    }
    ctx->pc = 0x1011C8u;
label_1011c8:
    // 0x1011c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1011c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1011cc:
    // 0x1011cc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1011ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1011d0:
    // 0x1011d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1011d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1011d4:
    // 0x1011d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1011d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1011d8:
    // 0x1011d8: 0x0  nop
    ctx->pc = 0x1011d8u;
    // NOP
label_1011dc:
    // 0x1011dc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1011e0:
    if (ctx->pc == 0x1011E0u) {
        ctx->pc = 0x1011E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011DCu;
        // 0x1011e0: 0xa2350014  sb          $s5, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011E4u;
        goto label_1011e4;
    }
    ctx->pc = 0x1011DCu;
    {
        const bool branch_taken_0x1011dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1011dc) {
            ctx->pc = 0x1011E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1011DCu;
            // 0x1011e0: 0xa2350014  sb          $s5, 0x14($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1011F0u;
            goto label_1011f0;
        }
    }
    ctx->pc = 0x1011E4u;
label_1011e4:
    // 0x1011e4: 0xc041138  jal         func_1044E0
label_1011e8:
    if (ctx->pc == 0x1011E8u) {
        ctx->pc = 0x1011E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011E4u;
        // 0x1011e8: 0xa2360014  sb          $s6, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011ECu;
        goto label_1011ec;
    }
    ctx->pc = 0x1011E4u;
    SET_GPR_U32(ctx, 31, 0x1011ECu);
    ctx->pc = 0x1011E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011E4u;
    // 0x1011e8: 0xa2360014  sb          $s6, 0x14($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044E0u, 0x1011E4u, 0x1011ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011ECu;
label_1011ec:
    // 0x1011ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1011ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1011f0:
    // 0x1011f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1011f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1011f4:
    // 0x1011f4: 0xc0414a2  jal         func_105288
label_1011f8:
    if (ctx->pc == 0x1011F8u) {
        ctx->pc = 0x1011F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1011F4u;
        // 0x1011f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1011FCu;
        goto label_1011fc;
    }
    ctx->pc = 0x1011F4u;
    SET_GPR_U32(ctx, 31, 0x1011FCu);
    ctx->pc = 0x1011F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1011F4u;
    // 0x1011f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x1011F4u, 0x1011FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1011FCu;
label_1011fc:
    // 0x1011fc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1011fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_101200:
    // 0x101200: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x101200u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_101204:
    // 0x101204: 0xa6300008  sh          $s0, 0x8($s1)
    ctx->pc = 0x101204u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 16));
label_101208:
    // 0x101208: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x101208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_10120c:
    // 0x10120c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x10120cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101210:
    // 0x101210: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_101214:
    if (ctx->pc == 0x101214u) {
        ctx->pc = 0x101214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101210u;
        // 0x101214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101218u;
        goto label_101218;
    }
    ctx->pc = 0x101210u;
    {
        const bool branch_taken_0x101210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101210u;
        // 0x101214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101210) {
            ctx->pc = 0x101190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101190;
        }
    }
    ctx->pc = 0x101218u;
label_101218:
    // 0x101218: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x101218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_10121c:
    // 0x10121c: 0x8fb4015c  lw          $s4, 0x15C($sp)
    ctx->pc = 0x10121cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_101220:
    // 0x101220: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x101220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
label_101224:
    // 0x101224: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x101224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101228:
    // 0x101228: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_10122c:
    if (ctx->pc == 0x10122Cu) {
        ctx->pc = 0x10122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101228u;
        // 0x10122c: 0x141980  sll         $v1, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101230u;
        goto label_101230;
    }
    ctx->pc = 0x101228u;
    {
        const bool branch_taken_0x101228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101228u;
        // 0x10122c: 0x141980  sll         $v1, $s4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101228) {
            ctx->pc = 0x101168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101168;
        }
    }
    ctx->pc = 0x101230u;
label_101230:
    // 0x101230: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x101230u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_101234:
    // 0x101234: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x101234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_101238:
    // 0x101238: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x101238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_10123c:
    // 0x10123c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_101240:
    if (ctx->pc == 0x101240u) {
        ctx->pc = 0x101240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10123Cu;
        // 0x101240: 0xac910704  sw          $s1, 0x704($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1796), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101244u;
        goto label_101244;
    }
    ctx->pc = 0x10123Cu;
    {
        const bool branch_taken_0x10123c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x101240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10123Cu;
        // 0x101240: 0xac910704  sw          $s1, 0x704($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1796), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10123c) {
            ctx->pc = 0x101250u;
            goto label_101250;
        }
    }
    ctx->pc = 0x101244u;
label_101244:
    // 0x101244: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x101244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_101248:
    // 0x101248: 0x10000068  b           . + 4 + (0x68 << 2)
label_10124c:
    if (ctx->pc == 0x10124Cu) {
        ctx->pc = 0x10124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101248u;
        // 0x10124c: 0xac40070c  sw          $zero, 0x70C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101250u;
        goto label_101250;
    }
    ctx->pc = 0x101248u;
    {
        const bool branch_taken_0x101248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101248u;
        // 0x10124c: 0xac40070c  sw          $zero, 0x70C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101248) {
            ctx->pc = 0x1013ECu;
            goto label_1013ec;
        }
    }
    ctx->pc = 0x101250u;
label_101250:
    // 0x101250: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_101254:
    // 0x101254: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x101254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_101258:
    // 0x101258: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x101258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_10125c:
    // 0x10125c: 0x2477070c  addiu       $s7, $v1, 0x70C
    ctx->pc = 0x10125cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1804));
label_101260:
    // 0x101260: 0x2632ffff  addiu       $s2, $s1, -0x1
    ctx->pc = 0x101260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_101264:
    // 0x101264: 0xc0f52a8  jal         func_3D4AA0
label_101268:
    if (ctx->pc == 0x101268u) {
        ctx->pc = 0x101268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101264u;
        // 0x101268: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10126Cu;
        goto label_10126c;
    }
    ctx->pc = 0x101264u;
    SET_GPR_U32(ctx, 31, 0x10126Cu);
    ctx->pc = 0x101268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101264u;
    // 0x101268: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x101264u, 0x10126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10126Cu;
label_10126c:
    // 0x10126c: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_101270:
    // 0x101270: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x101270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_101274:
    // 0x101274: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_101278:
    if (ctx->pc == 0x101278u) {
        ctx->pc = 0x101278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101274u;
        // 0x101278: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10127Cu;
        goto label_10127c;
    }
    ctx->pc = 0x101274u;
    {
        const bool branch_taken_0x101274 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101274u;
        // 0x101278: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101274) {
            ctx->pc = 0x1012C4u;
            goto label_1012c4;
        }
    }
    ctx->pc = 0x10127Cu;
label_10127c:
    // 0x10127c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x10127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_101280:
    // 0x101280: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101284:
    // 0x101284: 0x245402d8  addiu       $s4, $v0, 0x2D8
    ctx->pc = 0x101284u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
label_101288:
    // 0x101288: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x101288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10128c:
    // 0x10128c: 0x0  nop
    ctx->pc = 0x10128cu;
    // NOP
label_101290:
    // 0x101290: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x101290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
label_101294:
    // 0x101294: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x101294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_101298:
    // 0x101298: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x101298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_10129c:
    // 0x10129c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x10129cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1012a0:
    // 0x1012a0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1012a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1012a4:
    // 0x1012a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1012a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1012a8:
    // 0x1012a8: 0xc0d737c  jal         func_35CDF0
label_1012ac:
    if (ctx->pc == 0x1012ACu) {
        ctx->pc = 0x1012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A8u;
        // 0x1012ac: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012B0u;
        goto label_1012b0;
    }
    ctx->pc = 0x1012A8u;
    SET_GPR_U32(ctx, 31, 0x1012B0u);
    ctx->pc = 0x1012ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012A8u;
    // 0x1012ac: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1012A8u, 0x1012B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012B0u;
label_1012b0:
    // 0x1012b0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1012b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1012b4:
    // 0x1012b4: 0xae160010  sw          $s6, 0x10($s0)
    ctx->pc = 0x1012b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
label_1012b8:
    // 0x1012b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1012b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1012bc:
    // 0x1012bc: 0x1651fff4  bne         $s2, $s1, . + 4 + (-0xC << 2)
label_1012c0:
    if (ctx->pc == 0x1012C0u) {
        ctx->pc = 0x1012C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012BCu;
        // 0x1012c0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012C4u;
        goto label_1012c4;
    }
    ctx->pc = 0x1012BCu;
    {
        const bool branch_taken_0x1012bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x1012C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012BCu;
        // 0x1012c0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012bc) {
            ctx->pc = 0x101290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101290;
        }
    }
    ctx->pc = 0x1012C4u;
label_1012c4:
    // 0x1012c4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1012c8:
    // 0x1012c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1012c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1012cc:
    // 0x1012cc: 0x8c820704  lw          $v0, 0x704($a0)
    ctx->pc = 0x1012ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1796)));
label_1012d0:
    // 0x1012d0: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_1012d4:
    if (ctx->pc == 0x1012D4u) {
        ctx->pc = 0x1012D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012D0u;
        // 0x1012d4: 0xaef50000  sw          $s5, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012D8u;
        goto label_1012d8;
    }
    ctx->pc = 0x1012D0u;
    {
        const bool branch_taken_0x1012d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012D0u;
        // 0x1012d4: 0xaef50000  sw          $s5, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012d0) {
            ctx->pc = 0x1013ECu;
            goto label_1013ec;
        }
    }
    ctx->pc = 0x1012D8u;
label_1012d8:
    // 0x1012d8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1012d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1012dc:
    // 0x1012dc: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x1012dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1012e0:
    // 0x1012e0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1012e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1012e4:
    // 0x1012e4: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x1012e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_1012e8:
    // 0x1012e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1012e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1012ec:
    // 0x1012ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1012ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1012f0:
    // 0x1012f0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1012f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1012f4:
    // 0x1012f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1012f8:
    if (ctx->pc == 0x1012F8u) {
        ctx->pc = 0x1012F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F4u;
        // 0x1012f8: 0xa3a30040  sb          $v1, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012FCu;
        goto label_1012fc;
    }
    ctx->pc = 0x1012F4u;
    {
        const bool branch_taken_0x1012f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F4u;
        // 0x1012f8: 0xa3a30040  sb          $v1, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012f4) {
            ctx->pc = 0x101324u;
            goto label_101324;
        }
    }
    ctx->pc = 0x1012FCu;
label_1012fc:
    // 0x1012fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1012fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_101300:
    // 0x101300: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x101300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_101304:
    // 0x101304: 0x2e420100  sltiu       $v0, $s2, 0x100
    ctx->pc = 0x101304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_101308:
    // 0x101308: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_10130c:
    if (ctx->pc == 0x10130Cu) {
        ctx->pc = 0x10130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101308u;
        // 0x10130c: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101310u;
        goto label_101310;
    }
    ctx->pc = 0x101308u;
    {
        const bool branch_taken_0x101308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101308u;
        // 0x10130c: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101308) {
            ctx->pc = 0x101324u;
            goto label_101324;
        }
    }
    ctx->pc = 0x101310u;
label_101310:
    // 0x101310: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x101310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_101314:
    // 0x101314: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x101314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_101318:
    // 0x101318: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x101318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_10131c:
    // 0x10131c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_101320:
    if (ctx->pc == 0x101320u) {
        ctx->pc = 0x101320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10131Cu;
        // 0x101320: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101324u;
        goto label_101324;
    }
    ctx->pc = 0x10131Cu;
    {
        const bool branch_taken_0x10131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10131Cu;
        // 0x101320: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10131c) {
            ctx->pc = 0x101300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101300;
        }
    }
    ctx->pc = 0x101324u;
label_101324:
    // 0x101324: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x101324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_101328:
    // 0x101328: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x101328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_10132c:
    // 0x10132c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_101330:
    if (ctx->pc == 0x101330u) {
        ctx->pc = 0x101330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10132Cu;
        // 0x101330: 0x26620004  addiu       $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101334u;
        goto label_101334;
    }
    ctx->pc = 0x10132Cu;
    {
        const bool branch_taken_0x10132c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10132Cu;
        // 0x101330: 0x26620004  addiu       $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10132c) {
            ctx->pc = 0x101338u;
            goto label_101338;
        }
    }
    ctx->pc = 0x101334u;
label_101334:
    // 0x101334: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x101334u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101338:
    // 0x101338: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_10133c:
    // 0x10133c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x10133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_101340:
    // 0x101340: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x101340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_101344:
    // 0x101344: 0x8c83070c  lw          $v1, 0x70C($a0)
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1804)));
label_101348:
    // 0x101348: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x101348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10134c:
    // 0x10134c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10134cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101350:
    // 0x101350: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x101350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101354:
    // 0x101354: 0xc0d7468  jal         func_35D1A0
label_101358:
    if (ctx->pc == 0x101358u) {
        ctx->pc = 0x101358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101354u;
        // 0x101358: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10135Cu;
        goto label_10135c;
    }
    ctx->pc = 0x101354u;
    SET_GPR_U32(ctx, 31, 0x10135Cu);
    ctx->pc = 0x101358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101354u;
    // 0x101358: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x101354u, 0x10135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10135Cu;
label_10135c:
    // 0x10135c: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x10135cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_101360:
    // 0x101360: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_101364:
    if (ctx->pc == 0x101364u) {
        ctx->pc = 0x101364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101360u;
        // 0x101364: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101368u;
        goto label_101368;
    }
    ctx->pc = 0x101360u;
    {
        const bool branch_taken_0x101360 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101360u;
        // 0x101364: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101360) {
            ctx->pc = 0x101398u;
            goto label_101398;
        }
    }
    ctx->pc = 0x101368u;
label_101368:
    // 0x101368: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x101368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10136c:
    // 0x10136c: 0x0  nop
    ctx->pc = 0x10136cu;
    // NOP
label_101370:
    // 0x101370: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x101370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_101374:
    // 0x101374: 0xc0402ba  jal         func_100AE8
label_101378:
    if (ctx->pc == 0x101378u) {
        ctx->pc = 0x101378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101374u;
        // 0x101378: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10137Cu;
        goto label_10137c;
    }
    ctx->pc = 0x101374u;
    SET_GPR_U32(ctx, 31, 0x10137Cu);
    ctx->pc = 0x101378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101374u;
    // 0x101378: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AE8u, 0x101374u, 0x10137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10137Cu;
label_10137c:
    // 0x10137c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10137cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_101380:
    // 0x101380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101384:
    // 0x101384: 0xc0f620c  jal         func_3D8830
label_101388:
    if (ctx->pc == 0x101388u) {
        ctx->pc = 0x101388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101384u;
        // 0x101388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10138Cu;
        goto label_10138c;
    }
    ctx->pc = 0x101384u;
    SET_GPR_U32(ctx, 31, 0x10138Cu);
    ctx->pc = 0x101388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101384u;
    // 0x101388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x101384u, 0x10138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10138Cu;
label_10138c:
    // 0x10138c: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x10138cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_101390:
    // 0x101390: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_101394:
    if (ctx->pc == 0x101394u) {
        ctx->pc = 0x101394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101390u;
        // 0x101394: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101398u;
        goto label_101398;
    }
    ctx->pc = 0x101390u;
    {
        const bool branch_taken_0x101390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101390) {
            ctx->pc = 0x101394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101390u;
            // 0x101394: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101370;
        }
    }
    ctx->pc = 0x101398u;
label_101398:
    // 0x101398: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10139c:
    // 0x10139c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1013a0:
    if (ctx->pc == 0x1013A0u) {
        ctx->pc = 0x1013A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10139Cu;
        // 0x1013a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013A4u;
        goto label_1013a4;
    }
    ctx->pc = 0x10139Cu;
    {
        const bool branch_taken_0x10139c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10139Cu;
        // 0x1013a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10139c) {
            ctx->pc = 0x1013A8u;
            goto label_1013a8;
        }
    }
    ctx->pc = 0x1013A4u;
label_1013a4:
    // 0x1013a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1013a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1013a8:
    // 0x1013a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1013a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1013ac:
    // 0x1013ac: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1013b0:
    if (ctx->pc == 0x1013B0u) {
        ctx->pc = 0x1013B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013ACu;
        // 0x1013b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013B4u;
        goto label_1013b4;
    }
    ctx->pc = 0x1013ACu;
    {
        const bool branch_taken_0x1013ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013ACu;
        // 0x1013b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013ac) {
            ctx->pc = 0x1013B8u;
            goto label_1013b8;
        }
    }
    ctx->pc = 0x1013B4u;
label_1013b4:
    // 0x1013b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1013b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1013b8:
    // 0x1013b8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_1013bc:
    if (ctx->pc == 0x1013BCu) {
        ctx->pc = 0x1013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013B8u;
        // 0x1013bc: 0xae150010  sw          $s5, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013C0u;
        goto label_1013c0;
    }
    ctx->pc = 0x1013B8u;
    {
        const bool branch_taken_0x1013b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1013b8) {
            ctx->pc = 0x1013BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1013B8u;
            // 0x1013bc: 0xae150010  sw          $s5, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1013D0u;
            goto label_1013d0;
        }
    }
    ctx->pc = 0x1013C0u;
label_1013c0:
    // 0x1013c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1013c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1013c4:
    // 0x1013c4: 0xc0f61e8  jal         func_3D87A0
label_1013c8:
    if (ctx->pc == 0x1013C8u) {
        ctx->pc = 0x1013C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013C4u;
        // 0x1013c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013CCu;
        goto label_1013cc;
    }
    ctx->pc = 0x1013C4u;
    SET_GPR_U32(ctx, 31, 0x1013CCu);
    ctx->pc = 0x1013C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013C4u;
    // 0x1013c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1013C4u, 0x1013CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013CCu;
label_1013cc:
    // 0x1013cc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1013ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1013d0:
    // 0x1013d0: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x1013d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
label_1013d4:
    // 0x1013d4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1013d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1013d8:
    // 0x1013d8: 0x8fb4015c  lw          $s4, 0x15C($sp)
    ctx->pc = 0x1013d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1013dc:
    // 0x1013dc: 0x8c620704  lw          $v0, 0x704($v1)
    ctx->pc = 0x1013dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1796)));
label_1013e0:
    // 0x1013e0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1013e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1013e4:
    // 0x1013e4: 0x5440ffbe  bnel        $v0, $zero, . + 4 + (-0x42 << 2)
label_1013e8:
    if (ctx->pc == 0x1013E8u) {
        ctx->pc = 0x1013E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013E4u;
        // 0x1013e8: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013ECu;
        goto label_1013ec;
    }
    ctx->pc = 0x1013E4u;
    {
        const bool branch_taken_0x1013e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1013e4) {
            ctx->pc = 0x1013E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1013E4u;
            // 0x1013e8: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1012E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1012e0;
        }
    }
    ctx->pc = 0x1013ECu;
label_1013ec:
    // 0x1013ec: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1013ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1013f0:
    // 0x1013f0: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1013f4:
    // 0x1013f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1013f8:
    // 0x1013f8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1013f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1013fc:
    // 0x1013fc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1013fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_101400:
    // 0x101400: 0x24560720  addiu       $s6, $v0, 0x720
    ctx->pc = 0x101400u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1824));
label_101404:
    // 0x101404: 0xac700724  sw          $s0, 0x724($v1)
    ctx->pc = 0x101404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1828), GPR_U32(ctx, 16));
label_101408:
    // 0x101408: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x101408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_10140c:
    // 0x10140c: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x10140cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_101410:
    // 0x101410: 0xc0f52a8  jal         func_3D4AA0
label_101414:
    if (ctx->pc == 0x101414u) {
        ctx->pc = 0x101414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101410u;
        // 0x101414: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101418u;
        goto label_101418;
    }
    ctx->pc = 0x101410u;
    SET_GPR_U32(ctx, 31, 0x101418u);
    ctx->pc = 0x101414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101410u;
    // 0x101414: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x101410u, 0x101418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101418u;
label_101418:
    // 0x101418: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x101418u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_10141c:
    // 0x10141c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10141cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_101420:
    // 0x101420: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_101424:
    if (ctx->pc == 0x101424u) {
        ctx->pc = 0x101424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101420u;
        // 0x101424: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101428u;
        goto label_101428;
    }
    ctx->pc = 0x101420u;
    {
        const bool branch_taken_0x101420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x101424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101420u;
        // 0x101424: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101420) {
            ctx->pc = 0x101448u;
            goto label_101448;
        }
    }
    ctx->pc = 0x101428u;
label_101428:
    // 0x101428: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x101428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10142c:
    // 0x10142c: 0x0  nop
    ctx->pc = 0x10142cu;
    // NOP
label_101430:
    // 0x101430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_101434:
    // 0x101434: 0xc041270  jal         func_1049C0
label_101438:
    if (ctx->pc == 0x101438u) {
        ctx->pc = 0x101438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101434u;
        // 0x101438: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10143Cu;
        goto label_10143c;
    }
    ctx->pc = 0x101434u;
    SET_GPR_U32(ctx, 31, 0x10143Cu);
    ctx->pc = 0x101438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101434u;
    // 0x101438: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1049C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1049C0u, 0x101434u, 0x10143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10143Cu;
label_10143c:
    // 0x10143c: 0x0  nop
    ctx->pc = 0x10143cu;
    // NOP
label_101440:
    // 0x101440: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
label_101444:
    if (ctx->pc == 0x101444u) {
        ctx->pc = 0x101444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101440u;
        // 0x101444: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101448u;
        goto label_101448;
    }
    ctx->pc = 0x101440u;
    {
        const bool branch_taken_0x101440 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x101444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101440u;
        // 0x101444: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101440) {
            ctx->pc = 0x101430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101430;
        }
    }
    ctx->pc = 0x101448u;
label_101448:
    // 0x101448: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x101448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_10144c:
    // 0x10144c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10144cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101450:
    // 0x101450: 0x8c820724  lw          $v0, 0x724($a0)
    ctx->pc = 0x101450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1828)));
label_101454:
    // 0x101454: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_101458:
    if (ctx->pc == 0x101458u) {
        ctx->pc = 0x101458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101454u;
        // 0x101458: 0xaed50000  sw          $s5, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10145Cu;
        goto label_10145c;
    }
    ctx->pc = 0x101454u;
    {
        const bool branch_taken_0x101454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101454u;
        // 0x101458: 0xaed50000  sw          $s5, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101454) {
            ctx->pc = 0x1014F8u;
            goto label_1014f8;
        }
    }
    ctx->pc = 0x10145Cu;
label_10145c:
    // 0x10145c: 0x3c120044  lui         $s2, 0x44
    ctx->pc = 0x10145cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)68 << 16));
label_101460:
    // 0x101460: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x101460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_101464:
    // 0x101464: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x101464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_101468:
    // 0x101468: 0x2645a4c8  addiu       $a1, $s2, -0x5B38
    ctx->pc = 0x101468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943944));
label_10146c:
    // 0x10146c: 0xc0d7468  jal         func_35D1A0
label_101470:
    if (ctx->pc == 0x101470u) {
        ctx->pc = 0x101470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10146Cu;
        // 0x101470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101474u;
        goto label_101474;
    }
    ctx->pc = 0x10146Cu;
    SET_GPR_U32(ctx, 31, 0x101474u);
    ctx->pc = 0x101470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10146Cu;
    // 0x101470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x10146Cu, 0x101474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101474u;
label_101474:
    // 0x101474: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x101474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_101478:
    // 0x101478: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x101478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_10147c:
    // 0x10147c: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x10147cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
label_101480:
    // 0x101480: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_101484:
    if (ctx->pc == 0x101484u) {
        ctx->pc = 0x101484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101480u;
        // 0x101484: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101488u;
        goto label_101488;
    }
    ctx->pc = 0x101480u;
    {
        const bool branch_taken_0x101480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101480u;
        // 0x101484: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101480) {
            ctx->pc = 0x1014ACu;
            goto label_1014ac;
        }
    }
    ctx->pc = 0x101488u;
label_101488:
    // 0x101488: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x101488u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_10148c:
    // 0x10148c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x10148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_101490:
    // 0x101490: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x101490u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
label_101494:
    // 0x101494: 0xc0d755e  jal         func_35D578
label_101498:
    if (ctx->pc == 0x101498u) {
        ctx->pc = 0x101498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101494u;
        // 0x101498: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10149Cu;
        goto label_10149c;
    }
    ctx->pc = 0x101494u;
    SET_GPR_U32(ctx, 31, 0x10149Cu);
    ctx->pc = 0x101498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101494u;
    // 0x101498: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x101494u, 0x10149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10149Cu;
label_10149c:
    // 0x10149c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10149cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1014a0:
    // 0x1014a0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1014a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1014a4:
    // 0x1014a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1014a8:
    if (ctx->pc == 0x1014A8u) {
        ctx->pc = 0x1014A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014A4u;
        // 0x1014a8: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014ACu;
        goto label_1014ac;
    }
    ctx->pc = 0x1014A4u;
    {
        const bool branch_taken_0x1014a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1014A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014A4u;
        // 0x1014a8: 0x92650000  lbu         $a1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014a4) {
            ctx->pc = 0x101488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101488;
        }
    }
    ctx->pc = 0x1014ACu;
label_1014ac:
    // 0x1014ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1014acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1014b0:
    // 0x1014b0: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x1014b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_1014b4:
    // 0x1014b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1014b8:
    if (ctx->pc == 0x1014B8u) {
        ctx->pc = 0x1014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014B4u;
        // 0x1014b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014BCu;
        goto label_1014bc;
    }
    ctx->pc = 0x1014B4u;
    {
        const bool branch_taken_0x1014b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1014B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014B4u;
        // 0x1014b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014b4) {
            ctx->pc = 0x1014C4u;
            goto label_1014c4;
        }
    }
    ctx->pc = 0x1014BCu;
label_1014bc:
    // 0x1014bc: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x1014bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1014c0:
    // 0x1014c0: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x1014c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1014c4:
    // 0x1014c4: 0x2911018  mult        $v0, $s4, $s1
    ctx->pc = 0x1014c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1014c8:
    // 0x1014c8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1014c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1014cc:
    // 0x1014cc: 0x8c640720  lw          $a0, 0x720($v1)
    ctx->pc = 0x1014ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1824)));
label_1014d0:
    // 0x1014d0: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x1014d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_1014d4:
    // 0x1014d4: 0x8fb4015c  lw          $s4, 0x15C($sp)
    ctx->pc = 0x1014d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1014d8:
    // 0x1014d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1014dc:
    // 0x1014dc: 0xc0d745c  jal         func_35D170
label_1014e0:
    if (ctx->pc == 0x1014E0u) {
        ctx->pc = 0x1014E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014DCu;
        // 0x1014e0: 0x24840034  addiu       $a0, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014E4u;
        goto label_1014e4;
    }
    ctx->pc = 0x1014DCu;
    SET_GPR_U32(ctx, 31, 0x1014E4u);
    ctx->pc = 0x1014E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1014DCu;
    // 0x1014e0: 0x24840034  addiu       $a0, $a0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1014DCu, 0x1014E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014E4u;
label_1014e4:
    // 0x1014e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1014e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1014e8:
    // 0x1014e8: 0x8c830724  lw          $v1, 0x724($a0)
    ctx->pc = 0x1014e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1828)));
label_1014ec:
    // 0x1014ec: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1014ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1014f0:
    // 0x1014f0: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_1014f4:
    if (ctx->pc == 0x1014F4u) {
        ctx->pc = 0x1014F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014F0u;
        // 0x1014f4: 0x8fa40154  lw          $a0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1014F8u;
        goto label_1014f8;
    }
    ctx->pc = 0x1014F0u;
    {
        const bool branch_taken_0x1014f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1014F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014F0u;
        // 0x1014f4: 0x8fa40154  lw          $a0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014f0) {
            ctx->pc = 0x101468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101468;
        }
    }
    ctx->pc = 0x1014F8u;
label_1014f8:
    // 0x1014f8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1014f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1014fc:
    // 0x1014fc: 0x8c620724  lw          $v0, 0x724($v1)
    ctx->pc = 0x1014fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1828)));
label_101500:
    // 0x101500: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_101504:
    if (ctx->pc == 0x101504u) {
        ctx->pc = 0x101504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101500u;
        // 0x101504: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101508u;
        goto label_101508;
    }
    ctx->pc = 0x101500u;
    {
        const bool branch_taken_0x101500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101500u;
        // 0x101504: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101500) {
            ctx->pc = 0x10154Cu;
            goto label_10154c;
        }
    }
    ctx->pc = 0x101508u;
label_101508:
    // 0x101508: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
label_10150c:
    // 0x10150c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10150cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101510:
    // 0x101510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x101510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101514:
    // 0x101514: 0x0  nop
    ctx->pc = 0x101514u;
    // NOP
label_101518:
    // 0x101518: 0x8e240720  lw          $a0, 0x720($s1)
    ctx->pc = 0x101518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1824)));
label_10151c:
    // 0x10151c: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x10151cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_101520:
    // 0x101520: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_101524:
    // 0x101524: 0xc041334  jal         func_104CD0
label_101528:
    if (ctx->pc == 0x101528u) {
        ctx->pc = 0x101528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101524u;
        // 0x101528: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10152Cu;
        goto label_10152c;
    }
    ctx->pc = 0x101524u;
    SET_GPR_U32(ctx, 31, 0x10152Cu);
    ctx->pc = 0x101528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101524u;
    // 0x101528: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CD0u, 0x101524u, 0x10152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10152Cu;
label_10152c:
    // 0x10152c: 0x8e220720  lw          $v0, 0x720($s1)
    ctx->pc = 0x10152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1824)));
label_101530:
    // 0x101530: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x101530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_101534:
    // 0x101534: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_101538:
    // 0x101538: 0xac520030  sw          $s2, 0x30($v0)
    ctx->pc = 0x101538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 18));
label_10153c:
    // 0x10153c: 0x8c820724  lw          $v0, 0x724($a0)
    ctx->pc = 0x10153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1828)));
label_101540:
    // 0x101540: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x101540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101544:
    // 0x101544: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_101548:
    if (ctx->pc == 0x101548u) {
        ctx->pc = 0x101548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101544u;
        // 0x101548: 0x2610004c  addiu       $s0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10154Cu;
        goto label_10154c;
    }
    ctx->pc = 0x101544u;
    {
        const bool branch_taken_0x101544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101544u;
        // 0x101548: 0x2610004c  addiu       $s0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101544) {
            ctx->pc = 0x101518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101518;
        }
    }
    ctx->pc = 0x10154Cu;
label_10154c:
    // 0x10154c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x10154cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_101550:
    // 0x101550: 0x8c620700  lw          $v0, 0x700($v1)
    ctx->pc = 0x101550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1792)));
label_101554:
    // 0x101554: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_101558:
    if (ctx->pc == 0x101558u) {
        ctx->pc = 0x101558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101554u;
        // 0x101558: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10155Cu;
        goto label_10155c;
    }
    ctx->pc = 0x101554u;
    {
        const bool branch_taken_0x101554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101554u;
        // 0x101558: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101554) {
            ctx->pc = 0x10162Cu;
            goto label_10162c;
        }
    }
    ctx->pc = 0x10155Cu;
label_10155c:
    // 0x10155c: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x10155cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
label_101560:
    // 0x101560: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x101560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_101564:
    // 0x101564: 0x0  nop
    ctx->pc = 0x101564u;
    // NOP
label_101568:
    // 0x101568: 0x8ea30708  lw          $v1, 0x708($s5)
    ctx->pc = 0x101568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1800)));
label_10156c:
    // 0x10156c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10156cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_101570:
    // 0x101570: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x101570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101574:
    // 0x101574: 0xafb20160  sw          $s2, 0x160($sp)
    ctx->pc = 0x101574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 18));
label_101578:
    // 0x101578: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x101578u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10157c:
    // 0x10157c: 0xc041bbc  jal         func_106EF0
label_101580:
    if (ctx->pc == 0x101580u) {
        ctx->pc = 0x101580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10157Cu;
        // 0x101580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101584u;
        goto label_101584;
    }
    ctx->pc = 0x10157Cu;
    SET_GPR_U32(ctx, 31, 0x101584u);
    ctx->pc = 0x101580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10157Cu;
    // 0x101580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106EF0u, 0x10157Cu, 0x101584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101584u;
label_101584:
    // 0x101584: 0xc041472  jal         func_1051C8
label_101588:
    if (ctx->pc == 0x101588u) {
        ctx->pc = 0x101588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101584u;
        // 0x101588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10158Cu;
        goto label_10158c;
    }
    ctx->pc = 0x101584u;
    SET_GPR_U32(ctx, 31, 0x10158Cu);
    ctx->pc = 0x101588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101584u;
    // 0x101588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x101584u, 0x10158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10158Cu;
label_10158c:
    // 0x10158c: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x10158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_101590:
    // 0x101590: 0xc0f620c  jal         func_3D8830
label_101594:
    if (ctx->pc == 0x101594u) {
        ctx->pc = 0x101594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101590u;
        // 0x101594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101598u;
        goto label_101598;
    }
    ctx->pc = 0x101590u;
    SET_GPR_U32(ctx, 31, 0x101598u);
    ctx->pc = 0x101594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101590u;
    // 0x101594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x101590u, 0x101598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101598u;
label_101598:
    // 0x101598: 0x92430022  lbu         $v1, 0x22($s2)
    ctx->pc = 0x101598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_10159c:
    // 0x10159c: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
label_1015a0:
    if (ctx->pc == 0x1015A0u) {
        ctx->pc = 0x1015A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10159Cu;
        // 0x1015a0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015A4u;
        goto label_1015a4;
    }
    ctx->pc = 0x10159Cu;
    {
        const bool branch_taken_0x10159c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10159c) {
            ctx->pc = 0x1015A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10159Cu;
            // 0x1015a0: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101618u;
            goto label_101618;
        }
    }
    ctx->pc = 0x1015A4u;
label_1015a4:
    // 0x1015a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1015a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1015a8:
    // 0x1015a8: 0xc04147a  jal         func_1051E8
label_1015ac:
    if (ctx->pc == 0x1015ACu) {
        ctx->pc = 0x1015ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015A8u;
        // 0x1015ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015B0u;
        goto label_1015b0;
    }
    ctx->pc = 0x1015A8u;
    SET_GPR_U32(ctx, 31, 0x1015B0u);
    ctx->pc = 0x1015ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015A8u;
    // 0x1015ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1015A8u, 0x1015B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015B0u;
label_1015b0:
    // 0x1015b0: 0xc041472  jal         func_1051C8
label_1015b4:
    if (ctx->pc == 0x1015B4u) {
        ctx->pc = 0x1015B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015B0u;
        // 0x1015b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015B8u;
        goto label_1015b8;
    }
    ctx->pc = 0x1015B0u;
    SET_GPR_U32(ctx, 31, 0x1015B8u);
    ctx->pc = 0x1015B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015B0u;
    // 0x1015b4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1015B0u, 0x1015B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015B8u;
label_1015b8:
    // 0x1015b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1015b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1015bc:
    // 0x1015bc: 0xc041472  jal         func_1051C8
label_1015c0:
    if (ctx->pc == 0x1015C0u) {
        ctx->pc = 0x1015C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015BCu;
        // 0x1015c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015C4u;
        goto label_1015c4;
    }
    ctx->pc = 0x1015BCu;
    SET_GPR_U32(ctx, 31, 0x1015C4u);
    ctx->pc = 0x1015C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015BCu;
    // 0x1015c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1015BCu, 0x1015C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015C4u;
label_1015c4:
    // 0x1015c4: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
label_1015c8:
    if (ctx->pc == 0x1015C8u) {
        ctx->pc = 0x1015C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015C4u;
        // 0x1015c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015CCu;
        goto label_1015cc;
    }
    ctx->pc = 0x1015C4u;
    {
        const bool branch_taken_0x1015c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1015C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015C4u;
        // 0x1015c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015c4) {
            ctx->pc = 0x101600u;
            goto label_101600;
        }
    }
    ctx->pc = 0x1015CCu;
label_1015cc:
    // 0x1015cc: 0xc04147a  jal         func_1051E8
label_1015d0:
    if (ctx->pc == 0x1015D0u) {
        ctx->pc = 0x1015D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015CCu;
        // 0x1015d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015D4u;
        goto label_1015d4;
    }
    ctx->pc = 0x1015CCu;
    SET_GPR_U32(ctx, 31, 0x1015D4u);
    ctx->pc = 0x1015D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015CCu;
    // 0x1015d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1015CCu, 0x1015D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015D4u;
label_1015d4:
    // 0x1015d4: 0x90500014  lbu         $s0, 0x14($v0)
    ctx->pc = 0x1015d4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_1015d8:
    // 0x1015d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1015d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1015dc:
    // 0x1015dc: 0x10887a  dsrl        $s1, $s0, 1
    ctx->pc = 0x1015dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) >> 1);
label_1015e0:
    // 0x1015e0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1015e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1015e4:
    // 0x1015e4: 0xc041472  jal         func_1051C8
label_1015e8:
    if (ctx->pc == 0x1015E8u) {
        ctx->pc = 0x1015E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015E4u;
        // 0x1015e8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1015ECu;
        goto label_1015ec;
    }
    ctx->pc = 0x1015E4u;
    SET_GPR_U32(ctx, 31, 0x1015ECu);
    ctx->pc = 0x1015E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015E4u;
    // 0x1015e8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1015E4u, 0x1015ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1015ECu;
label_1015ec:
    // 0x1015ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1015ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1015f0:
    // 0x1015f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1015f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1015f4:
    // 0x1015f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1015f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1015f8:
    // 0x1015f8: 0xc0412d2  jal         func_104B48
label_1015fc:
    if (ctx->pc == 0x1015FCu) {
        ctx->pc = 0x1015FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015F8u;
        // 0x1015fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101600u;
        goto label_101600;
    }
    ctx->pc = 0x1015F8u;
    SET_GPR_U32(ctx, 31, 0x101600u);
    ctx->pc = 0x1015FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1015F8u;
    // 0x1015fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B48u, 0x1015F8u, 0x101600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101600u;
label_101600:
    // 0x101600: 0x92420022  lbu         $v0, 0x22($s2)
    ctx->pc = 0x101600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
label_101604:
    // 0x101604: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_101608:
    // 0x101608: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x101608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10160c:
    // 0x10160c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_101610:
    if (ctx->pc == 0x101610u) {
        ctx->pc = 0x101610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10160Cu;
        // 0x101610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101614u;
        goto label_101614;
    }
    ctx->pc = 0x10160Cu;
    {
        const bool branch_taken_0x10160c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10160Cu;
        // 0x101610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10160c) {
            ctx->pc = 0x1015A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1015a8;
        }
    }
    ctx->pc = 0x101614u;
label_101614:
    // 0x101614: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x101614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_101618:
    // 0x101618: 0x8fb20160  lw          $s2, 0x160($sp)
    ctx->pc = 0x101618u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_10161c:
    // 0x10161c: 0x8c820700  lw          $v0, 0x700($a0)
    ctx->pc = 0x10161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1792)));
label_101620:
    // 0x101620: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x101620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101624:
    // 0x101624: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_101628:
    if (ctx->pc == 0x101628u) {
        ctx->pc = 0x101628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101624u;
        // 0x101628: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10162Cu;
        goto label_10162c;
    }
    ctx->pc = 0x101624u;
    {
        const bool branch_taken_0x101624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101624u;
        // 0x101628: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101624) {
            ctx->pc = 0x101568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101568;
        }
    }
    ctx->pc = 0x10162Cu;
label_10162c:
    // 0x10162c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_101630:
    // 0x101630: 0x97a50010  lhu         $a1, 0x10($sp)
    ctx->pc = 0x101630u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_101634:
    // 0x101634: 0x24442d90  addiu       $a0, $v0, 0x2D90
    ctx->pc = 0x101634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11664));
label_101638:
    // 0x101638: 0xc0f63d2  jal         func_3D8F48
label_10163c:
    if (ctx->pc == 0x10163Cu) {
        ctx->pc = 0x10163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101638u;
        // 0x10163c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101640u;
        goto label_101640;
    }
    ctx->pc = 0x101638u;
    SET_GPR_U32(ctx, 31, 0x101640u);
    ctx->pc = 0x10163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101638u;
    // 0x10163c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8F48u, 0x101638u, 0x101640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101640u;
label_101640:
    // 0x101640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101644:
    // 0x101644: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_101648:
    if (ctx->pc == 0x101648u) {
        ctx->pc = 0x101648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101644u;
        // 0x101648: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10164Cu;
        goto label_10164c;
    }
    ctx->pc = 0x101644u;
    {
        const bool branch_taken_0x101644 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101644u;
        // 0x101648: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101644) {
            ctx->pc = 0x101694u;
            goto label_101694;
        }
    }
    ctx->pc = 0x10164Cu;
label_10164c:
    // 0x10164c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x10164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_101650:
    // 0x101650: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x101650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101654:
    // 0x101654: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_101658:
    if (ctx->pc == 0x101658u) {
        ctx->pc = 0x101658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101654u;
        // 0x101658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10165Cu;
        goto label_10165c;
    }
    ctx->pc = 0x101654u;
    {
        const bool branch_taken_0x101654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101654u;
        // 0x101658: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101654) {
            ctx->pc = 0x101660u;
            goto label_101660;
        }
    }
    ctx->pc = 0x10165Cu;
label_10165c:
    // 0x10165c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10165cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_101660:
    // 0x101660: 0xc0f6374  jal         func_3D8DD0
label_101664:
    if (ctx->pc == 0x101664u) {
        ctx->pc = 0x101664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101660u;
        // 0x101664: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101668u;
        goto label_101668;
    }
    ctx->pc = 0x101660u;
    SET_GPR_U32(ctx, 31, 0x101668u);
    ctx->pc = 0x101664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101660u;
    // 0x101664: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DD0u, 0x101660u, 0x101668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101668u;
label_101668:
    // 0x101668: 0xc040a60  jal         func_102980
label_10166c:
    if (ctx->pc == 0x10166Cu) {
        ctx->pc = 0x10166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101668u;
        // 0x10166c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101670u;
        goto label_101670;
    }
    ctx->pc = 0x101668u;
    SET_GPR_U32(ctx, 31, 0x101670u);
    ctx->pc = 0x10166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101668u;
    // 0x10166c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102980u, 0x101668u, 0x101670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101670u;
label_101670:
    // 0x101670: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x101670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_101674:
    // 0x101674: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x101674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101678:
    // 0x101678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x101678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10167c:
    // 0x10167c: 0xc0f6564  jal         func_3D9590
label_101680:
    if (ctx->pc == 0x101680u) {
        ctx->pc = 0x101680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10167Cu;
        // 0x101680: 0x24642d90  addiu       $a0, $v1, 0x2D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101684u;
        goto label_101684;
    }
    ctx->pc = 0x10167Cu;
    SET_GPR_U32(ctx, 31, 0x101684u);
    ctx->pc = 0x101680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10167Cu;
    // 0x101680: 0x24642d90  addiu       $a0, $v1, 0x2D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9590u, 0x10167Cu, 0x101684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101684u;
label_101684:
    // 0x101684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101688:
    // 0x101688: 0x1c40fff1  bgtz        $v0, . + 4 + (-0xF << 2)
label_10168c:
    if (ctx->pc == 0x10168Cu) {
        ctx->pc = 0x10168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101688u;
        // 0x10168c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101690u;
        goto label_101690;
    }
    ctx->pc = 0x101688u;
    {
        const bool branch_taken_0x101688 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x10168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101688u;
        // 0x10168c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101688) {
            ctx->pc = 0x101650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101650;
        }
    }
    ctx->pc = 0x101690u;
label_101690:
    // 0x101690: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x101690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_101694:
    // 0x101694: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x101694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101698:
    // 0x101698: 0x24442d90  addiu       $a0, $v0, 0x2D90
    ctx->pc = 0x101698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11664));
label_10169c:
    // 0x10169c: 0xc0f657c  jal         func_3D95F0
label_1016a0:
    if (ctx->pc == 0x1016A0u) {
        ctx->pc = 0x1016A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10169Cu;
        // 0x1016a0: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016A4u;
        goto label_1016a4;
    }
    ctx->pc = 0x10169Cu;
    SET_GPR_U32(ctx, 31, 0x1016A4u);
    ctx->pc = 0x1016A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10169Cu;
    // 0x1016a0: 0x241500ff  addiu       $s5, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D95F0u, 0x10169Cu, 0x1016A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016A4u;
label_1016a4:
    // 0x1016a4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1016a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_1016a8:
    // 0x1016a8: 0xa3a00140  sb          $zero, 0x140($sp)
    ctx->pc = 0x1016a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 320), (uint8_t)GPR_U32(ctx, 0));
label_1016ac:
    // 0x1016ac: 0x10000018  b           . + 4 + (0x18 << 2)
label_1016b0:
    if (ctx->pc == 0x1016B0u) {
        ctx->pc = 0x1016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ACu;
        // 0x1016b0: 0x24548e98  addiu       $s4, $v0, -0x7168 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016B4u;
        goto label_1016b4;
    }
    ctx->pc = 0x1016ACu;
    {
        const bool branch_taken_0x1016ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ACu;
        // 0x1016b0: 0x24548e98  addiu       $s4, $v0, -0x7168 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016ac) {
            ctx->pc = 0x101710u;
            goto label_101710;
        }
    }
    ctx->pc = 0x1016B4u;
label_1016b4:
    // 0x1016b4: 0x0  nop
    ctx->pc = 0x1016b4u;
    // NOP
label_1016b8:
    // 0x1016b8: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1016b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_1016bc:
    // 0x1016bc: 0x93a30140  lbu         $v1, 0x140($sp)
    ctx->pc = 0x1016bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
label_1016c0:
    // 0x1016c0: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1016c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1016c4:
    // 0x1016c4: 0x14720004  bne         $v1, $s2, . + 4 + (0x4 << 2)
label_1016c8:
    if (ctx->pc == 0x1016C8u) {
        ctx->pc = 0x1016C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016C4u;
        // 0x1016c8: 0xa6150000  sh          $s5, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016CCu;
        goto label_1016cc;
    }
    ctx->pc = 0x1016C4u;
    {
        const bool branch_taken_0x1016c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1016C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016C4u;
        // 0x1016c8: 0xa6150000  sh          $s5, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016c4) {
            ctx->pc = 0x1016D8u;
            goto label_1016d8;
        }
    }
    ctx->pc = 0x1016CCu;
label_1016cc:
    // 0x1016cc: 0xc0f659c  jal         func_3D9670
label_1016d0:
    if (ctx->pc == 0x1016D0u) {
        ctx->pc = 0x1016D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016CCu;
        // 0x1016d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016D4u;
        goto label_1016d4;
    }
    ctx->pc = 0x1016CCu;
    SET_GPR_U32(ctx, 31, 0x1016D4u);
    ctx->pc = 0x1016D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016CCu;
    // 0x1016d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9670u, 0x1016CCu, 0x1016D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016D4u;
label_1016d4:
    // 0x1016d4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1016d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1016d8:
    // 0x1016d8: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x1016d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1016dc:
    // 0x1016dc: 0x93a20140  lbu         $v0, 0x140($sp)
    ctx->pc = 0x1016dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
label_1016e0:
    // 0x1016e0: 0x1452000a  bne         $v0, $s2, . + 4 + (0xA << 2)
label_1016e4:
    if (ctx->pc == 0x1016E4u) {
        ctx->pc = 0x1016E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016E0u;
        // 0x1016e4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016E8u;
        goto label_1016e8;
    }
    ctx->pc = 0x1016E0u;
    {
        const bool branch_taken_0x1016e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1016E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016E0u;
        // 0x1016e4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016e0) {
            ctx->pc = 0x10170Cu;
            goto label_10170c;
        }
    }
    ctx->pc = 0x1016E8u;
label_1016e8:
    // 0x1016e8: 0x24702d90  addiu       $s0, $v1, 0x2D90
    ctx->pc = 0x1016e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11664));
label_1016ec:
    // 0x1016ec: 0xc0f659e  jal         func_3D9678
label_1016f0:
    if (ctx->pc == 0x1016F0u) {
        ctx->pc = 0x1016F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ECu;
        // 0x1016f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016F4u;
        goto label_1016f4;
    }
    ctx->pc = 0x1016ECu;
    SET_GPR_U32(ctx, 31, 0x1016F4u);
    ctx->pc = 0x1016F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016ECu;
    // 0x1016f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9678u, 0x1016ECu, 0x1016F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016F4u;
label_1016f4:
    // 0x1016f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1016f8:
    if (ctx->pc == 0x1016F8u) {
        ctx->pc = 0x1016F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016F4u;
        // 0x1016f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1016FCu;
        goto label_1016fc;
    }
    ctx->pc = 0x1016F4u;
    {
        const bool branch_taken_0x1016f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016F4u;
        // 0x1016f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016f4) {
            ctx->pc = 0x10170Cu;
            goto label_10170c;
        }
    }
    ctx->pc = 0x1016FCu;
label_1016fc:
    // 0x1016fc: 0xc0f658a  jal         func_3D9628
label_101700:
    if (ctx->pc == 0x101700u) {
        ctx->pc = 0x101700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016FCu;
        // 0x101700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101704u;
        goto label_101704;
    }
    ctx->pc = 0x1016FCu;
    SET_GPR_U32(ctx, 31, 0x101704u);
    ctx->pc = 0x101700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1016FCu;
    // 0x101700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9628u, 0x1016FCu, 0x101704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101704u;
label_101704:
    // 0x101704: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_101708:
    if (ctx->pc == 0x101708u) {
        ctx->pc = 0x101708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101704u;
        // 0x101708: 0x93a20140  lbu         $v0, 0x140($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10170Cu;
        goto label_10170c;
    }
    ctx->pc = 0x101704u;
    {
        const bool branch_taken_0x101704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101704u;
        // 0x101708: 0x93a20140  lbu         $v0, 0x140($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101704) {
            ctx->pc = 0x1016E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1016e0;
        }
    }
    ctx->pc = 0x10170Cu;
label_10170c:
    // 0x10170c: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x10170cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_101710:
    // 0x101710: 0x2e42001b  sltiu       $v0, $s2, 0x1B
    ctx->pc = 0x101710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
label_101714:
    // 0x101714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_101718:
    if (ctx->pc == 0x101718u) {
        ctx->pc = 0x101718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101714u;
        // 0x101718: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10171Cu;
        goto label_10171c;
    }
    ctx->pc = 0x101714u;
    {
        const bool branch_taken_0x101714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101714u;
        // 0x101718: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101714) {
            ctx->pc = 0x101734u;
            goto label_101734;
        }
    }
    ctx->pc = 0x10171Cu;
label_10171c:
    // 0x10171c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x10171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_101720:
    // 0x101720: 0x24912d90  addiu       $s1, $a0, 0x2D90
    ctx->pc = 0x101720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 11664));
label_101724:
    // 0x101724: 0xc0f658a  jal         func_3D9628
label_101728:
    if (ctx->pc == 0x101728u) {
        ctx->pc = 0x101728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101724u;
        // 0x101728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10172Cu;
        goto label_10172c;
    }
    ctx->pc = 0x101724u;
    SET_GPR_U32(ctx, 31, 0x10172Cu);
    ctx->pc = 0x101728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101724u;
    // 0x101728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9628u, 0x101724u, 0x10172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10172Cu;
label_10172c:
    // 0x10172c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_101730:
    if (ctx->pc == 0x101730u) {
        ctx->pc = 0x101730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10172Cu;
        // 0x101730: 0x27b30140  addiu       $s3, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101734u;
        goto label_101734;
    }
    ctx->pc = 0x10172Cu;
    {
        const bool branch_taken_0x10172c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10172Cu;
        // 0x101730: 0x27b30140  addiu       $s3, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10172c) {
            ctx->pc = 0x1016B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1016b8;
        }
    }
    ctx->pc = 0x101734u;
label_101734:
    // 0x101734: 0xc0b2524  jal         func_2C9490
label_101738:
    if (ctx->pc == 0x101738u) {
        ctx->pc = 0x101738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101734u;
        // 0x101738: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10173Cu;
        goto label_10173c;
    }
    ctx->pc = 0x101734u;
    SET_GPR_U32(ctx, 31, 0x10173Cu);
    ctx->pc = 0x101738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101734u;
    // 0x101738: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x101734u, 0x10173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10173Cu;
label_10173c:
    // 0x10173c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x10173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_101740:
    // 0x101740: 0xc0d7412  jal         func_35D048
label_101744:
    if (ctx->pc == 0x101744u) {
        ctx->pc = 0x101744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101740u;
        // 0x101744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101748u;
        goto label_101748;
    }
    ctx->pc = 0x101740u;
    SET_GPR_U32(ctx, 31, 0x101748u);
    ctx->pc = 0x101744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101740u;
    // 0x101744: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x101740u, 0x101748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101748u;
label_101748:
    // 0x101748: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x101748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_10174c:
    // 0x10174c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_101750:
    if (ctx->pc == 0x101750u) {
        ctx->pc = 0x101750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10174Cu;
        // 0x101750: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101754u;
        goto label_101754;
    }
    ctx->pc = 0x10174Cu;
    {
        const bool branch_taken_0x10174c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10174Cu;
        // 0x101750: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10174c) {
            ctx->pc = 0x101770u;
            goto label_101770;
        }
    }
    ctx->pc = 0x101754u;
label_101754:
    // 0x101754: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x101754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_101758:
    // 0x101758: 0xc0f6374  jal         func_3D8DD0
label_10175c:
    if (ctx->pc == 0x10175Cu) {
        ctx->pc = 0x10175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101758u;
        // 0x10175c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101760u;
        goto label_101760;
    }
    ctx->pc = 0x101758u;
    SET_GPR_U32(ctx, 31, 0x101760u);
    ctx->pc = 0x10175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101758u;
    // 0x10175c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8DD0u, 0x101758u, 0x101760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101760u;
label_101760:
    // 0x101760: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x101760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_101764:
    // 0x101764: 0x0  nop
    ctx->pc = 0x101764u;
    // NOP
label_101768:
    // 0x101768: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_10176c:
    if (ctx->pc == 0x10176Cu) {
        ctx->pc = 0x10176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101768u;
        // 0x10176c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101770u;
        goto label_101770;
    }
    ctx->pc = 0x101768u;
    {
        const bool branch_taken_0x101768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101768u;
        // 0x10176c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101768) {
            ctx->pc = 0x101758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101758;
        }
    }
    ctx->pc = 0x101770u;
label_101770:
    // 0x101770: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x101770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_101774:
    // 0x101774: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x101774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_101778:
    // 0x101778: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x101778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_10177c:
    // 0x10177c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_101780:
    // 0x101780: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x101780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_101784:
    // 0x101784: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x101784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_101788:
    // 0x101788: 0xc0d7412  jal         func_35D048
label_10178c:
    if (ctx->pc == 0x10178Cu) {
        ctx->pc = 0x101790u;
        goto label_101790;
    }
    ctx->pc = 0x101788u;
    SET_GPR_U32(ctx, 31, 0x101790u);
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x101788u, 0x101790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101790u;
label_101790:
    // 0x101790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101794:
    // 0x101794: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x101794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_101798:
    // 0x101798: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x101798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_10179c:
    // 0x10179c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x10179cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_1017a0:
    // 0x1017a0: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x1017a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_1017a4:
    // 0x1017a4: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x1017a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_1017a8:
    // 0x1017a8: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x1017a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_1017ac:
    // 0x1017ac: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x1017acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_1017b0:
    // 0x1017b0: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x1017b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
label_1017b4:
    // 0x1017b4: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x1017b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_1017b8:
    // 0x1017b8: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x1017b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_1017bc:
    // 0x1017bc: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x1017bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1017c0:
    // 0x1017c0: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x1017c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1017c4:
    // 0x1017c4: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x1017c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1017c8:
    // 0x1017c8: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x1017c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1017cc:
    // 0x1017cc: 0x3e00008  jr          $ra
label_1017d0:
    if (ctx->pc == 0x1017D0u) {
        ctx->pc = 0x1017D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017CCu;
        // 0x1017d0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1017D4u;
        goto label_1017d4;
    }
    ctx->pc = 0x1017CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1017D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017CCu;
        // 0x1017d0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1017CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1017D4u;
label_1017d4:
    // 0x1017d4: 0x0  nop
    ctx->pc = 0x1017d4u;
    // NOP
    ctx->pc = 0x1017d8u;
}
