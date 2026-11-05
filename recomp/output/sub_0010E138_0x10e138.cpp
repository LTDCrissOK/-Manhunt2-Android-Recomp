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

// Function: sub_0010E138
// Address: 0x10e138 - 0x10e410
void sub_0010E138_0x10e138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E138_0x10e138");
#endif

    switch (ctx->pc) {
        case 0x10e138u: goto label_10e138;
        case 0x10e13cu: goto label_10e13c;
        case 0x10e140u: goto label_10e140;
        case 0x10e144u: goto label_10e144;
        case 0x10e148u: goto label_10e148;
        case 0x10e14cu: goto label_10e14c;
        case 0x10e150u: goto label_10e150;
        case 0x10e154u: goto label_10e154;
        case 0x10e158u: goto label_10e158;
        case 0x10e15cu: goto label_10e15c;
        case 0x10e160u: goto label_10e160;
        case 0x10e164u: goto label_10e164;
        case 0x10e168u: goto label_10e168;
        case 0x10e16cu: goto label_10e16c;
        case 0x10e170u: goto label_10e170;
        case 0x10e174u: goto label_10e174;
        case 0x10e178u: goto label_10e178;
        case 0x10e17cu: goto label_10e17c;
        case 0x10e180u: goto label_10e180;
        case 0x10e184u: goto label_10e184;
        case 0x10e188u: goto label_10e188;
        case 0x10e18cu: goto label_10e18c;
        case 0x10e190u: goto label_10e190;
        case 0x10e194u: goto label_10e194;
        case 0x10e198u: goto label_10e198;
        case 0x10e19cu: goto label_10e19c;
        case 0x10e1a0u: goto label_10e1a0;
        case 0x10e1a4u: goto label_10e1a4;
        case 0x10e1a8u: goto label_10e1a8;
        case 0x10e1acu: goto label_10e1ac;
        case 0x10e1b0u: goto label_10e1b0;
        case 0x10e1b4u: goto label_10e1b4;
        case 0x10e1b8u: goto label_10e1b8;
        case 0x10e1bcu: goto label_10e1bc;
        case 0x10e1c0u: goto label_10e1c0;
        case 0x10e1c4u: goto label_10e1c4;
        case 0x10e1c8u: goto label_10e1c8;
        case 0x10e1ccu: goto label_10e1cc;
        case 0x10e1d0u: goto label_10e1d0;
        case 0x10e1d4u: goto label_10e1d4;
        case 0x10e1d8u: goto label_10e1d8;
        case 0x10e1dcu: goto label_10e1dc;
        case 0x10e1e0u: goto label_10e1e0;
        case 0x10e1e4u: goto label_10e1e4;
        case 0x10e1e8u: goto label_10e1e8;
        case 0x10e1ecu: goto label_10e1ec;
        case 0x10e1f0u: goto label_10e1f0;
        case 0x10e1f4u: goto label_10e1f4;
        case 0x10e1f8u: goto label_10e1f8;
        case 0x10e1fcu: goto label_10e1fc;
        case 0x10e200u: goto label_10e200;
        case 0x10e204u: goto label_10e204;
        case 0x10e208u: goto label_10e208;
        case 0x10e20cu: goto label_10e20c;
        case 0x10e210u: goto label_10e210;
        case 0x10e214u: goto label_10e214;
        case 0x10e218u: goto label_10e218;
        case 0x10e21cu: goto label_10e21c;
        case 0x10e220u: goto label_10e220;
        case 0x10e224u: goto label_10e224;
        case 0x10e228u: goto label_10e228;
        case 0x10e22cu: goto label_10e22c;
        case 0x10e230u: goto label_10e230;
        case 0x10e234u: goto label_10e234;
        case 0x10e238u: goto label_10e238;
        case 0x10e23cu: goto label_10e23c;
        case 0x10e240u: goto label_10e240;
        case 0x10e244u: goto label_10e244;
        case 0x10e248u: goto label_10e248;
        case 0x10e24cu: goto label_10e24c;
        case 0x10e250u: goto label_10e250;
        case 0x10e254u: goto label_10e254;
        case 0x10e258u: goto label_10e258;
        case 0x10e25cu: goto label_10e25c;
        case 0x10e260u: goto label_10e260;
        case 0x10e264u: goto label_10e264;
        case 0x10e268u: goto label_10e268;
        case 0x10e26cu: goto label_10e26c;
        case 0x10e270u: goto label_10e270;
        case 0x10e274u: goto label_10e274;
        case 0x10e278u: goto label_10e278;
        case 0x10e27cu: goto label_10e27c;
        case 0x10e280u: goto label_10e280;
        case 0x10e284u: goto label_10e284;
        case 0x10e288u: goto label_10e288;
        case 0x10e28cu: goto label_10e28c;
        case 0x10e290u: goto label_10e290;
        case 0x10e294u: goto label_10e294;
        case 0x10e298u: goto label_10e298;
        case 0x10e29cu: goto label_10e29c;
        case 0x10e2a0u: goto label_10e2a0;
        case 0x10e2a4u: goto label_10e2a4;
        case 0x10e2a8u: goto label_10e2a8;
        case 0x10e2acu: goto label_10e2ac;
        case 0x10e2b0u: goto label_10e2b0;
        case 0x10e2b4u: goto label_10e2b4;
        case 0x10e2b8u: goto label_10e2b8;
        case 0x10e2bcu: goto label_10e2bc;
        case 0x10e2c0u: goto label_10e2c0;
        case 0x10e2c4u: goto label_10e2c4;
        case 0x10e2c8u: goto label_10e2c8;
        case 0x10e2ccu: goto label_10e2cc;
        case 0x10e2d0u: goto label_10e2d0;
        case 0x10e2d4u: goto label_10e2d4;
        case 0x10e2d8u: goto label_10e2d8;
        case 0x10e2dcu: goto label_10e2dc;
        case 0x10e2e0u: goto label_10e2e0;
        case 0x10e2e4u: goto label_10e2e4;
        case 0x10e2e8u: goto label_10e2e8;
        case 0x10e2ecu: goto label_10e2ec;
        case 0x10e2f0u: goto label_10e2f0;
        case 0x10e2f4u: goto label_10e2f4;
        case 0x10e2f8u: goto label_10e2f8;
        case 0x10e2fcu: goto label_10e2fc;
        case 0x10e300u: goto label_10e300;
        case 0x10e304u: goto label_10e304;
        case 0x10e308u: goto label_10e308;
        case 0x10e30cu: goto label_10e30c;
        case 0x10e310u: goto label_10e310;
        case 0x10e314u: goto label_10e314;
        case 0x10e318u: goto label_10e318;
        case 0x10e31cu: goto label_10e31c;
        case 0x10e320u: goto label_10e320;
        case 0x10e324u: goto label_10e324;
        case 0x10e328u: goto label_10e328;
        case 0x10e32cu: goto label_10e32c;
        case 0x10e330u: goto label_10e330;
        case 0x10e334u: goto label_10e334;
        case 0x10e338u: goto label_10e338;
        case 0x10e33cu: goto label_10e33c;
        case 0x10e340u: goto label_10e340;
        case 0x10e344u: goto label_10e344;
        case 0x10e348u: goto label_10e348;
        case 0x10e34cu: goto label_10e34c;
        case 0x10e350u: goto label_10e350;
        case 0x10e354u: goto label_10e354;
        case 0x10e358u: goto label_10e358;
        case 0x10e35cu: goto label_10e35c;
        case 0x10e360u: goto label_10e360;
        case 0x10e364u: goto label_10e364;
        case 0x10e368u: goto label_10e368;
        case 0x10e36cu: goto label_10e36c;
        case 0x10e370u: goto label_10e370;
        case 0x10e374u: goto label_10e374;
        case 0x10e378u: goto label_10e378;
        case 0x10e37cu: goto label_10e37c;
        case 0x10e380u: goto label_10e380;
        case 0x10e384u: goto label_10e384;
        case 0x10e388u: goto label_10e388;
        case 0x10e38cu: goto label_10e38c;
        case 0x10e390u: goto label_10e390;
        case 0x10e394u: goto label_10e394;
        case 0x10e398u: goto label_10e398;
        case 0x10e39cu: goto label_10e39c;
        case 0x10e3a0u: goto label_10e3a0;
        case 0x10e3a4u: goto label_10e3a4;
        case 0x10e3a8u: goto label_10e3a8;
        case 0x10e3acu: goto label_10e3ac;
        case 0x10e3b0u: goto label_10e3b0;
        case 0x10e3b4u: goto label_10e3b4;
        case 0x10e3b8u: goto label_10e3b8;
        case 0x10e3bcu: goto label_10e3bc;
        case 0x10e3c0u: goto label_10e3c0;
        case 0x10e3c4u: goto label_10e3c4;
        case 0x10e3c8u: goto label_10e3c8;
        case 0x10e3ccu: goto label_10e3cc;
        case 0x10e3d0u: goto label_10e3d0;
        case 0x10e3d4u: goto label_10e3d4;
        case 0x10e3d8u: goto label_10e3d8;
        case 0x10e3dcu: goto label_10e3dc;
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3e4u: goto label_10e3e4;
        case 0x10e3e8u: goto label_10e3e8;
        case 0x10e3ecu: goto label_10e3ec;
        case 0x10e3f0u: goto label_10e3f0;
        case 0x10e3f4u: goto label_10e3f4;
        case 0x10e3f8u: goto label_10e3f8;
        case 0x10e3fcu: goto label_10e3fc;
        case 0x10e400u: goto label_10e400;
        case 0x10e404u: goto label_10e404;
        case 0x10e408u: goto label_10e408;
        case 0x10e40cu: goto label_10e40c;
        default: break;
    }

    ctx->pc = 0x10e138u;

