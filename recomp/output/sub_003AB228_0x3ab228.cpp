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

// Function: sub_003AB228
// Address: 0x3ab228 - 0x3ab408
void sub_003AB228_0x3ab228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB228_0x3ab228");
#endif

    switch (ctx->pc) {
        case 0x3ab228u: goto label_3ab228;
        case 0x3ab22cu: goto label_3ab22c;
        case 0x3ab230u: goto label_3ab230;
        case 0x3ab234u: goto label_3ab234;
        case 0x3ab238u: goto label_3ab238;
        case 0x3ab23cu: goto label_3ab23c;
        case 0x3ab240u: goto label_3ab240;
        case 0x3ab244u: goto label_3ab244;
        case 0x3ab248u: goto label_3ab248;
        case 0x3ab24cu: goto label_3ab24c;
        case 0x3ab250u: goto label_3ab250;
        case 0x3ab254u: goto label_3ab254;
        case 0x3ab258u: goto label_3ab258;
        case 0x3ab25cu: goto label_3ab25c;
        case 0x3ab260u: goto label_3ab260;
        case 0x3ab264u: goto label_3ab264;
        case 0x3ab268u: goto label_3ab268;
        case 0x3ab26cu: goto label_3ab26c;
        case 0x3ab270u: goto label_3ab270;
        case 0x3ab274u: goto label_3ab274;
        case 0x3ab278u: goto label_3ab278;
        case 0x3ab27cu: goto label_3ab27c;
        case 0x3ab280u: goto label_3ab280;
        case 0x3ab284u: goto label_3ab284;
        case 0x3ab288u: goto label_3ab288;
        case 0x3ab28cu: goto label_3ab28c;
        case 0x3ab290u: goto label_3ab290;
        case 0x3ab294u: goto label_3ab294;
        case 0x3ab298u: goto label_3ab298;
        case 0x3ab29cu: goto label_3ab29c;
        case 0x3ab2a0u: goto label_3ab2a0;
        case 0x3ab2a4u: goto label_3ab2a4;
        case 0x3ab2a8u: goto label_3ab2a8;
        case 0x3ab2acu: goto label_3ab2ac;
        case 0x3ab2b0u: goto label_3ab2b0;
        case 0x3ab2b4u: goto label_3ab2b4;
        case 0x3ab2b8u: goto label_3ab2b8;
        case 0x3ab2bcu: goto label_3ab2bc;
        case 0x3ab2c0u: goto label_3ab2c0;
        case 0x3ab2c4u: goto label_3ab2c4;
        case 0x3ab2c8u: goto label_3ab2c8;
        case 0x3ab2ccu: goto label_3ab2cc;
        case 0x3ab2d0u: goto label_3ab2d0;
        case 0x3ab2d4u: goto label_3ab2d4;
        case 0x3ab2d8u: goto label_3ab2d8;
        case 0x3ab2dcu: goto label_3ab2dc;
        case 0x3ab2e0u: goto label_3ab2e0;
        case 0x3ab2e4u: goto label_3ab2e4;
        case 0x3ab2e8u: goto label_3ab2e8;
        case 0x3ab2ecu: goto label_3ab2ec;
        case 0x3ab2f0u: goto label_3ab2f0;
        case 0x3ab2f4u: goto label_3ab2f4;
        case 0x3ab2f8u: goto label_3ab2f8;
        case 0x3ab2fcu: goto label_3ab2fc;
        case 0x3ab300u: goto label_3ab300;
        case 0x3ab304u: goto label_3ab304;
        case 0x3ab308u: goto label_3ab308;
        case 0x3ab30cu: goto label_3ab30c;
        case 0x3ab310u: goto label_3ab310;
        case 0x3ab314u: goto label_3ab314;
        case 0x3ab318u: goto label_3ab318;
        case 0x3ab31cu: goto label_3ab31c;
        case 0x3ab320u: goto label_3ab320;
        case 0x3ab324u: goto label_3ab324;
        case 0x3ab328u: goto label_3ab328;
        case 0x3ab32cu: goto label_3ab32c;
        case 0x3ab330u: goto label_3ab330;
        case 0x3ab334u: goto label_3ab334;
        case 0x3ab338u: goto label_3ab338;
        case 0x3ab33cu: goto label_3ab33c;
        case 0x3ab340u: goto label_3ab340;
        case 0x3ab344u: goto label_3ab344;
        case 0x3ab348u: goto label_3ab348;
        case 0x3ab34cu: goto label_3ab34c;
        case 0x3ab350u: goto label_3ab350;
        case 0x3ab354u: goto label_3ab354;
        case 0x3ab358u: goto label_3ab358;
        case 0x3ab35cu: goto label_3ab35c;
        case 0x3ab360u: goto label_3ab360;
        case 0x3ab364u: goto label_3ab364;
        case 0x3ab368u: goto label_3ab368;
        case 0x3ab36cu: goto label_3ab36c;
        case 0x3ab370u: goto label_3ab370;
        case 0x3ab374u: goto label_3ab374;
        case 0x3ab378u: goto label_3ab378;
        case 0x3ab37cu: goto label_3ab37c;
        case 0x3ab380u: goto label_3ab380;
        case 0x3ab384u: goto label_3ab384;
        case 0x3ab388u: goto label_3ab388;
        case 0x3ab38cu: goto label_3ab38c;
        case 0x3ab390u: goto label_3ab390;
        case 0x3ab394u: goto label_3ab394;
        case 0x3ab398u: goto label_3ab398;
        case 0x3ab39cu: goto label_3ab39c;
        case 0x3ab3a0u: goto label_3ab3a0;
        case 0x3ab3a4u: goto label_3ab3a4;
        case 0x3ab3a8u: goto label_3ab3a8;
        case 0x3ab3acu: goto label_3ab3ac;
        case 0x3ab3b0u: goto label_3ab3b0;
        case 0x3ab3b4u: goto label_3ab3b4;
        case 0x3ab3b8u: goto label_3ab3b8;
        case 0x3ab3bcu: goto label_3ab3bc;
        case 0x3ab3c0u: goto label_3ab3c0;
        case 0x3ab3c4u: goto label_3ab3c4;
        case 0x3ab3c8u: goto label_3ab3c8;
        case 0x3ab3ccu: goto label_3ab3cc;
        case 0x3ab3d0u: goto label_3ab3d0;
        case 0x3ab3d4u: goto label_3ab3d4;
        case 0x3ab3d8u: goto label_3ab3d8;
        case 0x3ab3dcu: goto label_3ab3dc;
        case 0x3ab3e0u: goto label_3ab3e0;
        case 0x3ab3e4u: goto label_3ab3e4;
        case 0x3ab3e8u: goto label_3ab3e8;
        case 0x3ab3ecu: goto label_3ab3ec;
        case 0x3ab3f0u: goto label_3ab3f0;
        case 0x3ab3f4u: goto label_3ab3f4;
        case 0x3ab3f8u: goto label_3ab3f8;
        case 0x3ab3fcu: goto label_3ab3fc;
        case 0x3ab400u: goto label_3ab400;
        case 0x3ab404u: goto label_3ab404;
        default: break;
    }

    ctx->pc = 0x3ab228u;

