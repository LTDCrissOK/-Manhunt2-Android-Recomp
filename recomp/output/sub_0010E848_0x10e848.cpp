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

// Function: sub_0010E848
// Address: 0x10e848 - 0x10e880
void sub_0010E848_0x10e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E848_0x10e848");
#endif

    switch (ctx->pc) {
        case 0x10e848u: goto label_10e848;
        case 0x10e84cu: goto label_10e84c;
        case 0x10e850u: goto label_10e850;
        case 0x10e854u: goto label_10e854;
        case 0x10e858u: goto label_10e858;
        case 0x10e85cu: goto label_10e85c;
        case 0x10e860u: goto label_10e860;
        case 0x10e864u: goto label_10e864;
        case 0x10e868u: goto label_10e868;
        case 0x10e86cu: goto label_10e86c;
        case 0x10e870u: goto label_10e870;
        case 0x10e874u: goto label_10e874;
        case 0x10e878u: goto label_10e878;
        case 0x10e87cu: goto label_10e87c;
        default: break;
    }

    ctx->pc = 0x10e848u;

label_10e848:
    // 0x10e848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e84c:
    // 0x10e84c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e850:
    // 0x10e850: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e854:
    // 0x10e854: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_10e858:
    if (ctx->pc == 0x10E858u) {
        ctx->pc = 0x10E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E854u;
        // 0x10e858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E85Cu;
        goto label_10e85c;
    }
    ctx->pc = 0x10E854u;
    {
        const bool branch_taken_0x10e854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E854u;
        // 0x10e858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e854) {
            ctx->pc = 0x10E874u;
            goto label_10e874;
        }
    }
    ctx->pc = 0x10E85Cu;
label_10e85c:
    // 0x10e85c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e860:
    // 0x10e860: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x10e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_10e864:
    // 0x10e864: 0x40f809  jalr        $v0
label_10e868:
    if (ctx->pc == 0x10E868u) {
        ctx->pc = 0x10E86Cu;
        goto label_10e86c;
    }
    ctx->pc = 0x10E864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E86Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E864u, 0x10E86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E86Cu;
label_10e86c:
    // 0x10e86c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10e870:
    if (ctx->pc == 0x10E870u) {
        ctx->pc = 0x10E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E86Cu;
        // 0x10e870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E874u;
        goto label_10e874;
    }
    ctx->pc = 0x10E86Cu;
    {
        const bool branch_taken_0x10e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E86Cu;
        // 0x10e870: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e86c) {
            ctx->pc = 0x10E878u;
            goto label_10e878;
        }
    }
    ctx->pc = 0x10E874u;
label_10e874:
    // 0x10e874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e878:
    // 0x10e878: 0x3e00008  jr          $ra
label_10e87c:
    if (ctx->pc == 0x10E87Cu) {
        ctx->pc = 0x10E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E878u;
        // 0x10e87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E880u;
        goto label_fallthrough_0x10e878;
    }
    ctx->pc = 0x10E878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E878u;
        // 0x10e87c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e878:
    ctx->pc = 0x10E880u;
}