label_10e138:
    // 0x10e138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10e13c:
    // 0x10e13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10e140:
    // 0x10e140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10e140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10e144:
    // 0x10e144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10e144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10e148:
    // 0x10e148: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10e148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_10e14c:
    // 0x10e14c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10e14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_10e150:
    // 0x10e150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10e154:
    // 0x10e154: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x10e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_10e158:
    // 0x10e158: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_10e15c:
    if (ctx->pc == 0x10E15Cu) {
        ctx->pc = 0x10E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E158u;
        // 0x10e15c: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E160u;
        goto label_10e160;
    }
    ctx->pc = 0x10E158u;
    {
        const bool branch_taken_0x10e158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e158) {
            ctx->pc = 0x10E15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E158u;
            // 0x10e15c: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E198u;
            goto label_10e198;
        }
    }
    ctx->pc = 0x10E160u;
label_10e160:
    // 0x10e160: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10e164:
    // 0x10e164: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_10e168:
    if (ctx->pc == 0x10E168u) {
        ctx->pc = 0x10E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E164u;
        // 0x10e168: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E16Cu;
        goto label_10e16c;
    }
    ctx->pc = 0x10E164u;
    {
        const bool branch_taken_0x10e164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e164) {
            ctx->pc = 0x10E168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E164u;
            // 0x10e168: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E198u;
            goto label_10e198;
        }
    }
    ctx->pc = 0x10E16Cu;
