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

// Function: sub_002B8108
// Address: 0x2b8108 - 0x2b8138
void sub_002B8108_0x2b8108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8108_0x2b8108");
#endif

    switch (ctx->pc) {
        case 0x2b811cu: goto label_2b811c;
        default: break;
    }

    ctx->pc = 0x2b8108u;

    // 0x2b8108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b810c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b8110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8114: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8114u;
    SET_GPR_U32(ctx, 31, 0x2B811Cu);
    ctx->pc = 0x2B8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8114u;
    // 0x2b8118: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8114u, 0x2B811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B811Cu;
label_2b811c:
    // 0x2b811c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b811cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8120: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8120u;
        // 0x2b8124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8128u;
    // 0x2b8128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b812c: 0x0  nop
    ctx->pc = 0x2b812cu;
    // NOP
    // 0x2b8130: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8134: 0x0  nop
    ctx->pc = 0x2b8134u;
    // NOP
    ctx->pc = 0x2b8138u;
}
