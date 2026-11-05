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

// Function: sub_00171CA0
// Address: 0x171ca0 - 0x171cd0
void sub_00171CA0_0x171ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171CA0_0x171ca0");
#endif

    switch (ctx->pc) {
        case 0x171cb4u: goto label_171cb4;
        case 0x171cbcu: goto label_171cbc;
        default: break;
    }

    ctx->pc = 0x171ca0u;

    // 0x171ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171cac: 0xc04f820  jal         func_13E080
    ctx->pc = 0x171CACu;
    SET_GPR_U32(ctx, 31, 0x171CB4u);
    ctx->pc = 0x171CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CACu;
    // 0x171cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x171CACu, 0x171CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CB4u;
label_171cb4:
    // 0x171cb4: 0xc05cd68  jal         func_1735A0
    ctx->pc = 0x171CB4u;
    SET_GPR_U32(ctx, 31, 0x171CBCu);
    ctx->pc = 0x171CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CB4u;
    // 0x171cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1735A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735A0u, 0x171CB4u, 0x171CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CBCu;
label_171cbc:
    // 0x171cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171cc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x171CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CC4u;
        // 0x171cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171CCCu;
    // 0x171ccc: 0x0  nop
    ctx->pc = 0x171cccu;
    // NOP
    ctx->pc = 0x171cd0u;
}
