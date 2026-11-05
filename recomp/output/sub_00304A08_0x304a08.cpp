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

// Function: sub_00304A08
// Address: 0x304a08 - 0x304a30
void sub_00304A08_0x304a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304A08_0x304a08");
#endif

    switch (ctx->pc) {
        case 0x304a20u: goto label_304a20;
        default: break;
    }

    ctx->pc = 0x304a08u;

    // 0x304a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304a0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x304a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304a14: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x304a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x304a18: 0xc0c128c  jal         func_304A30
    ctx->pc = 0x304A18u;
    SET_GPR_U32(ctx, 31, 0x304A20u);
    ctx->pc = 0x304A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A18u;
    // 0x304a1c: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A30u, 0x304A18u, 0x304A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A20u;
label_304a20:
    // 0x304a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304a24: 0x3e00008  jr          $ra
    ctx->pc = 0x304A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A24u;
        // 0x304a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304A2Cu;
    // 0x304a2c: 0x0  nop
    ctx->pc = 0x304a2cu;
    // NOP
    ctx->pc = 0x304a30u;
}
