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

// Function: sub_0010E5F0
// Address: 0x10e5f0 - 0x10e628
void sub_0010E5F0_0x10e5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E5F0_0x10e5f0");
#endif

    switch (ctx->pc) {
        case 0x10e5f0u: goto label_10e5f0;
        case 0x10e5f4u: goto label_10e5f4;
        case 0x10e5f8u: goto label_10e5f8;
        case 0x10e5fcu: goto label_10e5fc;
        case 0x10e600u: goto label_10e600;
        case 0x10e604u: goto label_10e604;
        case 0x10e608u: goto label_10e608;
        case 0x10e60cu: goto label_10e60c;
        case 0x10e610u: goto label_10e610;
        case 0x10e614u: goto label_10e614;
        case 0x10e618u: goto label_10e618;
        case 0x10e61cu: goto label_10e61c;
        case 0x10e620u: goto label_10e620;
        case 0x10e624u: goto label_10e624;
        default: break;
    }

    ctx->pc = 0x10e5f0u;

label_10e5f0:
    // 0x10e5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e5f4:
    // 0x10e5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e5f8:
    // 0x10e5f8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e5fc:
    // 0x10e5fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e600:
    if (ctx->pc == 0x10E600u) {
        ctx->pc = 0x10E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5FCu;
        // 0x10e600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E604u;
        goto label_10e604;
    }
    ctx->pc = 0x10E5FCu;
    {
        const bool branch_taken_0x10e5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5FCu;
        // 0x10e600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5fc) {
            ctx->pc = 0x10E61Cu;
            goto label_10e61c;
        }
    }
    ctx->pc = 0x10E604u;
label_10e604:
    // 0x10e604: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e608:
    // 0x10e608: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x10e608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_10e60c:
    // 0x10e60c: 0x40f809  jalr        $v0
label_10e610:
    if (ctx->pc == 0x10E610u) {
        ctx->pc = 0x10E614u;
        goto label_10e614;
    }
    ctx->pc = 0x10E60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E614u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E60Cu, 0x10E614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E614u;
label_10e614:
    // 0x10e614: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e618:
    if (ctx->pc == 0x10E618u) {
        ctx->pc = 0x10E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E614u;
        // 0x10e618: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E61Cu;
        goto label_10e61c;
    }
    ctx->pc = 0x10E614u;
    {
        const bool branch_taken_0x10e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E614u;
        // 0x10e618: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e614) {
            ctx->pc = 0x10E620u;
            goto label_10e620;
        }
    }
    ctx->pc = 0x10E61Cu;
label_10e61c:
    // 0x10e61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e620:
    // 0x10e620: 0x3e00008  jr          $ra
label_10e624:
    if (ctx->pc == 0x10E624u) {
        ctx->pc = 0x10E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E620u;
        // 0x10e624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E628u;
        goto label_fallthrough_0x10e620;
    }
    ctx->pc = 0x10E620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E620u;
        // 0x10e624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e620:
    ctx->pc = 0x10E628u;
}
