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

// Function: sub_0021CD30
// Address: 0x21cd30 - 0x21cd68
void sub_0021CD30_0x21cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD30_0x21cd30");
#endif

    switch (ctx->pc) {
        case 0x21cd44u: goto label_21cd44;
        case 0x21cd4cu: goto label_21cd4c;
        case 0x21cd54u: goto label_21cd54;
        default: break;
    }

    ctx->pc = 0x21cd30u;

    // 0x21cd30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cd38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cd3c: 0xc08736e  jal         func_21CDB8
    ctx->pc = 0x21CD3Cu;
    SET_GPR_U32(ctx, 31, 0x21CD44u);
    ctx->pc = 0x21CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD3Cu;
    // 0x21cd40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CDB8u, 0x21CD3Cu, 0x21CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD44u;
label_21cd44:
    // 0x21cd44: 0xc0d59f0  jal         func_3567C0
    ctx->pc = 0x21CD44u;
    SET_GPR_U32(ctx, 31, 0x21CD4Cu);
    ctx->pc = 0x21CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD44u;
    // 0x21cd48: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3567C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3567C0u, 0x21CD44u, 0x21CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD4Cu;
label_21cd4c:
    // 0x21cd4c: 0xc084172  jal         func_2105C8
    ctx->pc = 0x21CD4Cu;
    SET_GPR_U32(ctx, 31, 0x21CD54u);
    ctx->pc = 0x21CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD4Cu;
    // 0x21cd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x21CD4Cu, 0x21CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD54u;
label_21cd54:
    // 0x21cd54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD5Cu;
        // 0x21cd60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CD64u;
    // 0x21cd64: 0x0  nop
    ctx->pc = 0x21cd64u;
    // NOP
    ctx->pc = 0x21cd68u;
}
