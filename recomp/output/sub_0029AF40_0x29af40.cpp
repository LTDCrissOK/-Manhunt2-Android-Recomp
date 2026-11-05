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

// Function: sub_0029AF40
// Address: 0x29af40 - 0x29af98
void sub_0029AF40_0x29af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AF40_0x29af40");
#endif

    switch (ctx->pc) {
        case 0x29af68u: goto label_29af68;
        case 0x29af80u: goto label_29af80;
        case 0x29af88u: goto label_29af88;
        default: break;
    }

    ctx->pc = 0x29af40u;

    // 0x29af40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29af44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x29af48: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29af4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29af50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x29af58: 0x8c449160  lw          $a0, -0x6EA0($v0)
    ctx->pc = 0x29af58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x29af5c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x29af5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29af60: 0xc0a19b0  jal         func_2866C0
    ctx->pc = 0x29AF60u;
    SET_GPR_U32(ctx, 31, 0x29AF68u);
    ctx->pc = 0x29AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF60u;
    // 0x29af64: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2866C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2866C0u, 0x29AF60u, 0x29AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF68u;
label_29af68:
    // 0x29af68: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x29af68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x29af6c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x29af6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x29af70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af74: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0
    ctx->pc = 0x29af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
    // 0x29af78: 0xc0a42c4  jal         func_290B10
    ctx->pc = 0x29AF78u;
    SET_GPR_U32(ctx, 31, 0x29AF80u);
    ctx->pc = 0x29AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF78u;
    // 0x29af7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B10u, 0x29AF78u, 0x29AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF80u;
label_29af80:
    // 0x29af80: 0xc0a44e0  jal         func_291380
    ctx->pc = 0x29AF80u;
    SET_GPR_U32(ctx, 31, 0x29AF88u);
    ctx->pc = 0x29AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF80u;
    // 0x29af84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291380u, 0x29AF80u, 0x29AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF88u;
label_29af88:
    // 0x29af88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29af88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29af8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29af8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29af90: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF90u;
        // 0x29af94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AF98u;
}
