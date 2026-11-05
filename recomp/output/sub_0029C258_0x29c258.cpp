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

// Function: sub_0029C258
// Address: 0x29c258 - 0x29c3e0
void sub_0029C258_0x29c258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C258_0x29c258");
#endif

    switch (ctx->pc) {
        case 0x29c258u: goto label_29c258;
        case 0x29c25cu: goto label_29c25c;
        case 0x29c260u: goto label_29c260;
        case 0x29c264u: goto label_29c264;
        case 0x29c268u: goto label_29c268;
        case 0x29c26cu: goto label_29c26c;
        case 0x29c270u: goto label_29c270;
        case 0x29c274u: goto label_29c274;
        case 0x29c278u: goto label_29c278;
        case 0x29c27cu: goto label_29c27c;
        case 0x29c280u: goto label_29c280;
        case 0x29c284u: goto label_29c284;
        case 0x29c288u: goto label_29c288;
        case 0x29c28cu: goto label_29c28c;
        case 0x29c290u: goto label_29c290;
        case 0x29c294u: goto label_29c294;
        case 0x29c298u: goto label_29c298;
        case 0x29c29cu: goto label_29c29c;
        case 0x29c2a0u: goto label_29c2a0;
        case 0x29c2a4u: goto label_29c2a4;
        case 0x29c2a8u: goto label_29c2a8;
        case 0x29c2acu: goto label_29c2ac;
        case 0x29c2b0u: goto label_29c2b0;
        case 0x29c2b4u: goto label_29c2b4;
        case 0x29c2b8u: goto label_29c2b8;
        case 0x29c2bcu: goto label_29c2bc;
        case 0x29c2c0u: goto label_29c2c0;
        case 0x29c2c4u: goto label_29c2c4;
        case 0x29c2c8u: goto label_29c2c8;
        case 0x29c2ccu: goto label_29c2cc;
        case 0x29c2d0u: goto label_29c2d0;
        case 0x29c2d4u: goto label_29c2d4;
        case 0x29c2d8u: goto label_29c2d8;
        case 0x29c2dcu: goto label_29c2dc;
        case 0x29c2e0u: goto label_29c2e0;
        case 0x29c2e4u: goto label_29c2e4;
        case 0x29c2e8u: goto label_29c2e8;
        case 0x29c2ecu: goto label_29c2ec;
        case 0x29c2f0u: goto label_29c2f0;
        case 0x29c2f4u: goto label_29c2f4;
        case 0x29c2f8u: goto label_29c2f8;
        case 0x29c2fcu: goto label_29c2fc;
        case 0x29c300u: goto label_29c300;
        case 0x29c304u: goto label_29c304;
        case 0x29c308u: goto label_29c308;
        case 0x29c30cu: goto label_29c30c;
        case 0x29c310u: goto label_29c310;
        case 0x29c314u: goto label_29c314;
        case 0x29c318u: goto label_29c318;
        case 0x29c31cu: goto label_29c31c;
        case 0x29c320u: goto label_29c320;
        case 0x29c324u: goto label_29c324;
        case 0x29c328u: goto label_29c328;
        case 0x29c32cu: goto label_29c32c;
        case 0x29c330u: goto label_29c330;
        case 0x29c334u: goto label_29c334;
        case 0x29c338u: goto label_29c338;
        case 0x29c33cu: goto label_29c33c;
        case 0x29c340u: goto label_29c340;
        case 0x29c344u: goto label_29c344;
        case 0x29c348u: goto label_29c348;
        case 0x29c34cu: goto label_29c34c;
        case 0x29c350u: goto label_29c350;
        case 0x29c354u: goto label_29c354;
        case 0x29c358u: goto label_29c358;
        case 0x29c35cu: goto label_29c35c;
        case 0x29c360u: goto label_29c360;
        case 0x29c364u: goto label_29c364;
        case 0x29c368u: goto label_29c368;
        case 0x29c36cu: goto label_29c36c;
        case 0x29c370u: goto label_29c370;
        case 0x29c374u: goto label_29c374;
        case 0x29c378u: goto label_29c378;
        case 0x29c37cu: goto label_29c37c;
        case 0x29c380u: goto label_29c380;
        case 0x29c384u: goto label_29c384;
        case 0x29c388u: goto label_29c388;
        case 0x29c38cu: goto label_29c38c;
        case 0x29c390u: goto label_29c390;
        case 0x29c394u: goto label_29c394;
        case 0x29c398u: goto label_29c398;
        case 0x29c39cu: goto label_29c39c;
        case 0x29c3a0u: goto label_29c3a0;
        case 0x29c3a4u: goto label_29c3a4;
        case 0x29c3a8u: goto label_29c3a8;
        case 0x29c3acu: goto label_29c3ac;
        case 0x29c3b0u: goto label_29c3b0;
        case 0x29c3b4u: goto label_29c3b4;
        case 0x29c3b8u: goto label_29c3b8;
        case 0x29c3bcu: goto label_29c3bc;
        case 0x29c3c0u: goto label_29c3c0;
        case 0x29c3c4u: goto label_29c3c4;
        case 0x29c3c8u: goto label_29c3c8;
        case 0x29c3ccu: goto label_29c3cc;
        case 0x29c3d0u: goto label_29c3d0;
        case 0x29c3d4u: goto label_29c3d4;
        case 0x29c3d8u: goto label_29c3d8;
        case 0x29c3dcu: goto label_29c3dc;
        default: break;
    }

    ctx->pc = 0x29c258u;

