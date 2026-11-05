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

// Function: sub_001B31F0
// Address: 0x1b31f0 - 0x1b3228
void sub_001B31F0_0x1b31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B31F0_0x1b31f0");
#endif

    switch (ctx->pc) {
        case 0x1b320cu: goto label_1b320c;
        default: break;
    }

    ctx->pc = 0x1b31f0u;

    // 0x1b31f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b31f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b31f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b31f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b31f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b31f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b31fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b31fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3204: 0xc06cbc0  jal         func_1B2F00
    ctx->pc = 0x1B3204u;
    SET_GPR_U32(ctx, 31, 0x1B320Cu);
    ctx->pc = 0x1B3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3204u;
    // 0x1b3208: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2F00u, 0x1B3204u, 0x1B320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B320Cu;
label_1b320c:
    // 0x1b320c: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1b320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1b3210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b3214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b321c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B321Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B321Cu;
        // 0x1b3220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B321Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3224u;
    // 0x1b3224: 0x0  nop
    ctx->pc = 0x1b3224u;
    // NOP
    ctx->pc = 0x1b3228u;
}
