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

// Function: sub_0030C560
// Address: 0x30c560 - 0x30c590
void sub_0030C560_0x30c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C560_0x30c560");
#endif

    switch (ctx->pc) {
        case 0x30c57cu: goto label_30c57c;
        default: break;
    }

    ctx->pc = 0x30c560u;

    // 0x30c560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c564: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c56c: 0x24a5c418  addiu       $a1, $a1, -0x3BE8
    ctx->pc = 0x30c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951960));
    // 0x30c570: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30c570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x30c574: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C574u;
    SET_GPR_U32(ctx, 31, 0x30C57Cu);
    ctx->pc = 0x30C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C574u;
    // 0x30c578: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C574u, 0x30C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C57Cu;
label_30c57c:
    // 0x30c57c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x30c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c584: 0x3e00008  jr          $ra
    ctx->pc = 0x30C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C584u;
        // 0x30c588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C58Cu;
    // 0x30c58c: 0x0  nop
    ctx->pc = 0x30c58cu;
    // NOP
    ctx->pc = 0x30c590u;
}
