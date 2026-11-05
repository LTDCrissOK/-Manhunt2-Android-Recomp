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

// Function: sub_002ACE78
// Address: 0x2ace78 - 0x2aceb0
void sub_002ACE78_0x2ace78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACE78_0x2ace78");
#endif

    switch (ctx->pc) {
        case 0x2ace8cu: goto label_2ace8c;
        case 0x2ace94u: goto label_2ace94;
        case 0x2ace9cu: goto label_2ace9c;
        default: break;
    }

    ctx->pc = 0x2ace78u;

    // 0x2ace78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ace78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ace7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ace7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ace80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ace80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ace84: 0xc0ab3c6  jal         func_2ACF18
    ctx->pc = 0x2ACE84u;
    SET_GPR_U32(ctx, 31, 0x2ACE8Cu);
    ctx->pc = 0x2ACE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE84u;
    // 0x2ace88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACF18u, 0x2ACE84u, 0x2ACE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE8Cu;
label_2ace8c:
    // 0x2ace8c: 0xc0ab346  jal         func_2ACD18
    ctx->pc = 0x2ACE8Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE94u);
    ctx->pc = 0x2ACE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE8Cu;
    // 0x2ace90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD18u, 0x2ACE8Cu, 0x2ACE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE94u;
label_2ace94:
    // 0x2ace94: 0xc0ab334  jal         func_2ACCD0
    ctx->pc = 0x2ACE94u;
    SET_GPR_U32(ctx, 31, 0x2ACE9Cu);
    ctx->pc = 0x2ACE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACE94u;
    // 0x2ace98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCD0u, 0x2ACE94u, 0x2ACE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE9Cu;
label_2ace9c:
    // 0x2ace9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ace9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2acea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2acea4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACEA4u;
        // 0x2acea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACEACu;
    // 0x2aceac: 0x0  nop
    ctx->pc = 0x2aceacu;
    // NOP
    ctx->pc = 0x2aceb0u;
}
