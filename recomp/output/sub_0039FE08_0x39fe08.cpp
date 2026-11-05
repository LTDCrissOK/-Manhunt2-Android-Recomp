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

// Function: sub_0039FE08
// Address: 0x39fe08 - 0x3a02e0
void sub_0039FE08_0x39fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FE08_0x39fe08");
#endif

    switch (ctx->pc) {
        case 0x39fe08u: goto label_39fe08;
        case 0x39fe0cu: goto label_39fe0c;
        case 0x39fe10u: goto label_39fe10;
        case 0x39fe14u: goto label_39fe14;
        case 0x39fe18u: goto label_39fe18;
        case 0x39fe1cu: goto label_39fe1c;
        case 0x39fe20u: goto label_39fe20;
        case 0x39fe24u: goto label_39fe24;
        case 0x39fe28u: goto label_39fe28;
        case 0x39fe2cu: goto label_39fe2c;
        case 0x39fe30u: goto label_39fe30;
        case 0x39fe34u: goto label_39fe34;
        case 0x39fe38u: goto label_39fe38;
        case 0x39fe3cu: goto label_39fe3c;
        case 0x39fe40u: goto label_39fe40;
        case 0x39fe44u: goto label_39fe44;
        case 0x39fe48u: goto label_39fe48;
        case 0x39fe4cu: goto label_39fe4c;
        case 0x39fe50u: goto label_39fe50;
        case 0x39fe54u: goto label_39fe54;
        case 0x39fe58u: goto label_39fe58;
        case 0x39fe5cu: goto label_39fe5c;
        case 0x39fe60u: goto label_39fe60;
        case 0x39fe64u: goto label_39fe64;
        case 0x39fe68u: goto label_39fe68;
        case 0x39fe6cu: goto label_39fe6c;
        case 0x39fe70u: goto label_39fe70;
        case 0x39fe74u: goto label_39fe74;
        case 0x39fe78u: goto label_39fe78;
        case 0x39fe7cu: goto label_39fe7c;
        case 0x39fe80u: goto label_39fe80;
        case 0x39fe84u: goto label_39fe84;
        case 0x39fe88u: goto label_39fe88;
        case 0x39fe8cu: goto label_39fe8c;
        case 0x39fe90u: goto label_39fe90;
        case 0x39fe94u: goto label_39fe94;
        case 0x39fe98u: goto label_39fe98;
        case 0x39fe9cu: goto label_39fe9c;
        case 0x39fea0u: goto label_39fea0;
        case 0x39fea4u: goto label_39fea4;
        case 0x39fea8u: goto label_39fea8;
        case 0x39feacu: goto label_39feac;
        case 0x39feb0u: goto label_39feb0;
        case 0x39feb4u: goto label_39feb4;
        case 0x39feb8u: goto label_39feb8;
        case 0x39febcu: goto label_39febc;
        case 0x39fec0u: goto label_39fec0;
        case 0x39fec4u: goto label_39fec4;
        case 0x39fec8u: goto label_39fec8;
        case 0x39feccu: goto label_39fecc;
        case 0x39fed0u: goto label_39fed0;
        case 0x39fed4u: goto label_39fed4;
        case 0x39fed8u: goto label_39fed8;
        case 0x39fedcu: goto label_39fedc;
        case 0x39fee0u: goto label_39fee0;
        case 0x39fee4u: goto label_39fee4;
        case 0x39fee8u: goto label_39fee8;
        case 0x39feecu: goto label_39feec;
        case 0x39fef0u: goto label_39fef0;
        case 0x39fef4u: goto label_39fef4;
        case 0x39fef8u: goto label_39fef8;
        case 0x39fefcu: goto label_39fefc;
        case 0x39ff00u: goto label_39ff00;
        case 0x39ff04u: goto label_39ff04;
        case 0x39ff08u: goto label_39ff08;
        case 0x39ff0cu: goto label_39ff0c;
        case 0x39ff10u: goto label_39ff10;
        case 0x39ff14u: goto label_39ff14;
        case 0x39ff18u: goto label_39ff18;
        case 0x39ff1cu: goto label_39ff1c;
        case 0x39ff20u: goto label_39ff20;
        case 0x39ff24u: goto label_39ff24;
        case 0x39ff28u: goto label_39ff28;
        case 0x39ff2cu: goto label_39ff2c;
        case 0x39ff30u: goto label_39ff30;
        case 0x39ff34u: goto label_39ff34;
        case 0x39ff38u: goto label_39ff38;
        case 0x39ff3cu: goto label_39ff3c;
        case 0x39ff40u: goto label_39ff40;
        case 0x39ff44u: goto label_39ff44;
        case 0x39ff48u: goto label_39ff48;
        case 0x39ff4cu: goto label_39ff4c;
        case 0x39ff50u: goto label_39ff50;
        case 0x39ff54u: goto label_39ff54;
        case 0x39ff58u: goto label_39ff58;
        case 0x39ff5cu: goto label_39ff5c;
        case 0x39ff60u: goto label_39ff60;
        case 0x39ff64u: goto label_39ff64;
        case 0x39ff68u: goto label_39ff68;
        case 0x39ff6cu: goto label_39ff6c;
        case 0x39ff70u: goto label_39ff70;
        case 0x39ff74u: goto label_39ff74;
        case 0x39ff78u: goto label_39ff78;
        case 0x39ff7cu: goto label_39ff7c;
        case 0x39ff80u: goto label_39ff80;
        case 0x39ff84u: goto label_39ff84;
        case 0x39ff88u: goto label_39ff88;
        case 0x39ff8cu: goto label_39ff8c;
        case 0x39ff90u: goto label_39ff90;
        case 0x39ff94u: goto label_39ff94;
        case 0x39ff98u: goto label_39ff98;
        case 0x39ff9cu: goto label_39ff9c;
        case 0x39ffa0u: goto label_39ffa0;
        case 0x39ffa4u: goto label_39ffa4;
        case 0x39ffa8u: goto label_39ffa8;
        case 0x39ffacu: goto label_39ffac;
        case 0x39ffb0u: goto label_39ffb0;
        case 0x39ffb4u: goto label_39ffb4;
        case 0x39ffb8u: goto label_39ffb8;
        case 0x39ffbcu: goto label_39ffbc;
        case 0x39ffc0u: goto label_39ffc0;
        case 0x39ffc4u: goto label_39ffc4;
        case 0x39ffc8u: goto label_39ffc8;
        case 0x39ffccu: goto label_39ffcc;
        case 0x39ffd0u: goto label_39ffd0;
        case 0x39ffd4u: goto label_39ffd4;
        case 0x39ffd8u: goto label_39ffd8;
        case 0x39ffdcu: goto label_39ffdc;
        case 0x39ffe0u: goto label_39ffe0;
        case 0x39ffe4u: goto label_39ffe4;
        case 0x39ffe8u: goto label_39ffe8;
        case 0x39ffecu: goto label_39ffec;
        case 0x39fff0u: goto label_39fff0;
        case 0x39fff4u: goto label_39fff4;
        case 0x39fff8u: goto label_39fff8;
        case 0x39fffcu: goto label_39fffc;
        case 0x3a0000u: goto label_3a0000;
        case 0x3a0004u: goto label_3a0004;
        case 0x3a0008u: goto label_3a0008;
        case 0x3a000cu: goto label_3a000c;
        case 0x3a0010u: goto label_3a0010;
        case 0x3a0014u: goto label_3a0014;
        case 0x3a0018u: goto label_3a0018;
        case 0x3a001cu: goto label_3a001c;
        case 0x3a0020u: goto label_3a0020;
        case 0x3a0024u: goto label_3a0024;
        case 0x3a0028u: goto label_3a0028;
        case 0x3a002cu: goto label_3a002c;
        case 0x3a0030u: goto label_3a0030;
        case 0x3a0034u: goto label_3a0034;
        case 0x3a0038u: goto label_3a0038;
        case 0x3a003cu: goto label_3a003c;
        case 0x3a0040u: goto label_3a0040;
        case 0x3a0044u: goto label_3a0044;
        case 0x3a0048u: goto label_3a0048;
        case 0x3a004cu: goto label_3a004c;
        case 0x3a0050u: goto label_3a0050;
        case 0x3a0054u: goto label_3a0054;
        case 0x3a0058u: goto label_3a0058;
        case 0x3a005cu: goto label_3a005c;
        case 0x3a0060u: goto label_3a0060;
        case 0x3a0064u: goto label_3a0064;
        case 0x3a0068u: goto label_3a0068;
        case 0x3a006cu: goto label_3a006c;
        case 0x3a0070u: goto label_3a0070;
        case 0x3a0074u: goto label_3a0074;
        case 0x3a0078u: goto label_3a0078;
        case 0x3a007cu: goto label_3a007c;
        case 0x3a0080u: goto label_3a0080;
        case 0x3a0084u: goto label_3a0084;
        case 0x3a0088u: goto label_3a0088;
        case 0x3a008cu: goto label_3a008c;
        case 0x3a0090u: goto label_3a0090;
        case 0x3a0094u: goto label_3a0094;
        case 0x3a0098u: goto label_3a0098;
        case 0x3a009cu: goto label_3a009c;
        case 0x3a00a0u: goto label_3a00a0;
        case 0x3a00a4u: goto label_3a00a4;
        case 0x3a00a8u: goto label_3a00a8;
        case 0x3a00acu: goto label_3a00ac;
        case 0x3a00b0u: goto label_3a00b0;
        case 0x3a00b4u: goto label_3a00b4;
        case 0x3a00b8u: goto label_3a00b8;
        case 0x3a00bcu: goto label_3a00bc;
        case 0x3a00c0u: goto label_3a00c0;
        case 0x3a00c4u: goto label_3a00c4;
        case 0x3a00c8u: goto label_3a00c8;
        case 0x3a00ccu: goto label_3a00cc;
        case 0x3a00d0u: goto label_3a00d0;
        case 0x3a00d4u: goto label_3a00d4;
        case 0x3a00d8u: goto label_3a00d8;
        case 0x3a00dcu: goto label_3a00dc;
        case 0x3a00e0u: goto label_3a00e0;
        case 0x3a00e4u: goto label_3a00e4;
        case 0x3a00e8u: goto label_3a00e8;
        case 0x3a00ecu: goto label_3a00ec;
        case 0x3a00f0u: goto label_3a00f0;
        case 0x3a00f4u: goto label_3a00f4;
        case 0x3a00f8u: goto label_3a00f8;
        case 0x3a00fcu: goto label_3a00fc;
        case 0x3a0100u: goto label_3a0100;
        case 0x3a0104u: goto label_3a0104;
        case 0x3a0108u: goto label_3a0108;
        case 0x3a010cu: goto label_3a010c;
        case 0x3a0110u: goto label_3a0110;
        case 0x3a0114u: goto label_3a0114;
        case 0x3a0118u: goto label_3a0118;
        case 0x3a011cu: goto label_3a011c;
        case 0x3a0120u: goto label_3a0120;
        case 0x3a0124u: goto label_3a0124;
        case 0x3a0128u: goto label_3a0128;
        case 0x3a012cu: goto label_3a012c;
        case 0x3a0130u: goto label_3a0130;
        case 0x3a0134u: goto label_3a0134;
        case 0x3a0138u: goto label_3a0138;
        case 0x3a013cu: goto label_3a013c;
        case 0x3a0140u: goto label_3a0140;
        case 0x3a0144u: goto label_3a0144;
        case 0x3a0148u: goto label_3a0148;
        case 0x3a014cu: goto label_3a014c;
        case 0x3a0150u: goto label_3a0150;
        case 0x3a0154u: goto label_3a0154;
        case 0x3a0158u: goto label_3a0158;
        case 0x3a015cu: goto label_3a015c;
        case 0x3a0160u: goto label_3a0160;
        case 0x3a0164u: goto label_3a0164;
        case 0x3a0168u: goto label_3a0168;
        case 0x3a016cu: goto label_3a016c;
        case 0x3a0170u: goto label_3a0170;
        case 0x3a0174u: goto label_3a0174;
        case 0x3a0178u: goto label_3a0178;
        case 0x3a017cu: goto label_3a017c;
        case 0x3a0180u: goto label_3a0180;
        case 0x3a0184u: goto label_3a0184;
        case 0x3a0188u: goto label_3a0188;
        case 0x3a018cu: goto label_3a018c;
        case 0x3a0190u: goto label_3a0190;
        case 0x3a0194u: goto label_3a0194;
        case 0x3a0198u: goto label_3a0198;
        case 0x3a019cu: goto label_3a019c;
        case 0x3a01a0u: goto label_3a01a0;
        case 0x3a01a4u: goto label_3a01a4;
        case 0x3a01a8u: goto label_3a01a8;
        case 0x3a01acu: goto label_3a01ac;
        case 0x3a01b0u: goto label_3a01b0;
        case 0x3a01b4u: goto label_3a01b4;
        case 0x3a01b8u: goto label_3a01b8;
        case 0x3a01bcu: goto label_3a01bc;
        case 0x3a01c0u: goto label_3a01c0;
        case 0x3a01c4u: goto label_3a01c4;
        case 0x3a01c8u: goto label_3a01c8;
        case 0x3a01ccu: goto label_3a01cc;
        case 0x3a01d0u: goto label_3a01d0;
        case 0x3a01d4u: goto label_3a01d4;
        case 0x3a01d8u: goto label_3a01d8;
        case 0x3a01dcu: goto label_3a01dc;
        case 0x3a01e0u: goto label_3a01e0;
        case 0x3a01e4u: goto label_3a01e4;
        case 0x3a01e8u: goto label_3a01e8;
        case 0x3a01ecu: goto label_3a01ec;
        case 0x3a01f0u: goto label_3a01f0;
        case 0x3a01f4u: goto label_3a01f4;
        case 0x3a01f8u: goto label_3a01f8;
        case 0x3a01fcu: goto label_3a01fc;
        case 0x3a0200u: goto label_3a0200;
        case 0x3a0204u: goto label_3a0204;
        case 0x3a0208u: goto label_3a0208;
        case 0x3a020cu: goto label_3a020c;
        case 0x3a0210u: goto label_3a0210;
        case 0x3a0214u: goto label_3a0214;
        case 0x3a0218u: goto label_3a0218;
        case 0x3a021cu: goto label_3a021c;
        case 0x3a0220u: goto label_3a0220;
        case 0x3a0224u: goto label_3a0224;
        case 0x3a0228u: goto label_3a0228;
        case 0x3a022cu: goto label_3a022c;
        case 0x3a0230u: goto label_3a0230;
        case 0x3a0234u: goto label_3a0234;
        case 0x3a0238u: goto label_3a0238;
        case 0x3a023cu: goto label_3a023c;
        case 0x3a0240u: goto label_3a0240;
        case 0x3a0244u: goto label_3a0244;
        case 0x3a0248u: goto label_3a0248;
        case 0x3a024cu: goto label_3a024c;
        case 0x3a0250u: goto label_3a0250;
        case 0x3a0254u: goto label_3a0254;
        case 0x3a0258u: goto label_3a0258;
        case 0x3a025cu: goto label_3a025c;
        case 0x3a0260u: goto label_3a0260;
        case 0x3a0264u: goto label_3a0264;
        case 0x3a0268u: goto label_3a0268;
        case 0x3a026cu: goto label_3a026c;
        case 0x3a0270u: goto label_3a0270;
        case 0x3a0274u: goto label_3a0274;
        case 0x3a0278u: goto label_3a0278;
        case 0x3a027cu: goto label_3a027c;
        case 0x3a0280u: goto label_3a0280;
        case 0x3a0284u: goto label_3a0284;
        case 0x3a0288u: goto label_3a0288;
        case 0x3a028cu: goto label_3a028c;
        case 0x3a0290u: goto label_3a0290;
        case 0x3a0294u: goto label_3a0294;
        case 0x3a0298u: goto label_3a0298;
        case 0x3a029cu: goto label_3a029c;
        case 0x3a02a0u: goto label_3a02a0;
        case 0x3a02a4u: goto label_3a02a4;
        case 0x3a02a8u: goto label_3a02a8;
        case 0x3a02acu: goto label_3a02ac;
        case 0x3a02b0u: goto label_3a02b0;
        case 0x3a02b4u: goto label_3a02b4;
        case 0x3a02b8u: goto label_3a02b8;
        case 0x3a02bcu: goto label_3a02bc;
        case 0x3a02c0u: goto label_3a02c0;
        case 0x3a02c4u: goto label_3a02c4;
        case 0x3a02c8u: goto label_3a02c8;
        case 0x3a02ccu: goto label_3a02cc;
        case 0x3a02d0u: goto label_3a02d0;
        case 0x3a02d4u: goto label_3a02d4;
        case 0x3a02d8u: goto label_3a02d8;
        case 0x3a02dcu: goto label_3a02dc;
        default: break;
    }

    ctx->pc = 0x39fe08u;

