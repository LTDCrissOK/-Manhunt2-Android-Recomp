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

// Function: sub_00236A10
// Address: 0x236a10 - 0x236a48
void sub_00236A10_0x236a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236A10_0x236a10");
#endif

    switch (ctx->pc) {
        case 0x236a2cu: goto label_236a2c;
        default: break;
    }

    ctx->pc = 0x236a10u;

    // 0x236a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236a18: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x236a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x236a1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236A1Cu;
    {
        const bool branch_taken_0x236a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A1Cu;
        // 0x236a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a1c) {
            ctx->pc = 0x236A34u;
            goto label_236a34;
        }
    }
    ctx->pc = 0x236A24u;
    // 0x236a24: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x236A24u;
    SET_GPR_U32(ctx, 31, 0x236A2Cu);
    ctx->pc = 0x236A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236A24u;
    // 0x236a28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x236A24u, 0x236A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236A2Cu;
label_236a2c:
    // 0x236a2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x236A2Cu;
    {
        const bool branch_taken_0x236a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A2Cu;
        // 0x236a30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236a2c) {
            ctx->pc = 0x236A3Cu;
            goto label_236a3c;
        }
    }
    ctx->pc = 0x236A34u;
label_236a34:
    // 0x236a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x236a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x236a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236a3c:
    // 0x236a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x236A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236A3Cu;
        // 0x236a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236A44u;
    // 0x236a44: 0x0  nop
    ctx->pc = 0x236a44u;
    // NOP
    ctx->pc = 0x236a48u;
}