label_29c258:
    // 0x29c258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29c25c:
    // 0x29c25c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_29c260:
    // 0x29c260: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29c260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c264:
    // 0x29c264: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_29c268:
    // 0x29c268: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x29c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_29c26c:
    // 0x29c26c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c270:
    // 0x29c270: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29c270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29c274:
    // 0x29c274: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29c274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29c278:
    // 0x29c278: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29c27c:
    // 0x29c27c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29c27cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c280:
    // 0x29c280: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_29c284:
    // 0x29c284: 0x24a5bed8  addiu       $a1, $a1, -0x4128
    ctx->pc = 0x29c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950616));
label_29c288:
    // 0x29c288: 0xc0d73cc  jal         func_35CF30
label_29c28c:
    if (ctx->pc == 0x29C28Cu) {
        ctx->pc = 0x29C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C288u;
        // 0x29c28c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C290u;
        goto label_29c290;
    }
    ctx->pc = 0x29C288u;
    SET_GPR_U32(ctx, 31, 0x29C290u);
    ctx->pc = 0x29C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C288u;
    // 0x29c28c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C288u, 0x29C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C290u;
label_29c290:
    // 0x29c290: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c294:
    // 0x29c294: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_29c298:
    if (ctx->pc == 0x29C298u) {
        ctx->pc = 0x29C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C294u;
        // 0x29c298: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C29Cu;
        goto label_29c29c;
    }
    ctx->pc = 0x29C294u;
    {
        const bool branch_taken_0x29c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C294u;
        // 0x29c298: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c294) {
            ctx->pc = 0x29C3C0u;
            goto label_29c3c0;
        }
    }
    ctx->pc = 0x29C29Cu;
label_29c29c:
    // 0x29c29c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c2a0:
    // 0x29c2a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29c2a4:
    if (ctx->pc == 0x29C2A4u) {
        ctx->pc = 0x29C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2A0u;
        // 0x29c2a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2A8u;
        goto label_29c2a8;
    }
    ctx->pc = 0x29C2A0u;
    {
        const bool branch_taken_0x29c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2A0u;
        // 0x29c2a4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2a0) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C2A8u;
label_29c2a8:
    // 0x29c2a8: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x29c2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
label_29c2ac:
    // 0x29c2ac: 0xc0d73cc  jal         func_35CF30
label_29c2b0:
    if (ctx->pc == 0x29C2B0u) {
        ctx->pc = 0x29C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2ACu;
        // 0x29c2b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2B4u;
        goto label_29c2b4;
    }
    ctx->pc = 0x29C2ACu;
    SET_GPR_U32(ctx, 31, 0x29C2B4u);
    ctx->pc = 0x29C2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2ACu;
    // 0x29c2b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C2ACu, 0x29C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2B4u;
label_29c2b4:
    // 0x29c2b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c2b8:
    // 0x29c2b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29c2bc:
    if (ctx->pc == 0x29C2BCu) {
        ctx->pc = 0x29C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2B8u;
        // 0x29c2bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2C0u;
        goto label_29c2c0;
    }
    ctx->pc = 0x29C2B8u;
    {
        const bool branch_taken_0x29c2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2B8u;
        // 0x29c2bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2b8) {
            ctx->pc = 0x29C2D0u;
            goto label_29c2d0;
        }
    }
    ctx->pc = 0x29C2C0u;
