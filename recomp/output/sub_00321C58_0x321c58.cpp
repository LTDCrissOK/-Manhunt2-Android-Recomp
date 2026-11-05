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

// Function: sub_00321C58
// Address: 0x321c58 - 0x321d50
void sub_00321C58_0x321c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321C58_0x321c58");
#endif

    switch (ctx->pc) {
        case 0x321c98u: goto label_321c98;
        case 0x321d00u: goto label_321d00;
        default: break;
    }

    ctx->pc = 0x321c58u;

    // 0x321c58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x321c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x321c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321c60: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x321c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x321c64: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x321c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x321c68: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x321c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x321c6c: 0x248658f0  addiu       $a2, $a0, 0x58F0
    ctx->pc = 0x321c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 22768));
    // 0x321c70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x321c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c74: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x321c74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B58F4u));
    // 0x321c78: 0x8c8358f0  lw          $v1, 0x58F0($a0)
    ctx->pc = 0x321c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B58F0u));
    // 0x321c7c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x321c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321c80: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x321c80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x321c84: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x321C84u;
    {
        const bool branch_taken_0x321c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C84u;
        // 0x321c88: 0x3c09005b  lui         $t1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c84) {
            ctx->pc = 0x321CDCu;
            goto label_321cdc;
        }
    }
    ctx->pc = 0x321C8Cu;
    // 0x321c8c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x321c8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c90: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x321c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321c94: 0x8d4658f0  lw          $a2, 0x58F0($t2)
    ctx->pc = 0x321c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 22768)));
label_321c98:
    // 0x321c98: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x321c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x321c9c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x321c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x321ca0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x321ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321ca4: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x321CA4u;
    {
        const bool branch_taken_0x321ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x321CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CA4u;
        // 0x321ca8: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ca4) {
            ctx->pc = 0x321CC4u;
            goto label_321cc4;
        }
    }
    ctx->pc = 0x321CACu;
    // 0x321cac: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x321cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x321cb0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x321cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x321cb4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x321cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x321cb8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x321cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x321cbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x321CBCu;
    {
        const bool branch_taken_0x321cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CBCu;
        // 0x321cc0: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321cbc) {
            ctx->pc = 0x321CDCu;
            goto label_321cdc;
        }
    }
    ctx->pc = 0x321CC4u;
label_321cc4:
    // 0x321cc4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x321cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x321cc8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x321cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x321ccc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x321cccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x321cd0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x321cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x321cd4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x321CD4u;
    {
        const bool branch_taken_0x321cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CD4u;
        // 0x321cd8: 0x8d4658f0  lw          $a2, 0x58F0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 22768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321cd4) {
            ctx->pc = 0x321C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321c98;
        }
    }
    ctx->pc = 0x321CDCu;
label_321cdc:
    // 0x321cdc: 0x252458e0  addiu       $a0, $t1, 0x58E0
    ctx->pc = 0x321cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 22752));
    // 0x321ce0: 0x8d2358e0  lw          $v1, 0x58E0($t1)
    ctx->pc = 0x321ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 22752)));
    // 0x321ce4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x321ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x321ce8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x321ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321cec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x321cecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x321cf0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x321CF0u;
    {
        const bool branch_taken_0x321cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CF0u;
        // 0x321cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321cf0) {
            ctx->pc = 0x321D44u;
            goto label_321d44;
        }
    }
    ctx->pc = 0x321CF8u;
    // 0x321cf8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x321cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321cfc: 0x8d2758e0  lw          $a3, 0x58E0($t1)
    ctx->pc = 0x321cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 22752)));
label_321d00:
    // 0x321d00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x321d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x321d04: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x321d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x321d08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x321d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x321d0c: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x321D0Cu;
    {
        const bool branch_taken_0x321d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d0c) {
            ctx->pc = 0x321D2Cu;
            goto label_321d2c;
        }
    }
    ctx->pc = 0x321D14u;
    // 0x321d14: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x321d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x321d18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x321d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x321d1c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x321d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x321d20: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x321d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x321d24: 0x3e00008  jr          $ra
    ctx->pc = 0x321D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D24u;
        // 0x321d28: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321D2Cu;
label_321d2c:
    // 0x321d2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x321d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x321d30: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x321d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x321d34: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x321d34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x321d38: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x321d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x321d3c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x321D3Cu;
    {
        const bool branch_taken_0x321d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D3Cu;
        // 0x321d40: 0x8d2758e0  lw          $a3, 0x58E0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 22752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d3c) {
            ctx->pc = 0x321D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321d00;
        }
    }
    ctx->pc = 0x321D44u;
label_321d44:
    // 0x321d44: 0x3e00008  jr          $ra
    ctx->pc = 0x321D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321D4Cu;
    // 0x321d4c: 0x0  nop
    ctx->pc = 0x321d4cu;
    // NOP
    ctx->pc = 0x321d50u;
}
