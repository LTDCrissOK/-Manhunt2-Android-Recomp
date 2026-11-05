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

// Function: sub_00109068
// Address: 0x109068 - 0x109098
void sub_00109068_0x109068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109068_0x109068");
#endif

    switch (ctx->pc) {
        case 0x10907cu: goto label_10907c;
        default: break;
    }

    ctx->pc = 0x109068u;

    // 0x109068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10906c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x109070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x109074: 0xc042456  jal         func_109158
    ctx->pc = 0x109074u;
    SET_GPR_U32(ctx, 31, 0x10907Cu);
    ctx->pc = 0x109078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109074u;
    // 0x109078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109158u, 0x109074u, 0x10907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10907Cu;
label_10907c:
    // 0x10907c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x109080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109084: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x109084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x109088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10908c: 0x3e00008  jr          $ra
    ctx->pc = 0x10908Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10908Cu;
        // 0x109090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10908Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109094u;
    // 0x109094: 0x0  nop
    ctx->pc = 0x109094u;
    // NOP
    ctx->pc = 0x109098u;
}