label_3ab228:
    // 0x3ab228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ab22c:
    // 0x3ab22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ab230:
    // 0x3ab230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ab234:
    // 0x3ab234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ab238:
    // 0x3ab238: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ab238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ab23c:
    // 0x3ab23c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_3ab240:
    if (ctx->pc == 0x3AB240u) {
        ctx->pc = 0x3AB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB23Cu;
        // 0x3ab240: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB244u;
        goto label_3ab244;
    }
    ctx->pc = 0x3AB23Cu;
    {
        const bool branch_taken_0x3ab23c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB23Cu;
        // 0x3ab240: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab23c) {
            ctx->pc = 0x3AB268u;
            goto label_3ab268;
        }
    }
    ctx->pc = 0x3AB244u;
label_3ab244:
    // 0x3ab244: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ab248:
    // 0x3ab248: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ab24c:
    // 0x3ab24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab250:
    // 0x3ab250: 0x2484f018  addiu       $a0, $a0, -0xFE8
    ctx->pc = 0x3ab250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963224));
label_3ab254:
    // 0x3ab254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab258:
    // 0x3ab258: 0x24a5eef0  addiu       $a1, $a1, -0x1110
    ctx->pc = 0x3ab258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
label_3ab25c:
    // 0x3ab25c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab260:
    // 0x3ab260: 0x80eaa6e  j           func_3AA9B8
