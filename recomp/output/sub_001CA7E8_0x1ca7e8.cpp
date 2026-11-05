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

// Function: sub_001CA7E8
// Address: 0x1ca7e8 - 0x1ca838
void sub_001CA7E8_0x1ca7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA7E8_0x1ca7e8");
#endif

    switch (ctx->pc) {
        case 0x1ca808u: goto label_1ca808;
        case 0x1ca810u: goto label_1ca810;
        case 0x1ca818u: goto label_1ca818;
        default: break;
    }

    ctx->pc = 0x1ca7e8u;

    // 0x1ca7e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca7f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca7f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ca7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca7fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca800: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CA800u;
    SET_GPR_U32(ctx, 31, 0x1CA808u);
    ctx->pc = 0x1CA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA800u;
    // 0x1ca804: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CA800u, 0x1CA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA808u;
label_1ca808:
    // 0x1ca808: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CA808u;
    SET_GPR_U32(ctx, 31, 0x1CA810u);
    ctx->pc = 0x1CA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA808u;
    // 0x1ca80c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CA808u, 0x1CA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA810u;
label_1ca810:
    // 0x1ca810: 0xc072a0e  jal         func_1CA838
    ctx->pc = 0x1CA810u;
    SET_GPR_U32(ctx, 31, 0x1CA818u);
    ctx->pc = 0x1CA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA810u;
    // 0x1ca814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA838u, 0x1CA810u, 0x1CA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA818u;
label_1ca818:
    // 0x1ca818: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1ca818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1ca81c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ca81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA82Cu;
        // 0x1ca830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA834u;
    // 0x1ca834: 0x0  nop
    ctx->pc = 0x1ca834u;
    // NOP
    ctx->pc = 0x1ca838u;
}