label_29c2c0:
    // 0x29c2c0: 0xc0a7142  jal         func_29C508
label_29c2c4:
    if (ctx->pc == 0x29C2C4u) {
        ctx->pc = 0x29C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2C0u;
        // 0x29c2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2C8u;
        goto label_29c2c8;
    }
    ctx->pc = 0x29C2C0u;
    SET_GPR_U32(ctx, 31, 0x29C2C8u);
    ctx->pc = 0x29C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2C0u;
    // 0x29c2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x29C2C0u, 0x29C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2C8u;
label_29c2c8:
    // 0x29c2c8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_29c2cc:
    if (ctx->pc == 0x29C2CCu) {
        ctx->pc = 0x29C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2C8u;
        // 0x29c2cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2D0u;
        goto label_29c2d0;
    }
    ctx->pc = 0x29C2C8u;
    {
        const bool branch_taken_0x29c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2C8u;
        // 0x29c2cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2c8) {
            ctx->pc = 0x29C3C0u;
            goto label_29c3c0;
        }
    }
    ctx->pc = 0x29C2D0u;
label_29c2d0:
    // 0x29c2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29c2d4:
    // 0x29c2d4: 0xc0d73cc  jal         func_35CF30
label_29c2d8:
    if (ctx->pc == 0x29C2D8u) {
        ctx->pc = 0x29C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2D4u;
        // 0x29c2d8: 0x24a5c020  addiu       $a1, $a1, -0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2DCu;
        goto label_29c2dc;
    }
    ctx->pc = 0x29C2D4u;
    SET_GPR_U32(ctx, 31, 0x29C2DCu);
    ctx->pc = 0x29C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2D4u;
    // 0x29c2d8: 0x24a5c020  addiu       $a1, $a1, -0x3FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C2D4u, 0x29C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2DCu;
label_29c2dc:
    // 0x29c2dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c2e0:
    // 0x29c2e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_29c2e4:
    if (ctx->pc == 0x29C2E4u) {
        ctx->pc = 0x29C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2E0u;
        // 0x29c2e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2E8u;
        goto label_29c2e8;
    }
    ctx->pc = 0x29C2E0u;
    {
        const bool branch_taken_0x29c2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2E0u;
        // 0x29c2e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c2e0) {
            ctx->pc = 0x29C318u;
            goto label_29c318;
        }
    }
    ctx->pc = 0x29C2E8u;
label_29c2e8:
    // 0x29c2e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c2ec:
    // 0x29c2ec: 0xc0d7424  jal         func_35D090
label_29c2f0:
    if (ctx->pc == 0x29C2F0u) {
        ctx->pc = 0x29C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2ECu;
        // 0x29c2f0: 0x24a5c030  addiu       $a1, $a1, -0x3FD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C2F4u;
        goto label_29c2f4;
    }
    ctx->pc = 0x29C2ECu;
    SET_GPR_U32(ctx, 31, 0x29C2F4u);
    ctx->pc = 0x29C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2ECu;
    // 0x29c2f0: 0x24a5c030  addiu       $a1, $a1, -0x3FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29C2ECu, 0x29C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2F4u;
label_29c2f4:
    // 0x29c2f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c2f8:
    // 0x29c2f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29c2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c2fc:
    // 0x29c2fc: 0xc0a7096  jal         func_29C258
label_29c300:
    if (ctx->pc == 0x29C300u) {
        ctx->pc = 0x29C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C2FCu;
        // 0x29c300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C304u;
        goto label_29c304;
    }
    ctx->pc = 0x29C2FCu;
    SET_GPR_U32(ctx, 31, 0x29C304u);
    ctx->pc = 0x29C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2FCu;
    // 0x29c300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    goto label_29c258;
    ctx->pc = 0x29C304u;
