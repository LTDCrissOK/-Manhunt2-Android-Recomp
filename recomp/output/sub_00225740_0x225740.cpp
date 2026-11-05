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

// Function: sub_00225740
// Address: 0x225740 - 0x225780
void sub_00225740_0x225740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225740_0x225740");
#endif

    switch (ctx->pc) {
        case 0x225740u: goto label_225740;
        case 0x225744u: goto label_225744;
        case 0x225748u: goto label_225748;
        case 0x22574cu: goto label_22574c;
        case 0x225750u: goto label_225750;
        case 0x225754u: goto label_225754;
        case 0x225758u: goto label_225758;
        case 0x22575cu: goto label_22575c;
        case 0x225760u: goto label_225760;
        case 0x225764u: goto label_225764;
        case 0x225768u: goto label_225768;
        case 0x22576cu: goto label_22576c;
        case 0x225770u: goto label_225770;
        case 0x225774u: goto label_225774;
        case 0x225778u: goto label_225778;
        case 0x22577cu: goto label_22577c;
        default: break;
    }

    ctx->pc = 0x225740u;

label_225740:
    // 0x225740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_225744:
    // 0x225744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225748:
    // 0x225748: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x225748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_22574c:
    // 0x22574c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_225750:
    if (ctx->pc == 0x225750u) {
        ctx->pc = 0x225750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22574Cu;
        // 0x225750: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225754u;
        goto label_225754;
    }
    ctx->pc = 0x22574Cu;
    {
        const bool branch_taken_0x22574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22574Cu;
        // 0x225750: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22574c) {
            ctx->pc = 0x225774u;
            goto label_225774;
        }
    }
    ctx->pc = 0x225754u;
label_225754:
    // 0x225754: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x225754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_225758:
    // 0x225758: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x225758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22575c:
    // 0x22575c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225760:
    // 0x225760: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_225764:
    // 0x225764: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_225768:
    // 0x225768: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x225768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_22576c:
    // 0x22576c: 0x40f809  jalr        $v0
label_225770:
    if (ctx->pc == 0x225770u) {
        ctx->pc = 0x225774u;
        goto label_225774;
    }
    ctx->pc = 0x22576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22576Cu, 0x225774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225774u;
label_225774:
    // 0x225774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225778:
    // 0x225778: 0x3e00008  jr          $ra
label_22577c:
    if (ctx->pc == 0x22577Cu) {
        ctx->pc = 0x22577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225778u;
        // 0x22577c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225780u;
        goto label_fallthrough_0x225778;
    }
    ctx->pc = 0x225778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225778u;
        // 0x22577c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x225778:
    ctx->pc = 0x225780u;
}
