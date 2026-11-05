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

// Function: sub_00131BC8
// Address: 0x131bc8 - 0x131c40
void sub_00131BC8_0x131bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131BC8_0x131bc8");
#endif

    switch (ctx->pc) {
        case 0x131bdcu: goto label_131bdc;
        case 0x131be4u: goto label_131be4;
        case 0x131becu: goto label_131bec;
        case 0x131c00u: goto label_131c00;
        case 0x131c14u: goto label_131c14;
        case 0x131c2cu: goto label_131c2c;
        default: break;
    }

    ctx->pc = 0x131bc8u;

    // 0x131bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131bd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x131bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x131bd4: 0xc04c974  jal         func_1325D0
    ctx->pc = 0x131BD4u;
    SET_GPR_U32(ctx, 31, 0x131BDCu);
    ctx->pc = 0x131BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BD4u;
    // 0x131bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1325D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1325D0u, 0x131BD4u, 0x131BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BDCu;
label_131bdc:
    // 0x131bdc: 0xc04c9b2  jal         func_1326C8
    ctx->pc = 0x131BDCu;
    SET_GPR_U32(ctx, 31, 0x131BE4u);
    ctx->pc = 0x131BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BDCu;
    // 0x131be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1326C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1326C8u, 0x131BDCu, 0x131BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BE4u;
label_131be4:
    // 0x131be4: 0xc04c9de  jal         func_132778
    ctx->pc = 0x131BE4u;
    SET_GPR_U32(ctx, 31, 0x131BECu);
    ctx->pc = 0x131BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131BE4u;
    // 0x131be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132778u, 0x131BE4u, 0x131BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131BECu;
label_131bec:
    // 0x131bec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x131becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x131bf0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x131BF0u;
    {
        const bool branch_taken_0x131bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bf0) {
            ctx->pc = 0x131BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131BF0u;
            // 0x131bf4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C04u;
            goto label_131c04;
        }
    }
    ctx->pc = 0x131BF8u;
    // 0x131bf8: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x131BF8u;
    SET_GPR_U32(ctx, 31, 0x131C00u);
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x131BF8u, 0x131C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C00u;
label_131c00:
    // 0x131c00: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x131c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_131c04:
    // 0x131c04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x131C04u;
    {
        const bool branch_taken_0x131c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c04) {
            ctx->pc = 0x131C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131C04u;
            // 0x131c08: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C18u;
            goto label_131c18;
        }
    }
    ctx->pc = 0x131C0Cu;
    // 0x131c0c: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x131C0Cu;
    SET_GPR_U32(ctx, 31, 0x131C14u);
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x131C0Cu, 0x131C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C14u;
label_131c14:
    // 0x131c14: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x131c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_131c18:
    // 0x131c18: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x131C18u;
    {
        const bool branch_taken_0x131c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131c18) {
            ctx->pc = 0x131C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131C18u;
            // 0x131c1c: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131C30u;
            goto label_131c30;
        }
    }
    ctx->pc = 0x131C20u;
    // 0x131c20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x131c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x131c24: 0xc04b4c8  jal         func_12D320
    ctx->pc = 0x131C24u;
    SET_GPR_U32(ctx, 31, 0x131C2Cu);
    ctx->pc = 0x131C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C24u;
    // 0x131c28: 0x8e05021c  lw          $a1, 0x21C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D320u, 0x131C24u, 0x131C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C2Cu;
label_131c2c:
    // 0x131c2c: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x131c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
label_131c30:
    // 0x131c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131c34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x131c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131c38: 0x3e00008  jr          $ra
    ctx->pc = 0x131C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C38u;
        // 0x131c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131C40u;
}
