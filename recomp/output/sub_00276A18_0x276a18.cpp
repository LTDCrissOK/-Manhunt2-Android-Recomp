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

// Function: sub_00276A18
// Address: 0x276a18 - 0x276ab8
void sub_00276A18_0x276a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276A18_0x276a18");
#endif

    switch (ctx->pc) {
        case 0x276a44u: goto label_276a44;
        case 0x276a70u: goto label_276a70;
        case 0x276a78u: goto label_276a78;
        default: break;
    }

    ctx->pc = 0x276a18u;

    // 0x276a18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276a1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x276a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x276a20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x276a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276a24: 0x3c10004b  lui         $s0, 0x4B
    ctx->pc = 0x276a24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)75 << 16));
    // 0x276a28: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x276a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x276a2c: 0x26104890  addiu       $s0, $s0, 0x4890
    ctx->pc = 0x276a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18576));
    // 0x276a30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x276a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x276a34: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x276a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x276a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x276a3c: 0xc09d72a  jal         func_275CA8
    ctx->pc = 0x276A3Cu;
    SET_GPR_U32(ctx, 31, 0x276A44u);
    ctx->pc = 0x276A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A3Cu;
    // 0x276a40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275CA8u, 0x276A3Cu, 0x276A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A44u;
label_276a44:
    // 0x276a44: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x276A44u;
    {
        const bool branch_taken_0x276a44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x276a44) {
            ctx->pc = 0x276A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276A44u;
            // 0x276a48: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276A4Cu;
            goto label_276a4c;
        }
    }
    ctx->pc = 0x276A4Cu;
label_276a4c:
    // 0x276a4c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x276a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x276a50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x276a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x276a54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x276a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x276a58: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x276a58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x276a5c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x276a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276a60: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x276A60u;
    {
        const bool branch_taken_0x276a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x276A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A60u;
        // 0x276a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a60) {
            ctx->pc = 0x276A90u;
            goto label_276a90;
        }
    }
    ctx->pc = 0x276A68u;
    // 0x276a68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x276a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x276a6c: 0x0  nop
    ctx->pc = 0x276a6cu;
    // NOP
label_276a70:
    // 0x276a70: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x276A70u;
    SET_GPR_U32(ctx, 31, 0x276A78u);
    ctx->pc = 0x276A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A70u;
    // 0x276a74: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x276A70u, 0x276A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A78u;
label_276a78:
    // 0x276a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276A78u;
    {
        const bool branch_taken_0x276a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A78u;
        // 0x276a7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a78) {
            ctx->pc = 0x276A90u;
            goto label_276a90;
        }
    }
    ctx->pc = 0x276A80u;
    // 0x276a80: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x276a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x276a84: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x276A84u;
    {
        const bool branch_taken_0x276a84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x276a84) {
            ctx->pc = 0x276A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276A84u;
            // 0x276a88: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276a70;
        }
    }
    ctx->pc = 0x276A8Cu;
    // 0x276a8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276a90:
    // 0x276a90: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x276A90u;
    {
        const bool branch_taken_0x276a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276a90) {
            ctx->pc = 0x276A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276A90u;
            // 0x276a94: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276A9Cu;
            goto label_276a9c;
        }
    }
    ctx->pc = 0x276A98u;
    // 0x276a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276a9c:
    // 0x276a9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x276a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276aa0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x276aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x276aa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x276aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276aa8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x276aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x276aac: 0x3e00008  jr          $ra
    ctx->pc = 0x276AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276AACu;
        // 0x276ab0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276AB4u;
    // 0x276ab4: 0x0  nop
    ctx->pc = 0x276ab4u;
    // NOP
    ctx->pc = 0x276ab8u;
}
