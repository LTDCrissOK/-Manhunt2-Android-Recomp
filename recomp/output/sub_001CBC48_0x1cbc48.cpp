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

// Function: sub_001CBC48
// Address: 0x1cbc48 - 0x1cbeb8
void sub_001CBC48_0x1cbc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBC48_0x1cbc48");
#endif

    switch (ctx->pc) {
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd5cu: goto label_1cbd5c;
        default: break;
    }

    ctx->pc = 0x1cbc48u;

    // 0x1cbc48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbc4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbc50: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cbc54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cbc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cbc58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc5c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1cbc5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cbc60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cbc64: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x1cbc64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cbc68: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1cbc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1cbc6c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cbc70: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x1cbc74: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1cbc78: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBC78u;
    {
        const bool branch_taken_0x1cbc78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC78u;
        // 0x1cbc7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc78) {
            ctx->pc = 0x1CBC88u;
            goto label_1cbc88;
        }
    }
    ctx->pc = 0x1CBC80u;
    // 0x1cbc80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1cbc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cbc84: 0x2845006f  slti        $a1, $v0, 0x6F
    ctx->pc = 0x1cbc84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_1cbc88:
    // 0x1cbc88: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBC88u;
    {
        const bool branch_taken_0x1cbc88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc88) {
            ctx->pc = 0x1CBC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBC88u;
            // 0x1cbc8c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBCB0u;
            goto label_1cbcb0;
        }
    }
    ctx->pc = 0x1CBC90u;
    // 0x1cbc90: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBC90u;
    {
        const bool branch_taken_0x1cbc90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CBC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC90u;
        // 0x1cbc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc90) {
            ctx->pc = 0x1CBCA4u;
            goto label_1cbca4;
        }
    }
    ctx->pc = 0x1CBC98u;
    // 0x1cbc98: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cbc9c: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x1cbc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x1cbca0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cbca4:
    // 0x1cbca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBCA4u;
    {
        const bool branch_taken_0x1cbca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCA4u;
        // 0x1cbca8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbca4) {
            ctx->pc = 0x1CBCB8u;
            goto label_1cbcb8;
        }
    }
    ctx->pc = 0x1CBCACu;
    // 0x1cbcac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbcb0:
    // 0x1cbcb0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1CBCB0u;
    {
        const bool branch_taken_0x1cbcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCB0u;
        // 0x1cbcb4: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcb0) {
            ctx->pc = 0x1CBD34u;
            goto label_1cbd34;
        }
    }
    ctx->pc = 0x1CBCB8u;
label_1cbcb8:
    // 0x1cbcb8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBCB8u;
    {
        const bool branch_taken_0x1cbcb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCB8u;
        // 0x1cbcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcb8) {
            ctx->pc = 0x1CBCC8u;
            goto label_1cbcc8;
        }
    }
    ctx->pc = 0x1CBCC0u;
    // 0x1cbcc0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1cbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1cbcc4: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x1cbcc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_1cbcc8:
    // 0x1cbcc8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBCC8u;
    {
        const bool branch_taken_0x1cbcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbcc8) {
            ctx->pc = 0x1CBCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBCC8u;
            // 0x1cbccc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBCF0u;
            goto label_1cbcf0;
        }
    }
    ctx->pc = 0x1CBCD0u;
    // 0x1cbcd0: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBCD0u;
    {
        const bool branch_taken_0x1cbcd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd0) {
            ctx->pc = 0x1CBCE4u;
            goto label_1cbce4;
        }
    }
    ctx->pc = 0x1CBCD8u;
    // 0x1cbcd8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1cbcdc: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x1cbcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x1cbce0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cbce4:
    // 0x1cbce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBCE4u;
    {
        const bool branch_taken_0x1cbce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCE4u;
        // 0x1cbce8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbce4) {
            ctx->pc = 0x1CBCF8u;
            goto label_1cbcf8;
        }
    }
    ctx->pc = 0x1CBCECu;
    // 0x1cbcec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbcf0:
    // 0x1cbcf0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBCF0u;
    {
        const bool branch_taken_0x1cbcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCF0u;
        // 0x1cbcf4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcf0) {
            ctx->pc = 0x1CBD34u;
            goto label_1cbd34;
        }
    }
    ctx->pc = 0x1CBCF8u;
