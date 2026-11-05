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

// Function: sub_0030DD38
// Address: 0x30dd38 - 0x30ddd0
void sub_0030DD38_0x30dd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DD38_0x30dd38");
#endif

    switch (ctx->pc) {
        case 0x30dd60u: goto label_30dd60;
        case 0x30dd88u: goto label_30dd88;
        case 0x30dda8u: goto label_30dda8;
        case 0x30ddb8u: goto label_30ddb8;
        default: break;
    }

    ctx->pc = 0x30dd38u;

    // 0x30dd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30dd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30dd3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30dd40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30dd44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30dd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30dd4c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x30dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30dd50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DD50u;
    {
        const bool branch_taken_0x30dd50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD50u;
        // 0x30dd54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd50) {
            ctx->pc = 0x30DD60u;
            goto label_30dd60;
        }
    }
    ctx->pc = 0x30DD58u;
    // 0x30dd58: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30DD58u;
    SET_GPR_U32(ctx, 31, 0x30DD60u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30DD58u, 0x30DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD60u;
label_30dd60:
    // 0x30dd60: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x30dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x30dd64: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x30dd64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x30dd68: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30DD68u;
    {
        const bool branch_taken_0x30dd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD68u;
        // 0x30dd6c: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd68) {
            ctx->pc = 0x30DDA8u;
            goto label_30dda8;
        }
    }
    ctx->pc = 0x30DD70u;
    // 0x30dd70: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x30dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x30dd74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30dd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30dd7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30dd80: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30DD80u;
    {
        const bool branch_taken_0x30dd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD80u;
        // 0x30dd84: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd80) {
            ctx->pc = 0x30DDA0u;
            goto label_30dda0;
        }
    }
    ctx->pc = 0x30DD88u;
label_30dd88:
    // 0x30dd88: 0x0  nop
    ctx->pc = 0x30dd88u;
    // NOP
    // 0x30dd8c: 0x0  nop
    ctx->pc = 0x30dd8cu;
    // NOP
    // 0x30dd90: 0x0  nop
    ctx->pc = 0x30dd90u;
    // NOP
    // 0x30dd94: 0x0  nop
    ctx->pc = 0x30dd94u;
    // NOP
    // 0x30dd98: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30DD98u;
    {
        const bool branch_taken_0x30dd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD98u;
        // 0x30dd9c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd98) {
            ctx->pc = 0x30DD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dd88;
        }
    }
    ctx->pc = 0x30DDA0u;
label_30dda0:
    // 0x30dda0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30DDA0u;
    SET_GPR_U32(ctx, 31, 0x30DDA8u);
    ctx->pc = 0x30DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DDA0u;
    // 0x30dda4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30DDA0u, 0x30DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDA8u;
label_30dda8:
    // 0x30dda8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DDA8u;
    {
        const bool branch_taken_0x30dda8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDA8u;
        // 0x30ddac: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dda8) {
            ctx->pc = 0x30DDB8u;
            goto label_30ddb8;
        }
    }
    ctx->pc = 0x30DDB0u;
    // 0x30ddb0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x30DDB0u;
    SET_GPR_U32(ctx, 31, 0x30DDB8u);
    ctx->pc = 0x30DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DDB0u;
    // 0x30ddb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x30DDB0u, 0x30DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDB8u;
label_30ddb8:
    // 0x30ddb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30ddb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ddbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30ddbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30ddc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ddc4: 0x3e00008  jr          $ra
    ctx->pc = 0x30DDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DDC4u;
        // 0x30ddc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DDCCu;
    // 0x30ddcc: 0x0  nop
    ctx->pc = 0x30ddccu;
    // NOP
    ctx->pc = 0x30ddd0u;
}
