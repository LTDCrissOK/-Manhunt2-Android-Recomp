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

// Function: sub_00115740
// Address: 0x115740 - 0x115770
void sub_00115740_0x115740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115740_0x115740");
#endif

    switch (ctx->pc) {
        case 0x115758u: goto label_115758;
        default: break;
    }

    ctx->pc = 0x115740u;

    // 0x115740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11574c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11574cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115750: 0xc0456b6  jal         func_115AD8
    ctx->pc = 0x115750u;
    SET_GPR_U32(ctx, 31, 0x115758u);
    ctx->pc = 0x115754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115750u;
    // 0x115754: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD8u, 0x115750u, 0x115758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115758u;
label_115758:
    // 0x115758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11575c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115764: 0x3e00008  jr          $ra
    ctx->pc = 0x115764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115764u;
        // 0x115768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11576Cu;
    // 0x11576c: 0x0  nop
    ctx->pc = 0x11576cu;
    // NOP
    ctx->pc = 0x115770u;
}