label_3ab264:
    if (ctx->pc == 0x3AB264u) {
        ctx->pc = 0x3AB264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB260u;
        // 0x3ab264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB268u;
        goto label_3ab268;
    }
    ctx->pc = 0x3AB260u;
    ctx->pc = 0x3AB264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB260u;
    // 0x3ab264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB268u;
label_3ab268:
    // 0x3ab268: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ab268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ab26c:
    // 0x3ab26c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3ab270:
    if (ctx->pc == 0x3AB270u) {
        ctx->pc = 0x3AB270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB26Cu;
        // 0x3ab270: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB274u;
        goto label_3ab274;
    }
    ctx->pc = 0x3AB26Cu;
    {
        const bool branch_taken_0x3ab26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab26c) {
            ctx->pc = 0x3AB270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB26Cu;
            // 0x3ab270: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB298u;
            goto label_3ab298;
        }
    }
    ctx->pc = 0x3AB274u;
label_3ab274:
    // 0x3ab274: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ab278:
    // 0x3ab278: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ab27c:
    // 0x3ab27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab280:
    // 0x3ab280: 0x2484f028  addiu       $a0, $a0, -0xFD8
    ctx->pc = 0x3ab280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963240));
label_3ab284:
    // 0x3ab284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab288:
    // 0x3ab288: 0x24a5ef70  addiu       $a1, $a1, -0x1090
    ctx->pc = 0x3ab288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
label_3ab28c:
    // 0x3ab28c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab290:
    // 0x3ab290: 0x80eaa6e  j           func_3AA9B8
label_3ab294:
    if (ctx->pc == 0x3AB294u) {
        ctx->pc = 0x3AB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB290u;
        // 0x3ab294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB298u;
        goto label_3ab298;
    }
    ctx->pc = 0x3AB290u;
    ctx->pc = 0x3AB294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB290u;
    // 0x3ab294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB298u;
label_3ab298:
    // 0x3ab298: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_3ab29c:
    if (ctx->pc == 0x3AB29Cu) {
        ctx->pc = 0x3AB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB298u;
        // 0x3ab29c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2A0u;
        goto label_3ab2a0;
    }
    ctx->pc = 0x3AB298u;
    {
        const bool branch_taken_0x3ab298 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab298) {
            ctx->pc = 0x3AB29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB298u;
            // 0x3ab29c: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB2C8u;
            goto label_3ab2c8;
        }
    }
    ctx->pc = 0x3AB2A0u;
label_3ab2a0:
    // 0x3ab2a0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ab2a4:
    // 0x3ab2a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ab2a8:
    // 0x3ab2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab2ac:
    // 0x3ab2ac: 0x2484f038  addiu       $a0, $a0, -0xFC8
    ctx->pc = 0x3ab2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963256));
label_3ab2b0:
    // 0x3ab2b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab2b4:
    // 0x3ab2b4: 0x24a5efe0  addiu       $a1, $a1, -0x1020
    ctx->pc = 0x3ab2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963168));
label_3ab2b8:
    // 0x3ab2b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab2bc:
    // 0x3ab2bc: 0x80eaa6e  j           func_3AA9B8
label_3ab2c0:
    if (ctx->pc == 0x3AB2C0u) {
        ctx->pc = 0x3AB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2BCu;
        // 0x3ab2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2C4u;
        goto label_3ab2c4;
    }
    ctx->pc = 0x3AB2BCu;
    ctx->pc = 0x3AB2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB2BCu;
    // 0x3ab2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB2C4u;
label_3ab2c4:
    // 0x3ab2c4: 0x0  nop
    ctx->pc = 0x3ab2c4u;
    // NOP
label_3ab2c8:
    // 0x3ab2c8: 0x58e0004a  blezl       $a3, . + 4 + (0x4A << 2)
label_3ab2cc:
    if (ctx->pc == 0x3AB2CCu) {
        ctx->pc = 0x3AB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2C8u;
        // 0x3ab2cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2D0u;
        goto label_3ab2d0;
    }
    ctx->pc = 0x3AB2C8u;
    {
        const bool branch_taken_0x3ab2c8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x3ab2c8) {
            ctx->pc = 0x3AB2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB2C8u;
            // 0x3ab2cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB3F4u;
            goto label_3ab3f4;
        }
    }
    ctx->pc = 0x3AB2D0u;
label_3ab2d0:
    // 0x3ab2d0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x3ab2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ab2d4:
    // 0x3ab2d4: 0x51000047  beql        $t0, $zero, . + 4 + (0x47 << 2)
