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

// Function: sub_003A79E0
// Address: 0x3a79e0 - 0x3a7ab0
void sub_003A79E0_0x3a79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A79E0_0x3a79e0");
#endif

    switch (ctx->pc) {
        case 0x3a7a44u: goto label_3a7a44;
        case 0x3a7a64u: goto label_3a7a64;
        default: break;
    }

    ctx->pc = 0x3a79e0u;

    // 0x3a79e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a79e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a79e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a79e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a79e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a79ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a79ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a79f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a79f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a79f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a79f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a79fc: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x3a79fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a7a00: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A7A00u;
    {
        const bool branch_taken_0x3a7a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A00u;
        // 0x3a7a04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a00) {
            ctx->pc = 0x3A7A98u;
            goto label_3a7a98;
        }
    }
    ctx->pc = 0x3A7A08u;
    // 0x3a7a08: 0x82120001  lb          $s2, 0x1($s0)
    ctx->pc = 0x3a7a08u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a7a0c: 0x56420023  bnel        $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A7A0Cu;
    {
        const bool branch_taken_0x3a7a0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a7a0c) {
            ctx->pc = 0x3A7A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7A0Cu;
            // 0x3a7a10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7A9Cu;
            goto label_3a7a9c;
        }
    }
    ctx->pc = 0x3A7A14u;
    // 0x3a7a14: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3a7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3a7a18: 0x58400020  blezl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A7A18u;
    {
        const bool branch_taken_0x3a7a18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a7a18) {
            ctx->pc = 0x3A7A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7A18u;
            // 0x3a7a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7A9Cu;
            goto label_3a7a9c;
        }
    }
    ctx->pc = 0x3A7A20u;
    // 0x3a7a20: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3a7a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a7a24: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x3a7a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3a7a28: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x3a7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x3a7a2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a7a30: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x3a7a34: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7A34u;
    {
        const bool branch_taken_0x3a7a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3A7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A34u;
        // 0x3a7a38: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a34) {
            ctx->pc = 0x3A7A4Cu;
            goto label_3a7a4c;
        }
    }
    ctx->pc = 0x3A7A3Cu;
    // 0x3a7a3c: 0xc0e9e04  jal         func_3A7810
    ctx->pc = 0x3A7A3Cu;
    SET_GPR_U32(ctx, 31, 0x3A7A44u);
    ctx->pc = 0x3A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7810u, 0x3A7A3Cu, 0x3A7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A44u;
label_3a7a44:
    // 0x3a7a44: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3a7a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a7a48: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x3a7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3a7a4c:
    // 0x3a7a4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a7a50: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a7a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x3a7a54: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7A54u;
    {
        const bool branch_taken_0x3a7a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7A54u;
        // 0x3a7a58: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7a54) {
            ctx->pc = 0x3A7A6Cu;
            goto label_3a7a6c;
        }
    }
    ctx->pc = 0x3A7A5Cu;
    // 0x3a7a5c: 0xc0e9e36  jal         func_3A78D8
    ctx->pc = 0x3A7A5Cu;
    SET_GPR_U32(ctx, 31, 0x3A7A64u);
    ctx->pc = 0x3A7A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A5Cu;
    // 0x3a7a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A78D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A78D8u, 0x3A7A5Cu, 0x3A7A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7A64u;
label_3a7a64:
    // 0x3a7a64: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3a7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a7a68: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x3a7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3a7a6c:
    // 0x3a7a6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a7a70: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3a7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x3a7a74: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7A74u;
    {
        const bool branch_taken_0x3a7a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7a74) {
            ctx->pc = 0x3A7A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7A74u;
            // 0x3a7a78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7A9Cu;
            goto label_3a7a9c;
        }
    }
    ctx->pc = 0x3A7A7Cu;
    // 0x3a7a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7a88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a7a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7a8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a7a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7a90: 0x80e9db8  j           func_3A76E0
    ctx->pc = 0x3A7A90u;
    ctx->pc = 0x3A7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7A90u;
    // 0x3a7a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A76E0u, 0x3A7A90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A7A98u;
label_3a7a98:
    // 0x3a7a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7a9c:
    // 0x3a7a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a7aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7aa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a7aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7AA8u;
        // 0x3a7aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7AB0u;
}
