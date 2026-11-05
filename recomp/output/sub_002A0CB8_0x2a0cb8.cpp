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

// Function: sub_002A0CB8
// Address: 0x2a0cb8 - 0x2a0cf0
void sub_002A0CB8_0x2a0cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0CB8_0x2a0cb8");
#endif

    switch (ctx->pc) {
        case 0x2a0cccu: goto label_2a0ccc;
        default: break;
    }

    ctx->pc = 0x2a0cb8u;

    // 0x2a0cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a0cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0cc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a0cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a0cc4: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x2A0CC4u;
    SET_GPR_U32(ctx, 31, 0x2A0CCCu);
    ctx->pc = 0x2A0CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CC4u;
    // 0x2a0cc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x2A0CC4u, 0x2A0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CCCu;
label_2a0ccc:
    // 0x2a0ccc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2a0cd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a0cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0cd4: 0x24633558  addiu       $v1, $v1, 0x3558
    ctx->pc = 0x2a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13656));
    // 0x2a0cd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a0cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0cdc: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x2a0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x2a0ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0CE4u;
        // 0x2a0ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0CECu;
    // 0x2a0cec: 0x0  nop
    ctx->pc = 0x2a0cecu;
    // NOP
    ctx->pc = 0x2a0cf0u;
}