label_3ab2d8:
    if (ctx->pc == 0x3AB2D8u) {
        ctx->pc = 0x3AB2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2D4u;
        // 0x3ab2d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2DCu;
        goto label_3ab2dc;
    }
    ctx->pc = 0x3AB2D4u;
    {
        const bool branch_taken_0x3ab2d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab2d4) {
            ctx->pc = 0x3AB2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB2D4u;
            // 0x3ab2d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB3F4u;
            goto label_3ab3f4;
        }
    }
    ctx->pc = 0x3AB2DCu;
label_3ab2dc:
    // 0x3ab2dc: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
label_3ab2e0:
    if (ctx->pc == 0x3AB2E0u) {
        ctx->pc = 0x3AB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2DCu;
        // 0x3ab2e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2E4u;
        goto label_3ab2e4;
    }
    ctx->pc = 0x3AB2DCu;
    {
        const bool branch_taken_0x3ab2dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2DCu;
        // 0x3ab2e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab2dc) {
            ctx->pc = 0x3AB358u;
            goto label_3ab358;
        }
    }
    ctx->pc = 0x3AB2E4u;
label_3ab2e4:
    // 0x3ab2e4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3ab2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ab2e8:
    // 0x3ab2e8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_3ab2ec:
    if (ctx->pc == 0x3AB2ECu) {
        ctx->pc = 0x3AB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2E8u;
        // 0x3ab2ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB2F0u;
        goto label_3ab2f0;
    }
    ctx->pc = 0x3AB2E8u;
    {
        const bool branch_taken_0x3ab2e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab2e8) {
            ctx->pc = 0x3AB2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB2E8u;
            // 0x3ab2ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB2F0u;
            goto label_3ab2f0;
        }
    }
    ctx->pc = 0x3AB2F0u;
label_3ab2f0:
    // 0x3ab2f0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x3ab2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3ab2f4:
    // 0x3ab2f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ab2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ab2f8:
    // 0x3ab2f8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3ab2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ab2fc:
    // 0x3ab2fc: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x3ab2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_3ab300:
    // 0x3ab300: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x3ab300u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ab304:
    // 0x3ab304: 0x7066001a  div1        $zero, $v1, $a2
    ctx->pc = 0x3ab304u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_3ab308:
    // 0x3ab308: 0x2010  mfhi        $a0
    ctx->pc = 0x3ab308u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3ab30c:
    // 0x3ab30c: 0x70002810  mfhi1       $a1
    ctx->pc = 0x3ab30cu;
    SET_GPR_U64(ctx, 5, ctx->hi1);
label_3ab310:
    // 0x3ab310: 0x54850007  bnel        $a0, $a1, . + 4 + (0x7 << 2)
label_3ab314:
    if (ctx->pc == 0x3AB314u) {
        ctx->pc = 0x3AB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB310u;
        // 0x3ab314: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB318u;
        goto label_3ab318;
    }
    ctx->pc = 0x3AB310u;
    {
        const bool branch_taken_0x3ab310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ab310) {
            ctx->pc = 0x3AB314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB310u;
            // 0x3ab314: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB330u;
            goto label_3ab330;
        }
    }
    ctx->pc = 0x3AB318u;
label_3ab318:
    // 0x3ab318: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x3ab318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_3ab31c:
    // 0x3ab31c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ab31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ab320:
    // 0x3ab320: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ab320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab324:
    // 0x3ab324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ab324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ab328:
    // 0x3ab328: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ab32c:
    if (ctx->pc == 0x3AB32Cu) {
        ctx->pc = 0x3AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB328u;
        // 0x3ab32c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB330u;
        goto label_3ab330;
    }
    ctx->pc = 0x3AB328u;
    {
        const bool branch_taken_0x3ab328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB328u;
        // 0x3ab32c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab328) {
            ctx->pc = 0x3AB344u;
            goto label_3ab344;
        }
    }
    ctx->pc = 0x3AB330u;
label_3ab330:
    // 0x3ab330: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3ab334:
    if (ctx->pc == 0x3AB334u) {
        ctx->pc = 0x3AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB330u;
        // 0x3ab334: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB338u;
        goto label_3ab338;
    }
    ctx->pc = 0x3AB330u;
    {
        const bool branch_taken_0x3ab330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab330) {
            ctx->pc = 0x3AB334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB330u;
            // 0x3ab334: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB34Cu;
            goto label_3ab34c;
        }
    }
    ctx->pc = 0x3AB338u;
