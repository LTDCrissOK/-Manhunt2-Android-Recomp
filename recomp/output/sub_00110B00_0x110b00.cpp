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

// Function: sub_00110B00
// Address: 0x110b00 - 0x110b28
void sub_00110B00_0x110b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110B00_0x110b00");
#endif

    switch (ctx->pc) {
        case 0x110b1cu: goto label_110b1c;
        default: break;
    }

    ctx->pc = 0x110b00u;

    // 0x110b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110b08: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110b0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110B0Cu;
    {
        const bool branch_taken_0x110b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B0Cu;
        // 0x110b10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b0c) {
            ctx->pc = 0x110B20u;
            goto label_110b20;
        }
    }
    ctx->pc = 0x110B14u;
    // 0x110b14: 0xc05a824  jal         func_16A090
    ctx->pc = 0x110B14u;
    SET_GPR_U32(ctx, 31, 0x110B1Cu);
    ctx->pc = 0x16A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A090u, 0x110B14u, 0x110B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B1Cu;
label_110b1c:
    // 0x110b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110b20:
    // 0x110b20: 0x3e00008  jr          $ra
    ctx->pc = 0x110B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B20u;
        // 0x110b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B28u;
}