label_39fe08:
    // 0x39fe08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39fe0c:
    // 0x39fe0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_39fe10:
    // 0x39fe10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39fe10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fe14:
    // 0x39fe14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x39fe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_39fe18:
    // 0x39fe18: 0x2614000c  addiu       $s4, $s0, 0xC
    ctx->pc = 0x39fe18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_39fe1c:
    // 0x39fe1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_39fe20:
    // 0x39fe20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_39fe24:
    // 0x39fe24: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x39fe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_39fe28:
    // 0x39fe28: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x39fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_39fe2c:
    // 0x39fe2c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_39fe30:
    if (ctx->pc == 0x39FE30u) {
        ctx->pc = 0x39FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE2Cu;
        // 0x39fe30: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE34u;
        goto label_39fe34;
    }
    ctx->pc = 0x39FE2Cu;
    {
        const bool branch_taken_0x39fe2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE2Cu;
        // 0x39fe30: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe2c) {
            ctx->pc = 0x39FE48u;
            goto label_39fe48;
        }
    }
    ctx->pc = 0x39FE34u;
label_39fe34:
    // 0x39fe34: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39fe38:
    // 0x39fe38: 0xc0ecbf4  jal         func_3B2FD0
label_39fe3c:
    if (ctx->pc == 0x39FE3Cu) {
        ctx->pc = 0x39FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE38u;
        // 0x39fe3c: 0x2484c290  addiu       $a0, $a0, -0x3D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE40u;
        goto label_39fe40;
    }
    ctx->pc = 0x39FE38u;
    SET_GPR_U32(ctx, 31, 0x39FE40u);
    ctx->pc = 0x39FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE38u;
    // 0x39fe3c: 0x2484c290  addiu       $a0, $a0, -0x3D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x39FE38u, 0x39FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE40u;
label_39fe40:
    // 0x39fe40: 0x10000120  b           . + 4 + (0x120 << 2)
