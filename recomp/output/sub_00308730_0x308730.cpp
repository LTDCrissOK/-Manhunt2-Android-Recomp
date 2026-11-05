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

// Function: sub_00308730
// Address: 0x308730 - 0x308778
void sub_00308730_0x308730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308730_0x308730");
#endif

    switch (ctx->pc) {
        case 0x308730u: goto label_308730;
        case 0x308734u: goto label_308734;
        case 0x308738u: goto label_308738;
        case 0x30873cu: goto label_30873c;
        case 0x308740u: goto label_308740;
        case 0x308744u: goto label_308744;
        case 0x308748u: goto label_308748;
        case 0x30874cu: goto label_30874c;
        case 0x308750u: goto label_308750;
        case 0x308754u: goto label_308754;
        case 0x308758u: goto label_308758;
        case 0x30875cu: goto label_30875c;
        case 0x308760u: goto label_308760;
        case 0x308764u: goto label_308764;
        case 0x308768u: goto label_308768;
        case 0x30876cu: goto label_30876c;
        case 0x308770u: goto label_308770;
        case 0x308774u: goto label_308774;
        default: break;
    }

    ctx->pc = 0x308730u;

label_308730:
    // 0x308730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_308734:
    // 0x308734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_308738:
    // 0x308738: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_30873c:
    // 0x30873c: 0xc099096  jal         func_264258
label_308740:
    if (ctx->pc == 0x308740u) {
        ctx->pc = 0x308740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30873Cu;
        // 0x308740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308744u;
        goto label_308744;
    }
    ctx->pc = 0x30873Cu;
    SET_GPR_U32(ctx, 31, 0x308744u);
    ctx->pc = 0x308740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30873Cu;
    // 0x308740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264258u, 0x30873Cu, 0x308744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308744u;
label_308744:
    // 0x308744: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_308748:
    if (ctx->pc == 0x308748u) {
        ctx->pc = 0x308748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308744u;
        // 0x308748: 0x8e0402e4  lw          $a0, 0x2E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30874Cu;
        goto label_30874c;
    }
    ctx->pc = 0x308744u;
    {
        const bool branch_taken_0x308744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308744) {
            ctx->pc = 0x308748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308744u;
            // 0x308748: 0x8e0402e4  lw          $a0, 0x2E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308754u;
            goto label_308754;
        }
    }
    ctx->pc = 0x30874Cu;
label_30874c:
    // 0x30874c: 0x10000006  b           . + 4 + (0x6 << 2)
label_308750:
    if (ctx->pc == 0x308750u) {
        ctx->pc = 0x308750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30874Cu;
        // 0x308750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308754u;
        goto label_308754;
    }
    ctx->pc = 0x30874Cu;
    {
        const bool branch_taken_0x30874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30874Cu;
        // 0x308750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30874c) {
            ctx->pc = 0x308768u;
            goto label_308768;
        }
    }
    ctx->pc = 0x308754u;
label_308754:
    // 0x308754: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x308754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_308758:
    // 0x308758: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x308758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_30875c:
    // 0x30875c: 0x40f809  jalr        $v0
label_308760:
    if (ctx->pc == 0x308760u) {
        ctx->pc = 0x308764u;
        goto label_308764;
    }
    ctx->pc = 0x30875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308764u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30875Cu, 0x308764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308764u;
label_308764:
    // 0x308764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308768:
    // 0x308768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30876c:
    // 0x30876c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30876cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308770:
    // 0x308770: 0x3e00008  jr          $ra
label_308774:
    if (ctx->pc == 0x308774u) {
        ctx->pc = 0x308774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308770u;
        // 0x308774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308778u;
        goto label_fallthrough_0x308770;
    }
    ctx->pc = 0x308770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308770u;
        // 0x308774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308770:
    ctx->pc = 0x308778u;
}
