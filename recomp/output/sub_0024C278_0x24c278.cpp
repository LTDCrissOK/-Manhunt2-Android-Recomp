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

// Function: sub_0024C278
// Address: 0x24c278 - 0x24c458
void sub_0024C278_0x24c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C278_0x24c278");
#endif

    switch (ctx->pc) {
        case 0x24c278u: goto label_24c278;
        case 0x24c27cu: goto label_24c27c;
        case 0x24c280u: goto label_24c280;
        case 0x24c284u: goto label_24c284;
        case 0x24c288u: goto label_24c288;
        case 0x24c28cu: goto label_24c28c;
        case 0x24c290u: goto label_24c290;
        case 0x24c294u: goto label_24c294;
        case 0x24c298u: goto label_24c298;
        case 0x24c29cu: goto label_24c29c;
        case 0x24c2a0u: goto label_24c2a0;
        case 0x24c2a4u: goto label_24c2a4;
        case 0x24c2a8u: goto label_24c2a8;
        case 0x24c2acu: goto label_24c2ac;
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2b4u: goto label_24c2b4;
        case 0x24c2b8u: goto label_24c2b8;
        case 0x24c2bcu: goto label_24c2bc;
        case 0x24c2c0u: goto label_24c2c0;
        case 0x24c2c4u: goto label_24c2c4;
        case 0x24c2c8u: goto label_24c2c8;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c2d0u: goto label_24c2d0;
        case 0x24c2d4u: goto label_24c2d4;
        case 0x24c2d8u: goto label_24c2d8;
        case 0x24c2dcu: goto label_24c2dc;
        case 0x24c2e0u: goto label_24c2e0;
        case 0x24c2e4u: goto label_24c2e4;
        case 0x24c2e8u: goto label_24c2e8;
        case 0x24c2ecu: goto label_24c2ec;
        case 0x24c2f0u: goto label_24c2f0;
        case 0x24c2f4u: goto label_24c2f4;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c2fcu: goto label_24c2fc;
        case 0x24c300u: goto label_24c300;
        case 0x24c304u: goto label_24c304;
        case 0x24c308u: goto label_24c308;
        case 0x24c30cu: goto label_24c30c;
        case 0x24c310u: goto label_24c310;
        case 0x24c314u: goto label_24c314;
        case 0x24c318u: goto label_24c318;
        case 0x24c31cu: goto label_24c31c;
        case 0x24c320u: goto label_24c320;
        case 0x24c324u: goto label_24c324;
        case 0x24c328u: goto label_24c328;
        case 0x24c32cu: goto label_24c32c;
        case 0x24c330u: goto label_24c330;
        case 0x24c334u: goto label_24c334;
        case 0x24c338u: goto label_24c338;
        case 0x24c33cu: goto label_24c33c;
        case 0x24c340u: goto label_24c340;
        case 0x24c344u: goto label_24c344;
        case 0x24c348u: goto label_24c348;
        case 0x24c34cu: goto label_24c34c;
        case 0x24c350u: goto label_24c350;
        case 0x24c354u: goto label_24c354;
        case 0x24c358u: goto label_24c358;
        case 0x24c35cu: goto label_24c35c;
        case 0x24c360u: goto label_24c360;
        case 0x24c364u: goto label_24c364;
        case 0x24c368u: goto label_24c368;
        case 0x24c36cu: goto label_24c36c;
        case 0x24c370u: goto label_24c370;
        case 0x24c374u: goto label_24c374;
        case 0x24c378u: goto label_24c378;
        case 0x24c37cu: goto label_24c37c;
        case 0x24c380u: goto label_24c380;
        case 0x24c384u: goto label_24c384;
        case 0x24c388u: goto label_24c388;
        case 0x24c38cu: goto label_24c38c;
        case 0x24c390u: goto label_24c390;
        case 0x24c394u: goto label_24c394;
        case 0x24c398u: goto label_24c398;
        case 0x24c39cu: goto label_24c39c;
        case 0x24c3a0u: goto label_24c3a0;
        case 0x24c3a4u: goto label_24c3a4;
        case 0x24c3a8u: goto label_24c3a8;
        case 0x24c3acu: goto label_24c3ac;
        case 0x24c3b0u: goto label_24c3b0;
        case 0x24c3b4u: goto label_24c3b4;
        case 0x24c3b8u: goto label_24c3b8;
        case 0x24c3bcu: goto label_24c3bc;
        case 0x24c3c0u: goto label_24c3c0;
        case 0x24c3c4u: goto label_24c3c4;
        case 0x24c3c8u: goto label_24c3c8;
        case 0x24c3ccu: goto label_24c3cc;
        case 0x24c3d0u: goto label_24c3d0;
        case 0x24c3d4u: goto label_24c3d4;
        case 0x24c3d8u: goto label_24c3d8;
        case 0x24c3dcu: goto label_24c3dc;
        case 0x24c3e0u: goto label_24c3e0;
        case 0x24c3e4u: goto label_24c3e4;
        case 0x24c3e8u: goto label_24c3e8;
        case 0x24c3ecu: goto label_24c3ec;
        case 0x24c3f0u: goto label_24c3f0;
        case 0x24c3f4u: goto label_24c3f4;
        case 0x24c3f8u: goto label_24c3f8;
        case 0x24c3fcu: goto label_24c3fc;
        case 0x24c400u: goto label_24c400;
        case 0x24c404u: goto label_24c404;
        case 0x24c408u: goto label_24c408;
        case 0x24c40cu: goto label_24c40c;
        case 0x24c410u: goto label_24c410;
        case 0x24c414u: goto label_24c414;
        case 0x24c418u: goto label_24c418;
        case 0x24c41cu: goto label_24c41c;
        case 0x24c420u: goto label_24c420;
        case 0x24c424u: goto label_24c424;
        case 0x24c428u: goto label_24c428;
        case 0x24c42cu: goto label_24c42c;
        case 0x24c430u: goto label_24c430;
        case 0x24c434u: goto label_24c434;
        case 0x24c438u: goto label_24c438;
        case 0x24c43cu: goto label_24c43c;
        case 0x24c440u: goto label_24c440;
        case 0x24c444u: goto label_24c444;
        case 0x24c448u: goto label_24c448;
        case 0x24c44cu: goto label_24c44c;
        case 0x24c450u: goto label_24c450;
        case 0x24c454u: goto label_24c454;
        default: break;
    }

    ctx->pc = 0x24c278u;

