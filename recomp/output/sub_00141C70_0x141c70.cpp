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

// Function: sub_00141C70
// Address: 0x141c70 - 0x141cf0
void sub_00141C70_0x141c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141C70_0x141c70");
#endif

    switch (ctx->pc) {
        case 0x141c88u: goto label_141c88;
        case 0x141c94u: goto label_141c94;
        case 0x141ca4u: goto label_141ca4;
        case 0x141cbcu: goto label_141cbc;
        case 0x141cccu: goto label_141ccc;
        case 0x141cdcu: goto label_141cdc;
        default: break;
    }

    ctx->pc = 0x141c70u;

    // 0x141c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141c78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141c80: 0xc050a9c  jal         func_142A70
    ctx->pc = 0x141C80u;
    SET_GPR_U32(ctx, 31, 0x141C88u);
    ctx->pc = 0x141C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C80u;
    // 0x141c84: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142A70u, 0x141C80u, 0x141C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C88u;
label_141c88:
    // 0x141c88: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x141c88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x141c8c: 0xc04deee  jal         func_137BB8
    ctx->pc = 0x141C8Cu;
    SET_GPR_U32(ctx, 31, 0x141C94u);
    ctx->pc = 0x141C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C8Cu;
    // 0x141c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BB8u, 0x141C8Cu, 0x141C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C94u;
label_141c94:
    // 0x141c94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141C94u;
    {
        const bool branch_taken_0x141c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141c94) {
            ctx->pc = 0x141C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141C94u;
            // 0x141c98: 0x8e020bfc  lw          $v0, 0xBFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141CACu;
            goto label_141cac;
        }
    }
    ctx->pc = 0x141C9Cu;
    // 0x141c9c: 0xc050a08  jal         func_142820
    ctx->pc = 0x141C9Cu;
    SET_GPR_U32(ctx, 31, 0x141CA4u);
    ctx->pc = 0x141CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C9Cu;
    // 0x141ca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142820u, 0x141C9Cu, 0x141CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CA4u;
label_141ca4:
    // 0x141ca4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x141CA4u;
    {
        const bool branch_taken_0x141ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CA4u;
        // 0x141ca8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ca4) {
            ctx->pc = 0x141CE0u;
            goto label_141ce0;
        }
    }
    ctx->pc = 0x141CACu;
label_141cac:
    // 0x141cac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141CACu;
    {
        const bool branch_taken_0x141cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141cac) {
            ctx->pc = 0x141CD4u;
            goto label_141cd4;
        }
    }
    ctx->pc = 0x141CB4u;
    // 0x141cb4: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x141CB4u;
    SET_GPR_U32(ctx, 31, 0x141CBCu);
    ctx->pc = 0x141CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CB4u;
    // 0x141cb8: 0x8e040468  lw          $a0, 0x468($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x141CB4u, 0x141CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CBCu;
label_141cbc:
    // 0x141cbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141CBCu;
    {
        const bool branch_taken_0x141cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141cbc) {
            ctx->pc = 0x141CD4u;
            goto label_141cd4;
        }
    }
    ctx->pc = 0x141CC4u;
    // 0x141cc4: 0xc05095c  jal         func_142570
    ctx->pc = 0x141CC4u;
    SET_GPR_U32(ctx, 31, 0x141CCCu);
    ctx->pc = 0x141CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CC4u;
    // 0x141cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142570u, 0x141CC4u, 0x141CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CCCu;
label_141ccc:
    // 0x141ccc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x141CCCu;
    {
        const bool branch_taken_0x141ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CCCu;
        // 0x141cd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ccc) {
            ctx->pc = 0x141CE0u;
            goto label_141ce0;
        }
    }
    ctx->pc = 0x141CD4u;
label_141cd4:
    // 0x141cd4: 0xc05095c  jal         func_142570
    ctx->pc = 0x141CD4u;
    SET_GPR_U32(ctx, 31, 0x141CDCu);
    ctx->pc = 0x141CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141CD4u;
    // 0x141cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142570u, 0x141CD4u, 0x141CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141CDCu;
label_141cdc:
    // 0x141cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141ce0:
    // 0x141ce0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x141CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141CE4u;
        // 0x141ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141CECu;
    // 0x141cec: 0x0  nop
    ctx->pc = 0x141cecu;
    // NOP
    ctx->pc = 0x141cf0u;
}
