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

// Function: sub_002AEDA8
// Address: 0x2aeda8 - 0x2aedd8
void sub_002AEDA8_0x2aeda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEDA8_0x2aeda8");
#endif

    switch (ctx->pc) {
        case 0x2aedccu: goto label_2aedcc;
        default: break;
    }

    ctx->pc = 0x2aeda8u;

    // 0x2aeda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aeda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aedac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2aedacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2aedb0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEDB0u;
    {
        const bool branch_taken_0x2aedb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDB0u;
        // 0x2aedb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedb0) {
            ctx->pc = 0x2AEDCCu;
            goto label_2aedcc;
        }
    }
    ctx->pc = 0x2AEDB8u;
    // 0x2aedb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEDB8u;
    {
        const bool branch_taken_0x2aedb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDB8u;
        // 0x2aedbc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedb8) {
            ctx->pc = 0x2AEDD0u;
            goto label_2aedd0;
        }
    }
    ctx->pc = 0x2AEDC0u;
    // 0x2aedc0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2aedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2aedc4: 0xc0abb60  jal         func_2AED80
    ctx->pc = 0x2AEDC4u;
    SET_GPR_U32(ctx, 31, 0x2AEDCCu);
    ctx->pc = 0x2AEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEDC4u;
    // 0x2aedc8: 0x24842448  addiu       $a0, $a0, 0x2448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED80u, 0x2AEDC4u, 0x2AEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEDCCu;
label_2aedcc:
    // 0x2aedcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aedccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2aedd0:
    // 0x2aedd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDD0u;
        // 0x2aedd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEDD8u;
}