label_24c278:
    // 0x24c278: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24c27c:
    // 0x24c27c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24c280:
    // 0x24c280: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x24c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_24c284:
    // 0x24c284: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x24c284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_24c288:
    // 0x24c288: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24c288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c28c:
    // 0x24c28c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24c290:
    // 0x24c290: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24c290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_24c294:
    // 0x24c294: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_24c298:
    // 0x24c298: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x24c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_24c29c:
    // 0x24c29c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x24c29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_24c2a0:
    // 0x24c2a0: 0x8e63074c  lw          $v1, 0x74C($s3)
    ctx->pc = 0x24c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1868)));
label_24c2a4:
    // 0x24c2a4: 0x14620063  bne         $v1, $v0, . + 4 + (0x63 << 2)
label_24c2a8:
    if (ctx->pc == 0x24C2A8u) {
        ctx->pc = 0x24C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A4u;
        // 0x24c2a8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2ACu;
        goto label_24c2ac;
    }
    ctx->pc = 0x24C2A4u;
    {
        const bool branch_taken_0x24c2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2A4u;
        // 0x24c2a8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2a4) {
            ctx->pc = 0x24C434u;
            goto label_24c434;
        }
    }
    ctx->pc = 0x24C2ACu;
label_24c2ac:
    // 0x24c2ac: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x24c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_24c2b0:
    // 0x24c2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c2b4:
    // 0x24c2b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24c2b8:
    // 0x24c2b8: 0xc07957c  jal         func_1E55F0
