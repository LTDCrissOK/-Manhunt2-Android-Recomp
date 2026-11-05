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

// Function: sub_001072C0
// Address: 0x1072c0 - 0x1072e0
void sub_001072C0_0x1072c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001072C0_0x1072c0");
#endif

    switch (ctx->pc) {
        case 0x1072d4u: goto label_1072d4;
        default: break;
    }

    ctx->pc = 0x1072c0u;

    // 0x1072c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1072c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1072c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1072c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1072c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1072c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1072cc: 0xc041ca4  jal         func_107290
    ctx->pc = 0x1072CCu;
    SET_GPR_U32(ctx, 31, 0x1072D4u);
    ctx->pc = 0x1072D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072CCu;
    // 0x1072d0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x107290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107290u, 0x1072CCu, 0x1072D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072D4u;
label_1072d4:
    // 0x1072d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1072d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1072d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1072D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1072DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072D8u;
        // 0x1072dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1072D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1072E0u;
}
