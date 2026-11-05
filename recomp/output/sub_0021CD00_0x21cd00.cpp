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

// Function: sub_0021CD00
// Address: 0x21cd00 - 0x21cd30
void sub_0021CD00_0x21cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD00_0x21cd00");
#endif

    switch (ctx->pc) {
        case 0x21cd14u: goto label_21cd14;
        case 0x21cd1cu: goto label_21cd1c;
        default: break;
    }

    ctx->pc = 0x21cd00u;

    // 0x21cd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cd08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cd0c: 0xc08736e  jal         func_21CDB8
    ctx->pc = 0x21CD0Cu;
    SET_GPR_U32(ctx, 31, 0x21CD14u);
    ctx->pc = 0x21CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD0Cu;
    // 0x21cd10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CDB8u, 0x21CD0Cu, 0x21CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD14u;
label_21cd14:
    // 0x21cd14: 0xc0d59e8  jal         func_3567A0
    ctx->pc = 0x21CD14u;
    SET_GPR_U32(ctx, 31, 0x21CD1Cu);
    ctx->pc = 0x21CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD14u;
    // 0x21cd18: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3567A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3567A0u, 0x21CD14u, 0x21CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD1Cu;
label_21cd1c:
    // 0x21cd1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cd24: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD24u;
        // 0x21cd28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CD2Cu;
    // 0x21cd2c: 0x0  nop
    ctx->pc = 0x21cd2cu;
    // NOP
    ctx->pc = 0x21cd30u;
}
