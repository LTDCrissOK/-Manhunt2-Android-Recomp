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

// Function: sub_00121C78
// Address: 0x121c78 - 0x121cc8
void sub_00121C78_0x121c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121C78_0x121c78");
#endif

    switch (ctx->pc) {
        case 0x121c94u: goto label_121c94;
        case 0x121cb0u: goto label_121cb0;
        default: break;
    }

    ctx->pc = 0x121c78u;

    // 0x121c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x121c7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121c80: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x121c80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121c8c: 0xc048784  jal         func_121E10
    ctx->pc = 0x121C8Cu;
    SET_GPR_U32(ctx, 31, 0x121C94u);
    ctx->pc = 0x121C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121C8Cu;
    // 0x121c90: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121E10u, 0x121C8Cu, 0x121C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C94u;
label_121c94:
    // 0x121c94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121c9c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121C9Cu;
    {
        const bool branch_taken_0x121c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x121CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121C9Cu;
        // 0x121ca0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c9c) {
            ctx->pc = 0x121CB4u;
            goto label_121cb4;
        }
    }
    ctx->pc = 0x121CA4u;
    // 0x121ca4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x121ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121ca8: 0xc049944  jal         func_126510
    ctx->pc = 0x121CA8u;
    SET_GPR_U32(ctx, 31, 0x121CB0u);
    ctx->pc = 0x121CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CA8u;
    // 0x121cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x121CA8u, 0x121CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CB0u;
label_121cb0:
    // 0x121cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121cb4:
    // 0x121cb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121cb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x121cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x121CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CBCu;
        // 0x121cc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121CC4u;
    // 0x121cc4: 0x0  nop
    ctx->pc = 0x121cc4u;
    // NOP
    ctx->pc = 0x121cc8u;
}
