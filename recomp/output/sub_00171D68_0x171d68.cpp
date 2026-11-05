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

// Function: sub_00171D68
// Address: 0x171d68 - 0x171d98
void sub_00171D68_0x171d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D68_0x171d68");
#endif

    switch (ctx->pc) {
        case 0x171d7cu: goto label_171d7c;
        case 0x171d84u: goto label_171d84;
        default: break;
    }

    ctx->pc = 0x171d68u;

    // 0x171d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171d70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171d74: 0xc04f820  jal         func_13E080
    ctx->pc = 0x171D74u;
    SET_GPR_U32(ctx, 31, 0x171D7Cu);
    ctx->pc = 0x171D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D74u;
    // 0x171d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x171D74u, 0x171D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D7Cu;
label_171d7c:
    // 0x171d7c: 0xc05cd68  jal         func_1735A0
    ctx->pc = 0x171D7Cu;
    SET_GPR_U32(ctx, 31, 0x171D84u);
    ctx->pc = 0x171D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D7Cu;
    // 0x171d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1735A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735A0u, 0x171D7Cu, 0x171D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D84u;
label_171d84:
    // 0x171d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x171D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D8Cu;
        // 0x171d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D94u;
    // 0x171d94: 0x0  nop
    ctx->pc = 0x171d94u;
    // NOP
    ctx->pc = 0x171d98u;
}
