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

// Function: sub_0017EF70
// Address: 0x17ef70 - 0x17efa0
void sub_0017EF70_0x17ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EF70_0x17ef70");
#endif

    switch (ctx->pc) {
        case 0x17ef88u: goto label_17ef88;
        default: break;
    }

    ctx->pc = 0x17ef70u;

    // 0x17ef70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ef74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ef78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17ef7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ef7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef80: 0xc05fcfe  jal         func_17F3F8
    ctx->pc = 0x17EF80u;
    SET_GPR_U32(ctx, 31, 0x17EF88u);
    ctx->pc = 0x17EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF80u;
    // 0x17ef84: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3F8u, 0x17EF80u, 0x17EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EF88u;
label_17ef88:
    // 0x17ef88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ef88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ef90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ef90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x17EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF94u;
        // 0x17ef98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EF9Cu;
    // 0x17ef9c: 0x0  nop
    ctx->pc = 0x17ef9cu;
    // NOP
    ctx->pc = 0x17efa0u;
}