label_24c2bc:
    if (ctx->pc == 0x24C2BCu) {
        ctx->pc = 0x24C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2B8u;
        // 0x24c2bc: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2C0u;
        goto label_24c2c0;
    }
    ctx->pc = 0x24C2B8u;
    SET_GPR_U32(ctx, 31, 0x24C2C0u);
    ctx->pc = 0x24C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2B8u;
    // 0x24c2bc: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x24C2B8u, 0x24C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2C0u;
label_24c2c0:
    // 0x24c2c0: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x24c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_24c2c4:
    // 0x24c2c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24c2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c2c8:
    // 0x24c2c8: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x24c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_24c2cc:
    // 0x24c2cc: 0x40f809  jalr        $v0
label_24c2d0:
    if (ctx->pc == 0x24C2D0u) {
        ctx->pc = 0x24C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2CCu;
        // 0x24c2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2D4u;
        goto label_24c2d4;
    }
    ctx->pc = 0x24C2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C2D4u);
        ctx->pc = 0x24C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2CCu;
        // 0x24c2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C2CCu, 0x24C2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C2D4u;
label_24c2d4:
    // 0x24c2d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c2d8:
    // 0x24c2d8: 0xc08a1f2  jal         func_2287C8
label_24c2dc:
    if (ctx->pc == 0x24C2DCu) {
        ctx->pc = 0x24C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2D8u;
        // 0x24c2dc: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2E0u;
        goto label_24c2e0;
    }
    ctx->pc = 0x24C2D8u;
    SET_GPR_U32(ctx, 31, 0x24C2E0u);
    ctx->pc = 0x24C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2D8u;
    // 0x24c2dc: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x24C2D8u, 0x24C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2E0u;
label_24c2e0:
    // 0x24c2e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24c2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c2e4:
    // 0x24c2e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24c2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c2e8:
    // 0x24c2e8: 0xc08a1f2  jal         func_2287C8
label_24c2ec:
    if (ctx->pc == 0x24C2ECu) {
        ctx->pc = 0x24C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2E8u;
        // 0x24c2ec: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2F0u;
        goto label_24c2f0;
    }
    ctx->pc = 0x24C2E8u;
    SET_GPR_U32(ctx, 31, 0x24C2F0u);
    ctx->pc = 0x24C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2E8u;
    // 0x24c2ec: 0x24050436  addiu       $a1, $zero, 0x436 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1078));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x24C2E8u, 0x24C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2F0u;
label_24c2f0:
    // 0x24c2f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c2f4:
    // 0x24c2f4: 0xc0f70ce  jal         func_3DC338
label_24c2f8:
    if (ctx->pc == 0x24C2F8u) {
        ctx->pc = 0x24C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2F4u;
        // 0x24c2f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2FCu;
        goto label_24c2fc;
    }
    ctx->pc = 0x24C2F4u;
    SET_GPR_U32(ctx, 31, 0x24C2FCu);
    ctx->pc = 0x24C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2F4u;
    // 0x24c2f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x24C2F4u, 0x24C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2FCu;
label_24c2fc:
    // 0x24c2fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24c300:
    if (ctx->pc == 0x24C300u) {
        ctx->pc = 0x24C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2FCu;
        // 0x24c300: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C304u;
        goto label_24c304;
    }
    ctx->pc = 0x24C2FCu;
    {
        const bool branch_taken_0x24c2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2FCu;
        // 0x24c300: 0x265000b0  addiu       $s0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2fc) {
            ctx->pc = 0x24C310u;
            goto label_24c310;
        }
    }
    ctx->pc = 0x24C304u;
label_24c304:
    // 0x24c304: 0xc0c4900  jal         func_312400
label_24c308:
    if (ctx->pc == 0x24C308u) {
        ctx->pc = 0x24C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C304u;
        // 0x24c308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C30Cu;
        goto label_24c30c;
    }
    ctx->pc = 0x24C304u;
    SET_GPR_U32(ctx, 31, 0x24C30Cu);
    ctx->pc = 0x24C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C304u;
    // 0x24c308: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x24C304u, 0x24C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C30Cu;
