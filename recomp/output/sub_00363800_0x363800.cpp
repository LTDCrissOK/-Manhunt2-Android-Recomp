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

// Function: sub_00363800
// Address: 0x363800 - 0x363850
void sub_00363800_0x363800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363800_0x363800");
#endif

    switch (ctx->pc) {
        case 0x363800u: goto label_363800;
        case 0x363804u: goto label_363804;
        case 0x363808u: goto label_363808;
        case 0x36380cu: goto label_36380c;
        case 0x363810u: goto label_363810;
        case 0x363814u: goto label_363814;
        case 0x363818u: goto label_363818;
        case 0x36381cu: goto label_36381c;
        case 0x363820u: goto label_363820;
        case 0x363824u: goto label_363824;
        case 0x363828u: goto label_363828;
        case 0x36382cu: goto label_36382c;
        case 0x363830u: goto label_363830;
        case 0x363834u: goto label_363834;
        case 0x363838u: goto label_363838;
        case 0x36383cu: goto label_36383c;
        case 0x363840u: goto label_363840;
        case 0x363844u: goto label_363844;
        case 0x363848u: goto label_363848;
        case 0x36384cu: goto label_36384c;
        default: break;
    }

    ctx->pc = 0x363800u;

label_363800:
    // 0x363800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_363804:
    // 0x363804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_363808:
    // 0x363808: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x363808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_36380c:
    // 0x36380c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x36380cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_363810:
    // 0x363810: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_363814:
    if (ctx->pc == 0x363814u) {
        ctx->pc = 0x363814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363810u;
        // 0x363814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363818u;
        goto label_363818;
    }
    ctx->pc = 0x363810u;
    {
        const bool branch_taken_0x363810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x363810) {
            ctx->pc = 0x363814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363810u;
            // 0x363814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363840u;
            goto label_363840;
        }
    }
    ctx->pc = 0x363818u;
label_363818:
    // 0x363818: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x363818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_36381c:
    // 0x36381c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_363820:
    // 0x363820: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x363820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_363824:
    // 0x363824: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x363824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_363828:
    // 0x363828: 0x40f809  jalr        $v0
label_36382c:
    if (ctx->pc == 0x36382Cu) {
        ctx->pc = 0x363830u;
        goto label_363830;
    }
    ctx->pc = 0x363828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363830u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363828u, 0x363830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363830u;
label_363830:
    // 0x363830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x363830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_363834:
    // 0x363834: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_363838:
    if (ctx->pc == 0x363838u) {
        ctx->pc = 0x363838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363834u;
        // 0x363838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36383Cu;
        goto label_36383c;
    }
    ctx->pc = 0x363834u;
    {
        const bool branch_taken_0x363834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x363838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363834u;
        // 0x363838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363834) {
            ctx->pc = 0x363840u;
            goto label_363840;
        }
    }
    ctx->pc = 0x36383Cu;
label_36383c:
    // 0x36383c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36383cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363840:
    // 0x363840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_363844:
    // 0x363844: 0x3e00008  jr          $ra
label_363848:
    if (ctx->pc == 0x363848u) {
        ctx->pc = 0x363848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363844u;
        // 0x363848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36384Cu;
        goto label_36384c;
    }
    ctx->pc = 0x363844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363844u;
        // 0x363848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36384Cu;
label_36384c:
    // 0x36384c: 0x0  nop
    ctx->pc = 0x36384cu;
    // NOP
    ctx->pc = 0x363850u;
}
