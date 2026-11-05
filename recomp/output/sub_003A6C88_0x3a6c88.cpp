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

// Function: sub_003A6C88
// Address: 0x3a6c88 - 0x3a6d90
void sub_003A6C88_0x3a6c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6C88_0x3a6c88");
#endif

    switch (ctx->pc) {
        case 0x3a6c88u: goto label_3a6c88;
        case 0x3a6c8cu: goto label_3a6c8c;
        case 0x3a6c90u: goto label_3a6c90;
        case 0x3a6c94u: goto label_3a6c94;
        case 0x3a6c98u: goto label_3a6c98;
        case 0x3a6c9cu: goto label_3a6c9c;
        case 0x3a6ca0u: goto label_3a6ca0;
        case 0x3a6ca4u: goto label_3a6ca4;
        case 0x3a6ca8u: goto label_3a6ca8;
        case 0x3a6cacu: goto label_3a6cac;
        case 0x3a6cb0u: goto label_3a6cb0;
        case 0x3a6cb4u: goto label_3a6cb4;
        case 0x3a6cb8u: goto label_3a6cb8;
        case 0x3a6cbcu: goto label_3a6cbc;
        case 0x3a6cc0u: goto label_3a6cc0;
        case 0x3a6cc4u: goto label_3a6cc4;
        case 0x3a6cc8u: goto label_3a6cc8;
        case 0x3a6cccu: goto label_3a6ccc;
        case 0x3a6cd0u: goto label_3a6cd0;
        case 0x3a6cd4u: goto label_3a6cd4;
        case 0x3a6cd8u: goto label_3a6cd8;
        case 0x3a6cdcu: goto label_3a6cdc;
        case 0x3a6ce0u: goto label_3a6ce0;
        case 0x3a6ce4u: goto label_3a6ce4;
        case 0x3a6ce8u: goto label_3a6ce8;
        case 0x3a6cecu: goto label_3a6cec;
        case 0x3a6cf0u: goto label_3a6cf0;
        case 0x3a6cf4u: goto label_3a6cf4;
        case 0x3a6cf8u: goto label_3a6cf8;
        case 0x3a6cfcu: goto label_3a6cfc;
        case 0x3a6d00u: goto label_3a6d00;
        case 0x3a6d04u: goto label_3a6d04;
        case 0x3a6d08u: goto label_3a6d08;
        case 0x3a6d0cu: goto label_3a6d0c;
        case 0x3a6d10u: goto label_3a6d10;
        case 0x3a6d14u: goto label_3a6d14;
        case 0x3a6d18u: goto label_3a6d18;
        case 0x3a6d1cu: goto label_3a6d1c;
        case 0x3a6d20u: goto label_3a6d20;
        case 0x3a6d24u: goto label_3a6d24;
        case 0x3a6d28u: goto label_3a6d28;
        case 0x3a6d2cu: goto label_3a6d2c;
        case 0x3a6d30u: goto label_3a6d30;
        case 0x3a6d34u: goto label_3a6d34;
        case 0x3a6d38u: goto label_3a6d38;
        case 0x3a6d3cu: goto label_3a6d3c;
        case 0x3a6d40u: goto label_3a6d40;
        case 0x3a6d44u: goto label_3a6d44;
        case 0x3a6d48u: goto label_3a6d48;
        case 0x3a6d4cu: goto label_3a6d4c;
        case 0x3a6d50u: goto label_3a6d50;
        case 0x3a6d54u: goto label_3a6d54;
        case 0x3a6d58u: goto label_3a6d58;
        case 0x3a6d5cu: goto label_3a6d5c;
        case 0x3a6d60u: goto label_3a6d60;
        case 0x3a6d64u: goto label_3a6d64;
        case 0x3a6d68u: goto label_3a6d68;
        case 0x3a6d6cu: goto label_3a6d6c;
        case 0x3a6d70u: goto label_3a6d70;
        case 0x3a6d74u: goto label_3a6d74;
        case 0x3a6d78u: goto label_3a6d78;
        case 0x3a6d7cu: goto label_3a6d7c;
        case 0x3a6d80u: goto label_3a6d80;
        case 0x3a6d84u: goto label_3a6d84;
        case 0x3a6d88u: goto label_3a6d88;
        case 0x3a6d8cu: goto label_3a6d8c;
        default: break;
    }

    ctx->pc = 0x3a6c88u;

label_3a6c88:
    // 0x3a6c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a6c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a6c8c:
    // 0x3a6c8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a6c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3a6c90:
    // 0x3a6c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a6c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6c94:
    // 0x3a6c94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3a6c98:
    // 0x3a6c98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a6c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3a6c9c:
    // 0x3a6c9c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_3a6ca0:
    if (ctx->pc == 0x3A6CA0u) {
        ctx->pc = 0x3A6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C9Cu;
        // 0x3a6ca0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6CA4u;
        goto label_3a6ca4;
    }
    ctx->pc = 0x3A6C9Cu;
    {
        const bool branch_taken_0x3a6c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C9Cu;
        // 0x3a6ca0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c9c) {
            ctx->pc = 0x3A6CB8u;
            goto label_3a6cb8;
        }
    }
    ctx->pc = 0x3A6CA4u;