label_24c30c:
    // 0x24c30c: 0x265000b0  addiu       $s0, $s2, 0xB0
    ctx->pc = 0x24c30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_24c310:
    // 0x24c310: 0xc0f70ce  jal         func_3DC338
label_24c314:
    if (ctx->pc == 0x24C314u) {
        ctx->pc = 0x24C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C310u;
        // 0x24c314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C318u;
        goto label_24c318;
    }
    ctx->pc = 0x24C310u;
    SET_GPR_U32(ctx, 31, 0x24C318u);
    ctx->pc = 0x24C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C310u;
    // 0x24c314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x24C310u, 0x24C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C318u;
label_24c318:
    // 0x24c318: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24c31c:
    if (ctx->pc == 0x24C31Cu) {
        ctx->pc = 0x24C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C318u;
        // 0x24c31c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C320u;
        goto label_24c320;
    }
    ctx->pc = 0x24C318u;
    {
        const bool branch_taken_0x24c318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c318) {
            ctx->pc = 0x24C31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C318u;
            // 0x24c31c: 0xc6010004  lwc1        $f1, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C32Cu;
            goto label_24c32c;
        }
    }
    ctx->pc = 0x24C320u;
label_24c320:
    // 0x24c320: 0xc0c4900  jal         func_312400
label_24c324:
    if (ctx->pc == 0x24C324u) {
        ctx->pc = 0x24C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C320u;
        // 0x24c324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C328u;
        goto label_24c328;
    }
    ctx->pc = 0x24C320u;
    SET_GPR_U32(ctx, 31, 0x24C328u);
    ctx->pc = 0x24C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C320u;
    // 0x24c324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x24C320u, 0x24C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C328u;
label_24c328:
    // 0x24c328: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x24c328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24c32c:
    // 0x24c32c: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x24c32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24c330:
    // 0x24c330: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24c334:
    // 0x24c334: 0x0  nop
    ctx->pc = 0x24c334u;
    // NOP
label_24c338:
    // 0x24c338: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_24c33c:
    if (ctx->pc == 0x24C33Cu) {
        ctx->pc = 0x24C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C338u;
        // 0x24c33c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C340u;
        goto label_24c340;
    }
    ctx->pc = 0x24C338u;
    {
        const bool branch_taken_0x24c338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C338u;
        // 0x24c33c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c338) {
            ctx->pc = 0x24C344u;
            goto label_24c344;
        }
    }
    ctx->pc = 0x24C340u;
label_24c340:
    // 0x24c340: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x24c340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c344:
    // 0x24c344: 0xc0f70ce  jal         func_3DC338
label_24c348:
    if (ctx->pc == 0x24C348u) {
        ctx->pc = 0x24C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C344u;
        // 0x24c348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C34Cu;
        goto label_24c34c;
    }
    ctx->pc = 0x24C344u;
    SET_GPR_U32(ctx, 31, 0x24C34Cu);
    ctx->pc = 0x24C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C344u;
    // 0x24c348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x24C344u, 0x24C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C34Cu;
label_24c34c:
    // 0x24c34c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24c350:
    if (ctx->pc == 0x24C350u) {
        ctx->pc = 0x24C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C34Cu;
        // 0x24c350: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C354u;
        goto label_24c354;
    }
    ctx->pc = 0x24C34Cu;
    {
        const bool branch_taken_0x24c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c34c) {
            ctx->pc = 0x24C350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C34Cu;
            // 0x24c350: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C360u;
            goto label_24c360;
        }
    }
    ctx->pc = 0x24C354u;
label_24c354:
    // 0x24c354: 0xc0c4900  jal         func_312400
label_24c358:
    if (ctx->pc == 0x24C358u) {
        ctx->pc = 0x24C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C354u;
        // 0x24c358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C35Cu;
        goto label_24c35c;
    }
    ctx->pc = 0x24C354u;
    SET_GPR_U32(ctx, 31, 0x24C35Cu);
    ctx->pc = 0x24C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C354u;
    // 0x24c358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x24C354u, 0x24C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C35Cu;