label_10e16c:
    // 0x10e16c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10e170:
    // 0x10e170: 0x5040009c  beql        $v0, $zero, . + 4 + (0x9C << 2)
label_10e174:
    if (ctx->pc == 0x10E174u) {
        ctx->pc = 0x10E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E170u;
        // 0x10e174: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E178u;
        goto label_10e178;
    }
    ctx->pc = 0x10E170u;
    {
        const bool branch_taken_0x10e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e170) {
            ctx->pc = 0x10E174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E170u;
            // 0x10e174: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E178u;
label_10e178:
    // 0x10e178: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10e17c:
    // 0x10e17c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_10e180:
    if (ctx->pc == 0x10E180u) {
        ctx->pc = 0x10E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E17Cu;
        // 0x10e180: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E184u;
        goto label_10e184;
    }
    ctx->pc = 0x10E17Cu;
    {
        const bool branch_taken_0x10e17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e17c) {
            ctx->pc = 0x10E180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E17Cu;
            // 0x10e180: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E198u;
            goto label_10e198;
        }
    }
    ctx->pc = 0x10E184u;
label_10e184:
    // 0x10e184: 0xc044fc0  jal         func_113F00
label_10e188:
    if (ctx->pc == 0x10E188u) {
        ctx->pc = 0x10E18Cu;
        goto label_10e18c;
    }
    ctx->pc = 0x10E184u;
    SET_GPR_U32(ctx, 31, 0x10E18Cu);
    ctx->pc = 0x113F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113F00u, 0x10E184u, 0x10E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E18Cu;
label_10e18c:
    // 0x10e18c: 0x54400095  bnel        $v0, $zero, . + 4 + (0x95 << 2)
label_10e190:
    if (ctx->pc == 0x10E190u) {
        ctx->pc = 0x10E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E18Cu;
        // 0x10e190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E194u;
        goto label_10e194;
    }
    ctx->pc = 0x10E18Cu;
    {
        const bool branch_taken_0x10e18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e18c) {
            ctx->pc = 0x10E190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E18Cu;
            // 0x10e190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E194u;
label_10e194:
    // 0x10e194: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10e198:
    // 0x10e198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e19c:
    if (ctx->pc == 0x10E19Cu) {
        ctx->pc = 0x10E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E198u;
        // 0x10e19c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1A0u;
        goto label_10e1a0;
    }
    ctx->pc = 0x10E198u;
    {
        const bool branch_taken_0x10e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E198u;
        // 0x10e19c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e198) {
            ctx->pc = 0x10E1A8u;
            goto label_10e1a8;
        }
    }
    ctx->pc = 0x10E1A0u;
label_10e1a0:
    // 0x10e1a0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x10e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_10e1a4:
    // 0x10e1a4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x10e1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10e1a8:
    // 0x10e1a8: 0x5460008e  bnel        $v1, $zero, . + 4 + (0x8E << 2)
label_10e1ac:
    if (ctx->pc == 0x10E1ACu) {
        ctx->pc = 0x10E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1A8u;
        // 0x10e1ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1B0u;
        goto label_10e1b0;
    }
    ctx->pc = 0x10E1A8u;
    {
        const bool branch_taken_0x10e1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e1a8) {
            ctx->pc = 0x10E1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E1A8u;
            // 0x10e1ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E1B0u;
label_10e1b0:
    // 0x10e1b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x10e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10e1b4:
    // 0x10e1b4: 0x5060008b  beql        $v1, $zero, . + 4 + (0x8B << 2)
label_10e1b8:
    if (ctx->pc == 0x10E1B8u) {
        ctx->pc = 0x10E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1B4u;
        // 0x10e1b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1BCu;
        goto label_10e1bc;
    }
    ctx->pc = 0x10E1B4u;
    {
        const bool branch_taken_0x10e1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e1b4) {
            ctx->pc = 0x10E1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E1B4u;
            // 0x10e1b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E1BCu;
label_10e1bc:
    // 0x10e1bc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x10e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_10e1c0:
    // 0x10e1c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10e1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10e1c4:
    // 0x10e1c4: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x10e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_10e1c8:
    // 0x10e1c8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_10e1cc:
    // 0x10e1cc: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x10e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_10e1d0:
    // 0x10e1d0: 0x40f809  jalr        $v0
label_10e1d4:
    if (ctx->pc == 0x10E1D4u) {
        ctx->pc = 0x10E1D8u;
        goto label_10e1d8;
    }
    ctx->pc = 0x10E1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E1D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E1D0u, 0x10E1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E1D8u;
label_10e1d8:
    // 0x10e1d8: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x10e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_10e1dc:
    // 0x10e1dc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x10e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10e1e0:
    // 0x10e1e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e1e4:
    // 0x10e1e4: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x10e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_10e1e8:
    // 0x10e1e8: 0x40f809  jalr        $v0
label_10e1ec:
    if (ctx->pc == 0x10E1ECu) {
        ctx->pc = 0x10E1F0u;
        goto label_10e1f0;
    }
    ctx->pc = 0x10E1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E1F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E1E8u, 0x10E1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E1F0u;
label_10e1f0:
    // 0x10e1f0: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
label_10e1f4:
    // 0x10e1f4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_10e1f8:
    if (ctx->pc == 0x10E1F8u) {
        ctx->pc = 0x10E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1F4u;
        // 0x10e1f8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1FCu;
        goto label_10e1fc;
    }
    ctx->pc = 0x10E1F4u;
    {
        const bool branch_taken_0x10e1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1F4u;
        // 0x10e1f8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1f4) {
            ctx->pc = 0x10E224u;
            goto label_10e224;
        }
    }
    ctx->pc = 0x10E1FCu;
label_10e1fc:
    // 0x10e1fc: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x10e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_10e200:
    // 0x10e200: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_10e204:
    if (ctx->pc == 0x10E204u) {
        ctx->pc = 0x10E208u;
        goto label_10e208;
    }
    ctx->pc = 0x10E200u;
    {
        const bool branch_taken_0x10e200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e200) {
            ctx->pc = 0x10E224u;
            goto label_10e224;
        }
    }
    ctx->pc = 0x10E208u;