label_3a6ca4:
    // 0x3a6ca4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a6ca8:
    // 0x3a6ca8: 0xc0e9d40  jal         func_3A7500
label_3a6cac:
    if (ctx->pc == 0x3A6CACu) {
        ctx->pc = 0x3A6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CA8u;
        // 0x3a6cac: 0x2484e028  addiu       $a0, $a0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6CB0u;
        goto label_3a6cb0;
    }
    ctx->pc = 0x3A6CA8u;
    SET_GPR_U32(ctx, 31, 0x3A6CB0u);
    ctx->pc = 0x3A6CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CA8u;
    // 0x3a6cac: 0x2484e028  addiu       $a0, $a0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7500u, 0x3A6CA8u, 0x3A6CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CB0u;
label_3a6cb0:
    // 0x3a6cb0: 0x10000031  b           . + 4 + (0x31 << 2)
label_3a6cb4:
    if (ctx->pc == 0x3A6CB4u) {
        ctx->pc = 0x3A6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CB0u;
        // 0x3a6cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6CB8u;
        goto label_3a6cb8;
    }
    ctx->pc = 0x3A6CB0u;
    {
        const bool branch_taken_0x3a6cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CB0u;
        // 0x3a6cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6cb0) {
            ctx->pc = 0x3A6D78u;
            goto label_3a6d78;
        }
    }
    ctx->pc = 0x3A6CB8u;
label_3a6cb8:
    // 0x3a6cb8: 0xc0e9d2a  jal         func_3A74A8
label_3a6cbc:
    if (ctx->pc == 0x3A6CBCu) {
        ctx->pc = 0x3A6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CB8u;
        // 0x3a6cbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6CC0u;
        goto label_3a6cc0;
    }
    ctx->pc = 0x3A6CB8u;
    SET_GPR_U32(ctx, 31, 0x3A6CC0u);
    ctx->pc = 0x3A6CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CB8u;
    // 0x3a6cbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74A8u, 0x3A6CB8u, 0x3A6CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CC0u;
label_3a6cc0:
    // 0x3a6cc0: 0xc0e9afc  jal         func_3A6BF0
label_3a6cc4:
    if (ctx->pc == 0x3A6CC4u) {
        ctx->pc = 0x3A6CC8u;
        goto label_3a6cc8;
    }
    ctx->pc = 0x3A6CC0u;
    SET_GPR_U32(ctx, 31, 0x3A6CC8u);
    ctx->pc = 0x3A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6BF0u, 0x3A6CC0u, 0x3A6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CC8u;
label_3a6cc8:
    // 0x3a6cc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a6cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a6ccc:
    // 0x3a6ccc: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_3a6cd0:
    if (ctx->pc == 0x3A6CD0u) {
        ctx->pc = 0x3A6CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CCCu;
        // 0x3a6cd0: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6CD4u;
        goto label_3a6cd4;
    }
    ctx->pc = 0x3A6CCCu;
    {
        const bool branch_taken_0x3a6ccc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6ccc) {
            ctx->pc = 0x3A6CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6CCCu;
            // 0x3a6cd0: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6CE8u;
            goto label_3a6ce8;
        }
    }
    ctx->pc = 0x3A6CD4u;
label_3a6cd4:
    // 0x3a6cd4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a6cd8:
    // 0x3a6cd8: 0xc0e9d40  jal         func_3A7500
label_3a6cdc:
    if (ctx->pc == 0x3A6CDCu) {
        ctx->pc = 0x3A6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CD8u;
        // 0x3a6cdc: 0x2484e058  addiu       $a0, $a0, -0x1FA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6CE0u;
        goto label_3a6ce0;
    }
    ctx->pc = 0x3A6CD8u;
    SET_GPR_U32(ctx, 31, 0x3A6CE0u);
    ctx->pc = 0x3A6CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CD8u;
    // 0x3a6cdc: 0x2484e058  addiu       $a0, $a0, -0x1FA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7500u, 0x3A6CD8u, 0x3A6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CE0u;
label_3a6ce0:
    // 0x3a6ce0: 0x10000022  b           . + 4 + (0x22 << 2)
label_3a6ce4:
    if (ctx->pc == 0x3A6CE4u) {
        ctx->pc = 0x3A6CE8u;
        goto label_3a6ce8;
    }
    ctx->pc = 0x3A6CE0u;
    {
        const bool branch_taken_0x3a6ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6ce0) {
            ctx->pc = 0x3A6D6Cu;
            goto label_3a6d6c;
        }
    }
    ctx->pc = 0x3A6CE8u;
label_3a6ce8:
    // 0x3a6ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a6cec:
    // 0x3a6cec: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x3a6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_3a6cf0:
    // 0x3a6cf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a6cf4:
    // 0x3a6cf4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a6cf8:
    // 0x3a6cf8: 0x40f809  jalr        $v0