label_1cbcf8:
    // 0x1cbcf8: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBCF8u;
    {
        const bool branch_taken_0x1cbcf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCF8u;
        // 0x1cbcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcf8) {
            ctx->pc = 0x1CBD08u;
            goto label_1cbd08;
        }
    }
    ctx->pc = 0x1CBD00u;
    // 0x1cbd00: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cbd04: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x1cbd04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_1cbd08:
    // 0x1cbd08: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBD08u;
    {
        const bool branch_taken_0x1cbd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd08) {
            ctx->pc = 0x1CBD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD08u;
            // 0x1cbd0c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD30u;
            goto label_1cbd30;
        }
    }
    ctx->pc = 0x1CBD10u;
    // 0x1cbd10: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBD10u;
    {
        const bool branch_taken_0x1cbd10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD10u;
        // 0x1cbd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd10) {
            ctx->pc = 0x1CBD24u;
            goto label_1cbd24;
        }
    }
    ctx->pc = 0x1CBD18u;
    // 0x1cbd18: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cbd1c: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x1cbd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x1cbd20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cbd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1cbd24:
    // 0x1cbd24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBD24u;
    {
        const bool branch_taken_0x1cbd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD24u;
        // 0x1cbd28: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd24) {
            ctx->pc = 0x1CBD3Cu;
            goto label_1cbd3c;
        }
    }
    ctx->pc = 0x1CBD2Cu;
    // 0x1cbd2c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbd30:
    // 0x1cbd30: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1cbd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1cbd34:
    // 0x1cbd34: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cbd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1cbd38: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1cbd3c:
    // 0x1cbd3c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1cbd40: 0xc454cf4c  lwc1        $f20, -0x30B4($v0)
    ctx->pc = 0x1cbd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cbd44: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1CBD44u;
    SET_GPR_U32(ctx, 31, 0x1CBD4Cu);
    ctx->pc = 0x1CBD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD44u;
    // 0x1cbd48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1CBD44u, 0x1CBD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD4Cu;
label_1cbd4c:
    // 0x1cbd4c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CBD4Cu;
    {
        const bool branch_taken_0x1cbd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd4c) {
            ctx->pc = 0x1CBD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD4Cu;
            // 0x1cbd50: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDECu;
            goto label_1cbdec;
        }
    }
    ctx->pc = 0x1CBD54u;
    // 0x1cbd54: 0xc08951c  jal         func_225470
    ctx->pc = 0x1CBD54u;
    SET_GPR_U32(ctx, 31, 0x1CBD5Cu);
    ctx->pc = 0x1CBD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD54u;
    // 0x1cbd58: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1CBD54u, 0x1CBD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD5Cu;
label_1cbd5c:
    // 0x1cbd5c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CBD5Cu;
    {
        const bool branch_taken_0x1cbd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD5Cu;
        // 0x1cbd60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd5c) {
            ctx->pc = 0x1CBDE8u;
            goto label_1cbde8;
        }
    }
    ctx->pc = 0x1CBD64u;
    // 0x1cbd64: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cbd68: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbd6c: 0x8c630338  lw          $v1, 0x338($v1)
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    // 0x1cbd70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cbd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cbd74: 0x8c640088  lw          $a0, 0x88($v1)
    ctx->pc = 0x1cbd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x1cbd78: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBD78u;
    {
        const bool branch_taken_0x1cbd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD78u;
        // 0x1cbd7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd78) {
            ctx->pc = 0x1CBD88u;
            goto label_1cbd88;
        }
    }
    ctx->pc = 0x1CBD80u;
    // 0x1cbd80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1cbd84: 0x2845006f  slti        $a1, $v0, 0x6F
    ctx->pc = 0x1cbd84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_1cbd88:
    // 0x1cbd88: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1CBD88u;
    {
        const bool branch_taken_0x1cbd88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd88) {
            ctx->pc = 0x1CBD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD88u;
            // 0x1cbd8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDC8u;
            goto label_1cbdc8;
        }
    }
    ctx->pc = 0x1CBD90u;
    // 0x1cbd90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1cbd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cbd94: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBD94u;
    {
        const bool branch_taken_0x1cbd94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD94u;
        // 0x1cbd98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd94) {
            ctx->pc = 0x1CBDA4u;
            goto label_1cbda4;
        }
    }
    ctx->pc = 0x1CBD9Cu;
    // 0x1cbd9c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1cbd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1cbda0: 0x28450083  slti        $a1, $v0, 0x83
    ctx->pc = 0x1cbda0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_1cbda4:
    // 0x1cbda4: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CBDA4u;
    {
        const bool branch_taken_0x1cbda4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbda4) {
            ctx->pc = 0x1CBDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDA4u;
            // 0x1cbda8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDC8u;
            goto label_1cbdc8;
        }
    }
    ctx->pc = 0x1CBDACu;
    // 0x1cbdac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cbdb0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBDB0u;
    {
        const bool branch_taken_0x1cbdb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDB0u;
        // 0x1cbdb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdb0) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBDB8u;
    // 0x1cbdb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1cbdbc: 0x28450097  slti        $a1, $v0, 0x97
    ctx->pc = 0x1cbdbcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_1cbdc0:
    // 0x1cbdc0: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CBDC0u;
    {
        const bool branch_taken_0x1cbdc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdc0) {
            ctx->pc = 0x1CBDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDC0u;
            // 0x1cbdc4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDC8u;
            goto label_1cbdc8;
        }
    }
    ctx->pc = 0x1CBDC8u;