label_10e208:
    // 0x10e208: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x10e208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_10e20c:
    // 0x10e20c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_10e210:
    if (ctx->pc == 0x10E210u) {
        ctx->pc = 0x10E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E20Cu;
        // 0x10e210: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E214u;
        goto label_10e214;
    }
    ctx->pc = 0x10E20Cu;
    {
        const bool branch_taken_0x10e20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E20Cu;
        // 0x10e210: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e20c) {
            ctx->pc = 0x10E224u;
            goto label_10e224;
        }
    }
    ctx->pc = 0x10E214u;
label_10e214:
    // 0x10e214: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x10e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_10e218:
    // 0x10e218: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x10e218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10e21c:
    // 0x10e21c: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x10e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_10e220:
    // 0x10e220: 0x44900a  movz        $s2, $v0, $a0
    ctx->pc = 0x10e220u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_10e224:
    // 0x10e224: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_10e228:
    if (ctx->pc == 0x10E228u) {
        ctx->pc = 0x10E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E224u;
        // 0x10e228: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E22Cu;
        goto label_10e22c;
    }
    ctx->pc = 0x10E224u;
    {
        const bool branch_taken_0x10e224 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e224) {
            ctx->pc = 0x10E228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E224u;
            // 0x10e228: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E22Cu;
            goto label_10e22c;
        }
    }
    ctx->pc = 0x10E22Cu;
label_10e22c:
    // 0x10e22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e230:
    // 0x10e230: 0xc0448a6  jal         func_112298
label_10e234:
    if (ctx->pc == 0x10E234u) {
        ctx->pc = 0x10E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E230u;
        // 0x10e234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E238u;
        goto label_10e238;
    }
    ctx->pc = 0x10E230u;
    SET_GPR_U32(ctx, 31, 0x10E238u);
    ctx->pc = 0x10E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E230u;
    // 0x10e234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112298u, 0x10E230u, 0x10E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E238u;
label_10e238:
    // 0x10e238: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x10e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_10e23c:
    // 0x10e23c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_10e240:
    if (ctx->pc == 0x10E240u) {
        ctx->pc = 0x10E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E23Cu;
        // 0x10e240: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E244u;
        goto label_10e244;
    }
    ctx->pc = 0x10E23Cu;
    {
        const bool branch_taken_0x10e23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e23c) {
            ctx->pc = 0x10E240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E23Cu;
            // 0x10e240: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E284u;
            goto label_10e284;
        }
    }
    ctx->pc = 0x10E244u;
label_10e244:
    // 0x10e244: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x10e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_10e248:
    // 0x10e248: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_10e24c:
    if (ctx->pc == 0x10E24Cu) {
        ctx->pc = 0x10E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E248u;
        // 0x10e24c: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E250u;
        goto label_10e250;
    }
    ctx->pc = 0x10E248u;
    {
        const bool branch_taken_0x10e248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e248) {
            ctx->pc = 0x10E24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E248u;
            // 0x10e24c: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E280u;
            goto label_10e280;
        }
    }
    ctx->pc = 0x10E250u;
label_10e250:
    // 0x10e250: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_10e254:
    if (ctx->pc == 0x10E254u) {
        ctx->pc = 0x10E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E250u;
        // 0x10e254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E258u;
        goto label_10e258;
    }
    ctx->pc = 0x10E250u;
    {
        const bool branch_taken_0x10e250 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E250u;
        // 0x10e254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e250) {
            ctx->pc = 0x10E268u;
            goto label_10e268;
        }
    }
    ctx->pc = 0x10E258u;
label_10e258:
    // 0x10e258: 0xc043c56  jal         func_10F158