label_24c35c:
    // 0x24c35c: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x24c35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24c360:
    // 0x24c360: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x24c360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_24c364:
    // 0x24c364: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x24c364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_24c368:
    // 0x24c368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c36c:
    // 0x24c36c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x24c36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24c370:
    // 0x24c370: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24c370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24c374:
    // 0x24c374: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24c374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24c378:
    // 0x24c378: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24c378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24c37c:
    // 0x24c37c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x24c37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24c380:
    // 0x24c380: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24c380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24c384:
    // 0x24c384: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x24c384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_24c388:
    // 0x24c388: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x24c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24c38c:
    // 0x24c38c: 0xc07957c  jal         func_1E55F0
label_24c390:
    if (ctx->pc == 0x24C390u) {
        ctx->pc = 0x24C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C38Cu;
        // 0x24c390: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C394u;
        goto label_24c394;
    }
    ctx->pc = 0x24C38Cu;
    SET_GPR_U32(ctx, 31, 0x24C394u);
    ctx->pc = 0x24C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C38Cu;
    // 0x24c390: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x24C38Cu, 0x24C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C394u;
label_24c394:
    // 0x24c394: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x24c394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_24c398:
    // 0x24c398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c39c:
    // 0x24c39c: 0xc4540014  lwc1        $f20, 0x14($v0)
    ctx->pc = 0x24c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24c3a0:
    // 0x24c3a0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24c3a4:
    // 0x24c3a4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24c3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24c3a8:
    // 0x24c3a8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x24c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_24c3ac:
    // 0x24c3ac: 0xc07957c  jal         func_1E55F0
label_24c3b0:
    if (ctx->pc == 0x24C3B0u) {
        ctx->pc = 0x24C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3ACu;
        // 0x24c3b0: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3B4u;
        goto label_24c3b4;
    }
    ctx->pc = 0x24C3ACu;
    SET_GPR_U32(ctx, 31, 0x24C3B4u);
    ctx->pc = 0x24C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3ACu;
    // 0x24c3b0: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x24C3ACu, 0x24C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3B4u;
label_24c3b4:
    // 0x24c3b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c3b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c3b8:
    // 0x24c3b8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x24c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24c3bc:
    // 0x24c3bc: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
label_24c3c0:
    if (ctx->pc == 0x24C3C0u) {
        ctx->pc = 0x24C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3BCu;
        // 0x24c3c0: 0x46140081  sub.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3C4u;
        goto label_24c3c4;
    }
    ctx->pc = 0x24C3BCu;
    {
        const bool branch_taken_0x24c3bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3BCu;
        // 0x24c3c0: 0x46140081  sub.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3bc) {
            ctx->pc = 0x24C3F8u;
            goto label_24c3f8;
        }
    }
    ctx->pc = 0x24C3C4u;
label_24c3c4:
    // 0x24c3c4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x24c3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_24c3c8:
    // 0x24c3c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24c3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_24c3cc:
    // 0x24c3cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24c3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24c3d0:
    // 0x24c3d0: 0x0  nop
    ctx->pc = 0x24c3d0u;
    // NOP
label_24c3d4:
    // 0x24c3d4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x24c3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24c3d8:
    // 0x24c3d8: 0x0  nop
    ctx->pc = 0x24c3d8u;
    // NOP
label_24c3dc:
    // 0x24c3dc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_24c3e0:
    if (ctx->pc == 0x24C3E0u) {
        ctx->pc = 0x24C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3DCu;
        // 0x24c3e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3E4u;
        goto label_24c3e4;
    }
    ctx->pc = 0x24C3DCu;
    {
        const bool branch_taken_0x24c3dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3DCu;
        // 0x24c3e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3dc) {
            ctx->pc = 0x24C438u;
            goto label_24c438;
        }
    }
    ctx->pc = 0x24C3E4u;