label_1cbdc8:
    // 0x1cbdc8: 0x50e00002  beql        $a3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBDC8u;
    {
        const bool branch_taken_0x1cbdc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdc8) {
            ctx->pc = 0x1CBDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDC8u;
            // 0x1cbdcc: 0xc4c10064  lwc1        $f1, 0x64($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDD4u;
            goto label_1cbdd4;
        }
    }
    ctx->pc = 0x1CBDD0u;
    // 0x1cbdd0: 0xc4c10060  lwc1        $f1, 0x60($a2)
    ctx->pc = 0x1cbdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbdd4:
    // 0x1cbdd4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1cbdd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cbdd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cbddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbde0: 0x0  nop
    ctx->pc = 0x1cbde0u;
    // NOP
    // 0x1cbde4: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1cbde4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cbde8:
    // 0x1cbde8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbdec:
    // 0x1cbdec: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1cbdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1cbdf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBDF0u;
    {
        const bool branch_taken_0x1cbdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDF0u;
        // 0x1cbdf4: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdf0) {
            ctx->pc = 0x1CBE18u;
            goto label_1cbe18;
        }
    }
    ctx->pc = 0x1CBDF8u;
    // 0x1cbdf8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cbdfc: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x1cbe00: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x1cbe04: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1cbe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbe08: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cbe08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbe0c: 0x0  nop
    ctx->pc = 0x1cbe0cu;
    // NOP
    // 0x1cbe10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBE10u;
    {
        const bool branch_taken_0x1cbe10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE10u;
        // 0x1cbe14: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe10) {
            ctx->pc = 0x1CBE20u;
            goto label_1cbe20;
        }
    }
    ctx->pc = 0x1CBE18u;
label_1cbe18:
    // 0x1cbe18: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1cbe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1cbe1c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1cbe20:
    // 0x1cbe20: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1cbe20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cbe24: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x1cbe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x1cbe28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBE28u;
    {
        const bool branch_taken_0x1cbe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE28u;
        // 0x1cbe2c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe28) {
            ctx->pc = 0x1CBE50u;
            goto label_1cbe50;
        }
    }
    ctx->pc = 0x1CBE30u;
    // 0x1cbe30: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cbe34: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x1cbe38: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x1cbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x1cbe3c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1cbe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbe40: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cbe40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbe44: 0x0  nop
    ctx->pc = 0x1cbe44u;
    // NOP
    // 0x1cbe48: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBE48u;
    {
        const bool branch_taken_0x1cbe48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE48u;
        // 0x1cbe4c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe48) {
            ctx->pc = 0x1CBE5Cu;
            goto label_1cbe5c;
        }
    }
    ctx->pc = 0x1CBE50u;
label_1cbe50:
    // 0x1cbe50: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1cbe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1cbe54: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cbe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1cbe58: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbe5c:
    // 0x1cbe5c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1cbe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1cbe60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBE60u;
    {
        const bool branch_taken_0x1cbe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE60u;
        // 0x1cbe64: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe60) {
            ctx->pc = 0x1CBE88u;
            goto label_1cbe88;
        }
    }
    ctx->pc = 0x1CBE68u;
    // 0x1cbe68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cbe6c: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x1cbe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x1cbe70: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x1cbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x1cbe74: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1cbe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbe78: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cbe78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbe7c: 0x0  nop
    ctx->pc = 0x1cbe7cu;
    // NOP
    // 0x1cbe80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBE80u;
    {
        const bool branch_taken_0x1cbe80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE80u;
        // 0x1cbe84: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe80) {
            ctx->pc = 0x1CBE90u;
            goto label_1cbe90;
        }
    }
    ctx->pc = 0x1CBE88u;
label_1cbe88:
    // 0x1cbe88: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1cbe88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1cbe8c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1cbe90:
    // 0x1cbe90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cbe94: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1cbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1cbe98: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x1cbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x1cbe9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbe9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cbea4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1cbea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cbea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbeac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1cbeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cbeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEB0u;
        // 0x1cbeb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBEB8u;
}
