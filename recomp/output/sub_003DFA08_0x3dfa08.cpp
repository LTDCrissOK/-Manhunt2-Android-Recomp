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

// Function: sub_003DFA08
// Address: 0x3dfa08 - 0x3dfb50
void sub_003DFA08_0x3dfa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFA08_0x3dfa08");
#endif

    ctx->pc = 0x3dfa08u;

    // 0x3dfa08: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3dfa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dfa0c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFA0Cu;
    {
        const bool branch_taken_0x3dfa0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dfa0c) {
            ctx->pc = 0x3DFA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFA0Cu;
            // 0x3dfa10: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFA20u;
            goto label_3dfa20;
        }
    }
    ctx->pc = 0x3DFA14u;
    // 0x3dfa14: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dfa18: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3dfa1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dfa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3dfa20:
    // 0x3dfa20: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFA20u;
    {
        const bool branch_taken_0x3dfa20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dfa20) {
            ctx->pc = 0x3DFA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFA20u;
            // 0x3dfa24: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFA34u;
            goto label_3dfa34;
        }
    }
    ctx->pc = 0x3DFA28u;
    // 0x3dfa28: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dfa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dfa2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dfa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dfa30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dfa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dfa34:
    // 0x3dfa34: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFA34u;
    {
        const bool branch_taken_0x3dfa34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dfa34) {
            ctx->pc = 0x3DFA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFA34u;
            // 0x3dfa38: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFA48u;
            goto label_3dfa48;
        }
    }
    ctx->pc = 0x3DFA3Cu;
    // 0x3dfa3c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dfa40: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dfa40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dfa44: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dfa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dfa48:
    // 0x3dfa48: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFA48u;
    {
        const bool branch_taken_0x3dfa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfa48) {
            ctx->pc = 0x3DFA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFA48u;
            // 0x3dfa4c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFA5Cu;
            goto label_3dfa5c;
        }
    }
    ctx->pc = 0x3DFA50u;
    // 0x3dfa50: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dfa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dfa54: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dfa54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dfa58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dfa58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dfa5c:
    // 0x3dfa5c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DFA5Cu;
    {
        const bool branch_taken_0x3dfa5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dfa5c) {
            ctx->pc = 0x3DFA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFA5Cu;
            // 0x3dfa60: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFA70u;
            goto label_3dfa70;
        }
    }
    ctx->pc = 0x3DFA64u;
    // 0x3dfa64: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dfa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dfa68: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dfa68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3dfa6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dfa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dfa70:
    // 0x3dfa70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dfa74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3dfa74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3dfa78: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3dfa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3dfa7c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DFA7Cu;
    {
        const bool branch_taken_0x3dfa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dfa7c) {
            ctx->pc = 0x3DFA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DFA7Cu;
            // 0x3dfa80: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DFA98u;
            goto label_3dfa98;
        }
    }
    ctx->pc = 0x3DFA84u;
    // 0x3dfa84: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x3dfa84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x3dfa88: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3dfa88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3dfa8c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3dfa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3dfa90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DFA90u;
    {
        const bool branch_taken_0x3dfa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DFA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFA90u;
        // 0x3dfa94: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dfa90) {
            ctx->pc = 0x3DFAB0u;
            goto label_3dfab0;
        }
    }
    ctx->pc = 0x3DFA98u;
label_3dfa98:
    // 0x3dfa98: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x3dfa98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x3dfa9c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3dfa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3dfaa0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3dfaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dfaa4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dfaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3dfaa8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x3dfaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dfaac: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x3dfaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_3dfab0:
    // 0x3dfab0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3dfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3dfab4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3dfab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dfab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dfab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dfabc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFABCu;
        // 0x3dfac0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFAC4u;
    // 0x3dfac4: 0x0  nop
    ctx->pc = 0x3dfac4u;
    // NOP
    // 0x3dfac8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3dfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3dfacc: 0x0  nop
    ctx->pc = 0x3dfaccu;
    // NOP
    // 0x3dfad0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3dfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3dfad4: 0x0  nop
    ctx->pc = 0x3dfad4u;
    // NOP
    // 0x3dfad8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3dfad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dfadc: 0x0  nop
    ctx->pc = 0x3dfadcu;
    // NOP
    // 0x3dfae0: 0xac800240  sw          $zero, 0x240($a0)
    ctx->pc = 0x3dfae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 576), GPR_U32(ctx, 0));
    // 0x3dfae4: 0x0  nop
    ctx->pc = 0x3dfae4u;
    // NOP
    // 0x3dfae8: 0xac860250  sw          $a2, 0x250($a0)
    ctx->pc = 0x3dfae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 6));
    // 0x3dfaec: 0x0  nop
    ctx->pc = 0x3dfaecu;
    // NOP
    // 0x3dfaf0: 0xe48c0224  swc1        $f12, 0x224($a0)
    ctx->pc = 0x3dfaf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
    // 0x3dfaf4: 0x0  nop
    ctx->pc = 0x3dfaf4u;
    // NOP
    // 0x3dfaf8: 0xe48c0228  swc1        $f12, 0x228($a0)
    ctx->pc = 0x3dfaf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 552), bits); }
    // 0x3dfafc: 0x0  nop
    ctx->pc = 0x3dfafcu;
    // NOP
    // 0x3dfb00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfb04: 0x0  nop
    ctx->pc = 0x3dfb04u;
    // NOP
    // 0x3dfb08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfb0c: 0x0  nop
    ctx->pc = 0x3dfb0cu;
    // NOP
    // 0x3dfb10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfb14: 0x0  nop
    ctx->pc = 0x3dfb14u;
    // NOP
    // 0x3dfb18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfb1c: 0x0  nop
    ctx->pc = 0x3dfb1cu;
    // NOP
    // 0x3dfb20: 0xac82024c  sw          $v0, 0x24C($a0)
    ctx->pc = 0x3dfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 2));
    // 0x3dfb24: 0x0  nop
    ctx->pc = 0x3dfb24u;
    // NOP
    // 0x3dfb28: 0xe48c0250  swc1        $f12, 0x250($a0)
    ctx->pc = 0x3dfb28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 592), bits); }
    // 0x3dfb2c: 0x0  nop
    ctx->pc = 0x3dfb2cu;
    // NOP
    // 0x3dfb30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfb34: 0x0  nop
    ctx->pc = 0x3dfb34u;
    // NOP
    // 0x3dfb38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dfb38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dfb3c: 0x0  nop
    ctx->pc = 0x3dfb3cu;
    // NOP
    // 0x3dfb40: 0xac820280  sw          $v0, 0x280($a0)
    ctx->pc = 0x3dfb40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 2));
    // 0x3dfb44: 0x0  nop
    ctx->pc = 0x3dfb44u;
    // NOP
    // 0x3dfb48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfb4c: 0x0  nop
    ctx->pc = 0x3dfb4cu;
    // NOP
    ctx->pc = 0x3dfb50u;
}
