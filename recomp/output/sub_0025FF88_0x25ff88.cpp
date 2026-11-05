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

// Function: sub_0025FF88
// Address: 0x25ff88 - 0x25ffc0
void sub_0025FF88_0x25ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF88_0x25ff88");
#endif

    switch (ctx->pc) {
        case 0x25ffa0u: goto label_25ffa0;
        case 0x25ffacu: goto label_25ffac;
        default: break;
    }

    ctx->pc = 0x25ff88u;

    // 0x25ff88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ff8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25ff90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ff94: 0x8cb00338  lw          $s0, 0x338($a1)
    ctx->pc = 0x25ff94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 824)));
    // 0x25ff98: 0xc06bdd4  jal         func_1AF750
    ctx->pc = 0x25FF98u;
    SET_GPR_U32(ctx, 31, 0x25FFA0u);
    ctx->pc = 0x25FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FF98u;
    // 0x25ff9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF750u, 0x25FF98u, 0x25FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FFA0u;
label_25ffa0:
    // 0x25ffa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ffa4: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x25FFA4u;
    SET_GPR_U32(ctx, 31, 0x25FFACu);
    ctx->pc = 0x25FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FFA4u;
    // 0x25ffa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x25FFA4u, 0x25FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FFACu;
label_25ffac:
    // 0x25ffac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25ffacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ffb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ffb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25ffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25ffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFB8u;
        // 0x25ffbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FFC0u;
}
