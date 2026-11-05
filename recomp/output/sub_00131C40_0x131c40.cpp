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

// Function: sub_00131C40
// Address: 0x131c40 - 0x131d00
void sub_00131C40_0x131c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131C40_0x131c40");
#endif

    switch (ctx->pc) {
        case 0x131c58u: goto label_131c58;
        case 0x131c78u: goto label_131c78;
        case 0x131c84u: goto label_131c84;
        case 0x131c8cu: goto label_131c8c;
        case 0x131c94u: goto label_131c94;
        case 0x131ca8u: goto label_131ca8;
        case 0x131cb8u: goto label_131cb8;
        case 0x131cccu: goto label_131ccc;
        case 0x131cdcu: goto label_131cdc;
        case 0x131ce8u: goto label_131ce8;
        default: break;
    }

    ctx->pc = 0x131c40u;

    // 0x131c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131c4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131c50: 0xc04c9cc  jal         func_132730
    ctx->pc = 0x131C50u;
    SET_GPR_U32(ctx, 31, 0x131C58u);
    ctx->pc = 0x131C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C50u;
    // 0x131c54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132730u, 0x131C50u, 0x131C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C58u;
label_131c58:
    // 0x131c58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x131c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c5c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x131c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x131c60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x131c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131c64: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x131c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x131c68: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131C68u;
    {
        const bool branch_taken_0x131c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x131C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C68u;
        // 0x131c6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c68) {
            ctx->pc = 0x131C7Cu;
            goto label_131c7c;
        }
    }
    ctx->pc = 0x131C70u;
    // 0x131c70: 0xc04b3f0  jal         func_12CFC0
    ctx->pc = 0x131C70u;
    SET_GPR_U32(ctx, 31, 0x131C78u);
    ctx->pc = 0x131C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C70u;
    // 0x131c74: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFC0u, 0x131C70u, 0x131C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C78u;
label_131c78:
    // 0x131c78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_131c7c:
    // 0x131c7c: 0xc04c7c8  jal         func_131F20
    ctx->pc = 0x131C7Cu;
    SET_GPR_U32(ctx, 31, 0x131C84u);
    ctx->pc = 0x131C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C7Cu;
    // 0x131c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F20u, 0x131C7Cu, 0x131C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C84u;
label_131c84:
    // 0x131c84: 0xc04c974  jal         func_1325D0
    ctx->pc = 0x131C84u;
    SET_GPR_U32(ctx, 31, 0x131C8Cu);
    ctx->pc = 0x131C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C84u;
    // 0x131c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1325D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1325D0u, 0x131C84u, 0x131C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C8Cu;
label_131c8c:
    // 0x131c8c: 0xc04c7b6  jal         func_131ED8
    ctx->pc = 0x131C8Cu;
    SET_GPR_U32(ctx, 31, 0x131C94u);
    ctx->pc = 0x131C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C8Cu;
    // 0x131c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED8u, 0x131C8Cu, 0x131C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C94u;
label_131c94:
    // 0x131c94: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x131c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x131c98: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x131C98u;
    {
        const bool branch_taken_0x131c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c98) {
            ctx->pc = 0x131C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131C98u;
            // 0x131c9c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131CBCu;
            goto label_131cbc;
        }
    }
    ctx->pc = 0x131CA0u;
    // 0x131ca0: 0xc04b39e  jal         func_12CE78
    ctx->pc = 0x131CA0u;
    SET_GPR_U32(ctx, 31, 0x131CA8u);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x131CA0u, 0x131CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CA8u;
label_131ca8:
    // 0x131ca8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131CA8u;
    {
        const bool branch_taken_0x131ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131ca8) {
            ctx->pc = 0x131CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131CA8u;
            // 0x131cac: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131CBCu;
            goto label_131cbc;
        }
    }
    ctx->pc = 0x131CB0u;
    // 0x131cb0: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x131CB0u;
    SET_GPR_U32(ctx, 31, 0x131CB8u);
    ctx->pc = 0x131CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CB0u;
    // 0x131cb4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x131CB0u, 0x131CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CB8u;
label_131cb8:
    // 0x131cb8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_131cbc:
    // 0x131cbc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x131CBCu;
    {
        const bool branch_taken_0x131cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cbc) {
            ctx->pc = 0x131CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131CBCu;
            // 0x131cc0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131CE0u;
            goto label_131ce0;
        }
    }
    ctx->pc = 0x131CC4u;
    // 0x131cc4: 0xc04b39e  jal         func_12CE78
    ctx->pc = 0x131CC4u;
    SET_GPR_U32(ctx, 31, 0x131CCCu);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x131CC4u, 0x131CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CCCu;
label_131ccc:
    // 0x131ccc: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131CCCu;
    {
        const bool branch_taken_0x131ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131ccc) {
            ctx->pc = 0x131CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131CCCu;
            // 0x131cd0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131CE0u;
            goto label_131ce0;
        }
    }
    ctx->pc = 0x131CD4u;
    // 0x131cd4: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x131CD4u;
    SET_GPR_U32(ctx, 31, 0x131CDCu);
    ctx->pc = 0x131CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CD4u;
    // 0x131cd8: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x131CD4u, 0x131CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CDCu;
label_131cdc:
    // 0x131cdc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x131cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_131ce0:
    // 0x131ce0: 0xc04b4c8  jal         func_12D320
    ctx->pc = 0x131CE0u;
    SET_GPR_U32(ctx, 31, 0x131CE8u);
    ctx->pc = 0x131CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CE0u;
    // 0x131ce4: 0x8e05021c  lw          $a1, 0x21C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D320u, 0x131CE0u, 0x131CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CE8u;
label_131ce8:
    // 0x131ce8: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x131ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x131cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x131CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CF8u;
        // 0x131cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131D00u;
}
