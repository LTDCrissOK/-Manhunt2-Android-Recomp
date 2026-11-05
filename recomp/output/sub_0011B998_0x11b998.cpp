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

// Function: sub_0011B998
// Address: 0x11b998 - 0x11b9d8
void sub_0011B998_0x11b998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B998_0x11b998");
#endif

    switch (ctx->pc) {
        case 0x11b9c4u: goto label_11b9c4;
        default: break;
    }

    ctx->pc = 0x11b998u;

    // 0x11b998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b99c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11b99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b9a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11b9ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11b9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11b9b0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x11b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x11b9b4: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x11b9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x11b9b8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x11b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x11b9bc: 0xc0470e8  jal         func_11C3A0
    ctx->pc = 0x11B9BCu;
    SET_GPR_U32(ctx, 31, 0x11B9C4u);
    ctx->pc = 0x11B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B9BCu;
    // 0x11b9c0: 0xa4400014  sh          $zero, 0x14($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C3A0u, 0x11B9BCu, 0x11B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B9C4u;
label_11b9c4:
    // 0x11b9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B9C8u;
        // 0x11b9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B9D0u;
    // 0x11b9d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11b9d4: 0x0  nop
    ctx->pc = 0x11b9d4u;
    // NOP
    ctx->pc = 0x11b9d8u;
}