label_39fe44:
    if (ctx->pc == 0x39FE44u) {
        ctx->pc = 0x39FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE40u;
        // 0x39fe44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE48u;
        goto label_39fe48;
    }
    ctx->pc = 0x39FE40u;
    {
        const bool branch_taken_0x39fe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE40u;
        // 0x39fe44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe40) {
            ctx->pc = 0x3A02C4u;
            goto label_3a02c4;
        }
    }
    ctx->pc = 0x39FE48u;
label_39fe48:
    // 0x39fe48: 0x82120001  lb          $s2, 0x1($s0)
    ctx->pc = 0x39fe48u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_39fe4c:
    // 0x39fe4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fe50:
    // 0x39fe50: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x39fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_39fe54:
    // 0x39fe54: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x39fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_39fe58:
    // 0x39fe58: 0x164200e2  bne         $s2, $v0, . + 4 + (0xE2 << 2)
label_39fe5c:
    if (ctx->pc == 0x39FE5Cu) {
        ctx->pc = 0x39FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE58u;
        // 0x39fe5c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE60u;
        goto label_39fe60;
    }
    ctx->pc = 0x39FE58u;
    {
        const bool branch_taken_0x39fe58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x39FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE58u;
        // 0x39fe5c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe58) {
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x39FE60u;
label_39fe60:
    // 0x39fe60: 0xc0e819c  jal         func_3A0670
label_39fe64:
    if (ctx->pc == 0x39FE64u) {
        ctx->pc = 0x39FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE60u;
        // 0x39fe64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE68u;
        goto label_39fe68;
    }
    ctx->pc = 0x39FE60u;
    SET_GPR_U32(ctx, 31, 0x39FE68u);
    ctx->pc = 0x39FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE60u;
    // 0x39fe64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0670u, 0x39FE60u, 0x39FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE68u;
label_39fe68:
    // 0x39fe68: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x39fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_39fe6c:
    // 0x39fe6c: 0x144000bc  bnez        $v0, . + 4 + (0xBC << 2)
label_39fe70:
    if (ctx->pc == 0x39FE70u) {
        ctx->pc = 0x39FE74u;
        goto label_39fe74;
    }
    ctx->pc = 0x39FE6Cu;
    {
        const bool branch_taken_0x39fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fe6c) {
            ctx->pc = 0x3A0160u;
            goto label_3a0160;
        }
    }
    ctx->pc = 0x39FE74u;
label_39fe74:
    // 0x39fe74: 0x8e0201e0  lw          $v0, 0x1E0($s0)
    ctx->pc = 0x39fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_39fe78:
    // 0x39fe78: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x39fe78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_39fe7c:
    // 0x39fe7c: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_39fe80:
    if (ctx->pc == 0x39FE80u) {
        ctx->pc = 0x39FE84u;
        goto label_39fe84;
    }
    ctx->pc = 0x39FE7Cu;
    {
        const bool branch_taken_0x39fe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fe7c) {
            ctx->pc = 0x3A00C0u;
            goto label_3a00c0;
        }
    }
    ctx->pc = 0x39FE84u;
label_39fe84:
    // 0x39fe84: 0xc0e66ac  jal         func_399AB0
label_39fe88:
    if (ctx->pc == 0x39FE88u) {
        ctx->pc = 0x39FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE84u;
        // 0x39fe88: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE8Cu;
        goto label_39fe8c;
    }
    ctx->pc = 0x39FE84u;
    SET_GPR_U32(ctx, 31, 0x39FE8Cu);
    ctx->pc = 0x39FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE84u;
    // 0x39fe88: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x39FE84u, 0x39FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE8Cu;
label_39fe8c:
    // 0x39fe8c: 0xc0ecbe4  jal         func_3B2F90
label_39fe90:
    if (ctx->pc == 0x39FE90u) {
        ctx->pc = 0x39FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE8Cu;
        // 0x39fe90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FE94u;
        goto label_39fe94;
    }
    ctx->pc = 0x39FE8Cu;
    SET_GPR_U32(ctx, 31, 0x39FE94u);
    ctx->pc = 0x39FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE8Cu;
    // 0x39fe90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39FE8Cu, 0x39FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FE94u;
label_39fe94:
    // 0x39fe94: 0x820201b2  lb          $v0, 0x1B2($s0)
    ctx->pc = 0x39fe94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
label_39fe98:
    // 0x39fe98: 0x14520009  bne         $v0, $s2, . + 4 + (0x9 << 2)
label_39fe9c:
    if (ctx->pc == 0x39FE9Cu) {
        ctx->pc = 0x39FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE98u;
        // 0x39fe9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEA0u;
        goto label_39fea0;
    }
    ctx->pc = 0x39FE98u;
    {
        const bool branch_taken_0x39fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x39FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE98u;
        // 0x39fe9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe98) {
            ctx->pc = 0x39FEC0u;
            goto label_39fec0;
        }
    }
    ctx->pc = 0x39FEA0u;
label_39fea0:
    // 0x39fea0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_39fea4:
    if (ctx->pc == 0x39FEA4u) {
        ctx->pc = 0x39FEA8u;
        goto label_39fea8;
    }
    ctx->pc = 0x39FEA0u;
    {
        const bool branch_taken_0x39fea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x39fea0) {
            ctx->pc = 0x39FEC0u;
            goto label_39fec0;
        }
    }
    ctx->pc = 0x39FEA8u;
label_39fea8:
    // 0x39fea8: 0xc0ecbea  jal         func_3B2FA8
label_39feac:
    if (ctx->pc == 0x39FEACu) {
        ctx->pc = 0x39FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEA8u;
        // 0x39feac: 0xa20001b2  sb          $zero, 0x1B2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEB0u;
        goto label_39feb0;
    }
    ctx->pc = 0x39FEA8u;
    SET_GPR_U32(ctx, 31, 0x39FEB0u);
    ctx->pc = 0x39FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEA8u;
    // 0x39feac: 0xa20001b2  sb          $zero, 0x1B2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x39FEA8u, 0x39FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEB0u;
label_39feb0:
    // 0x39feb0: 0xc0e7f2e  jal         func_39FCB8
label_39feb4:
    if (ctx->pc == 0x39FEB4u) {
        ctx->pc = 0x39FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEB0u;
        // 0x39feb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEB8u;
        goto label_39feb8;
    }
    ctx->pc = 0x39FEB0u;
    SET_GPR_U32(ctx, 31, 0x39FEB8u);
    ctx->pc = 0x39FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEB0u;
    // 0x39feb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FCB8u, 0x39FEB0u, 0x39FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEB8u;
label_39feb8:
    // 0x39feb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_39febc:
    if (ctx->pc == 0x39FEBCu) {
        ctx->pc = 0x39FEC0u;
        goto label_39fec0;
    }
    ctx->pc = 0x39FEB8u;
    {
        const bool branch_taken_0x39feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39feb8) {
            ctx->pc = 0x39FEC8u;
            goto label_39fec8;
        }
    }
    ctx->pc = 0x39FEC0u;
label_39fec0:
    // 0x39fec0: 0xc0ecbea  jal         func_3B2FA8
label_39fec4:
    if (ctx->pc == 0x39FEC4u) {
        ctx->pc = 0x39FEC8u;
        goto label_39fec8;
    }
    ctx->pc = 0x39FEC0u;
    SET_GPR_U32(ctx, 31, 0x39FEC8u);
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x39FEC0u, 0x39FEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEC8u;
label_39fec8:
    // 0x39fec8: 0xc0e82e0  jal         func_3A0B80
label_39fecc:
    if (ctx->pc == 0x39FECCu) {
        ctx->pc = 0x39FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEC8u;
        // 0x39fecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FED0u;
        goto label_39fed0;
    }
    ctx->pc = 0x39FEC8u;
    SET_GPR_U32(ctx, 31, 0x39FED0u);
    ctx->pc = 0x39FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEC8u;
    // 0x39fecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0B80u, 0x39FEC8u, 0x39FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FED0u;
label_39fed0:
    // 0x39fed0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39fed4:
    // 0x39fed4: 0x544300c3  bnel        $v0, $v1, . + 4 + (0xC3 << 2)
label_39fed8:
    if (ctx->pc == 0x39FED8u) {
        ctx->pc = 0x39FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FED4u;
        // 0x39fed8: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEDCu;
        goto label_39fedc;
    }
    ctx->pc = 0x39FED4u;
    {
        const bool branch_taken_0x39fed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39fed4) {
            ctx->pc = 0x39FED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FED4u;
            // 0x39fed8: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x39FEDCu;
label_39fedc:
    // 0x39fedc: 0xc0e82f8  jal         func_3A0BE0
label_39fee0:
    if (ctx->pc == 0x39FEE0u) {
        ctx->pc = 0x39FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEDCu;
        // 0x39fee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEE4u;
        goto label_39fee4;
    }
    ctx->pc = 0x39FEDCu;
    SET_GPR_U32(ctx, 31, 0x39FEE4u);
    ctx->pc = 0x39FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEDCu;
    // 0x39fee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BE0u, 0x39FEDCu, 0x39FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEE4u;
label_39fee4:
    // 0x39fee4: 0xc0e8314  jal         func_3A0C50
label_39fee8:
    if (ctx->pc == 0x39FEE8u) {
        ctx->pc = 0x39FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEE4u;
        // 0x39fee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEECu;
        goto label_39feec;
    }
    ctx->pc = 0x39FEE4u;
    SET_GPR_U32(ctx, 31, 0x39FEECu);
    ctx->pc = 0x39FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEE4u;
    // 0x39fee8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C50u, 0x39FEE4u, 0x39FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEECu;
label_39feec:
    // 0x39feec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39feecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39fef0:
    // 0x39fef0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_39fef4:
    if (ctx->pc == 0x39FEF4u) {
        ctx->pc = 0x39FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEF0u;
        // 0x39fef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FEF8u;
        goto label_39fef8;
    }
    ctx->pc = 0x39FEF0u;
    {
        const bool branch_taken_0x39fef0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEF0u;
        // 0x39fef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fef0) {
            ctx->pc = 0x39FF08u;
            goto label_39ff08;
        }
    }
    ctx->pc = 0x39FEF8u;
