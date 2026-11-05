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

// Function: sub_0016A300
// Address: 0x16a300 - 0x16a418
void sub_0016A300_0x16a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A300_0x16a300");
#endif

    switch (ctx->pc) {
        case 0x16a32cu: goto label_16a32c;
        case 0x16a340u: goto label_16a340;
        case 0x16a354u: goto label_16a354;
        case 0x16a380u: goto label_16a380;
        case 0x16a398u: goto label_16a398;
        case 0x16a3bcu: goto label_16a3bc;
        case 0x16a3d4u: goto label_16a3d4;
        case 0x16a3f8u: goto label_16a3f8;
        default: break;
    }

    ctx->pc = 0x16a300u;

    // 0x16a300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a30c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a310: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16a314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a318: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16a31c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16a31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a320: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16a324: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16A324u;
    SET_GPR_U32(ctx, 31, 0x16A32Cu);
    ctx->pc = 0x16A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A324u;
    // 0x16a328: 0x24130005  addiu       $s3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16A324u, 0x16A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A32Cu;
label_16a32c:
    // 0x16a32c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16a330: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A330u;
    {
        const bool branch_taken_0x16a330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A330u;
        // 0x16a334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a330) {
            ctx->pc = 0x16A340u;
            goto label_16a340;
        }
    }
    ctx->pc = 0x16A338u;
    // 0x16a338: 0xc05a824  jal         func_16A090
    ctx->pc = 0x16A338u;
    SET_GPR_U32(ctx, 31, 0x16A340u);
    ctx->pc = 0x16A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A338u;
    // 0x16a33c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A090u, 0x16A338u, 0x16A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A340u;
label_16a340:
    // 0x16a340: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a344: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16A344u;
    {
        const bool branch_taken_0x16a344 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A344u;
        // 0x16a348: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a344) {
            ctx->pc = 0x16A388u;
            goto label_16a388;
        }
    }
    ctx->pc = 0x16A34Cu;
    // 0x16a34c: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16A34Cu;
    SET_GPR_U32(ctx, 31, 0x16A354u);
    ctx->pc = 0x16A350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A34Cu;
    // 0x16a350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16A34Cu, 0x16A354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A354u;
label_16a354:
    // 0x16a354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a358: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x16a358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16a35c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16a35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16a360: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16a360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a368: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16a368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16a36c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a370: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x16a370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x16a374: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x16a374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
    // 0x16a378: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16A378u;
    SET_GPR_U32(ctx, 31, 0x16A380u);
    ctx->pc = 0x16A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A378u;
    // 0x16a37c: 0xac46000c  sw          $a2, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16A378u, 0x16A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A380u;
label_16a380:
    // 0x16a380: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16A380u;
    {
        const bool branch_taken_0x16a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A380u;
        // 0x16a384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a380) {
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A388u;
label_16a388:
    // 0x16a388: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16A388u;
    {
        const bool branch_taken_0x16a388 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a388) {
            ctx->pc = 0x16A3C4u;
            goto label_16a3c4;
        }
    }
    ctx->pc = 0x16A390u;
    // 0x16a390: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16A390u;
    SET_GPR_U32(ctx, 31, 0x16A398u);
    ctx->pc = 0x16A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A390u;
    // 0x16a394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16A390u, 0x16A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A398u;
label_16a398:
    // 0x16a398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a39c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16a3a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16a3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x16a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x16a3ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3b0: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x16a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
    // 0x16a3b4: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16A3B4u;
    SET_GPR_U32(ctx, 31, 0x16A3BCu);
    ctx->pc = 0x16A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3B4u;
    // 0x16a3b8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16A3B4u, 0x16A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3BCu;
label_16a3bc:
    // 0x16a3bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16A3BCu;
    {
        const bool branch_taken_0x16a3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3BCu;
        // 0x16a3c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3bc) {
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A3C4u;
label_16a3c4:
    // 0x16a3c4: 0x5633000d  bnel        $s1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x16A3C4u;
    {
        const bool branch_taken_0x16a3c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x16a3c4) {
            ctx->pc = 0x16A3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A3C4u;
            // 0x16a3c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A3CCu;
    // 0x16a3cc: 0xc05abc8  jal         func_16AF20
    ctx->pc = 0x16A3CCu;
    SET_GPR_U32(ctx, 31, 0x16A3D4u);
    ctx->pc = 0x16A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3CCu;
    // 0x16a3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x16A3CCu, 0x16A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3D4u;
label_16a3d4:
    // 0x16a3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a3d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x16a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x16a3dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16a3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3e4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x16a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x16a3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3ec: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x16a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
    // 0x16a3f0: 0xc05a926  jal         func_16A498
    ctx->pc = 0x16A3F0u;
    SET_GPR_U32(ctx, 31, 0x16A3F8u);
    ctx->pc = 0x16A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3F0u;
    // 0x16a3f4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A498u, 0x16A3F0u, 0x16A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3F8u;
label_16a3f8:
    // 0x16a3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a3fc:
    // 0x16a3fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a404: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16a404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a40c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A40Cu;
        // 0x16a410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A414u;
    // 0x16a414: 0x0  nop
    ctx->pc = 0x16a414u;
    // NOP
    ctx->pc = 0x16a418u;
}