label_10e25c:
    if (ctx->pc == 0x10E25Cu) {
        ctx->pc = 0x10E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E258u;
        // 0x10e25c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E260u;
        goto label_10e260;
    }
    ctx->pc = 0x10E258u;
    SET_GPR_U32(ctx, 31, 0x10E260u);
    ctx->pc = 0x10E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E258u;
    // 0x10e25c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x10E258u, 0x10E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E260u;
label_10e260:
    // 0x10e260: 0x10000007  b           . + 4 + (0x7 << 2)
label_10e264:
    if (ctx->pc == 0x10E264u) {
        ctx->pc = 0x10E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E260u;
        // 0x10e264: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E268u;
        goto label_10e268;
    }
    ctx->pc = 0x10E260u;
    {
        const bool branch_taken_0x10e260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E260u;
        // 0x10e264: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e260) {
            ctx->pc = 0x10E280u;
            goto label_10e280;
        }
    }
    ctx->pc = 0x10E268u;
label_10e268:
    // 0x10e268: 0xc043c56  jal         func_10F158
label_10e26c:
    if (ctx->pc == 0x10E26Cu) {
        ctx->pc = 0x10E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E268u;
        // 0x10e26c: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E270u;
        goto label_10e270;
    }
    ctx->pc = 0x10E268u;
    SET_GPR_U32(ctx, 31, 0x10E270u);
    ctx->pc = 0x10E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E268u;
    // 0x10e26c: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x10E268u, 0x10E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E270u;
label_10e270:
    // 0x10e270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e274:
    // 0x10e274: 0xc0443d4  jal         func_110F50
label_10e278:
    if (ctx->pc == 0x10E278u) {
        ctx->pc = 0x10E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E274u;
        // 0x10e278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E27Cu;
        goto label_10e27c;
    }
    ctx->pc = 0x10E274u;
    SET_GPR_U32(ctx, 31, 0x10E27Cu);
    ctx->pc = 0x10E278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E274u;
    // 0x10e278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x10E274u, 0x10E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E27Cu;
label_10e27c:
    // 0x10e27c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x10e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_10e280:
    // 0x10e280: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x10e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_10e284:
    // 0x10e284: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_10e288:
    if (ctx->pc == 0x10E288u) {
        ctx->pc = 0x10E28Cu;
        goto label_10e28c;
    }
    ctx->pc = 0x10E284u;
    {
        const bool branch_taken_0x10e284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10e284) {
            ctx->pc = 0x10E2A4u;
            goto label_10e2a4;
        }
    }
    ctx->pc = 0x10E28Cu;
label_10e28c:
    // 0x10e28c: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
label_10e290:
    if (ctx->pc == 0x10E290u) {
        ctx->pc = 0x10E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E28Cu;
        // 0x10e290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E294u;
        goto label_10e294;
    }
    ctx->pc = 0x10E28Cu;
    {
        const bool branch_taken_0x10e28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e28c) {
            ctx->pc = 0x10E290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E28Cu;
            // 0x10e290: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E294u;
label_10e294:
    // 0x10e294: 0xc045422  jal         func_115088
label_10e298:
    if (ctx->pc == 0x10E298u) {
        ctx->pc = 0x10E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E294u;
        // 0x10e298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E29Cu;
        goto label_10e29c;
    }
    ctx->pc = 0x10E294u;
    SET_GPR_U32(ctx, 31, 0x10E29Cu);
    ctx->pc = 0x10E298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E294u;
    // 0x10e298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115088u, 0x10E294u, 0x10E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E29Cu;
label_10e29c:
    // 0x10e29c: 0x10000051  b           . + 4 + (0x51 << 2)
label_10e2a0:
    if (ctx->pc == 0x10E2A0u) {
        ctx->pc = 0x10E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E29Cu;
        // 0x10e2a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2A4u;
        goto label_10e2a4;
    }
    ctx->pc = 0x10E29Cu;
    {
        const bool branch_taken_0x10e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E29Cu;
        // 0x10e2a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e29c) {
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E2A4u;
label_10e2a4:
    // 0x10e2a4: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_10e2a8:
    if (ctx->pc == 0x10E2A8u) {
        ctx->pc = 0x10E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2A4u;
        // 0x10e2a8: 0x8e1100b0  lw          $s1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2ACu;
        goto label_10e2ac;
    }
    ctx->pc = 0x10E2A4u;
    {
        const bool branch_taken_0x10e2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e2a4) {
            ctx->pc = 0x10E2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E2A4u;
            // 0x10e2a8: 0x8e1100b0  lw          $s1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E2DCu;
            goto label_10e2dc;
        }
    }
    ctx->pc = 0x10E2ACu;
label_10e2ac:
    // 0x10e2ac: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_10e2b0:
    if (ctx->pc == 0x10E2B0u) {
        ctx->pc = 0x10E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2ACu;
        // 0x10e2b0: 0x8e1100b0  lw          $s1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2B4u;
        goto label_10e2b4;
    }
    ctx->pc = 0x10E2ACu;
    {
        const bool branch_taken_0x10e2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e2ac) {
            ctx->pc = 0x10E2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E2ACu;
            // 0x10e2b0: 0x8e1100b0  lw          $s1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E2DCu;
            goto label_10e2dc;
        }
    }
    ctx->pc = 0x10E2B4u;
