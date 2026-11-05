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

// Function: sub_00216400
// Address: 0x216400 - 0x216450
void sub_00216400_0x216400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216400_0x216400");
#endif

    switch (ctx->pc) {
        case 0x216424u: goto label_216424;
        case 0x216434u: goto label_216434;
        default: break;
    }

    ctx->pc = 0x216400u;

    // 0x216400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x216408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21640c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216410: 0x8e0201d0  lw          $v0, 0x1D0($s0)
    ctx->pc = 0x216410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x216414: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216414u;
    {
        const bool branch_taken_0x216414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216414u;
        // 0x216418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216414) {
            ctx->pc = 0x21643Cu;
            goto label_21643c;
        }
    }
    ctx->pc = 0x21641Cu;
    // 0x21641c: 0xc0c580c  jal         func_316030
    ctx->pc = 0x21641Cu;
    SET_GPR_U32(ctx, 31, 0x216424u);
    ctx->pc = 0x216420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21641Cu;
    // 0x216420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x21641Cu, 0x216424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216424u;
label_216424:
    // 0x216424: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x216424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x216428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21642c: 0xc0c90ee  jal         func_3243B8
    ctx->pc = 0x21642Cu;
    SET_GPR_U32(ctx, 31, 0x216434u);
    ctx->pc = 0x216430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21642Cu;
    // 0x216430: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3243B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3243B8u, 0x21642Cu, 0x216434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216434u;
label_216434:
    // 0x216434: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x216434u;
    {
        const bool branch_taken_0x216434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216434u;
        // 0x216438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216434) {
            ctx->pc = 0x216440u;
            goto label_216440;
        }
    }
    ctx->pc = 0x21643Cu;
label_21643c:
    // 0x21643c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21643cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_216440:
    // 0x216440: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x216440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216444: 0x3e00008  jr          $ra
    ctx->pc = 0x216444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216444u;
        // 0x216448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21644Cu;
    // 0x21644c: 0x0  nop
    ctx->pc = 0x21644cu;
    // NOP
    ctx->pc = 0x216450u;
}
