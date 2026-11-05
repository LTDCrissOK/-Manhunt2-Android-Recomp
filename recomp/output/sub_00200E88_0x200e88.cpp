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

// Function: sub_00200E88
// Address: 0x200e88 - 0x200eb8
void sub_00200E88_0x200e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200E88_0x200e88");
#endif

    switch (ctx->pc) {
        case 0x200ea0u: goto label_200ea0;
        case 0x200ea8u: goto label_200ea8;
        default: break;
    }

    ctx->pc = 0x200e88u;

    // 0x200e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200e90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e98: 0xc081a6a  jal         func_2069A8
    ctx->pc = 0x200E98u;
    SET_GPR_U32(ctx, 31, 0x200EA0u);
    ctx->pc = 0x200E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E98u;
    // 0x200e9c: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2069A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2069A8u, 0x200E98u, 0x200EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA0u;
label_200ea0:
    // 0x200ea0: 0xc081a6a  jal         func_2069A8
    ctx->pc = 0x200EA0u;
    SET_GPR_U32(ctx, 31, 0x200EA8u);
    ctx->pc = 0x200EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EA0u;
    // 0x200ea4: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2069A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2069A8u, 0x200EA0u, 0x200EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA8u;
label_200ea8:
    // 0x200ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200eac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x200EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EB0u;
        // 0x200eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200EB8u;
}
