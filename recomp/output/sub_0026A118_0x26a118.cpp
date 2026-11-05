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

// Function: sub_0026A118
// Address: 0x26a118 - 0x26a148
void sub_0026A118_0x26a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A118_0x26a118");
#endif

    switch (ctx->pc) {
        case 0x26a13cu: goto label_26a13c;
        default: break;
    }

    ctx->pc = 0x26a118u;

    // 0x26a118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a11c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26a120: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A120u;
    {
        const bool branch_taken_0x26a120 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A120u;
        // 0x26a124: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a120) {
            ctx->pc = 0x26A13Cu;
            goto label_26a13c;
        }
    }
    ctx->pc = 0x26A128u;
    // 0x26a128: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A128u;
    {
        const bool branch_taken_0x26a128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A128u;
        // 0x26a12c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a128) {
            ctx->pc = 0x26A13Cu;
            goto label_26a13c;
        }
    }
    ctx->pc = 0x26A130u;
    // 0x26a130: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x26a130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x26a134: 0xc087380  jal         func_21CE00
    ctx->pc = 0x26A134u;
    SET_GPR_U32(ctx, 31, 0x26A13Cu);
    ctx->pc = 0x26A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A134u;
    // 0x26a138: 0x248445d0  addiu       $a0, $a0, 0x45D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x26A134u, 0x26A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A13Cu;
label_26a13c:
    // 0x26a13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a140: 0x3e00008  jr          $ra
    ctx->pc = 0x26A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A140u;
        // 0x26a144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A148u;
}
