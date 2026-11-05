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

// Function: sub_0037FF58
// Address: 0x37ff58 - 0x37ff88
void sub_0037FF58_0x37ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FF58_0x37ff58");
#endif

    switch (ctx->pc) {
        case 0x37ff60u: goto label_37ff60;
        case 0x37ff70u: goto label_37ff70;
        case 0x37ff78u: goto label_37ff78;
        default: break;
    }

    ctx->pc = 0x37ff58u;

    // 0x37ff58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37ff58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37ff5c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x37ff5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37ff60:
    // 0x37ff60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ff64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37ff64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ff6c: 0x8c450134  lw          $a1, 0x134($v0)
    ctx->pc = 0x37ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_37ff70:
    // 0x37ff70: 0xc0df584  jal         func_37D610
    ctx->pc = 0x37FF70u;
    SET_GPR_U32(ctx, 31, 0x37FF78u);
    ctx->pc = 0x37FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FF70u;
    // 0x37ff74: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D610u, 0x37FF70u, 0x37FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FF78u;
label_37ff78:
    // 0x37ff78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x37FF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FF7Cu;
        // 0x37ff80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FF84u;
    // 0x37ff84: 0x0  nop
    ctx->pc = 0x37ff84u;
    // NOP
    ctx->pc = 0x37ff88u;
}