label_39fef8:
    // 0x39fef8: 0x52220051  beql        $s1, $v0, . + 4 + (0x51 << 2)
label_39fefc:
    if (ctx->pc == 0x39FEFCu) {
        ctx->pc = 0x39FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEF8u;
        // 0x39fefc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF00u;
        goto label_39ff00;
    }
    ctx->pc = 0x39FEF8u;
    {
        const bool branch_taken_0x39fef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x39fef8) {
            ctx->pc = 0x39FEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FEF8u;
            // 0x39fefc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0040u;
            goto label_3a0040;
        }
    }
    ctx->pc = 0x39FF00u;
label_39ff00:
    // 0x39ff00: 0x1000006d  b           . + 4 + (0x6D << 2)
label_39ff04:
    if (ctx->pc == 0x39FF04u) {
        ctx->pc = 0x39FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF00u;
        // 0x39ff04: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF08u;
        goto label_39ff08;
    }
    ctx->pc = 0x39FF00u;
    {
        const bool branch_taken_0x39ff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF00u;
        // 0x39ff04: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff00) {
            ctx->pc = 0x3A00B8u;
            goto label_3a00b8;
        }
    }
    ctx->pc = 0x39FF08u;
label_39ff08:
    // 0x39ff08: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x39ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_39ff0c:
    // 0x39ff0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39ff0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39ff10:
    // 0x39ff10: 0x620000f  bltz        $s1, . + 4 + (0xF << 2)
label_39ff14:
    if (ctx->pc == 0x39FF14u) {
        ctx->pc = 0x39FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF10u;
        // 0x39ff14: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF18u;
        goto label_39ff18;
    }
    ctx->pc = 0x39FF10u;
    {
        const bool branch_taken_0x39ff10 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x39FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF10u;
        // 0x39ff14: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff10) {
            ctx->pc = 0x39FF50u;
            goto label_39ff50;
        }
    }
    ctx->pc = 0x39FF18u;
label_39ff18:
    // 0x39ff18: 0xc0e8302  jal         func_3A0C08
label_39ff1c:
    if (ctx->pc == 0x39FF1Cu) {
        ctx->pc = 0x39FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF18u;
        // 0x39ff1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF20u;
        goto label_39ff20;
    }
    ctx->pc = 0x39FF18u;
    SET_GPR_U32(ctx, 31, 0x39FF20u);
    ctx->pc = 0x39FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF18u;
    // 0x39ff1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C08u, 0x39FF18u, 0x39FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF20u;
label_39ff20:
    // 0x39ff20: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39ff20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39ff24:
    // 0x39ff24: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_39ff28:
    if (ctx->pc == 0x39FF28u) {
        ctx->pc = 0x39FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF24u;
        // 0x39ff28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF2Cu;
        goto label_39ff2c;
    }
    ctx->pc = 0x39FF24u;
    {
        const bool branch_taken_0x39ff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff24) {
            ctx->pc = 0x39FF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FF24u;
            // 0x39ff28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FF54u;
            goto label_39ff54;
        }
    }
    ctx->pc = 0x39FF2Cu;
label_39ff2c:
    // 0x39ff2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39ff30:
    // 0x39ff30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ff30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ff34:
    // 0x39ff34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39ff34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39ff38:
    // 0x39ff38: 0xc0e8304  jal         func_3A0C10
label_39ff3c:
    if (ctx->pc == 0x39FF3Cu) {
        ctx->pc = 0x39FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF38u;
        // 0x39ff3c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF40u;
        goto label_39ff40;
    }
    ctx->pc = 0x39FF38u;
    SET_GPR_U32(ctx, 31, 0x39FF40u);
    ctx->pc = 0x39FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF38u;
    // 0x39ff3c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C10u, 0x39FF38u, 0x39FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF40u;
label_39ff40:
    // 0x39ff40: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x39ff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_39ff44:
    // 0x39ff44: 0x10000016  b           . + 4 + (0x16 << 2)
label_39ff48:
    if (ctx->pc == 0x39FF48u) {
        ctx->pc = 0x39FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF44u;
        // 0x39ff48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF4Cu;
        goto label_39ff4c;
    }
    ctx->pc = 0x39FF44u;
    {
        const bool branch_taken_0x39ff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF44u;
        // 0x39ff48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff44) {
            ctx->pc = 0x39FFA0u;
            goto label_39ffa0;
        }
    }
    ctx->pc = 0x39FF4Cu;
label_39ff4c:
    // 0x39ff4c: 0x0  nop
    ctx->pc = 0x39ff4cu;
    // NOP
label_39ff50:
    // 0x39ff50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39ff54:
    // 0x39ff54: 0x100000da  b           . + 4 + (0xDA << 2)
label_39ff58:
    if (ctx->pc == 0x39FF58u) {
        ctx->pc = 0x39FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF54u;
        // 0x39ff58: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF5Cu;
        goto label_39ff5c;
    }
    ctx->pc = 0x39FF54u;
    {
        const bool branch_taken_0x39ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF54u;
        // 0x39ff58: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff54) {
            ctx->pc = 0x3A02C0u;
            goto label_3a02c0;
        }
    }
    ctx->pc = 0x39FF5Cu;
label_39ff5c:
    // 0x39ff5c: 0x0  nop
    ctx->pc = 0x39ff5cu;
    // NOP
label_39ff60:
    // 0x39ff60: 0x8e0201c8  lw          $v0, 0x1C8($s0)
    ctx->pc = 0x39ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_39ff64:
    // 0x39ff64: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x39ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39ff68:
    // 0x39ff68: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39ff68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39ff6c:
    // 0x39ff6c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_39ff70:
    if (ctx->pc == 0x39FF70u) {
        ctx->pc = 0x39FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF6Cu;
        // 0x39ff70: 0x244102a  slt         $v0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF74u;
        goto label_39ff74;
    }
    ctx->pc = 0x39FF6Cu;
    {
        const bool branch_taken_0x39ff6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ff6c) {
            ctx->pc = 0x39FF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FF6Cu;
            // 0x39ff70: 0x244102a  slt         $v0, $s2, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FFA4u;
            goto label_39ffa4;
        }
    }
    ctx->pc = 0x39FF74u;
label_39ff74:
    // 0x39ff74: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x39ff74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_39ff78:
    // 0x39ff78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39ff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39ff7c:
    // 0x39ff7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ff7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ff80:
    // 0x39ff80: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x39ff80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_39ff84:
    // 0x39ff84: 0xc0e8304  jal         func_3A0C10
label_39ff88:
    if (ctx->pc == 0x39FF88u) {
        ctx->pc = 0x39FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF84u;
        // 0x39ff88: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FF8Cu;
        goto label_39ff8c;
    }
    ctx->pc = 0x39FF84u;
    SET_GPR_U32(ctx, 31, 0x39FF8Cu);
    ctx->pc = 0x39FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF84u;
    // 0x39ff88: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C10u, 0x39FF84u, 0x39FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF8Cu;
label_39ff8c:
    // 0x39ff8c: 0x8e0401b8  lw          $a0, 0x1B8($s0)
    ctx->pc = 0x39ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_39ff90:
    // 0x39ff90: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39ff94:
    // 0x39ff94: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x39ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_39ff98:
    // 0x39ff98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39ff9c:
    // 0x39ff9c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x39ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_39ffa0:
    // 0x39ffa0: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x39ffa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_39ffa4:
    // 0x39ffa4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_39ffa8:
    if (ctx->pc == 0x39FFA8u) {
        ctx->pc = 0x39FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFA4u;
        // 0x39ffa8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFACu;
        goto label_39ffac;
    }
    ctx->pc = 0x39FFA4u;
    {
        const bool branch_taken_0x39ffa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFA4u;
        // 0x39ffa8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ffa4) {
            ctx->pc = 0x39FF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ff60;
        }
    }
    ctx->pc = 0x39FFACu;
label_39ffac:
    // 0x39ffac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39ffb0:
    // 0x39ffb0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39ffb4:
    // 0x39ffb4: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x39ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_39ffb8:
    // 0x39ffb8: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x39ffb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_39ffbc:
    // 0x39ffbc: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x39ffbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_39ffc0:
    // 0x39ffc0: 0xae1101bc  sw          $s1, 0x1BC($s0)
    ctx->pc = 0x39ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 17));
label_39ffc4:
    // 0x39ffc4: 0xc0e66bc  jal         func_399AF0
label_39ffc8:
    if (ctx->pc == 0x39FFC8u) {
        ctx->pc = 0x39FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFC4u;
        // 0x39ffc8: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFCCu;
        goto label_39ffcc;
    }
    ctx->pc = 0x39FFC4u;
    SET_GPR_U32(ctx, 31, 0x39FFCCu);
    ctx->pc = 0x39FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFC4u;
    // 0x39ffc8: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39FFC4u, 0x39FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFCCu;
