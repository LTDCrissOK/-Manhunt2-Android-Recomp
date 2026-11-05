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

// Function: sub_0010E560
// Address: 0x10e560 - 0x10e598
void sub_0010E560_0x10e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E560_0x10e560");
#endif

    switch (ctx->pc) {
        case 0x10e560u: goto label_10e560;
        case 0x10e564u: goto label_10e564;
        case 0x10e568u: goto label_10e568;
        case 0x10e56cu: goto label_10e56c;
        case 0x10e570u: goto label_10e570;
        case 0x10e574u: goto label_10e574;
        case 0x10e578u: goto label_10e578;
        case 0x10e57cu: goto label_10e57c;
        case 0x10e580u: goto label_10e580;
        case 0x10e584u: goto label_10e584;
        case 0x10e588u: goto label_10e588;
        case 0x10e58cu: goto label_10e58c;
        case 0x10e590u: goto label_10e590;
        case 0x10e594u: goto label_10e594;
        default: break;
    }

    ctx->pc = 0x10e560u;

label_10e560:
    // 0x10e560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e564:
    // 0x10e564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e568:
    // 0x10e568: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e56c:
    // 0x10e56c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e570:
    if (ctx->pc == 0x10E570u) {
        ctx->pc = 0x10E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E56Cu;
        // 0x10e570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E574u;
        goto label_10e574;
    }
    ctx->pc = 0x10E56Cu;
    {
        const bool branch_taken_0x10e56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E56Cu;
        // 0x10e570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e56c) {
            ctx->pc = 0x10E58Cu;
            goto label_10e58c;
        }
    }
    ctx->pc = 0x10E574u;
label_10e574:
    // 0x10e574: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e578:
    // 0x10e578: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x10e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_10e57c:
    // 0x10e57c: 0x40f809  jalr        $v0
label_10e580:
    if (ctx->pc == 0x10E580u) {
        ctx->pc = 0x10E584u;
        goto label_10e584;
    }
    ctx->pc = 0x10E57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E584u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E57Cu, 0x10E584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E584u;
label_10e584:
    // 0x10e584: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e588:
    if (ctx->pc == 0x10E588u) {
        ctx->pc = 0x10E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E584u;
        // 0x10e588: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E58Cu;
        goto label_10e58c;
    }
    ctx->pc = 0x10E584u;
    {
        const bool branch_taken_0x10e584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E584u;
        // 0x10e588: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e584) {
            ctx->pc = 0x10E590u;
            goto label_10e590;
        }
    }
    ctx->pc = 0x10E58Cu;
label_10e58c:
    // 0x10e58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e590:
    // 0x10e590: 0x3e00008  jr          $ra
label_10e594:
    if (ctx->pc == 0x10E594u) {
        ctx->pc = 0x10E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E590u;
        // 0x10e594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E598u;
        goto label_fallthrough_0x10e590;
    }
    ctx->pc = 0x10E590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E590u;
        // 0x10e594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e590:
    ctx->pc = 0x10E598u;
}