label_3ab338:
    // 0x3ab338: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3ab338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3ab33c:
    // 0x3ab33c: 0x40f809  jalr        $v0
label_3ab340:
    if (ctx->pc == 0x3AB340u) {
        ctx->pc = 0x3AB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB33Cu;
        // 0x3ab340: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB344u;
        goto label_3ab344;
    }
    ctx->pc = 0x3AB33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB344u);
        ctx->pc = 0x3AB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB33Cu;
        // 0x3ab340: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB33Cu, 0x3AB344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB344u;
label_3ab344:
    // 0x3ab344: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x3ab344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab348:
    // 0x3ab348: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3ab348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3ab34c:
    // 0x3ab34c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3ab34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ab350:
    // 0x3ab350: 0x10000027  b           . + 4 + (0x27 << 2)
label_3ab354:
    if (ctx->pc == 0x3AB354u) {
        ctx->pc = 0x3AB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB350u;
        // 0x3ab354: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB358u;
        goto label_3ab358;
    }
    ctx->pc = 0x3AB350u;
    {
        const bool branch_taken_0x3ab350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB350u;
        // 0x3ab354: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab350) {
            ctx->pc = 0x3AB3F0u;
            goto label_3ab3f0;
        }
    }
    ctx->pc = 0x3AB358u;
label_3ab358:
    // 0x3ab358: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_3ab35c:
    if (ctx->pc == 0x3AB35Cu) {
        ctx->pc = 0x3AB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB358u;
        // 0x3ab35c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB360u;
        goto label_3ab360;
    }
    ctx->pc = 0x3AB358u;
    {
        const bool branch_taken_0x3ab358 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ab358) {
            ctx->pc = 0x3AB35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB358u;
            // 0x3ab35c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB3D8u;
            goto label_3ab3d8;
        }
    }
    ctx->pc = 0x3AB360u;
label_3ab360:
    // 0x3ab360: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3ab360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3ab364:
    // 0x3ab364: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_3ab368:
    if (ctx->pc == 0x3AB368u) {
        ctx->pc = 0x3AB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB364u;
        // 0x3ab368: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB36Cu;
        goto label_3ab36c;
    }
    ctx->pc = 0x3AB364u;
    {
        const bool branch_taken_0x3ab364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab364) {
            ctx->pc = 0x3AB368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB364u;
            // 0x3ab368: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB36Cu;
            goto label_3ab36c;
        }
    }
    ctx->pc = 0x3AB36Cu;
label_3ab36c:
    // 0x3ab36c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3ab36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3ab370:
    // 0x3ab370: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ab370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ab374:
    // 0x3ab374: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3ab374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ab378:
    // 0x3ab378: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x3ab378u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3ab37c:
    // 0x3ab37c: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x3ab37cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ab380:
    // 0x3ab380: 0x7086001a  div1        $zero, $a0, $a2
    ctx->pc = 0x3ab380u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_3ab384:
    // 0x3ab384: 0x1010  mfhi        $v0
    ctx->pc = 0x3ab384u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3ab388:
    // 0x3ab388: 0x70001810  mfhi1       $v1
    ctx->pc = 0x3ab388u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
label_3ab38c:
    // 0x3ab38c: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_3ab390:
    if (ctx->pc == 0x3AB390u) {
        ctx->pc = 0x3AB390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB38Cu;
        // 0x3ab390: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB394u;
        goto label_3ab394;
    }
    ctx->pc = 0x3AB38Cu;
    {
        const bool branch_taken_0x3ab38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ab38c) {
            ctx->pc = 0x3AB390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB38Cu;
            // 0x3ab390: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB3B0u;
            goto label_3ab3b0;
        }
    }
    ctx->pc = 0x3AB394u;
label_3ab394:
    // 0x3ab394: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3ab394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_3ab398:
    // 0x3ab398: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3ab398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3ab39c:
    // 0x3ab39c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ab39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab3a0:
    // 0x3ab3a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ab3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ab3a4:
    // 0x3ab3a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ab3a8:
    if (ctx->pc == 0x3AB3A8u) {
        ctx->pc = 0x3AB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3A4u;
        // 0x3ab3a8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3ACu;
        goto label_3ab3ac;
    }
    ctx->pc = 0x3AB3A4u;
    {
        const bool branch_taken_0x3ab3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3A4u;
        // 0x3ab3a8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3a4) {
            ctx->pc = 0x3AB3C4u;
            goto label_3ab3c4;
        }
    }
    ctx->pc = 0x3AB3ACu;
