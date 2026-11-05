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

// Function: sub_00134D20
// Address: 0x134d20 - 0x134da8
void sub_00134D20_0x134d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134D20_0x134d20");
#endif

    switch (ctx->pc) {
        case 0x134d58u: goto label_134d58;
        case 0x134d74u: goto label_134d74;
        default: break;
    }

    ctx->pc = 0x134d20u;

    // 0x134d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x134d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134d28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x134d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x134d2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134d34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x134d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x134d3c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x134D3Cu;
    {
        const bool branch_taken_0x134d3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D3Cu;
        // 0x134d40: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d3c) {
            ctx->pc = 0x134D88u;
            goto label_134d88;
        }
    }
    ctx->pc = 0x134D44u;
    // 0x134d44: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x134d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x134d48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x134d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d4c: 0x24538ed0  addiu       $s3, $v0, -0x7130
    ctx->pc = 0x134d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x134d50: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x134d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x134d54: 0x0  nop
    ctx->pc = 0x134d54u;
    // NOP
label_134d58:
    // 0x134d58: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x134d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x134d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134d60: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134D60u;
    {
        const bool branch_taken_0x134d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x134D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D60u;
        // 0x134d64: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d60) {
            ctx->pc = 0x134D78u;
            goto label_134d78;
        }
    }
    ctx->pc = 0x134D68u;
    // 0x134d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d6c: 0xc04d2fa  jal         func_134BE8
    ctx->pc = 0x134D6Cu;
    SET_GPR_U32(ctx, 31, 0x134D74u);
    ctx->pc = 0x134D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D6Cu;
    // 0x134d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134BE8u, 0x134D6Cu, 0x134D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D74u;
label_134d74:
    // 0x134d74: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x134d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_134d78:
    // 0x134d78: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x134d78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134d7c: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x134d7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x134d80: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x134D80u;
    {
        const bool branch_taken_0x134d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D80u;
        // 0x134d84: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d80) {
            ctx->pc = 0x134D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134d58;
        }
    }
    ctx->pc = 0x134D88u;
label_134d88:
    // 0x134d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x134d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x134d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134d94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x134d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x134d98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x134D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D9Cu;
        // 0x134da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134DA4u;
    // 0x134da4: 0x0  nop
    ctx->pc = 0x134da4u;
    // NOP
    ctx->pc = 0x134da8u;
}
