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

// Function: sub_003A1A58
// Address: 0x3a1a58 - 0x3a1ae0
void sub_003A1A58_0x3a1a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1A58_0x3a1a58");
#endif

    switch (ctx->pc) {
        case 0x3a1a58u: goto label_3a1a58;
        case 0x3a1a5cu: goto label_3a1a5c;
        case 0x3a1a60u: goto label_3a1a60;
        case 0x3a1a64u: goto label_3a1a64;
        case 0x3a1a68u: goto label_3a1a68;
        case 0x3a1a6cu: goto label_3a1a6c;
        case 0x3a1a70u: goto label_3a1a70;
        case 0x3a1a74u: goto label_3a1a74;
        case 0x3a1a78u: goto label_3a1a78;
        case 0x3a1a7cu: goto label_3a1a7c;
        case 0x3a1a80u: goto label_3a1a80;
        case 0x3a1a84u: goto label_3a1a84;
        case 0x3a1a88u: goto label_3a1a88;
        case 0x3a1a8cu: goto label_3a1a8c;
        case 0x3a1a90u: goto label_3a1a90;
        case 0x3a1a94u: goto label_3a1a94;
        case 0x3a1a98u: goto label_3a1a98;
        case 0x3a1a9cu: goto label_3a1a9c;
        case 0x3a1aa0u: goto label_3a1aa0;
        case 0x3a1aa4u: goto label_3a1aa4;
        case 0x3a1aa8u: goto label_3a1aa8;
        case 0x3a1aacu: goto label_3a1aac;
        case 0x3a1ab0u: goto label_3a1ab0;
        case 0x3a1ab4u: goto label_3a1ab4;
        case 0x3a1ab8u: goto label_3a1ab8;
        case 0x3a1abcu: goto label_3a1abc;
        case 0x3a1ac0u: goto label_3a1ac0;
        case 0x3a1ac4u: goto label_3a1ac4;
        case 0x3a1ac8u: goto label_3a1ac8;
        case 0x3a1accu: goto label_3a1acc;
        case 0x3a1ad0u: goto label_3a1ad0;
        case 0x3a1ad4u: goto label_3a1ad4;
        case 0x3a1ad8u: goto label_3a1ad8;
        case 0x3a1adcu: goto label_3a1adc;
        default: break;
    }

    ctx->pc = 0x3a1a58u;

label_3a1a58:
    // 0x3a1a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a1a5c:
    // 0x3a1a5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a1a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a1a60:
    // 0x3a1a60: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3a1a64:
    if (ctx->pc == 0x3A1A64u) {
        ctx->pc = 0x3A1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A60u;
        // 0x3a1a64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A68u;
        goto label_3a1a68;
    }
    ctx->pc = 0x3A1A60u;
    {
        const bool branch_taken_0x3a1a60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A60u;
        // 0x3a1a64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a60) {
            ctx->pc = 0x3A1A80u;
            goto label_3a1a80;
        }
    }
    ctx->pc = 0x3A1A68u;
label_3a1a68:
    // 0x3a1a68: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1a6c:
    // 0x3a1a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1a70:
    // 0x3a1a70: 0x2484c590  addiu       $a0, $a0, -0x3A70
    ctx->pc = 0x3a1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952336));
label_3a1a74:
    // 0x3a1a74: 0x80e8688  j           func_3A1A20
label_3a1a78:
    if (ctx->pc == 0x3A1A78u) {
        ctx->pc = 0x3A1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A74u;
        // 0x3a1a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A7Cu;
        goto label_3a1a7c;
    }
    ctx->pc = 0x3A1A74u;
    ctx->pc = 0x3A1A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A74u;
    // 0x3a1a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    sub_003A1A20_0x3a1a20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1A7Cu;
label_3a1a7c:
    // 0x3a1a7c: 0x0  nop
    ctx->pc = 0x3a1a7cu;
    // NOP
label_3a1a80:
    // 0x3a1a80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3a1a84:
    if (ctx->pc == 0x3A1A84u) {
        ctx->pc = 0x3A1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A80u;
        // 0x3a1a84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A88u;
        goto label_3a1a88;
    }
    ctx->pc = 0x3A1A80u;
    {
        const bool branch_taken_0x3a1a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A80u;
        // 0x3a1a84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1a80) {
            ctx->pc = 0x3A1A98u;
            goto label_3a1a98;
        }
    }
    ctx->pc = 0x3A1A88u;
