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

// Function: sub_001204C8
// Address: 0x1204c8 - 0x120500
void sub_001204C8_0x1204c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001204C8_0x1204c8");
#endif

    switch (ctx->pc) {
        case 0x1204e0u: goto label_1204e0;
        default: break;
    }

    ctx->pc = 0x1204c8u;

    // 0x1204c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1204c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1204cc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1204ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1204d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1204d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1204d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1204d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1204d8: 0xc048088  jal         func_120220
    ctx->pc = 0x1204D8u;
    SET_GPR_U32(ctx, 31, 0x1204E0u);
    ctx->pc = 0x1204DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204D8u;
    // 0x1204dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120220u, 0x1204D8u, 0x1204E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204E0u;
label_1204e0:
    // 0x1204e0: 0x92020110  lbu         $v0, 0x110($s0)
    ctx->pc = 0x1204e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1204e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1204e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1204e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1204e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1204ec: 0xa2020110  sb          $v0, 0x110($s0)
    ctx->pc = 0x1204ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 2));
    // 0x1204f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1204f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1204f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1204F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1204F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204F4u;
        // 0x1204f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1204F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1204FCu;
    // 0x1204fc: 0x0  nop
    ctx->pc = 0x1204fcu;
    // NOP
    ctx->pc = 0x120500u;
}
