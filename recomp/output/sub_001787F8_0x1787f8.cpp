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

// Function: sub_001787F8
// Address: 0x1787f8 - 0x178828
void sub_001787F8_0x1787f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001787F8_0x1787f8");
#endif

    switch (ctx->pc) {
        case 0x178818u: goto label_178818;
        default: break;
    }

    ctx->pc = 0x1787f8u;

    // 0x1787f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1787f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1787fc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1787fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x178800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178804: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x178804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x178808: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x178808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x17880c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x178810: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x178810u;
    SET_GPR_U32(ctx, 31, 0x178818u);
    ctx->pc = 0x178814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178810u;
    // 0x178814: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x178810u, 0x178818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178818u;
label_178818:
    // 0x178818: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x178818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x17881c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178820: 0x3e00008  jr          $ra
    ctx->pc = 0x178820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178820u;
        // 0x178824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178828u;
}