label_39ffcc:
    // 0x39ffcc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39ffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39ffd0:
    // 0x39ffd0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39ffd4:
    // 0x39ffd4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39ffd8:
    // 0x39ffd8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39ffdc:
    // 0x39ffdc: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x39ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_39ffe0:
    // 0x39ffe0: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x39ffe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_39ffe4:
    // 0x39ffe4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x39ffe4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_39ffe8:
    // 0x39ffe8: 0xc0e6798  jal         func_399E60
label_39ffec:
    if (ctx->pc == 0x39FFECu) {
        ctx->pc = 0x39FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFE8u;
        // 0x39ffec: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFF0u;
        goto label_39fff0;
    }
    ctx->pc = 0x39FFE8u;
    SET_GPR_U32(ctx, 31, 0x39FFF0u);
    ctx->pc = 0x39FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFE8u;
    // 0x39ffec: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39FFE8u, 0x39FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFF0u;
label_39fff0:
    // 0x39fff0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39fff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39fff4:
    // 0x39fff4: 0xc0e82f4  jal         func_3A0BD0
label_39fff8:
    if (ctx->pc == 0x39FFF8u) {
        ctx->pc = 0x39FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFF4u;
        // 0x39fff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FFFCu;
        goto label_39fffc;
    }
    ctx->pc = 0x39FFF4u;
    SET_GPR_U32(ctx, 31, 0x39FFFCu);
    ctx->pc = 0x39FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FFF4u;
    // 0x39fff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BD0u, 0x39FFF4u, 0x39FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFFCu;
label_39fffc:
    // 0x39fffc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x39fffcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_3a0000:
    // 0x3a0000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a0000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0004:
    // 0x3a0004: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3a0008:
    if (ctx->pc == 0x3A0008u) {
        ctx->pc = 0x3A0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0004u;
        // 0x3a0008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A000Cu;
        goto label_3a000c;
    }
    ctx->pc = 0x3A0004u;
    {
        const bool branch_taken_0x3a0004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0004u;
        // 0x3a0008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0004) {
            ctx->pc = 0x3A001Cu;
            goto label_3a001c;
        }
    }
    ctx->pc = 0x3A000Cu;
label_3a000c:
    // 0x3a000c: 0x820201b1  lb          $v0, 0x1B1($s0)
    ctx->pc = 0x3a000cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
label_3a0010:
    // 0x3a0010: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_3a0014:
    if (ctx->pc == 0x3A0014u) {
        ctx->pc = 0x3A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0010u;
        // 0x3a0014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0018u;
        goto label_3a0018;
    }
    ctx->pc = 0x3A0010u;
    {
        const bool branch_taken_0x3a0010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0010u;
        // 0x3a0014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0010) {
            ctx->pc = 0x3A0028u;
            goto label_3a0028;
        }
    }
    ctx->pc = 0x3A0018u;
label_3a0018:
    // 0x3a0018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a0018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a001c:
    // 0x3a001c: 0xc0e82f6  jal         func_3A0BD8
label_3a0020:
    if (ctx->pc == 0x3A0020u) {
        ctx->pc = 0x3A0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A001Cu;
        // 0x3a0020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0024u;
        goto label_3a0024;
    }
    ctx->pc = 0x3A001Cu;
    SET_GPR_U32(ctx, 31, 0x3A0024u);
    ctx->pc = 0x3A0020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A001Cu;
    // 0x3a0020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BD8u, 0x3A001Cu, 0x3A0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0024u;
label_3a0024:
    // 0x3a0024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0028:
    // 0x3a0028: 0xc0e81dc  jal         func_3A0770
label_3a002c:
    if (ctx->pc == 0x3A002Cu) {
        ctx->pc = 0x3A002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0028u;
        // 0x3a002c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0030u;
        goto label_3a0030;
    }
    ctx->pc = 0x3A0028u;
    SET_GPR_U32(ctx, 31, 0x3A0030u);
    ctx->pc = 0x3A002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0028u;
    // 0x3a002c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0770u, 0x3A0028u, 0x3A0030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0030u;
label_3a0030:
    // 0x3a0030: 0xc0e81bc  jal         func_3A06F0
label_3a0034:
    if (ctx->pc == 0x3A0034u) {
        ctx->pc = 0x3A0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0030u;
        // 0x3a0034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0038u;
        goto label_3a0038;
    }
    ctx->pc = 0x3A0030u;
    SET_GPR_U32(ctx, 31, 0x3A0038u);
    ctx->pc = 0x3A0034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0030u;
    // 0x3a0034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A06F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A06F0u, 0x3A0030u, 0x3A0038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0038u;
label_3a0038:
    // 0x3a0038: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3a003c:
    if (ctx->pc == 0x3A003Cu) {
        ctx->pc = 0x3A003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0038u;
        // 0x3a003c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0040u;
        goto label_3a0040;
    }
    ctx->pc = 0x3A0038u;
    {
        const bool branch_taken_0x3a0038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0038u;
        // 0x3a003c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0038) {
            ctx->pc = 0x3A00B4u;
            goto label_3a00b4;
        }
    }
    ctx->pc = 0x3A0040u;
label_3a0040:
    // 0x3a0040: 0xc0e6798  jal         func_399E60
label_3a0044:
    if (ctx->pc == 0x3A0044u) {
        ctx->pc = 0x3A0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0040u;
        // 0x3a0044: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0048u;
        goto label_3a0048;
    }
    ctx->pc = 0x3A0040u;
    SET_GPR_U32(ctx, 31, 0x3A0048u);
    ctx->pc = 0x3A0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0040u;
    // 0x3a0044: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x3A0040u, 0x3A0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0048u;
label_3a0048:
    // 0x3a0048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a0048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a004c:
    // 0x3a004c: 0xc0e82f4  jal         func_3A0BD0
label_3a0050:
    if (ctx->pc == 0x3A0050u) {
        ctx->pc = 0x3A0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A004Cu;
        // 0x3a0050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0054u;
        goto label_3a0054;
    }
    ctx->pc = 0x3A004Cu;
    SET_GPR_U32(ctx, 31, 0x3A0054u);
    ctx->pc = 0x3A0050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A004Cu;
    // 0x3a0050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BD0u, 0x3A004Cu, 0x3A0054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0054u;
label_3a0054:
    // 0x3a0054: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x3a0054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_3a0058:
    // 0x3a0058: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_3a005c:
    if (ctx->pc == 0x3A005Cu) {
        ctx->pc = 0x3A005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0058u;
        // 0x3a005c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0060u;
        goto label_3a0060;
    }
    ctx->pc = 0x3A0058u;
    {
        const bool branch_taken_0x3a0058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x3A005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0058u;
        // 0x3a005c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0058) {
            ctx->pc = 0x3A0070u;
            goto label_3a0070;
        }
    }
    ctx->pc = 0x3A0060u;
label_3a0060:
    // 0x3a0060: 0x820201b1  lb          $v0, 0x1B1($s0)
    ctx->pc = 0x3a0060u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
label_3a0064:
    // 0x3a0064: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
label_3a0068:
    if (ctx->pc == 0x3A0068u) {
        ctx->pc = 0x3A0068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0064u;
        // 0x3a0068: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A006Cu;
        goto label_3a006c;
    }
    ctx->pc = 0x3A0064u;
    {
        const bool branch_taken_0x3a0064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3a0064) {
            ctx->pc = 0x3A0068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0064u;
            // 0x3a0068: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A007Cu;
            goto label_3a007c;
        }
    }
    ctx->pc = 0x3A006Cu;
label_3a006c:
    // 0x3a006c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a006cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a0070:
    // 0x3a0070: 0xc0e82f6  jal         func_3A0BD8
label_3a0074:
    if (ctx->pc == 0x3A0074u) {
        ctx->pc = 0x3A0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0070u;
        // 0x3a0074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0078u;
        goto label_3a0078;
    }
    ctx->pc = 0x3A0070u;
    SET_GPR_U32(ctx, 31, 0x3A0078u);
    ctx->pc = 0x3A0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0070u;
    // 0x3a0074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BD8u, 0x3A0070u, 0x3A0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0078u;
label_3a0078:
    // 0x3a0078: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3a0078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a007c:
    // 0x3a007c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_3a0080:
    if (ctx->pc == 0x3A0080u) {
        ctx->pc = 0x3A0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A007Cu;
        // 0x3a0080: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0084u;
        goto label_3a0084;
    }
    ctx->pc = 0x3A007Cu;
    {
        const bool branch_taken_0x3a007c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a007c) {
            ctx->pc = 0x3A0080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A007Cu;
            // 0x3a0080: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A00A0u;
            goto label_3a00a0;
        }
    }
    ctx->pc = 0x3A0084u;
label_3a0084:
    // 0x3a0084: 0xc0e7278  jal         func_39C9E0
label_3a0088:
    if (ctx->pc == 0x3A0088u) {
        ctx->pc = 0x3A0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0084u;
        // 0x3a0088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A008Cu;
        goto label_3a008c;
    }
    ctx->pc = 0x3A0084u;
    SET_GPR_U32(ctx, 31, 0x3A008Cu);
    ctx->pc = 0x3A0088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0084u;
    // 0x3a0088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9E0u, 0x3A0084u, 0x3A008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A008Cu;
label_3a008c:
    // 0x3a008c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3a008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a0090:
    // 0x3a0090: 0xc0e6d9e  jal         func_39B678
label_3a0094:
    if (ctx->pc == 0x3A0094u) {
        ctx->pc = 0x3A0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0090u;
        // 0x3a0094: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0098u;
        goto label_3a0098;
    }
    ctx->pc = 0x3A0090u;
    SET_GPR_U32(ctx, 31, 0x3A0098u);
    ctx->pc = 0x3A0094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0090u;
    // 0x3a0094: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B678u, 0x3A0090u, 0x3A0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0098u;
