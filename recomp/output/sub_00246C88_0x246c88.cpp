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

// Function: sub_00246C88
// Address: 0x246c88 - 0x246cf0
void sub_00246C88_0x246c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246C88_0x246c88");
#endif

    switch (ctx->pc) {
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        default: break;
    }

    ctx->pc = 0x246c88u;

label_246c88:
    // 0x246c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_246c8c:
    // 0x246c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_246c90:
    // 0x246c90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x246c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_246c94:
    // 0x246c94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_246c98:
    // 0x246c98: 0xc0899bc  jal         func_2266F0
label_246c9c:
    if (ctx->pc == 0x246C9Cu) {
        ctx->pc = 0x246C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C98u;
        // 0x246c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA0u;
        goto label_246ca0;
    }
    ctx->pc = 0x246C98u;
    SET_GPR_U32(ctx, 31, 0x246CA0u);
    ctx->pc = 0x246C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246C98u;
    // 0x246c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246C98u, 0x246CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CA0u;
label_246ca0:
    // 0x246ca0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_246ca4:
    if (ctx->pc == 0x246CA4u) {
        ctx->pc = 0x246CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA0u;
        // 0x246ca4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA8u;
        goto label_246ca8;
    }
    ctx->pc = 0x246CA0u;
    {
        const bool branch_taken_0x246ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ca0) {
            ctx->pc = 0x246CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246CA0u;
            // 0x246ca4: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246CBCu;
            goto label_246cbc;
        }
    }
    ctx->pc = 0x246CA8u;
label_246ca8:
    // 0x246ca8: 0xc0899bc  jal         func_2266F0
label_246cac:
    if (ctx->pc == 0x246CACu) {
        ctx->pc = 0x246CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA8u;
        // 0x246cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CB0u;
        goto label_246cb0;
    }
    ctx->pc = 0x246CA8u;
    SET_GPR_U32(ctx, 31, 0x246CB0u);
    ctx->pc = 0x246CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CA8u;
    // 0x246cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246CA8u, 0x246CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CB0u;
label_246cb0:
    // 0x246cb0: 0xc098514  jal         func_261450
label_246cb4:
    if (ctx->pc == 0x246CB4u) {
        ctx->pc = 0x246CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CB0u;
        // 0x246cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CB8u;
        goto label_246cb8;
    }
    ctx->pc = 0x246CB0u;
    SET_GPR_U32(ctx, 31, 0x246CB8u);
    ctx->pc = 0x246CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CB0u;
    // 0x246cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x246CB0u, 0x246CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246CB8u;
label_246cb8:
    // 0x246cb8: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x246cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_246cbc:
    // 0x246cbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x246cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_246cc0:
    // 0x246cc0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_246cc4:
    if (ctx->pc == 0x246CC4u) {
        ctx->pc = 0x246CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC0u;
        // 0x246cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CC8u;
        goto label_246cc8;
    }
    ctx->pc = 0x246CC0u;
    {
        const bool branch_taken_0x246cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246cc0) {
            ctx->pc = 0x246CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246CC0u;
            // 0x246cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246CE4u;
            goto label_246ce4;
        }
    }
    ctx->pc = 0x246CC8u;
label_246cc8:
    // 0x246cc8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x246cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_246ccc:
    // 0x246ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246cd0:
    // 0x246cd0: 0x8c850424  lw          $a1, 0x424($a0)
    ctx->pc = 0x246cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1060)));
label_246cd4:
    // 0x246cd4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x246cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_246cd8:
    // 0x246cd8: 0x40f809  jalr        $v0
label_246cdc:
    if (ctx->pc == 0x246CDCu) {
        ctx->pc = 0x246CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CD8u;
        // 0x246cdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CE0u;
        goto label_246ce0;
    }
    ctx->pc = 0x246CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246CE0u);
        ctx->pc = 0x246CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CD8u;
        // 0x246cdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246CD8u, 0x246CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246CE0u;
label_246ce0:
    // 0x246ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246ce4:
    // 0x246ce4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_246ce8:
    // 0x246ce8: 0x3e00008  jr          $ra
label_246cec:
    if (ctx->pc == 0x246CECu) {
        ctx->pc = 0x246CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CE8u;
        // 0x246cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CF0u;
        goto label_fallthrough_0x246ce8;
    }
    ctx->pc = 0x246CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CE8u;
        // 0x246cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x246ce8:
    ctx->pc = 0x246CF0u;
}