label_3ab3ac:
    // 0x3ab3ac: 0x0  nop
    ctx->pc = 0x3ab3acu;
    // NOP
label_3ab3b0:
    // 0x3ab3b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3ab3b4:
    if (ctx->pc == 0x3AB3B4u) {
        ctx->pc = 0x3AB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3B0u;
        // 0x3ab3b4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3B8u;
        goto label_3ab3b8;
    }
    ctx->pc = 0x3AB3B0u;
    {
        const bool branch_taken_0x3ab3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab3b0) {
            ctx->pc = 0x3AB3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB3B0u;
            // 0x3ab3b4: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB3CCu;
            goto label_3ab3cc;
        }
    }
    ctx->pc = 0x3AB3B8u;
label_3ab3b8:
    // 0x3ab3b8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3ab3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3ab3bc:
    // 0x3ab3bc: 0x40f809  jalr        $v0
label_3ab3c0:
    if (ctx->pc == 0x3AB3C0u) {
        ctx->pc = 0x3AB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3BCu;
        // 0x3ab3c0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3C4u;
        goto label_3ab3c4;
    }
    ctx->pc = 0x3AB3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB3C4u);
        ctx->pc = 0x3AB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3BCu;
        // 0x3ab3c0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB3BCu, 0x3AB3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB3C4u;
label_3ab3c4:
    // 0x3ab3c4: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x3ab3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ab3c8:
    // 0x3ab3c8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3ab3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3ab3cc:
    // 0x3ab3cc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3ab3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ab3d0:
    // 0x3ab3d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ab3d4:
    if (ctx->pc == 0x3AB3D4u) {
        ctx->pc = 0x3AB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3D0u;
        // 0x3ab3d4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3D8u;
        goto label_3ab3d8;
    }
    ctx->pc = 0x3AB3D0u;
    {
        const bool branch_taken_0x3ab3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3D0u;
        // 0x3ab3d4: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3d0) {
            ctx->pc = 0x3AB3F0u;
            goto label_3ab3f0;
        }
    }
    ctx->pc = 0x3AB3D8u;
label_3ab3d8:
    // 0x3ab3d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3ab3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3ab3dc:
    // 0x3ab3dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ab3e0:
    if (ctx->pc == 0x3AB3E0u) {
        ctx->pc = 0x3AB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3DCu;
        // 0x3ab3e0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3E4u;
        goto label_3ab3e4;
    }
    ctx->pc = 0x3AB3DCu;
    {
        const bool branch_taken_0x3ab3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3DCu;
        // 0x3ab3e0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3dc) {
            ctx->pc = 0x3AB3F0u;
            goto label_3ab3f0;
        }
    }
    ctx->pc = 0x3AB3E4u;
label_3ab3e4:
    // 0x3ab3e4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3ab3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3ab3e8:
    // 0x3ab3e8: 0x40f809  jalr        $v0
label_3ab3ec:
    if (ctx->pc == 0x3AB3ECu) {
        ctx->pc = 0x3AB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3E8u;
        // 0x3ab3ec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB3F0u;
        goto label_3ab3f0;
    }
    ctx->pc = 0x3AB3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB3F0u);
        ctx->pc = 0x3AB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3E8u;
        // 0x3ab3ec: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB3E8u, 0x3AB3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB3F0u;
label_3ab3f0:
    // 0x3ab3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab3f4:
    // 0x3ab3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab3f8:
    // 0x3ab3f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ab3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab3fc:
    // 0x3ab3fc: 0x3e00008  jr          $ra
label_3ab400:
    if (ctx->pc == 0x3AB400u) {
        ctx->pc = 0x3AB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3FCu;
        // 0x3ab400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB404u;
        goto label_3ab404;
    }
    ctx->pc = 0x3AB3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3FCu;
        // 0x3ab400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB404u;
label_3ab404:
    // 0x3ab404: 0x0  nop
    ctx->pc = 0x3ab404u;
    // NOP
    ctx->pc = 0x3ab408u;
}