label_3a6cfc:
    if (ctx->pc == 0x3A6CFCu) {
        ctx->pc = 0x3A6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CF8u;
        // 0x3a6cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6D00u;
        goto label_3a6d00;
    }
    ctx->pc = 0x3A6CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A6D00u);
        ctx->pc = 0x3A6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CF8u;
        // 0x3a6cfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6CF8u, 0x3A6D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A6D00u;
label_3a6d00:
    // 0x3a6d00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a6d04:
    // 0x3a6d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a6d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a6d08:
    // 0x3a6d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a6d0c:
    // 0x3a6d0c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a6d10:
    // 0x3a6d10: 0x40f809  jalr        $v0
label_3a6d14:
    if (ctx->pc == 0x3A6D14u) {
        ctx->pc = 0x3A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D10u;
        // 0x3a6d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6D18u;
        goto label_3a6d18;
    }
    ctx->pc = 0x3A6D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A6D18u);
        ctx->pc = 0x3A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D10u;
        // 0x3a6d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6D10u, 0x3A6D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A6D18u;
label_3a6d18:
    // 0x3a6d18: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3a6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a6d1c:
    // 0x3a6d1c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3a6d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a6d20:
    // 0x3a6d20: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3a6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3a6d24:
    // 0x3a6d24: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x3a6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_3a6d28:
    // 0x3a6d28: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x3a6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_3a6d2c:
    // 0x3a6d2c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3a6d2cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3a6d30:
    // 0x3a6d30: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3a6d34:
    if (ctx->pc == 0x3A6D34u) {
        ctx->pc = 0x3A6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D30u;
        // 0x3a6d34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6D38u;
        goto label_3a6d38;
    }
    ctx->pc = 0x3A6D30u;
    {
        const bool branch_taken_0x3a6d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6d30) {
            ctx->pc = 0x3A6D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6D30u;
            // 0x3a6d34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6D38u;
            goto label_3a6d38;
        }
    }
    ctx->pc = 0x3A6D38u;
label_3a6d38:
    // 0x3a6d38: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x3a6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_3a6d3c:
    // 0x3a6d3c: 0x1012  mflo        $v0
    ctx->pc = 0x3a6d3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3a6d40:
    // 0x3a6d40: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3a6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3a6d44:
    // 0x3a6d44: 0x0  nop
    ctx->pc = 0x3a6d44u;
    // NOP
label_3a6d48:
    // 0x3a6d48: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3a6d4c:
    // 0x3a6d4c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3a6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3a6d50:
    // 0x3a6d50: 0x0  nop
    ctx->pc = 0x3a6d50u;
    // NOP
label_3a6d54:
    // 0x3a6d54: 0x0  nop
    ctx->pc = 0x3a6d54u;
    // NOP
label_3a6d58:
    // 0x3a6d58: 0x0  nop
    ctx->pc = 0x3a6d58u;
    // NOP
label_3a6d5c:
    // 0x3a6d5c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_3a6d60:
    if (ctx->pc == 0x3A6D60u) {
        ctx->pc = 0x3A6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D5Cu;
        // 0x3a6d60: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6D64u;
        goto label_3a6d64;
    }
    ctx->pc = 0x3A6D5Cu;
    {
        const bool branch_taken_0x3a6d5c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3A6D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D5Cu;
        // 0x3a6d60: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6d5c) {
            ctx->pc = 0x3A6D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6d48;
        }
    }
    ctx->pc = 0x3A6D64u;
label_3a6d64:
    // 0x3a6d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6d68:
    // 0x3a6d68: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x3a6d68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_3a6d6c:
    // 0x3a6d6c: 0xc0e9d30  jal         func_3A74C0
label_3a6d70:
    if (ctx->pc == 0x3A6D70u) {
        ctx->pc = 0x3A6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D6Cu;
        // 0x3a6d70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6D74u;
        goto label_3a6d74;
    }
    ctx->pc = 0x3A6D6Cu;
    SET_GPR_U32(ctx, 31, 0x3A6D74u);
    ctx->pc = 0x3A6D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D6Cu;
    // 0x3a6d70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74C0u, 0x3A6D6Cu, 0x3A6D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6D74u;
label_3a6d74:
    // 0x3a6d74: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a6d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a6d78:
    // 0x3a6d78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a6d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6d7c:
    // 0x3a6d7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a6d7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3a6d80:
    // 0x3a6d80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a6d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a6d84:
    // 0x3a6d84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a6d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3a6d88:
    // 0x3a6d88: 0x3e00008  jr          $ra
label_3a6d8c:
    if (ctx->pc == 0x3A6D8Cu) {
        ctx->pc = 0x3A6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D88u;
        // 0x3a6d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6D90u;
        goto label_fallthrough_0x3a6d88;
    }
    ctx->pc = 0x3A6D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D88u;
        // 0x3a6d8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a6d88:
    ctx->pc = 0x3A6D90u;
}
