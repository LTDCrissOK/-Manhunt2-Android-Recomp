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

// Function: sub_0030CF30
// Address: 0x30cf30 - 0x30cf68
void sub_0030CF30_0x30cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CF30_0x30cf30");
#endif

    switch (ctx->pc) {
        case 0x30cf54u: goto label_30cf54;
        default: break;
    }

    ctx->pc = 0x30cf30u;

    // 0x30cf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30cf34: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30cf38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30cf3c: 0x24a5cf28  addiu       $a1, $a1, -0x30D8
    ctx->pc = 0x30cf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954792));
    // 0x30cf40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30cf44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30cf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30cf48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf4c: 0xc0c49a6  jal         func_312698
    ctx->pc = 0x30CF4Cu;
    SET_GPR_U32(ctx, 31, 0x30CF54u);
    ctx->pc = 0x30CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CF4Cu;
    // 0x30cf50: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312698u, 0x30CF4Cu, 0x30CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF54u;
label_30cf54:
    // 0x30cf54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30cf54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30cf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30cf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cf60: 0x3e00008  jr          $ra
    ctx->pc = 0x30CF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF60u;
        // 0x30cf64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CF68u;
}
