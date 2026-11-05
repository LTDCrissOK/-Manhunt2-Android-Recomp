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

// Function: sub_0032F390
// Address: 0x32f390 - 0x32f450
void sub_0032F390_0x32f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F390_0x32f390");
#endif

    switch (ctx->pc) {
        case 0x32f3e0u: goto label_32f3e0;
        case 0x32f444u: goto label_32f444;
        default: break;
    }

    ctx->pc = 0x32f390u;

    // 0x32f390: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x32f390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x32f394: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x32f394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x32f398: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32f398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x32f39c: 0x244e53b8  addiu       $t6, $v0, 0x53B8
    ctx->pc = 0x32f39cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 21432));
    // 0x32f3a0: 0x246d53c0  addiu       $t5, $v1, 0x53C0
    ctx->pc = 0x32f3a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 21440));
    // 0x32f3a4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x32f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x32f3a8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x32f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x32f3ac: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x32f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x32f3b0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32f3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f3b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x32f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x32f3b8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x32f3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x32f3bc: 0x244c53c8  addiu       $t4, $v0, 0x53C8
    ctx->pc = 0x32f3bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 21448));
    // 0x32f3c0: 0x246353d8  addiu       $v1, $v1, 0x53D8
    ctx->pc = 0x32f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21464));
    // 0x32f3c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x32f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32f3c8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x32f3c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f3cc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x32f3ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f3d0: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x32f3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f3d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32f3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f3d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x32f3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f3dc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x32f3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_32f3e0:
    // 0x32f3e0: 0x10ab000d  beq         $a1, $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x32F3E0u;
    {
        const bool branch_taken_0x32f3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 11));
        ctx->pc = 0x32F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3E0u;
        // 0x32f3e4: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3e0) {
            ctx->pc = 0x32F418u;
            goto label_32f418;
        }
    }
    ctx->pc = 0x32F3E8u;
    // 0x32f3e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F3E8u;
    {
        const bool branch_taken_0x32f3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f3e8) {
            ctx->pc = 0x32F400u;
            goto label_32f400;
        }
    }
    ctx->pc = 0x32F3F0u;
    // 0x32f3f0: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x32F3F0u;
    {
        const bool branch_taken_0x32f3f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f3f0) {
            ctx->pc = 0x32F3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F3F0u;
            // 0x32f3f4: 0xacce0010  sw          $t6, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F41Cu;
            goto label_32f41c;
        }
    }
    ctx->pc = 0x32F3F8u;
    // 0x32f3f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32F3F8u;
    {
        const bool branch_taken_0x32f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3F8u;
        // 0x32f3fc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3f8) {
            ctx->pc = 0x32F420u;
            goto label_32f420;
        }
    }
    ctx->pc = 0x32F400u;
label_32f400:
    // 0x32f400: 0x50aa0006  beql        $a1, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x32F400u;
    {
        const bool branch_taken_0x32f400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x32f400) {
            ctx->pc = 0x32F404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F400u;
            // 0x32f404: 0xaccc0010  sw          $t4, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F41Cu;
            goto label_32f41c;
        }
    }
    ctx->pc = 0x32F408u;
    // 0x32f408: 0x50a90004  beql        $a1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32F408u;
    {
        const bool branch_taken_0x32f408 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x32f408) {
            ctx->pc = 0x32F40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F408u;
            // 0x32f40c: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F41Cu;
            goto label_32f41c;
        }
    }
    ctx->pc = 0x32F410u;
    // 0x32f410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F410u;
    {
        const bool branch_taken_0x32f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F410u;
        // 0x32f414: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f410) {
            ctx->pc = 0x32F420u;
            goto label_32f420;
        }
    }
    ctx->pc = 0x32F418u;
label_32f418:
    // 0x32f418: 0xaccd0010  sw          $t5, 0x10($a2)
    ctx->pc = 0x32f418u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 13));
label_32f41c:
    // 0x32f41c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x32f41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_32f420:
    // 0x32f420: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x32f420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x32f424: 0x503ffee  bgezl       $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x32F424u;
    {
        const bool branch_taken_0x32f424 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x32f424) {
            ctx->pc = 0x32F428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F424u;
            // 0x32f428: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f3e0;
        }
    }
    ctx->pc = 0x32F42Cu;
    // 0x32f42c: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x32f42cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f430: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x32f430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x32f434: 0x8fa90014  lw          $t1, 0x14($sp)
    ctx->pc = 0x32f434u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x32f438: 0x24c653e8  addiu       $a2, $a2, 0x53E8
    ctx->pc = 0x32f438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21480));
    // 0x32f43c: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x32F43Cu;
    SET_GPR_U32(ctx, 31, 0x32F444u);
    ctx->pc = 0x32F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F43Cu;
    // 0x32f440: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x32F43Cu, 0x32F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F444u;
label_32f444:
    // 0x32f444: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x32f444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f448: 0x3e00008  jr          $ra
    ctx->pc = 0x32F448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F448u;
        // 0x32f44c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F450u;
}
