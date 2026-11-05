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

// Function: sub_00198640
// Address: 0x198640 - 0x198670
void sub_00198640_0x198640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198640_0x198640");
#endif

    switch (ctx->pc) {
        case 0x198660u: goto label_198660;
        default: break;
    }

    ctx->pc = 0x198640u;

    // 0x198640: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x198640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x198644: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198648: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x198648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19864c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198658: 0xc095024  jal         func_254090
    ctx->pc = 0x198658u;
    SET_GPR_U32(ctx, 31, 0x198660u);
    ctx->pc = 0x19865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198658u;
    // 0x19865c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254090u, 0x198658u, 0x198660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198660u;
label_198660:
    // 0x198660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198664: 0x3e00008  jr          $ra
    ctx->pc = 0x198664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198664u;
        // 0x198668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19866Cu;
    // 0x19866c: 0x0  nop
    ctx->pc = 0x19866cu;
    // NOP
    ctx->pc = 0x198670u;
}
