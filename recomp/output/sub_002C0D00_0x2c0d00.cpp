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

// Function: sub_002C0D00
// Address: 0x2c0d00 - 0x2c0db8
void sub_002C0D00_0x2c0d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0D00_0x2c0d00");
#endif

    switch (ctx->pc) {
        case 0x2c0d30u: goto label_2c0d30;
        case 0x2c0d40u: goto label_2c0d40;
        case 0x2c0d50u: goto label_2c0d50;
        case 0x2c0d58u: goto label_2c0d58;
        case 0x2c0d88u: goto label_2c0d88;
        default: break;
    }

    ctx->pc = 0x2c0d00u;

    // 0x2c0d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c0d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c0d04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c0d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c0d08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c0d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c0d0c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c0d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c0d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c0d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c0d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c0d1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c0d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d20: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c0d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c0d24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c0d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c0d28: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C0D28u;
    SET_GPR_U32(ctx, 31, 0x2C0D30u);
    ctx->pc = 0x2C0D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D28u;
    // 0x2c0d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C0D28u, 0x2C0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D30u;
label_2c0d30:
    // 0x2c0d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c0d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d38: 0xc0b002c  jal         func_2C00B0
    ctx->pc = 0x2C0D38u;
    SET_GPR_U32(ctx, 31, 0x2C0D40u);
    ctx->pc = 0x2C0D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D38u;
    // 0x2c0d3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C00B0u, 0x2C0D38u, 0x2C0D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D40u;
label_2c0d40:
    // 0x2c0d40: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x2c0d40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c0d44: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C0D44u;
    {
        const bool branch_taken_0x2c0d44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D44u;
        // 0x2c0d48: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d44) {
            ctx->pc = 0x2C0D98u;
            goto label_2c0d98;
        }
    }
    ctx->pc = 0x2C0D4Cu;
    // 0x2c0d4c: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x2c0d4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2c0d50:
    // 0x2c0d50: 0xc0fa3ee  jal         func_3E8FB8
    ctx->pc = 0x2C0D50u;
    SET_GPR_U32(ctx, 31, 0x2C0D58u);
    ctx->pc = 0x2C0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D50u;
    // 0x2c0d54: 0x26645058  addiu       $a0, $s3, 0x5058 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8FB8u, 0x2C0D50u, 0x2C0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D58u;
label_2c0d58:
    // 0x2c0d58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c0d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c0d5c: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2c0d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c0d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0d64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c0d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c0d68: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2c0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2c0d6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c0d70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c0d74: 0x82060004  lb          $a2, 0x4($s0)
    ctx->pc = 0x2c0d74u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c0d78: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c0d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c0d7c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2c0d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c0d80: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C0D80u;
    SET_GPR_U32(ctx, 31, 0x2C0D88u);
    ctx->pc = 0x2C0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0D80u;
    // 0x2c0d84: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C0D80u, 0x2C0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0D88u;
label_2c0d88:
    // 0x2c0d88: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x2c0d88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c0d8c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2c0d8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0d90: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C0D90u;
    {
        const bool branch_taken_0x2c0d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0d90) {
            ctx->pc = 0x2C0D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0D90u;
            // 0x2c0d94: 0x82050004  lb          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0d50;
        }
    }
    ctx->pc = 0x2C0D98u;
label_2c0d98:
    // 0x2c0d98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c0d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0d9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c0d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0da0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0da4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c0da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c0da8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c0da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DACu;
        // 0x2c0db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0DB4u;
    // 0x2c0db4: 0x0  nop
    ctx->pc = 0x2c0db4u;
    // NOP
    ctx->pc = 0x2c0db8u;
}