label_3a0098:
    // 0x3a0098: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a009c:
    if (ctx->pc == 0x3A009Cu) {
        ctx->pc = 0x3A009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0098u;
        // 0x3a009c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00A0u;
        goto label_3a00a0;
    }
    ctx->pc = 0x3A0098u;
    {
        const bool branch_taken_0x3a0098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0098u;
        // 0x3a009c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0098) {
            ctx->pc = 0x3A00B4u;
            goto label_3a00b4;
        }
    }
    ctx->pc = 0x3A00A0u;
label_3a00a0:
    // 0x3a00a0: 0xc0ecbf4  jal         func_3B2FD0
label_3a00a4:
    if (ctx->pc == 0x3A00A4u) {
        ctx->pc = 0x3A00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00A0u;
        // 0x3a00a4: 0x2484c2b8  addiu       $a0, $a0, -0x3D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00A8u;
        goto label_3a00a8;
    }
    ctx->pc = 0x3A00A0u;
    SET_GPR_U32(ctx, 31, 0x3A00A8u);
    ctx->pc = 0x3A00A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00A0u;
    // 0x3a00a4: 0x2484c2b8  addiu       $a0, $a0, -0x3D48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x3A00A0u, 0x3A00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00A8u;
label_3a00a8:
    // 0x3a00a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a00ac:
    // 0x3a00ac: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3a00acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a00b0:
    // 0x3a00b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a00b4:
    // 0x3a00b4: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3a00b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3a00b8:
    // 0x3a00b8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3a00bc:
    if (ctx->pc == 0x3A00BCu) {
        ctx->pc = 0x3A00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00B8u;
        // 0x3a00bc: 0xae0201ac  sw          $v0, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00C0u;
        goto label_3a00c0;
    }
    ctx->pc = 0x3A00B8u;
    {
        const bool branch_taken_0x3a00b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00B8u;
        // 0x3a00bc: 0xae0201ac  sw          $v0, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00b8) {
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x3A00C0u;
label_3a00c0:
    // 0x3a00c0: 0xc0e82e0  jal         func_3A0B80
label_3a00c4:
    if (ctx->pc == 0x3A00C4u) {
        ctx->pc = 0x3A00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00C0u;
        // 0x3a00c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00C8u;
        goto label_3a00c8;
    }
    ctx->pc = 0x3A00C0u;
    SET_GPR_U32(ctx, 31, 0x3A00C8u);
    ctx->pc = 0x3A00C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00C0u;
    // 0x3a00c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0B80u, 0x3A00C0u, 0x3A00C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00C8u;
label_3a00c8:
    // 0x3a00c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a00c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a00cc:
    // 0x3a00cc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_3a00d0:
    if (ctx->pc == 0x3A00D0u) {
        ctx->pc = 0x3A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00CCu;
        // 0x3a00d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00D4u;
        goto label_3a00d4;
    }
    ctx->pc = 0x3A00CCu;
    {
        const bool branch_taken_0x3a00cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00CCu;
        // 0x3a00d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00cc) {
            ctx->pc = 0x3A0148u;
            goto label_3a0148;
        }
    }
    ctx->pc = 0x3A00D4u;
label_3a00d4:
    // 0x3a00d4: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x3a00d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3a00d8:
    // 0x3a00d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3a00d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a00dc:
    // 0x3a00dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3a00e0:
    if (ctx->pc == 0x3A00E0u) {
        ctx->pc = 0x3A00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00DCu;
        // 0x3a00e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00E4u;
        goto label_3a00e4;
    }
    ctx->pc = 0x3A00DCu;
    {
        const bool branch_taken_0x3a00dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00DCu;
        // 0x3a00e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00dc) {
            ctx->pc = 0x3A0114u;
            goto label_3a0114;
        }
    }
    ctx->pc = 0x3A00E4u;
label_3a00e4:
    // 0x3a00e4: 0x26110094  addiu       $s1, $s0, 0x94
    ctx->pc = 0x3a00e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_3a00e8:
    // 0x3a00e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3a00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a00ec:
    // 0x3a00ec: 0x0  nop
    ctx->pc = 0x3a00ecu;
    // NOP
label_3a00f0:
    // 0x3a00f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3a00f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3a00f4:
    // 0x3a00f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a00f8:
    // 0x3a00f8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3a00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3a00fc:
    // 0x3a00fc: 0x60f809  jalr        $v1
label_3a0100:
    if (ctx->pc == 0x3A0100u) {
        ctx->pc = 0x3A0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00FCu;
        // 0x3a0100: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0104u;
        goto label_3a0104;
    }
    ctx->pc = 0x3A00FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A0104u);
        ctx->pc = 0x3A0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00FCu;
        // 0x3a0100: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A00FCu, 0x3A0104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A0104u;
label_3a0104:
    // 0x3a0104: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x3a0104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3a0108:
    // 0x3a0108: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a0108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a010c:
    // 0x3a010c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_3a0110:
    if (ctx->pc == 0x3A0110u) {
        ctx->pc = 0x3A0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A010Cu;
        // 0x3a0110: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0114u;
        goto label_3a0114;
    }
    ctx->pc = 0x3A010Cu;
    {
        const bool branch_taken_0x3a010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a010c) {
            ctx->pc = 0x3A0110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A010Cu;
            // 0x3a0110: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A00F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a00f0;
        }
    }
    ctx->pc = 0x3A0114u;
label_3a0114:
    // 0x3a0114: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x3a0114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_3a0118:
    // 0x3a0118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a0118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a011c:
    // 0x3a011c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_3a0120:
    if (ctx->pc == 0x3A0120u) {
        ctx->pc = 0x3A0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A011Cu;
        // 0x3a0120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0124u;
        goto label_3a0124;
    }
    ctx->pc = 0x3A011Cu;
    {
        const bool branch_taken_0x3a011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A011Cu;
        // 0x3a0120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a011c) {
            ctx->pc = 0x3A0130u;
            goto label_3a0130;
        }
    }
    ctx->pc = 0x3A0124u;
label_3a0124:
    // 0x3a0124: 0x820201b1  lb          $v0, 0x1B1($s0)
    ctx->pc = 0x3a0124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
label_3a0128:
    // 0x3a0128: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3a012c:
    if (ctx->pc == 0x3A012Cu) {
        ctx->pc = 0x3A0130u;
        goto label_3a0130;
    }
    ctx->pc = 0x3A0128u;
    {
        const bool branch_taken_0x3a0128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a0128) {
            ctx->pc = 0x3A0138u;
            goto label_3a0138;
        }
    }
    ctx->pc = 0x3A0130u;
label_3a0130:
    // 0x3a0130: 0xc0e82f6  jal         func_3A0BD8
label_3a0134:
    if (ctx->pc == 0x3A0134u) {
        ctx->pc = 0x3A0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0130u;
        // 0x3a0134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0138u;
        goto label_3a0138;
    }
    ctx->pc = 0x3A0130u;
    SET_GPR_U32(ctx, 31, 0x3A0138u);
    ctx->pc = 0x3A0134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0130u;
    // 0x3a0134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BD8u, 0x3A0130u, 0x3A0138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0138u;
label_3a0138:
    // 0x3a0138: 0xc0e82e2  jal         func_3A0B88
label_3a013c:
    if (ctx->pc == 0x3A013Cu) {
        ctx->pc = 0x3A013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0138u;
        // 0x3a013c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0140u;
        goto label_3a0140;
    }
    ctx->pc = 0x3A0138u;
    SET_GPR_U32(ctx, 31, 0x3A0140u);
    ctx->pc = 0x3A013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0138u;
    // 0x3a013c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0B88u, 0x3A0138u, 0x3A0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0140u;
label_3a0140:
    // 0x3a0140: 0x10000028  b           . + 4 + (0x28 << 2)
label_3a0144:
    if (ctx->pc == 0x3A0144u) {
        ctx->pc = 0x3A0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0140u;
        // 0x3a0144: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0148u;
        goto label_3a0148;
    }
    ctx->pc = 0x3A0140u;
    {
        const bool branch_taken_0x3a0140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0140u;
        // 0x3a0144: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0140) {
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x3A0148u;
label_3a0148:
    // 0x3a0148: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
label_3a014c:
    if (ctx->pc == 0x3A014Cu) {
        ctx->pc = 0x3A014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0148u;
        // 0x3a014c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0150u;
        goto label_3a0150;
    }
    ctx->pc = 0x3A0148u;
    {
        const bool branch_taken_0x3a0148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a0148) {
            ctx->pc = 0x3A014Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0148u;
            // 0x3a014c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x3A0150u;
label_3a0150:
    // 0x3a0150: 0xc0e81bc  jal         func_3A06F0
label_3a0154:
    if (ctx->pc == 0x3A0154u) {
        ctx->pc = 0x3A0154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0150u;
        // 0x3a0154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0158u;
        goto label_3a0158;
    }
    ctx->pc = 0x3A0150u;
    SET_GPR_U32(ctx, 31, 0x3A0158u);
    ctx->pc = 0x3A0154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0150u;
    // 0x3a0154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A06F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A06F0u, 0x3A0150u, 0x3A0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0158u;
label_3a0158:
    // 0x3a0158: 0x10000021  b           . + 4 + (0x21 << 2)
label_3a015c:
    if (ctx->pc == 0x3A015Cu) {
        ctx->pc = 0x3A015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0158u;
        // 0x3a015c: 0xae1201ac  sw          $s2, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0160u;
        goto label_3a0160;
    }
    ctx->pc = 0x3A0158u;
    {
        const bool branch_taken_0x3a0158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0158u;
        // 0x3a015c: 0xae1201ac  sw          $s2, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0158) {
            ctx->pc = 0x3A01E0u;
            goto label_3a01e0;
        }
    }
    ctx->pc = 0x3A0160u;
label_3a0160:
    // 0x3a0160: 0xc0e8314  jal         func_3A0C50
label_3a0164:
    if (ctx->pc == 0x3A0164u) {
        ctx->pc = 0x3A0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0160u;
        // 0x3a0164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0168u;
        goto label_3a0168;
    }
    ctx->pc = 0x3A0160u;
    SET_GPR_U32(ctx, 31, 0x3A0168u);
    ctx->pc = 0x3A0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0160u;
    // 0x3a0164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C50u, 0x3A0160u, 0x3A0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0168u;
label_3a0168:
    // 0x3a0168: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a016c:
    if (ctx->pc == 0x3A016Cu) {
        ctx->pc = 0x3A0170u;
        goto label_3a0170;
    }
    ctx->pc = 0x3A0168u;
    {
        const bool branch_taken_0x3a0168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0168) {
            ctx->pc = 0x3A0180u;
            goto label_3a0180;
        }
    }
    ctx->pc = 0x3A0170u;