label_24c3e4:
    // 0x24c3e4: 0xe4620024  swc1        $f2, 0x24($v1)
    ctx->pc = 0x24c3e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_24c3e8:
    // 0x24c3e8: 0xc0767f2  jal         func_1D9FC8
label_24c3ec:
    if (ctx->pc == 0x24C3ECu) {
        ctx->pc = 0x24C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3E8u;
        // 0x24c3ec: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3F0u;
        goto label_24c3f0;
    }
    ctx->pc = 0x24C3E8u;
    SET_GPR_U32(ctx, 31, 0x24C3F0u);
    ctx->pc = 0x24C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3E8u;
    // 0x24c3ec: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x24C3E8u, 0x24C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3F0u;
label_24c3f0:
    // 0x24c3f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_24c3f4:
    if (ctx->pc == 0x24C3F4u) {
        ctx->pc = 0x24C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3F0u;
        // 0x24c3f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3F8u;
        goto label_24c3f8;
    }
    ctx->pc = 0x24C3F0u;
    {
        const bool branch_taken_0x24c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3F0u;
        // 0x24c3f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3f0) {
            ctx->pc = 0x24C438u;
            goto label_24c438;
        }
    }
    ctx->pc = 0x24C3F8u;
label_24c3f8:
    // 0x24c3f8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x24c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_24c3fc:
    // 0x24c3fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24c3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24c400:
    // 0x24c400: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_24c404:
    if (ctx->pc == 0x24C404u) {
        ctx->pc = 0x24C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C400u;
        // 0x24c404: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C408u;
        goto label_24c408;
    }
    ctx->pc = 0x24C400u;
    {
        const bool branch_taken_0x24c400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C400u;
        // 0x24c404: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c400) {
            ctx->pc = 0x24C434u;
            goto label_24c434;
        }
    }
    ctx->pc = 0x24C408u;
label_24c408:
    // 0x24c408: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x24c408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_24c40c:
    // 0x24c40c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24c40cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_24c410:
    // 0x24c410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24c410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24c414:
    // 0x24c414: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24c414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24c418:
    // 0x24c418: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24c41c:
    // 0x24c41c: 0x0  nop
    ctx->pc = 0x24c41cu;
    // NOP
label_24c420:
    // 0x24c420: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_24c424:
    if (ctx->pc == 0x24C424u) {
        ctx->pc = 0x24C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C420u;
        // 0x24c424: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C428u;
        goto label_24c428;
    }
    ctx->pc = 0x24C420u;
    {
        const bool branch_taken_0x24c420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c420) {
            ctx->pc = 0x24C424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C420u;
            // 0x24c424: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C42Cu;
            goto label_24c42c;
        }
    }
    ctx->pc = 0x24C428u;
label_24c428:
    // 0x24c428: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x24c428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_24c42c:
    // 0x24c42c: 0xc0767f2  jal         func_1D9FC8
label_24c430:
    if (ctx->pc == 0x24C430u) {
        ctx->pc = 0x24C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C42Cu;
        // 0x24c430: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C434u;
        goto label_24c434;
    }
    ctx->pc = 0x24C42Cu;
    SET_GPR_U32(ctx, 31, 0x24C434u);
    ctx->pc = 0x24C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C42Cu;
    // 0x24c430: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x24C42Cu, 0x24C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C434u;
label_24c434:
    // 0x24c434: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24c438:
    // 0x24c438: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24c438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24c43c:
    // 0x24c43c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c43cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24c440:
    // 0x24c440: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x24c440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24c444:
    // 0x24c444: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x24c444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24c448:
    // 0x24c448: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_24c44c:
    // 0x24c44c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x24c44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24c450:
    // 0x24c450: 0x3e00008  jr          $ra
label_24c454:
    if (ctx->pc == 0x24C454u) {
        ctx->pc = 0x24C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C450u;
        // 0x24c454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C458u;
        goto label_fallthrough_0x24c450;
    }
    ctx->pc = 0x24C450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C450u;
        // 0x24c454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c450:
    ctx->pc = 0x24C458u;
}