label_10e2b4:
    // 0x10e2b4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x10e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_10e2b8:
    // 0x10e2b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e2bc:
    // 0x10e2bc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10e2c0:
    // 0x10e2c0: 0x40f809  jalr        $v0
label_10e2c4:
    if (ctx->pc == 0x10E2C4u) {
        ctx->pc = 0x10E2C8u;
        goto label_10e2c8;
    }
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E2C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E2C0u, 0x10E2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E2C8u;
label_10e2c8:
    // 0x10e2c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10e2cc:
    if (ctx->pc == 0x10E2CCu) {
        ctx->pc = 0x10E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2C8u;
        // 0x10e2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2D0u;
        goto label_10e2d0;
    }
    ctx->pc = 0x10E2C8u;
    {
        const bool branch_taken_0x10e2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2C8u;
        // 0x10e2cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2c8) {
            ctx->pc = 0x10E2D8u;
            goto label_10e2d8;
        }
    }
    ctx->pc = 0x10E2D0u;
label_10e2d0:
    // 0x10e2d0: 0x10000043  b           . + 4 + (0x43 << 2)
label_10e2d4:
    if (ctx->pc == 0x10E2D4u) {
        ctx->pc = 0x10E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2D0u;
        // 0x10e2d4: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2D8u;
        goto label_10e2d8;
    }
    ctx->pc = 0x10E2D0u;
    {
        const bool branch_taken_0x10e2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2D0u;
        // 0x10e2d4: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2d0) {
            ctx->pc = 0x10E3E0u;
            goto label_10e3e0;
        }
    }
    ctx->pc = 0x10E2D8u;
label_10e2d8:
    // 0x10e2d8: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x10e2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_10e2dc:
    // 0x10e2dc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_10e2e0:
    if (ctx->pc == 0x10E2E0u) {
        ctx->pc = 0x10E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2DCu;
        // 0x10e2e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E2E4u;
        goto label_10e2e4;
    }
    ctx->pc = 0x10E2DCu;
    {
        const bool branch_taken_0x10e2dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E2DCu;
        // 0x10e2e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e2dc) {
            ctx->pc = 0x10E2FCu;
            goto label_10e2fc;
        }
    }
    ctx->pc = 0x10E2E4u;
label_10e2e4:
    // 0x10e2e4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_10e2e8:
    // 0x10e2e8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x10e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10e2ec:
    // 0x10e2ec: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_10e2f0:
    // 0x10e2f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e2f4:
    // 0x10e2f4: 0x8c53020c  lw          $s3, 0x20C($v0)
    ctx->pc = 0x10e2f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_10e2f8:
    // 0x10e2f8: 0x13880a  movz        $s1, $zero, $s3
    ctx->pc = 0x10e2f8u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_10e2fc:
    // 0x10e2fc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x10e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_10e300:
    // 0x10e300: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_10e304:
    if (ctx->pc == 0x10E304u) {
        ctx->pc = 0x10E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E300u;
        // 0x10e304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E308u;
        goto label_10e308;
    }
    ctx->pc = 0x10E300u;
    {
        const bool branch_taken_0x10e300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E300u;
        // 0x10e304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e300) {
            ctx->pc = 0x10E380u;
            goto label_10e380;
        }
    }
    ctx->pc = 0x10E308u;
label_10e308:
    // 0x10e308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e30c:
    // 0x10e30c: 0xc044278  jal         func_1109E0
label_10e310:
    if (ctx->pc == 0x10E310u) {
        ctx->pc = 0x10E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E30Cu;
        // 0x10e310: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E314u;
        goto label_10e314;
    }
    ctx->pc = 0x10E30Cu;
    SET_GPR_U32(ctx, 31, 0x10E314u);
    ctx->pc = 0x10E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E30Cu;
    // 0x10e310: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1109E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1109E0u, 0x10E30Cu, 0x10E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E314u;
label_10e314:
    // 0x10e314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e318:
    // 0x10e318: 0xc04426e  jal         func_1109B8
label_10e31c:
    if (ctx->pc == 0x10E31Cu) {
        ctx->pc = 0x10E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E318u;
        // 0x10e31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E320u;
        goto label_10e320;
    }
    ctx->pc = 0x10E318u;
    SET_GPR_U32(ctx, 31, 0x10E320u);
    ctx->pc = 0x10E31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E318u;
    // 0x10e31c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1109B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1109B8u, 0x10E318u, 0x10E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E320u;
label_10e320:
    // 0x10e320: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_10e324:
    if (ctx->pc == 0x10E324u) {
        ctx->pc = 0x10E328u;
        goto label_10e328;
    }
    ctx->pc = 0x10E320u;
    {
        const bool branch_taken_0x10e320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e320) {
            ctx->pc = 0x10E33Cu;
            goto label_10e33c;
        }
    }
    ctx->pc = 0x10E328u;
label_10e328:
    // 0x10e328: 0xc044c38  jal         func_1130E0
label_10e32c:
    if (ctx->pc == 0x10E32Cu) {
        ctx->pc = 0x10E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E328u;
        // 0x10e32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E330u;
        goto label_10e330;
    }
    ctx->pc = 0x10E328u;
    SET_GPR_U32(ctx, 31, 0x10E330u);
    ctx->pc = 0x10E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E328u;
    // 0x10e32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130E0u, 0x10E328u, 0x10E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E330u;
