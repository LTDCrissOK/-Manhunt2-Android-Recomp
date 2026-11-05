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

// Function: sub_00122530
// Address: 0x122530 - 0x122568
void sub_00122530_0x122530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122530_0x122530");
#endif

    switch (ctx->pc) {
        case 0x122558u: goto label_122558;
        default: break;
    }

    ctx->pc = 0x122530u;

    // 0x122530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122534: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x122534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122538: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x122538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12253c: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x12253cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x122540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122548: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x122548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12254c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x12254cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122550: 0xc048994  jal         func_122650
    ctx->pc = 0x122550u;
    SET_GPR_U32(ctx, 31, 0x122558u);
    ctx->pc = 0x122554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122550u;
    // 0x122554: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122650u, 0x122550u, 0x122558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122558u;
label_122558:
    // 0x122558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x122558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12255c: 0x3e00008  jr          $ra
    ctx->pc = 0x12255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12255Cu;
        // 0x122560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122564u;
    // 0x122564: 0x0  nop
    ctx->pc = 0x122564u;
    // NOP
    ctx->pc = 0x122568u;
}
