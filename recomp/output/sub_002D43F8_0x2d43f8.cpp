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

// Function: sub_002D43F8
// Address: 0x2d43f8 - 0x2d4478
void sub_002D43F8_0x2d43f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D43F8_0x2d43f8");
#endif

    switch (ctx->pc) {
        case 0x2d4424u: goto label_2d4424;
        case 0x2d4440u: goto label_2d4440;
        case 0x2d4450u: goto label_2d4450;
        case 0x2d4460u: goto label_2d4460;
        default: break;
    }

    ctx->pc = 0x2d43f8u;

    // 0x2d43f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d43f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d43fc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2d4400: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d4400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4404: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2d4404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2d4408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d4408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d440c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d4410: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4414: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d4414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d4418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d441c: 0xc0d99dc  jal         func_366770
    ctx->pc = 0x2D441Cu;
    SET_GPR_U32(ctx, 31, 0x2D4424u);
    ctx->pc = 0x2D4420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D441Cu;
    // 0x2d4420: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366770u, 0x2D441Cu, 0x2D4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4424u;
label_2d4424:
    // 0x2d4424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4428: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D4428u;
    {
        const bool branch_taken_0x2d4428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4428u;
        // 0x2d442c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4428) {
            ctx->pc = 0x2D4460u;
            goto label_2d4460;
        }
    }
    ctx->pc = 0x2D4430u;
    // 0x2d4430: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d4430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d4434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4438: 0xc0d99d4  jal         func_366750
    ctx->pc = 0x2D4438u;
    SET_GPR_U32(ctx, 31, 0x2D4440u);
    ctx->pc = 0x2D443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4438u;
    // 0x2d443c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366750u, 0x2D4438u, 0x2D4440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4440u;
label_2d4440:
    // 0x2d4440: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4440u;
    {
        const bool branch_taken_0x2d4440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4440u;
        // 0x2d4444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4440) {
            ctx->pc = 0x2D4458u;
            goto label_2d4458;
        }
    }
    ctx->pc = 0x2D4448u;
    // 0x2d4448: 0xc0d9974  jal         func_3665D0
    ctx->pc = 0x2D4448u;
    SET_GPR_U32(ctx, 31, 0x2D4450u);
    ctx->pc = 0x2D444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4448u;
    // 0x2d444c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3665D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3665D0u, 0x2D4448u, 0x2D4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4450u;
label_2d4450:
    // 0x2d4450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d4450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d4458:
    // 0x2d4458: 0xc0d99e4  jal         func_366790
    ctx->pc = 0x2D4458u;
    SET_GPR_U32(ctx, 31, 0x2D4460u);
    ctx->pc = 0x2D445Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4458u;
    // 0x2d445c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366790u, 0x2D4458u, 0x2D4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4460u;
label_2d4460:
    // 0x2d4460: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d4460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4464: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d4464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4468: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d4468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d446c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4470: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4470u;
        // 0x2d4474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4478u;
}
