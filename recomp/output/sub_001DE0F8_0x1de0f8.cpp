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

// Function: sub_001DE0F8
// Address: 0x1de0f8 - 0x1de138
void sub_001DE0F8_0x1de0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE0F8_0x1de0f8");
#endif

    switch (ctx->pc) {
        case 0x1de10cu: goto label_1de10c;
        case 0x1de120u: goto label_1de120;
        default: break;
    }

    ctx->pc = 0x1de0f8u;

    // 0x1de0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de104: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x1DE104u;
    SET_GPR_U32(ctx, 31, 0x1DE10Cu);
    ctx->pc = 0x1DE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE104u;
    // 0x1de108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x1DE104u, 0x1DE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE10Cu;
label_1de10c:
    // 0x1de10c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE10Cu;
    {
        const bool branch_taken_0x1de10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE10Cu;
        // 0x1de110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de10c) {
            ctx->pc = 0x1DE128u;
            goto label_1de128;
        }
    }
    ctx->pc = 0x1DE114u;
    // 0x1de114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de118: 0xc077b16  jal         func_1DEC58
    ctx->pc = 0x1DE118u;
    SET_GPR_U32(ctx, 31, 0x1DE120u);
    ctx->pc = 0x1DE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE118u;
    // 0x1de11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEC58u, 0x1DE118u, 0x1DE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE120u;
label_1de120:
    // 0x1de120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DE120u;
    {
        const bool branch_taken_0x1de120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE120u;
        // 0x1de124: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de120) {
            ctx->pc = 0x1DE12Cu;
            goto label_1de12c;
        }
    }
    ctx->pc = 0x1DE128u;
label_1de128:
    // 0x1de128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1de12c:
    // 0x1de12c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de130: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE130u;
        // 0x1de134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE138u;
}