label_3a0170:
    // 0x3a0170: 0x10520017  beq         $v0, $s2, . + 4 + (0x17 << 2)
label_3a0174:
    if (ctx->pc == 0x3A0174u) {
        ctx->pc = 0x3A0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0170u;
        // 0x3a0174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0178u;
        goto label_3a0178;
    }
    ctx->pc = 0x3A0170u;
    {
        const bool branch_taken_0x3a0170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3A0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0170u;
        // 0x3a0174: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0170) {
            ctx->pc = 0x3A01D0u;
            goto label_3a01d0;
        }
    }
    ctx->pc = 0x3A0178u;
label_3a0178:
    // 0x3a0178: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3a017c:
    if (ctx->pc == 0x3A017Cu) {
        ctx->pc = 0x3A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0178u;
        // 0x3a017c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0180u;
        goto label_3a0180;
    }
    ctx->pc = 0x3A0178u;
    {
        const bool branch_taken_0x3a0178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0178u;
        // 0x3a017c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0178) {
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x3A0180u;
label_3a0180:
    // 0x3a0180: 0xc0e81f6  jal         func_3A07D8
label_3a0184:
    if (ctx->pc == 0x3A0184u) {
        ctx->pc = 0x3A0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0180u;
        // 0x3a0184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0188u;
        goto label_3a0188;
    }
    ctx->pc = 0x3A0180u;
    SET_GPR_U32(ctx, 31, 0x3A0188u);
    ctx->pc = 0x3A0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0180u;
    // 0x3a0184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A07D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A07D8u, 0x3A0180u, 0x3A0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0188u;
label_3a0188:
    // 0x3a0188: 0x54520016  bnel        $v0, $s2, . + 4 + (0x16 << 2)
label_3a018c:
    if (ctx->pc == 0x3A018Cu) {
        ctx->pc = 0x3A018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0188u;
        // 0x3a018c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0190u;
        goto label_3a0190;
    }
    ctx->pc = 0x3A0188u;
    {
        const bool branch_taken_0x3a0188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a0188) {
            ctx->pc = 0x3A018Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0188u;
            // 0x3a018c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x3A0190u;
label_3a0190:
    // 0x3a0190: 0xc0ecbe4  jal         func_3B2F90
label_3a0194:
    if (ctx->pc == 0x3A0194u) {
        ctx->pc = 0x3A0198u;
        goto label_3a0198;
    }
    ctx->pc = 0x3A0190u;
    SET_GPR_U32(ctx, 31, 0x3A0198u);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A0190u, 0x3A0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0198u;
label_3a0198:
    // 0x3a0198: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x3a0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_3a019c:
    // 0x3a019c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3a01a0:
    if (ctx->pc == 0x3A01A0u) {
        ctx->pc = 0x3A01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A019Cu;
        // 0x3a01a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01A4u;
        goto label_3a01a4;
    }
    ctx->pc = 0x3A019Cu;
    {
        const bool branch_taken_0x3a019c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A019Cu;
        // 0x3a01a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a019c) {
            ctx->pc = 0x3A01ACu;
            goto label_3a01ac;
        }
    }
    ctx->pc = 0x3A01A4u;
label_3a01a4:
    // 0x3a01a4: 0xc0e819c  jal         func_3A0670
label_3a01a8:
    if (ctx->pc == 0x3A01A8u) {
        ctx->pc = 0x3A01A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01A4u;
        // 0x3a01a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01ACu;
        goto label_3a01ac;
    }
    ctx->pc = 0x3A01A4u;
    SET_GPR_U32(ctx, 31, 0x3A01ACu);
    ctx->pc = 0x3A01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A01A4u;
    // 0x3a01a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0670u, 0x3A01A4u, 0x3A01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A01ACu;
label_3a01ac:
    // 0x3a01ac: 0xc0e7e04  jal         func_39F810
label_3a01b0:
    if (ctx->pc == 0x3A01B0u) {
        ctx->pc = 0x3A01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01ACu;
        // 0x3a01b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01B4u;
        goto label_3a01b4;
    }
    ctx->pc = 0x3A01ACu;
    SET_GPR_U32(ctx, 31, 0x3A01B4u);
    ctx->pc = 0x3A01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A01ACu;
    // 0x3a01b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F810u, 0x3A01ACu, 0x3A01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A01B4u;
label_3a01b4:
    // 0x3a01b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a01b8:
    // 0x3a01b8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3a01b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a01bc:
    // 0x3a01bc: 0xc0ecbea  jal         func_3B2FA8
label_3a01c0:
    if (ctx->pc == 0x3A01C0u) {
        ctx->pc = 0x3A01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01BCu;
        // 0x3a01c0: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01C4u;
        goto label_3a01c4;
    }
    ctx->pc = 0x3A01BCu;
    SET_GPR_U32(ctx, 31, 0x3A01C4u);
    ctx->pc = 0x3A01C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A01BCu;
    // 0x3a01c0: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x3A01BCu, 0x3A01C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A01C4u;
label_3a01c4:
    // 0x3a01c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a01c8:
    if (ctx->pc == 0x3A01C8u) {
        ctx->pc = 0x3A01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01C4u;
        // 0x3a01c8: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01CCu;
        goto label_3a01cc;
    }
    ctx->pc = 0x3A01C4u;
    {
        const bool branch_taken_0x3a01c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01C4u;
        // 0x3a01c8: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01c4) {
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x3A01CCu;
label_3a01cc:
    // 0x3a01cc: 0x0  nop
    ctx->pc = 0x3a01ccu;
    // NOP
label_3a01d0:
    // 0x3a01d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a01d4:
    // 0x3a01d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a01d8:
    if (ctx->pc == 0x3A01D8u) {
        ctx->pc = 0x3A01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01D4u;
        // 0x3a01d8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01DCu;
        goto label_3a01dc;
    }
    ctx->pc = 0x3A01D4u;
    {
        const bool branch_taken_0x3a01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01D4u;
        // 0x3a01d8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01d4) {
            ctx->pc = 0x3A01E4u;
            goto label_3a01e4;
        }
    }
    ctx->pc = 0x3A01DCu;
label_3a01dc:
    // 0x3a01dc: 0x0  nop
    ctx->pc = 0x3a01dcu;
    // NOP
label_3a01e0:
    // 0x3a01e0: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3a01e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3a01e4:
    // 0x3a01e4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3a01e8:
    // 0x3a01e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a01ec:
    // 0x3a01ec: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x3a01ecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
label_3a01f0:
    // 0x3a01f0: 0x16230026  bne         $s1, $v1, . + 4 + (0x26 << 2)
label_3a01f4:
    if (ctx->pc == 0x3A01F4u) {
        ctx->pc = 0x3A01F8u;
        goto label_3a01f8;
    }
    ctx->pc = 0x3A01F0u;
    {
        const bool branch_taken_0x3a01f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a01f0) {
            ctx->pc = 0x3A028Cu;
            goto label_3a028c;
        }
    }
    ctx->pc = 0x3A01F8u;
label_3a01f8:
    // 0x3a01f8: 0xc0e8314  jal         func_3A0C50
label_3a01fc:
    if (ctx->pc == 0x3A01FCu) {
        ctx->pc = 0x3A01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01F8u;
        // 0x3a01fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0200u;
        goto label_3a0200;
    }
    ctx->pc = 0x3A01F8u;
    SET_GPR_U32(ctx, 31, 0x3A0200u);
    ctx->pc = 0x3A01FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A01F8u;
    // 0x3a01fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C50u, 0x3A01F8u, 0x3A0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0200u;
label_3a0200:
    // 0x3a0200: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a0200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0204:
    // 0x3a0204: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3a0208:
    if (ctx->pc == 0x3A0208u) {
        ctx->pc = 0x3A0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0204u;
        // 0x3a0208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A020Cu;
        goto label_3a020c;
    }
    ctx->pc = 0x3A0204u;
    {
        const bool branch_taken_0x3a0204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0204u;
        // 0x3a0208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0204) {
            ctx->pc = 0x3A0220u;
            goto label_3a0220;
        }
    }
    ctx->pc = 0x3A020Cu;
