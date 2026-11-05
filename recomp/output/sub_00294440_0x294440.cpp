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

// Function: sub_00294440
// Address: 0x294440 - 0x2944b0
void sub_00294440_0x294440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294440_0x294440");
#endif

    switch (ctx->pc) {
        case 0x294454u: goto label_294454;
        case 0x294464u: goto label_294464;
        case 0x294474u: goto label_294474;
        case 0x294488u: goto label_294488;
        case 0x294498u: goto label_294498;
        default: break;
    }

    ctx->pc = 0x294440u;

    // 0x294440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294448: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x294448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29444c: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x29444Cu;
    SET_GPR_U32(ctx, 31, 0x294454u);
    ctx->pc = 0x294450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29444Cu;
    // 0x294450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x29444Cu, 0x294454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294454u;
label_294454:
    // 0x294454: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294454u;
    {
        const bool branch_taken_0x294454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294454) {
            ctx->pc = 0x29446Cu;
            goto label_29446c;
        }
    }
    ctx->pc = 0x29445Cu;
    // 0x29445c: 0xc0a51ce  jal         func_294738
    ctx->pc = 0x29445Cu;
    SET_GPR_U32(ctx, 31, 0x294464u);
    ctx->pc = 0x294460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29445Cu;
    // 0x294460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294738u, 0x29445Cu, 0x294464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294464u;
label_294464:
    // 0x294464: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x294464u;
    {
        const bool branch_taken_0x294464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294464u;
        // 0x294468: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294464) {
            ctx->pc = 0x29449Cu;
            goto label_29449c;
        }
    }
    ctx->pc = 0x29446Cu;
label_29446c:
    // 0x29446c: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x29446Cu;
    SET_GPR_U32(ctx, 31, 0x294474u);
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x29446Cu, 0x294474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294474u;
label_294474:
    // 0x294474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294478: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x294478u;
    {
        const bool branch_taken_0x294478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x294478) {
            ctx->pc = 0x294490u;
            goto label_294490;
        }
    }
    ctx->pc = 0x294480u;
    // 0x294480: 0xc0a51c2  jal         func_294708
    ctx->pc = 0x294480u;
    SET_GPR_U32(ctx, 31, 0x294488u);
    ctx->pc = 0x294484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294480u;
    // 0x294484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294708u, 0x294480u, 0x294488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294488u;
label_294488:
    // 0x294488: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x294488u;
    {
        const bool branch_taken_0x294488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294488u;
        // 0x29448c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294488) {
            ctx->pc = 0x29449Cu;
            goto label_29449c;
        }
    }
    ctx->pc = 0x294490u;
label_294490:
    // 0x294490: 0xc0a51ce  jal         func_294738
    ctx->pc = 0x294490u;
    SET_GPR_U32(ctx, 31, 0x294498u);
    ctx->pc = 0x294494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294490u;
    // 0x294494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294738u, 0x294490u, 0x294498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294498u;
label_294498:
    // 0x294498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29449c:
    // 0x29449c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29449cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2944a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2944A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2944A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944A0u;
        // 0x2944a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2944A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2944A8u;
    // 0x2944a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2944a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2944ac: 0x0  nop
    ctx->pc = 0x2944acu;
    // NOP
    ctx->pc = 0x2944b0u;
}
