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

// Function: sub_00115708
// Address: 0x115708 - 0x115740
void sub_00115708_0x115708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115708_0x115708");
#endif

    switch (ctx->pc) {
        case 0x11571cu: goto label_11571c;
        default: break;
    }

    ctx->pc = 0x115708u;

    // 0x115708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11570c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11570cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115714: 0xc042236  jal         func_1088D8
    ctx->pc = 0x115714u;
    SET_GPR_U32(ctx, 31, 0x11571Cu);
    ctx->pc = 0x115718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115714u;
    // 0x115718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D8u, 0x115714u, 0x11571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11571Cu;
label_11571c:
    // 0x11571c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115720: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x115720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x115724: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x115724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x115728: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x115728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x11572c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11572cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115730: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115734: 0x3e00008  jr          $ra
    ctx->pc = 0x115734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115734u;
        // 0x115738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11573Cu;
    // 0x11573c: 0x0  nop
    ctx->pc = 0x11573cu;
    // NOP
    ctx->pc = 0x115740u;
}
