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

// Function: sub_001D4BF0
// Address: 0x1d4bf0 - 0x1d4ca0
void sub_001D4BF0_0x1d4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4BF0_0x1d4bf0");
#endif

    switch (ctx->pc) {
        case 0x1d4c14u: goto label_1d4c14;
        case 0x1d4c20u: goto label_1d4c20;
        case 0x1d4c30u: goto label_1d4c30;
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c60u: goto label_1d4c60;
        default: break;
    }

    ctx->pc = 0x1d4bf0u;

    // 0x1d4bf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d4bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d4bf4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1d4bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1d4bf8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d4bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4bfc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1d4bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1d4c00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d4c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c04: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1d4c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1d4c08: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1d4c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1d4c0c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D4C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C14u);
    ctx->pc = 0x1D4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C0Cu;
    // 0x1d4c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D4C0Cu, 0x1D4C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C14u;
label_1d4c14:
    // 0x1d4c14: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1d4c18: 0xc0f0adc  jal         func_3C2B70
    ctx->pc = 0x1D4C18u;
    SET_GPR_U32(ctx, 31, 0x1D4C20u);
    ctx->pc = 0x1D4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C18u;
    // 0x1d4c1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2B70u, 0x1D4C18u, 0x1D4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C20u;
label_1d4c20:
    // 0x1d4c20: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1d4c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d4c24: 0xafbd0080  sw          $sp, 0x80($sp)
    ctx->pc = 0x1d4c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 29));
    // 0x1d4c28: 0xc0d5f28  jal         func_357CA0
    ctx->pc = 0x1D4C28u;
    SET_GPR_U32(ctx, 31, 0x1D4C30u);
    ctx->pc = 0x1D4C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C28u;
    // 0x1d4c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x1D4C28u, 0x1D4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C30u;
label_1d4c30:
    // 0x1d4c30: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D4C30u;
    {
        const bool branch_taken_0x1d4c30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d4c30) {
            ctx->pc = 0x1D4C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C30u;
            // 0x1d4c34: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C38u;
            goto label_1d4c38;
        }
    }
    ctx->pc = 0x1D4C38u;
label_1d4c38:
    // 0x1d4c38: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1d4c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1d4c3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4c40: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d4c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d4c44: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1d4c44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4c48: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4c4c: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4C4Cu;
    {
        const bool branch_taken_0x1d4c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D4C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C4Cu;
        // 0x1d4c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c4c) {
            ctx->pc = 0x1D4C78u;
            goto label_1d4c78;
        }
    }
    ctx->pc = 0x1D4C54u;
    // 0x1d4c54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1d4c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d4c58:
    // 0x1d4c58: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1D4C58u;
    SET_GPR_U32(ctx, 31, 0x1D4C60u);
    ctx->pc = 0x1D4C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4C58u;
    // 0x1d4c5c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D4C58u, 0x1D4C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C60u;
label_1d4c60:
    // 0x1d4c60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4C60u;
    {
        const bool branch_taken_0x1d4c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C60u;
        // 0x1d4c64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c60) {
            ctx->pc = 0x1D4C78u;
            goto label_1d4c78;
        }
    }
    ctx->pc = 0x1D4C68u;
    // 0x1d4c68: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1d4c6c: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D4C6Cu;
    {
        const bool branch_taken_0x1d4c6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1d4c6c) {
            ctx->pc = 0x1D4C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C6Cu;
            // 0x1d4c70: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4c58;
        }
    }
    ctx->pc = 0x1D4C74u;
    // 0x1d4c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c78:
    // 0x1d4c78: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4C78u;
    {
        const bool branch_taken_0x1d4c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c78) {
            ctx->pc = 0x1D4C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4C78u;
            // 0x1d4c7c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4C84u;
            goto label_1d4c84;
        }
    }
    ctx->pc = 0x1D4C80u;
    // 0x1d4c80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d4c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c84:
    // 0x1d4c84: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1d4c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4c88: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1d4c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1d4c8c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1d4c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4c90: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1d4c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1d4c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C94u;
        // 0x1d4c98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4C9Cu;
    // 0x1d4c9c: 0x0  nop
    ctx->pc = 0x1d4c9cu;
    // NOP
    ctx->pc = 0x1d4ca0u;
}