label_10e330:
    // 0x10e330: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_10e334:
    if (ctx->pc == 0x10E334u) {
        ctx->pc = 0x10E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E330u;
        // 0x10e334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E338u;
        goto label_10e338;
    }
    ctx->pc = 0x10E330u;
    {
        const bool branch_taken_0x10e330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E330u;
        // 0x10e334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e330) {
            ctx->pc = 0x10E33Cu;
            goto label_10e33c;
        }
    }
    ctx->pc = 0x10E338u;
label_10e338:
    // 0x10e338: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x10e338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_10e33c:
    // 0x10e33c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_10e340:
    if (ctx->pc == 0x10E340u) {
        ctx->pc = 0x10E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E33Cu;
        // 0x10e340: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E344u;
        goto label_10e344;
    }
    ctx->pc = 0x10E33Cu;
    {
        const bool branch_taken_0x10e33c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E33Cu;
        // 0x10e340: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e33c) {
            ctx->pc = 0x10E350u;
            goto label_10e350;
        }
    }
    ctx->pc = 0x10E344u;
label_10e344:
    // 0x10e344: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10e344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10e348:
    // 0x10e348: 0xc0441f0  jal         func_1107C0
label_10e34c:
    if (ctx->pc == 0x10E34Cu) {
        ctx->pc = 0x10E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E348u;
        // 0x10e34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E350u;
        goto label_10e350;
    }
    ctx->pc = 0x10E348u;
    SET_GPR_U32(ctx, 31, 0x10E350u);
    ctx->pc = 0x10E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E348u;
    // 0x10e34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107C0u, 0x10E348u, 0x10E350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E350u;
label_10e350:
    // 0x10e350: 0xc045410  jal         func_115040
label_10e354:
    if (ctx->pc == 0x10E354u) {
        ctx->pc = 0x10E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E350u;
        // 0x10e354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E358u;
        goto label_10e358;
    }
    ctx->pc = 0x10E350u;
    SET_GPR_U32(ctx, 31, 0x10E358u);
    ctx->pc = 0x10E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E350u;
    // 0x10e354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115040u, 0x10E350u, 0x10E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E358u;
label_10e358:
    // 0x10e358: 0x56400022  bnel        $s2, $zero, . + 4 + (0x22 << 2)
label_10e35c:
    if (ctx->pc == 0x10E35Cu) {
        ctx->pc = 0x10E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E358u;
        // 0x10e35c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E360u;
        goto label_10e360;
    }
    ctx->pc = 0x10E358u;
    {
        const bool branch_taken_0x10e358 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e358) {
            ctx->pc = 0x10E35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E358u;
            // 0x10e35c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E360u;
label_10e360:
    // 0x10e360: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x10e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_10e364:
    // 0x10e364: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_10e368:
    if (ctx->pc == 0x10E368u) {
        ctx->pc = 0x10E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E364u;
        // 0x10e368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E36Cu;
        goto label_10e36c;
    }
    ctx->pc = 0x10E364u;
    {
        const bool branch_taken_0x10e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e364) {
            ctx->pc = 0x10E368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E364u;
            // 0x10e368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E36Cu;
label_10e36c:
    // 0x10e36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e370:
    // 0x10e370: 0xc0443d4  jal         func_110F50
label_10e374:
    if (ctx->pc == 0x10E374u) {
        ctx->pc = 0x10E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E370u;
        // 0x10e374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E378u;
        goto label_10e378;
    }
    ctx->pc = 0x10E370u;
    SET_GPR_U32(ctx, 31, 0x10E378u);
    ctx->pc = 0x10E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E370u;
    // 0x10e374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x10E370u, 0x10E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E378u;
label_10e378:
    // 0x10e378: 0x1000001a  b           . + 4 + (0x1A << 2)
label_10e37c:
    if (ctx->pc == 0x10E37Cu) {
        ctx->pc = 0x10E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E378u;
        // 0x10e37c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E380u;
        goto label_10e380;
    }
    ctx->pc = 0x10E378u;
    {
        const bool branch_taken_0x10e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E378u;
        // 0x10e37c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e378) {
            ctx->pc = 0x10E3E4u;
            goto label_10e3e4;
        }
    }
    ctx->pc = 0x10E380u;
label_10e380:
    // 0x10e380: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10e380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10e384:
    // 0x10e384: 0xc044278  jal         func_1109E0
label_10e388:
    if (ctx->pc == 0x10E388u) {
        ctx->pc = 0x10E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E384u;
        // 0x10e388: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E38Cu;
        goto label_10e38c;
    }
    ctx->pc = 0x10E384u;
    SET_GPR_U32(ctx, 31, 0x10E38Cu);
    ctx->pc = 0x10E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E384u;
    // 0x10e388: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1109E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1109E0u, 0x10E384u, 0x10E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E38Cu;
label_10e38c:
    // 0x10e38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e390:
    // 0x10e390: 0xc04426e  jal         func_1109B8
label_10e394:
    if (ctx->pc == 0x10E394u) {
        ctx->pc = 0x10E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E390u;
        // 0x10e394: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E398u;
        goto label_10e398;
    }
    ctx->pc = 0x10E390u;
    SET_GPR_U32(ctx, 31, 0x10E398u);
    ctx->pc = 0x10E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E390u;
    // 0x10e394: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1109B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1109B8u, 0x10E390u, 0x10E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E398u;
label_10e398:
    // 0x10e398: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_10e39c:
    if (ctx->pc == 0x10E39Cu) {
        ctx->pc = 0x10E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E398u;
        // 0x10e39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3A0u;
        goto label_10e3a0;
    }
    ctx->pc = 0x10E398u;
    {
        const bool branch_taken_0x10e398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E398u;
        // 0x10e39c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e398) {
            ctx->pc = 0x10E3B8u;
            goto label_10e3b8;
        }
    }
    ctx->pc = 0x10E3A0u;
