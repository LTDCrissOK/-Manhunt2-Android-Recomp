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

// Function: sub_0010E4F0
// Address: 0x10e4f0 - 0x10e528
void sub_0010E4F0_0x10e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E4F0_0x10e4f0");
#endif

    switch (ctx->pc) {
        case 0x10e4f0u: goto label_10e4f0;
        case 0x10e4f4u: goto label_10e4f4;
        case 0x10e4f8u: goto label_10e4f8;
        case 0x10e4fcu: goto label_10e4fc;
        case 0x10e500u: goto label_10e500;
        case 0x10e504u: goto label_10e504;
        case 0x10e508u: goto label_10e508;
        case 0x10e50cu: goto label_10e50c;
        case 0x10e510u: goto label_10e510;
        case 0x10e514u: goto label_10e514;
        case 0x10e518u: goto label_10e518;
        case 0x10e51cu: goto label_10e51c;
        case 0x10e520u: goto label_10e520;
        case 0x10e524u: goto label_10e524;
        default: break;
    }

    ctx->pc = 0x10e4f0u;

label_10e4f0:
    // 0x10e4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e4f4:
    // 0x10e4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e4f8:
    // 0x10e4f8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e4fc:
    // 0x10e4fc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e500:
    if (ctx->pc == 0x10E500u) {
        ctx->pc = 0x10E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4FCu;
        // 0x10e500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E504u;
        goto label_10e504;
    }
    ctx->pc = 0x10E4FCu;
    {
        const bool branch_taken_0x10e4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4FCu;
        // 0x10e500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4fc) {
            ctx->pc = 0x10E51Cu;
            goto label_10e51c;
        }
    }
    ctx->pc = 0x10E504u;
label_10e504:
    // 0x10e504: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e508:
    // 0x10e508: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x10e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_10e50c:
    // 0x10e50c: 0x40f809  jalr        $v0
label_10e510:
    if (ctx->pc == 0x10E510u) {
        ctx->pc = 0x10E514u;
        goto label_10e514;
    }
    ctx->pc = 0x10E50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E514u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E50Cu, 0x10E514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E514u;
label_10e514:
    // 0x10e514: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e518:
    if (ctx->pc == 0x10E518u) {
        ctx->pc = 0x10E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E514u;
        // 0x10e518: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E51Cu;
        goto label_10e51c;
    }
    ctx->pc = 0x10E514u;
    {
        const bool branch_taken_0x10e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E514u;
        // 0x10e518: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e514) {
            ctx->pc = 0x10E520u;
            goto label_10e520;
        }
    }
    ctx->pc = 0x10E51Cu;
label_10e51c:
    // 0x10e51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e520:
    // 0x10e520: 0x3e00008  jr          $ra
label_10e524:
    if (ctx->pc == 0x10E524u) {
        ctx->pc = 0x10E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E520u;
        // 0x10e524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E528u;
        goto label_fallthrough_0x10e520;
    }
    ctx->pc = 0x10E520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E520u;
        // 0x10e524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e520:
    ctx->pc = 0x10E528u;
}
