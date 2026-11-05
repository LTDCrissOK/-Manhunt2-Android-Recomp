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

// Function: sub_002C6AF8
// Address: 0x2c6af8 - 0x2c6b18
void sub_002C6AF8_0x2c6af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6AF8_0x2c6af8");
#endif

    switch (ctx->pc) {
        case 0x2c6b0cu: goto label_2c6b0c;
        default: break;
    }

    ctx->pc = 0x2c6af8u;

    // 0x2c6af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c6afc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c6b04: 0xc0b1aa6  jal         func_2C6A98
    ctx->pc = 0x2C6B04u;
    SET_GPR_U32(ctx, 31, 0x2C6B0Cu);
    ctx->pc = 0x2C6B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6B04u;
    // 0x2c6b08: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6A98u, 0x2C6B04u, 0x2C6B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B0Cu;
label_2c6b0c:
    // 0x2c6b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c6b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6b10: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B10u;
        // 0x2c6b14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6B18u;
}
