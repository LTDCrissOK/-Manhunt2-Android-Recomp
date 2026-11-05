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

// Function: sub_001A5BB0
// Address: 0x1a5bb0 - 0x1a5c48
void sub_001A5BB0_0x1a5bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5BB0_0x1a5bb0");
#endif

    switch (ctx->pc) {
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c08u: goto label_1a5c08;
        default: break;
    }

    ctx->pc = 0x1a5bb0u;

    // 0x1a5bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5bb4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a5bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a5bb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a5bbc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a5bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a5bc0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1a5bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5bc4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1a5bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1a5bc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a5bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a5bcc: 0x8c900144  lw          $s0, 0x144($a0)
    ctx->pc = 0x1a5bccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x1a5bd0: 0xc0d5f28  jal         func_357CA0
    ctx->pc = 0x1A5BD0u;
    SET_GPR_U32(ctx, 31, 0x1A5BD8u);
    ctx->pc = 0x1A5BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BD0u;
    // 0x1a5bd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x1A5BD0u, 0x1A5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BD8u;
label_1a5bd8:
    // 0x1a5bd8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A5BD8u;
    {
        const bool branch_taken_0x1a5bd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a5bd8) {
            ctx->pc = 0x1A5BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5BD8u;
            // 0x1a5bdc: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BE0u;
            goto label_1a5be0;
        }
    }
    ctx->pc = 0x1A5BE0u;
label_1a5be0:
    // 0x1a5be0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1a5be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1a5be4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a5be8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1a5be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a5bec: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1a5becu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a5bf0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1a5bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5bf4: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5BF4u;
    {
        const bool branch_taken_0x1a5bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BF4u;
        // 0x1a5bf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bf4) {
            ctx->pc = 0x1A5C20u;
            goto label_1a5c20;
        }
    }
    ctx->pc = 0x1A5BFCu;
    // 0x1a5bfc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a5bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5c00:
    // 0x1a5c00: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1A5C00u;
    SET_GPR_U32(ctx, 31, 0x1A5C08u);
    ctx->pc = 0x1A5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C00u;
    // 0x1a5c04: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1A5C00u, 0x1A5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C08u;
label_1a5c08:
    // 0x1a5c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5C08u;
    {
        const bool branch_taken_0x1a5c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C08u;
        // 0x1a5c0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c08) {
            ctx->pc = 0x1A5C20u;
            goto label_1a5c20;
        }
    }
    ctx->pc = 0x1A5C10u;
    // 0x1a5c10: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1a5c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a5c14: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5C14u;
    {
        const bool branch_taken_0x1a5c14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a5c14) {
            ctx->pc = 0x1A5C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C14u;
            // 0x1a5c18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5c00;
        }
    }
    ctx->pc = 0x1A5C1Cu;
    // 0x1a5c1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c20:
    // 0x1a5c20: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5C20u;
    {
        const bool branch_taken_0x1a5c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c20) {
            ctx->pc = 0x1A5C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C20u;
            // 0x1a5c24: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C2Cu;
            goto label_1a5c2c;
        }
    }
    ctx->pc = 0x1A5C28u;
    // 0x1a5c28: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x1a5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_1a5c2c:
    // 0x1a5c2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a5c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5c30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a5c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5c34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5c38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a5c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a5c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C3Cu;
        // 0x1a5c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5C44u;
    // 0x1a5c44: 0x0  nop
    ctx->pc = 0x1a5c44u;
    // NOP
    ctx->pc = 0x1a5c48u;
}
