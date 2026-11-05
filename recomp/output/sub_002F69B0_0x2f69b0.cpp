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

// Function: sub_002F69B0
// Address: 0x2f69b0 - 0x2f6ac0
void sub_002F69B0_0x2f69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F69B0_0x2f69b0");
#endif

    switch (ctx->pc) {
        case 0x2f6a08u: goto label_2f6a08;
        case 0x2f6a10u: goto label_2f6a10;
        default: break;
    }

    ctx->pc = 0x2f69b0u;

    // 0x2f69b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f69b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f69b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f69b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f69bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f69bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f69c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f69c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f69c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f69c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f69cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f69d0: 0x8e221004  lw          $v0, 0x1004($s1)
    ctx->pc = 0x2f69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x2f69d4: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F69D4u;
    {
        const bool branch_taken_0x2f69d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f69d4) {
            ctx->pc = 0x2F69D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F69D4u;
            // 0x2f69d8: 0x8e22121c  lw          $v0, 0x121C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F69E8u;
            goto label_2f69e8;
        }
    }
    ctx->pc = 0x2F69DCu;
    // 0x2f69dc: 0xae201004  sw          $zero, 0x1004($s1)
    ctx->pc = 0x2f69dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4100), GPR_U32(ctx, 0));
    // 0x2f69e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F69E0u;
    {
        const bool branch_taken_0x2f69e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69E0u;
        // 0x2f69e4: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69e0) {
            ctx->pc = 0x2F6A84u;
            goto label_2f6a84;
        }
    }
    ctx->pc = 0x2F69E8u;
label_2f69e8:
    // 0x2f69e8: 0x56420019  bnel        $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F69E8u;
    {
        const bool branch_taken_0x2f69e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f69e8) {
            ctx->pc = 0x2F69ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F69E8u;
            // 0x2f69ec: 0x8e221220  lw          $v0, 0x1220($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6A50u;
            goto label_2f6a50;
        }
    }
    ctx->pc = 0x2F69F0u;
    // 0x2f69f0: 0x2630120c  addiu       $s0, $s1, 0x120C
    ctx->pc = 0x2f69f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
    // 0x2f69f4: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x2f69f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
    // 0x2f69f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f69fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F69FCu;
    {
        const bool branch_taken_0x2f69fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69FCu;
        // 0x2f6a00: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69fc) {
            ctx->pc = 0x2F6A20u;
            goto label_2f6a20;
        }
    }
    ctx->pc = 0x2F6A04u;
    // 0x2f6a04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2f6a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2f6a08:
    // 0x2f6a08: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x2F6A08u;
    SET_GPR_U32(ctx, 31, 0x2F6A10u);
    ctx->pc = 0x2F6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A08u;
    // 0x2f6a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2F6A08u, 0x2F6A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A10u;
label_2f6a10:
    // 0x2f6a10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f6a14: 0x0  nop
    ctx->pc = 0x2f6a14u;
    // NOP
    // 0x2f6a18: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F6A18u;
    {
        const bool branch_taken_0x2f6a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a18) {
            ctx->pc = 0x2F6A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6A18u;
            // 0x2f6a1c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6a08;
        }
    }
    ctx->pc = 0x2F6A20u;
label_2f6a20:
    // 0x2f6a20: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2f6a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2f6a24: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2f6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2f6a28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f6a2c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f6a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f6a30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f6a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2f6a34: 0xae2012ac  sw          $zero, 0x12AC($s1)
    ctx->pc = 0x2f6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4780), GPR_U32(ctx, 0));
    // 0x2f6a38: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2f6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2f6a3c: 0xae20121c  sw          $zero, 0x121C($s1)
    ctx->pc = 0x2f6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4636), GPR_U32(ctx, 0));
    // 0x2f6a40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f6a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f6a44: 0xae201220  sw          $zero, 0x1220($s1)
    ctx->pc = 0x2f6a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 0));
    // 0x2f6a48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F6A48u;
    {
        const bool branch_taken_0x2f6a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A48u;
        // 0x2f6a4c: 0xae2211c0  sw          $v0, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a48) {
            ctx->pc = 0x2F6A84u;
            goto label_2f6a84;
        }
    }
    ctx->pc = 0x2F6A50u;
label_2f6a50:
    // 0x2f6a50: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6A50u;
    {
        const bool branch_taken_0x2f6a50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6a50) {
            ctx->pc = 0x2F6A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6A50u;
            // 0x2f6a54: 0x8e2211e4  lw          $v0, 0x11E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6A64u;
            goto label_2f6a64;
        }
    }
    ctx->pc = 0x2F6A58u;
    // 0x2f6a58: 0xae201220  sw          $zero, 0x1220($s1)
    ctx->pc = 0x2f6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 0));
    // 0x2f6a5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6A5Cu;
    {
        const bool branch_taken_0x2f6a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A5Cu;
        // 0x2f6a60: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a5c) {
            ctx->pc = 0x2F6A84u;
            goto label_2f6a84;
        }
    }
    ctx->pc = 0x2F6A64u;
label_2f6a64:
    // 0x2f6a64: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6A64u;
    {
        const bool branch_taken_0x2f6a64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6a64) {
            ctx->pc = 0x2F6A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6A64u;
            // 0x2f6a68: 0x8e2211e8  lw          $v0, 0x11E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6A78u;
            goto label_2f6a78;
        }
    }
    ctx->pc = 0x2F6A6Cu;
    // 0x2f6a6c: 0xae2011e4  sw          $zero, 0x11E4($s1)
    ctx->pc = 0x2f6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4580), GPR_U32(ctx, 0));
    // 0x2f6a70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6A70u;
    {
        const bool branch_taken_0x2f6a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A70u;
        // 0x2f6a74: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a70) {
            ctx->pc = 0x2F6A84u;
            goto label_2f6a84;
        }
    }
    ctx->pc = 0x2F6A78u;
label_2f6a78:
    // 0x2f6a78: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6A78u;
    {
        const bool branch_taken_0x2f6a78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A78u;
        // 0x2f6a7c: 0x3c13004a  lui         $s3, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a78) {
            ctx->pc = 0x2F6A84u;
            goto label_2f6a84;
        }
    }
    ctx->pc = 0x2F6A80u;
    // 0x2f6a80: 0xae2011e8  sw          $zero, 0x11E8($s1)
    ctx->pc = 0x2f6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4584), GPR_U32(ctx, 0));
label_2f6a84:
    // 0x2f6a84: 0x266345c0  addiu       $v1, $s3, 0x45C0
    ctx->pc = 0x2f6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 17856));
    // 0x2f6a88: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2f6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2f6a8c: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6A8Cu;
    {
        const bool branch_taken_0x2f6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A8Cu;
        // 0x2f6a90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a8c) {
            ctx->pc = 0x2F6AA8u;
            goto label_2f6aa8;
        }
    }
    ctx->pc = 0x2F6A94u;
    // 0x2f6a94: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x2f6a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
    // 0x2f6a98: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x2f6a98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x2f6a9c: 0xa0600078  sb          $zero, 0x78($v1)
    ctx->pc = 0x2f6a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6aa0: 0xa0600088  sb          $zero, 0x88($v1)
    ctx->pc = 0x2f6aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f6aa4: 0xa0600089  sb          $zero, 0x89($v1)
    ctx->pc = 0x2f6aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 137), (uint8_t)GPR_U32(ctx, 0));
label_2f6aa8:
    // 0x2f6aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f6aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6aac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f6aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6ab0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f6ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f6ab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AB8u;
        // 0x2f6abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6AC0u;
}