label_29c304:
    // 0x29c304: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29c308:
    // 0x29c308: 0xc0d7412  jal         func_35D048
label_29c30c:
    if (ctx->pc == 0x29C30Cu) {
        ctx->pc = 0x29C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C308u;
        // 0x29c30c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C310u;
        goto label_29c310;
    }
    ctx->pc = 0x29C308u;
    SET_GPR_U32(ctx, 31, 0x29C310u);
    ctx->pc = 0x29C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C308u;
    // 0x29c30c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29C308u, 0x29C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C310u;
label_29c310:
    // 0x29c310: 0x1000002b  b           . + 4 + (0x2B << 2)
label_29c314:
    if (ctx->pc == 0x29C314u) {
        ctx->pc = 0x29C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C310u;
        // 0x29c314: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C318u;
        goto label_29c318;
    }
    ctx->pc = 0x29C310u;
    {
        const bool branch_taken_0x29c310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C310u;
        // 0x29c314: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c310) {
            ctx->pc = 0x29C3C0u;
            goto label_29c3c0;
        }
    }
    ctx->pc = 0x29C318u;
label_29c318:
    // 0x29c318: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x29c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_29c31c:
    // 0x29c31c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_29c320:
    if (ctx->pc == 0x29C320u) {
        ctx->pc = 0x29C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C31Cu;
        // 0x29c320: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C324u;
        goto label_29c324;
    }
    ctx->pc = 0x29C31Cu;
    {
        const bool branch_taken_0x29c31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C31Cu;
        // 0x29c320: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c31c) {
            ctx->pc = 0x29C3BCu;
            goto label_29c3bc;
        }
    }
    ctx->pc = 0x29C324u;
label_29c324:
    // 0x29c324: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x29c324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_29c328:
    // 0x29c328: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c32c:
    // 0x29c32c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29c330:
    // 0x29c330: 0xc0d73cc  jal         func_35CF30
label_29c334:
    if (ctx->pc == 0x29C334u) {
        ctx->pc = 0x29C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C330u;
        // 0x29c334: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C338u;
        goto label_29c338;
    }
    ctx->pc = 0x29C330u;
    SET_GPR_U32(ctx, 31, 0x29C338u);
    ctx->pc = 0x29C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C330u;
    // 0x29c334: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C330u, 0x29C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C338u;
label_29c338:
    // 0x29c338: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c33c:
    // 0x29c33c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_29c340:
    if (ctx->pc == 0x29C340u) {
        ctx->pc = 0x29C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C33Cu;
        // 0x29c340: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C344u;
        goto label_29c344;
    }
    ctx->pc = 0x29C33Cu;
    {
        const bool branch_taken_0x29c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c33c) {
            ctx->pc = 0x29C340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C33Cu;
            // 0x29c340: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C3B0u;
            goto label_29c3b0;
        }
    }
    ctx->pc = 0x29C344u;
label_29c344:
    // 0x29c344: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c348:
    // 0x29c348: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_29c34c:
    if (ctx->pc == 0x29C34Cu) {
        ctx->pc = 0x29C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C348u;
        // 0x29c34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C350u;
        goto label_29c350;
    }
    ctx->pc = 0x29C348u;
    {
        const bool branch_taken_0x29c348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C348u;
        // 0x29c34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c348) {
            ctx->pc = 0x29C398u;
            goto label_29c398;
        }
    }
    ctx->pc = 0x29C350u;
label_29c350:
    // 0x29c350: 0xa0540010  sb          $s4, 0x10($v0)
    ctx->pc = 0x29c350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 20));
label_29c354:
    // 0x29c354: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c358:
    // 0x29c358: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c35c:
    // 0x29c35c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29c360:
    // 0x29c360: 0x40f809  jalr        $v0
label_29c364:
    if (ctx->pc == 0x29C364u) {
        ctx->pc = 0x29C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C360u;
        // 0x29c364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C368u;
        goto label_29c368;
    }
    ctx->pc = 0x29C360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C368u);
        ctx->pc = 0x29C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C360u;
        // 0x29c364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C360u, 0x29C368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C368u;