label_3a020c:
    // 0x3a020c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_3a0210:
    if (ctx->pc == 0x3A0210u) {
        ctx->pc = 0x3A0214u;
        goto label_3a0214;
    }
    ctx->pc = 0x3A020Cu;
    {
        const bool branch_taken_0x3a020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a020c) {
            ctx->pc = 0x3A0258u;
            goto label_3a0258;
        }
    }
    ctx->pc = 0x3A0214u;
label_3a0214:
    // 0x3a0214: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3a0218:
    if (ctx->pc == 0x3A0218u) {
        ctx->pc = 0x3A021Cu;
        goto label_3a021c;
    }
    ctx->pc = 0x3A0214u;
    {
        const bool branch_taken_0x3a0214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0214) {
            ctx->pc = 0x3A028Cu;
            goto label_3a028c;
        }
    }
    ctx->pc = 0x3A021Cu;
label_3a021c:
    // 0x3a021c: 0x0  nop
    ctx->pc = 0x3a021cu;
    // NOP
label_3a0220:
    // 0x3a0220: 0xc0e82e0  jal         func_3A0B80
label_3a0224:
    if (ctx->pc == 0x3A0224u) {
        ctx->pc = 0x3A0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0220u;
        // 0x3a0224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0228u;
        goto label_3a0228;
    }
    ctx->pc = 0x3A0220u;
    SET_GPR_U32(ctx, 31, 0x3A0228u);
    ctx->pc = 0x3A0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0220u;
    // 0x3a0224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0B80u, 0x3A0220u, 0x3A0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0228u;
label_3a0228:
    // 0x3a0228: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a0228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a022c:
    // 0x3a022c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a0230:
    // 0x3a0230: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
label_3a0234:
    if (ctx->pc == 0x3A0234u) {
        ctx->pc = 0x3A0238u;
        goto label_3a0238;
    }
    ctx->pc = 0x3A0230u;
    {
        const bool branch_taken_0x3a0230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a0230) {
            ctx->pc = 0x3A028Cu;
            goto label_3a028c;
        }
    }
    ctx->pc = 0x3A0238u;
label_3a0238:
    // 0x3a0238: 0xc0e8220  jal         func_3A0880
label_3a023c:
    if (ctx->pc == 0x3A023Cu) {
        ctx->pc = 0x3A023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0238u;
        // 0x3a023c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0240u;
        goto label_3a0240;
    }
    ctx->pc = 0x3A0238u;
    SET_GPR_U32(ctx, 31, 0x3A0240u);
    ctx->pc = 0x3A023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0238u;
    // 0x3a023c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0880u, 0x3A0238u, 0x3A0240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0240u;
label_3a0240:
    // 0x3a0240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a0240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a0244:
    // 0x3a0244: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_3a0248:
    if (ctx->pc == 0x3A0248u) {
        ctx->pc = 0x3A0248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0244u;
        // 0x3a0248: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A024Cu;
        goto label_3a024c;
    }
    ctx->pc = 0x3A0244u;
    {
        const bool branch_taken_0x3a0244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a0244) {
            ctx->pc = 0x3A0248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0244u;
            // 0x3a0248: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A028Cu;
            goto label_3a028c;
        }
    }
    ctx->pc = 0x3A024Cu;
label_3a024c:
    // 0x3a024c: 0x1000000f  b           . + 4 + (0xF << 2)
label_3a0250:
    if (ctx->pc == 0x3A0250u) {
        ctx->pc = 0x3A0254u;
        goto label_3a0254;
    }
    ctx->pc = 0x3A024Cu;
    {
        const bool branch_taken_0x3a024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a024c) {
            ctx->pc = 0x3A028Cu;
            goto label_3a028c;
        }
    }
    ctx->pc = 0x3A0254u;
label_3a0254:
    // 0x3a0254: 0x0  nop
    ctx->pc = 0x3a0254u;
    // NOP
label_3a0258:
    // 0x3a0258: 0xc0e66ac  jal         func_399AB0
label_3a025c:
    if (ctx->pc == 0x3A025Cu) {
        ctx->pc = 0x3A025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0258u;
        // 0x3a025c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0260u;
        goto label_3a0260;
    }
    ctx->pc = 0x3A0258u;
    SET_GPR_U32(ctx, 31, 0x3A0260u);
    ctx->pc = 0x3A025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0258u;
    // 0x3a025c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x3A0258u, 0x3A0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0260u;
label_3a0260:
    // 0x3a0260: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
label_3a0264:
    if (ctx->pc == 0x3A0264u) {
        ctx->pc = 0x3A0268u;
        goto label_3a0268;
    }
    ctx->pc = 0x3A0260u;
    {
        const bool branch_taken_0x3a0260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3a0260) {
            ctx->pc = 0x3A028Cu;
            goto label_3a028c;
        }
    }
    ctx->pc = 0x3A0268u;
label_3a0268:
    // 0x3a0268: 0xc0e6e40  jal         func_39B900
label_3a026c:
    if (ctx->pc == 0x3A026Cu) {
        ctx->pc = 0x3A026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0268u;
        // 0x3a026c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0270u;
        goto label_3a0270;
    }
    ctx->pc = 0x3A0268u;
    SET_GPR_U32(ctx, 31, 0x3A0270u);
    ctx->pc = 0x3A026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0268u;
    // 0x3a026c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x3A0268u, 0x3A0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0270u;
label_3a0270:
    // 0x3a0270: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a0270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0274:
    // 0x3a0274: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3a0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a0278:
    // 0x3a0278: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3a027c:
    if (ctx->pc == 0x3A027Cu) {
        ctx->pc = 0x3A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0278u;
        // 0x3a027c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0280u;
        goto label_3a0280;
    }
    ctx->pc = 0x3A0278u;
    {
        const bool branch_taken_0x3a0278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0278u;
        // 0x3a027c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0278) {
            ctx->pc = 0x3A0288u;
            goto label_3a0288;
        }
    }
    ctx->pc = 0x3A0280u;
label_3a0280:
    // 0x3a0280: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3a0284:
    if (ctx->pc == 0x3A0284u) {
        ctx->pc = 0x3A0288u;
        goto label_3a0288;
    }
    ctx->pc = 0x3A0280u;
    {
        const bool branch_taken_0x3a0280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0280) {
            ctx->pc = 0x3A028Cu;
            goto label_3a028c;
        }
    }
    ctx->pc = 0x3A0288u;
label_3a0288:
    // 0x3a0288: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3a0288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a028c:
    // 0x3a028c: 0xc0ecbe4  jal         func_3B2F90
label_3a0290:
    if (ctx->pc == 0x3A0290u) {
        ctx->pc = 0x3A0294u;
        goto label_3a0294;
    }
    ctx->pc = 0x3A028Cu;
    SET_GPR_U32(ctx, 31, 0x3A0294u);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A028Cu, 0x3A0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0294u;
label_3a0294:
    // 0x3a0294: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3a0294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a0298:
    // 0x3a0298: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3a029c:
    if (ctx->pc == 0x3A029Cu) {
        ctx->pc = 0x3A02A0u;
        goto label_3a02a0;
    }
    ctx->pc = 0x3A0298u;
    {
        const bool branch_taken_0x3a0298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0298) {
            ctx->pc = 0x3A02B8u;
            goto label_3a02b8;
        }
    }
    ctx->pc = 0x3A02A0u;
label_3a02a0:
    // 0x3a02a0: 0xc0e66ac  jal         func_399AB0
label_3a02a4:
    if (ctx->pc == 0x3A02A4u) {
        ctx->pc = 0x3A02A8u;
        goto label_3a02a8;
    }
    ctx->pc = 0x3A02A0u;
    SET_GPR_U32(ctx, 31, 0x3A02A8u);
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x3A02A0u, 0x3A02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A02A8u;
label_3a02a8:
    // 0x3a02a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a02a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a02ac:
    // 0x3a02ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a02acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a02b0:
    // 0x3a02b0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3a02b4:
    if (ctx->pc == 0x3A02B4u) {
        ctx->pc = 0x3A02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02B0u;
        // 0x3a02b4: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A02B8u;
        goto label_3a02b8;
    }
    ctx->pc = 0x3A02B0u;
    {
        const bool branch_taken_0x3a02b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a02b0) {
            ctx->pc = 0x3A02B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A02B0u;
            // 0x3a02b4: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A02B8u;
            goto label_3a02b8;
        }
    }
    ctx->pc = 0x3A02B8u;
label_3a02b8:
    // 0x3a02b8: 0xc0ecbea  jal         func_3B2FA8
label_3a02bc:
    if (ctx->pc == 0x3A02BCu) {
        ctx->pc = 0x3A02C0u;
        goto label_3a02c0;
    }
    ctx->pc = 0x3A02B8u;
    SET_GPR_U32(ctx, 31, 0x3A02C0u);
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x3A02B8u, 0x3A02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A02C0u;
label_3a02c0:
    // 0x3a02c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a02c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a02c4:
    // 0x3a02c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a02c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a02c8:
    // 0x3a02c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a02c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a02cc:
    // 0x3a02cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3a02ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3a02d0:
    // 0x3a02d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3a02d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a02d4:
    // 0x3a02d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a02d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3a02d8:
    // 0x3a02d8: 0x3e00008  jr          $ra
label_3a02dc:
    if (ctx->pc == 0x3A02DCu) {
        ctx->pc = 0x3A02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02D8u;
        // 0x3a02dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A02E0u;
        goto label_fallthrough_0x3a02d8;
    }
    ctx->pc = 0x3A02D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02D8u;
        // 0x3a02dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A02D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a02d8:
    ctx->pc = 0x3A02E0u;
}