label_3a1a88:
    // 0x3a1a88: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1a8c:
    // 0x3a1a8c: 0x2484c5b8  addiu       $a0, $a0, -0x3A48
    ctx->pc = 0x3a1a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952376));
label_3a1a90:
    // 0x3a1a90: 0x80e8688  j           func_3A1A20
label_3a1a94:
    if (ctx->pc == 0x3A1A94u) {
        ctx->pc = 0x3A1A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1A90u;
        // 0x3a1a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1A98u;
        goto label_3a1a98;
    }
    ctx->pc = 0x3A1A90u;
    ctx->pc = 0x3A1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1A90u;
    // 0x3a1a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    sub_003A1A20_0x3a1a20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1A98u;
label_3a1a98:
    // 0x3a1a98: 0xc0e86b8  jal         func_3A1AE0
label_3a1a9c:
    if (ctx->pc == 0x3A1A9Cu) {
        ctx->pc = 0x3A1AA0u;
        goto label_3a1aa0;
    }
    ctx->pc = 0x3A1A98u;
    SET_GPR_U32(ctx, 31, 0x3A1AA0u);
    ctx->pc = 0x3A1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE0u, 0x3A1A98u, 0x3A1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1AA0u;
label_3a1aa0:
    // 0x3a1aa0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a1aa4:
    // 0x3a1aa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3a1aa8:
    if (ctx->pc == 0x3A1AA8u) {
        ctx->pc = 0x3A1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AA4u;
        // 0x3a1aa8: 0x2484c5e0  addiu       $a0, $a0, -0x3A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1AACu;
        goto label_3a1aac;
    }
    ctx->pc = 0x3A1AA4u;
    {
        const bool branch_taken_0x3a1aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AA4u;
        // 0x3a1aa8: 0x2484c5e0  addiu       $a0, $a0, -0x3A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1aa4) {
            ctx->pc = 0x3A1AB8u;
            goto label_3a1ab8;
        }
    }
    ctx->pc = 0x3A1AACu;
label_3a1aac:
    // 0x3a1aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1ab0:
    // 0x3a1ab0: 0x80e8688  j           func_3A1A20
label_3a1ab4:
    if (ctx->pc == 0x3A1AB4u) {
        ctx->pc = 0x3A1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AB0u;
        // 0x3a1ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1AB8u;
        goto label_3a1ab8;
    }
    ctx->pc = 0x3A1AB0u;
    ctx->pc = 0x3A1AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1AB0u;
    // 0x3a1ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    sub_003A1A20_0x3a1a20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1AB8u;
label_3a1ab8:
    // 0x3a1ab8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3a1abc:
    // 0x3a1abc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a1ac0:
    if (ctx->pc == 0x3A1AC0u) {
        ctx->pc = 0x3A1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1ABCu;
        // 0x3a1ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1AC4u;
        goto label_3a1ac4;
    }
    ctx->pc = 0x3A1ABCu;
    {
        const bool branch_taken_0x3a1abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1ABCu;
        // 0x3a1ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1abc) {
            ctx->pc = 0x3A1AD0u;
            goto label_3a1ad0;
        }
    }
    ctx->pc = 0x3A1AC4u;
label_3a1ac4:
    // 0x3a1ac4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x3a1ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_3a1ac8:
    // 0x3a1ac8: 0x40f809  jalr        $v0
label_3a1acc:
    if (ctx->pc == 0x3A1ACCu) {
        ctx->pc = 0x3A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AC8u;
        // 0x3a1acc: 0x248419f0  addiu       $a0, $a0, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1AD0u;
        goto label_3a1ad0;
    }
    ctx->pc = 0x3A1AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1AD0u);
        ctx->pc = 0x3A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AC8u;
        // 0x3a1acc: 0x248419f0  addiu       $a0, $a0, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1AC8u, 0x3A1AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1AD0u;
label_3a1ad0:
    // 0x3a1ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1ad4:
    // 0x3a1ad4: 0x3e00008  jr          $ra
label_3a1ad8:
    if (ctx->pc == 0x3A1AD8u) {
        ctx->pc = 0x3A1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AD4u;
        // 0x3a1ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1ADCu;
        goto label_3a1adc;
    }
    ctx->pc = 0x3A1AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1AD4u;
        // 0x3a1ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1ADCu;
label_3a1adc:
    // 0x3a1adc: 0x0  nop
    ctx->pc = 0x3a1adcu;
    // NOP
    ctx->pc = 0x3a1ae0u;
}