label_10e3a0:
    // 0x10e3a0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10e3a4:
    // 0x10e3a4: 0xc0441f0  jal         func_1107C0
label_10e3a8:
    if (ctx->pc == 0x10E3A8u) {
        ctx->pc = 0x10E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3A4u;
        // 0x10e3a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3ACu;
        goto label_10e3ac;
    }
    ctx->pc = 0x10E3A4u;
    SET_GPR_U32(ctx, 31, 0x10E3ACu);
    ctx->pc = 0x10E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3A4u;
    // 0x10e3a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107C0u, 0x10E3A4u, 0x10E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3ACu;
label_10e3ac:
    // 0x10e3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e3b0:
    // 0x10e3b0: 0xc043a06  jal         func_10E818
label_10e3b4:
    if (ctx->pc == 0x10E3B4u) {
        ctx->pc = 0x10E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3B0u;
        // 0x10e3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3B8u;
        goto label_10e3b8;
    }
    ctx->pc = 0x10E3B0u;
    SET_GPR_U32(ctx, 31, 0x10E3B8u);
    ctx->pc = 0x10E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3B0u;
    // 0x10e3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E818u, 0x10E3B0u, 0x10E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3B8u;
label_10e3b8:
    // 0x10e3b8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x10e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_10e3bc:
    // 0x10e3bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10e3c0:
    if (ctx->pc == 0x10E3C0u) {
        ctx->pc = 0x10E3C4u;
        goto label_10e3c4;
    }
    ctx->pc = 0x10E3BCu;
    {
        const bool branch_taken_0x10e3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e3bc) {
            ctx->pc = 0x10E3D0u;
            goto label_10e3d0;
        }
    }
    ctx->pc = 0x10E3C4u;
label_10e3c4:
    // 0x10e3c4: 0xc044ca4  jal         func_113290
label_10e3c8:
    if (ctx->pc == 0x10E3C8u) {
        ctx->pc = 0x10E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3C4u;
        // 0x10e3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3CCu;
        goto label_10e3cc;
    }
    ctx->pc = 0x10E3C4u;
    SET_GPR_U32(ctx, 31, 0x10E3CCu);
    ctx->pc = 0x10E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3C4u;
    // 0x10e3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113290u, 0x10E3C4u, 0x10E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3CCu;
label_10e3cc:
    // 0x10e3cc: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x10e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_10e3d0:
    // 0x10e3d0: 0xc045354  jal         func_114D50
label_10e3d4:
    if (ctx->pc == 0x10E3D4u) {
        ctx->pc = 0x10E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D0u;
        // 0x10e3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3D8u;
        goto label_10e3d8;
    }
    ctx->pc = 0x10E3D0u;
    SET_GPR_U32(ctx, 31, 0x10E3D8u);
    ctx->pc = 0x10E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3D0u;
    // 0x10e3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D50u, 0x10E3D0u, 0x10E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3D8u;
label_10e3d8:
    // 0x10e3d8: 0xc04540e  jal         func_115038
label_10e3dc:
    if (ctx->pc == 0x10E3DCu) {
        ctx->pc = 0x10E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3D8u;
        // 0x10e3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3E0u;
        goto label_10e3e0;
    }
    ctx->pc = 0x10E3D8u;
    SET_GPR_U32(ctx, 31, 0x10E3E0u);
    ctx->pc = 0x10E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E3D8u;
    // 0x10e3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115038u, 0x10E3D8u, 0x10E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3E0u;
label_10e3e0:
    // 0x10e3e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e3e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e3e4:
    // 0x10e3e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10e3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10e3e8:
    // 0x10e3e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10e3e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10e3ec:
    // 0x10e3ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10e3ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10e3f0:
    // 0x10e3f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10e3f4:
    // 0x10e3f4: 0x3e00008  jr          $ra
label_10e3f8:
    if (ctx->pc == 0x10E3F8u) {
        ctx->pc = 0x10E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3F4u;
        // 0x10e3f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E3FCu;
        goto label_10e3fc;
    }
    ctx->pc = 0x10E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3F4u;
        // 0x10e3f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E3FCu;
label_10e3fc:
    // 0x10e3fc: 0x0  nop
    ctx->pc = 0x10e3fcu;
    // NOP
label_10e400:
    // 0x10e400: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_10e404:
    // 0x10e404: 0x0  nop
    ctx->pc = 0x10e404u;
    // NOP
label_10e408:
    // 0x10e408: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x10e408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_10e40c:
    // 0x10e40c: 0x0  nop
    ctx->pc = 0x10e40cu;
    // NOP
    ctx->pc = 0x10e410u;
}
