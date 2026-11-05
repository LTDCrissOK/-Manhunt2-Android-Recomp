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

// Function: sub_001D77F8
// Address: 0x1d77f8 - 0x1d7848
void sub_001D77F8_0x1d77f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D77F8_0x1d77f8");
#endif

    switch (ctx->pc) {
        case 0x1d77f8u: goto label_1d77f8;
        case 0x1d77fcu: goto label_1d77fc;
        case 0x1d7800u: goto label_1d7800;
        case 0x1d7804u: goto label_1d7804;
        case 0x1d7808u: goto label_1d7808;
        case 0x1d780cu: goto label_1d780c;
        case 0x1d7810u: goto label_1d7810;
        case 0x1d7814u: goto label_1d7814;
        case 0x1d7818u: goto label_1d7818;
        case 0x1d781cu: goto label_1d781c;
        case 0x1d7820u: goto label_1d7820;
        case 0x1d7824u: goto label_1d7824;
        case 0x1d7828u: goto label_1d7828;
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7830u: goto label_1d7830;
        case 0x1d7834u: goto label_1d7834;
        case 0x1d7838u: goto label_1d7838;
        case 0x1d783cu: goto label_1d783c;
        case 0x1d7840u: goto label_1d7840;
        case 0x1d7844u: goto label_1d7844;
        default: break;
    }

    ctx->pc = 0x1d77f8u;

label_1d77f8:
    // 0x1d77f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d77f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d77fc:
    // 0x1d77fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d77fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d7800:
    // 0x1d7800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1d7804:
    // 0x1d7804: 0xc0a71e0  jal         func_29C780
label_1d7808:
    if (ctx->pc == 0x1D7808u) {
        ctx->pc = 0x1D780Cu;
        goto label_1d780c;
    }
    ctx->pc = 0x1D7804u;
    SET_GPR_U32(ctx, 31, 0x1D780Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D7804u, 0x1D780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D780Cu;
label_1d780c:
    // 0x1d780c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d780cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7810:
    // 0x1d7810: 0xc0a6ec0  jal         func_29BB00
label_1d7814:
    if (ctx->pc == 0x1D7814u) {
        ctx->pc = 0x1D7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7810u;
        // 0x1d7814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7818u;
        goto label_1d7818;
    }
    ctx->pc = 0x1D7810u;
    SET_GPR_U32(ctx, 31, 0x1D7818u);
    ctx->pc = 0x1D7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7810u;
    // 0x1d7814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BB00u, 0x1D7810u, 0x1D7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7818u;
label_1d7818:
    // 0x1d7818: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1d7818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d781c:
    // 0x1d781c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1d7820:
    if (ctx->pc == 0x1D7820u) {
        ctx->pc = 0x1D7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D781Cu;
        // 0x1d7820: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7824u;
        goto label_1d7824;
    }
    ctx->pc = 0x1D781Cu;
    {
        const bool branch_taken_0x1d781c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D781Cu;
        // 0x1d7820: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d781c) {
            ctx->pc = 0x1D7838u;
            goto label_1d7838;
        }
    }
    ctx->pc = 0x1D7824u;
label_1d7824:
    // 0x1d7824: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x1d7824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_1d7828:
    // 0x1d7828: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d782c:
    // 0x1d782c: 0x40f809  jalr        $v0
label_1d7830:
    if (ctx->pc == 0x1D7830u) {
        ctx->pc = 0x1D7834u;
        goto label_1d7834;
    }
    ctx->pc = 0x1D782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D7834u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D782Cu, 0x1D7834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D7834u;
label_1d7834:
    // 0x1d7834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7838:
    // 0x1d7838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d783c:
    // 0x1d783c: 0x3e00008  jr          $ra
label_1d7840:
    if (ctx->pc == 0x1D7840u) {
        ctx->pc = 0x1D7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D783Cu;
        // 0x1d7840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7844u;
        goto label_1d7844;
    }
    ctx->pc = 0x1D783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D783Cu;
        // 0x1d7840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D783Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7844u;
label_1d7844:
    // 0x1d7844: 0x0  nop
    ctx->pc = 0x1d7844u;
    // NOP
    ctx->pc = 0x1d7848u;
}