label_29c368:
    // 0x29c368: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c36c:
    // 0x29c36c: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c370:
    // 0x29c370: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_29c374:
    // 0x29c374: 0x40f809  jalr        $v0
label_29c378:
    if (ctx->pc == 0x29C378u) {
        ctx->pc = 0x29C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C374u;
        // 0x29c378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C37Cu;
        goto label_29c37c;
    }
    ctx->pc = 0x29C374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C37Cu);
        ctx->pc = 0x29C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C374u;
        // 0x29c378: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C374u, 0x29C37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C37Cu;
label_29c37c:
    // 0x29c37c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c380:
    // 0x29c380: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c384:
    // 0x29c384: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x29c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_29c388:
    // 0x29c388: 0x40f809  jalr        $v0
label_29c38c:
    if (ctx->pc == 0x29C38Cu) {
        ctx->pc = 0x29C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C388u;
        // 0x29c38c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C390u;
        goto label_29c390;
    }
    ctx->pc = 0x29C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C390u);
        ctx->pc = 0x29C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C388u;
        // 0x29c38c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C388u, 0x29C390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C390u;
label_29c390:
    // 0x29c390: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_29c394:
    if (ctx->pc == 0x29C394u) {
        ctx->pc = 0x29C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C390u;
        // 0x29c394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C398u;
        goto label_29c398;
    }
    ctx->pc = 0x29C390u;
    {
        const bool branch_taken_0x29c390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C390u;
        // 0x29c394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c390) {
            ctx->pc = 0x29C3BCu;
            goto label_29c3bc;
        }
    }
    ctx->pc = 0x29C398u;
label_29c398:
    // 0x29c398: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c39c:
    // 0x29c39c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x29c39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29c3a0:
    // 0x29c3a0: 0xc0a711e  jal         func_29C478
label_29c3a4:
    if (ctx->pc == 0x29C3A4u) {
        ctx->pc = 0x29C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3A0u;
        // 0x29c3a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C3A8u;
        goto label_29c3a8;
    }
    ctx->pc = 0x29C3A0u;
    SET_GPR_U32(ctx, 31, 0x29C3A8u);
    ctx->pc = 0x29C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C3A0u;
    // 0x29c3a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C478u, 0x29C3A0u, 0x29C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3A8u;
label_29c3a8:
    // 0x29c3a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_29c3ac:
    if (ctx->pc == 0x29C3ACu) {
        ctx->pc = 0x29C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3A8u;
        // 0x29c3ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C3B0u;
        goto label_29c3b0;
    }
    ctx->pc = 0x29C3A8u;
    {
        const bool branch_taken_0x29c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3A8u;
        // 0x29c3ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3a8) {
            ctx->pc = 0x29C3C0u;
            goto label_29c3c0;
        }
    }
    ctx->pc = 0x29C3B0u;
label_29c3b0:
    // 0x29c3b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c3b4:
    // 0x29c3b4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_29c3b8:
    if (ctx->pc == 0x29C3B8u) {
        ctx->pc = 0x29C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3B4u;
        // 0x29c3b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C3BCu;
        goto label_29c3bc;
    }
    ctx->pc = 0x29C3B4u;
    {
        const bool branch_taken_0x29c3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3B4u;
        // 0x29c3b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c3b4) {
            ctx->pc = 0x29C328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c328;
        }
    }
    ctx->pc = 0x29C3BCu;
label_29c3bc:
    // 0x29c3bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29c3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c3c0:
    // 0x29c3c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29c3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29c3c4:
    // 0x29c3c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29c3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c3c8:
    // 0x29c3c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29c3c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29c3cc:
    // 0x29c3cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x29c3ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29c3d0:
    // 0x29c3d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29c3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_29c3d4:
    // 0x29c3d4: 0x3e00008  jr          $ra
label_29c3d8:
    if (ctx->pc == 0x29C3D8u) {
        ctx->pc = 0x29C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3D4u;
        // 0x29c3d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C3DCu;
        goto label_29c3dc;
    }
    ctx->pc = 0x29C3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3D4u;
        // 0x29c3d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C3DCu;
label_29c3dc:
    // 0x29c3dc: 0x0  nop
    ctx->pc = 0x29c3dcu;
    // NOP
    ctx->pc = 0x29c3e0u;
}
