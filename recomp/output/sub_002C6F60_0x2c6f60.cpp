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

// Function: sub_002C6F60
// Address: 0x2c6f60 - 0x2c7110
void sub_002C6F60_0x2c6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6F60_0x2c6f60");
#endif

    switch (ctx->pc) {
        case 0x2c6f88u: goto label_2c6f88;
        case 0x2c6fb8u: goto label_2c6fb8;
        case 0x2c7020u: goto label_2c7020;
        default: break;
    }

    ctx->pc = 0x2c6f60u;

    // 0x2c6f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c6f64: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x2c6f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c6f68: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c6f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c6f6c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2c6f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2c6f70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c6f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c6f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c6f7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c6f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f80: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2C6F80u;
    SET_GPR_U32(ctx, 31, 0x2C6F88u);
    ctx->pc = 0x2C6F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6F80u;
    // 0x2c6f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2C6F80u, 0x2C6F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F88u;
label_2c6f88:
    // 0x2c6f88: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2c6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c6f8c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C6F8Cu;
    {
        const bool branch_taken_0x2c6f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F8Cu;
        // 0x2c6f90: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f8c) {
            ctx->pc = 0x2C70A0u;
            goto label_2c70a0;
        }
    }
    ctx->pc = 0x2C6F94u;
    // 0x2c6f94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2c6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c6f98: 0x260301b8  addiu       $v1, $s0, 0x1B8
    ctx->pc = 0x2c6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
    // 0x2c6f9c: 0x24490038  addiu       $t1, $v0, 0x38
    ctx->pc = 0x2c6f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2c6fa0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C6FA0u;
    {
        const bool branch_taken_0x2c6fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FA0u;
        // 0x2c6fa4: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fa0) {
            ctx->pc = 0x2C7070u;
            goto label_2c7070;
        }
    }
    ctx->pc = 0x2C6FA8u;
    // 0x2c6fa8: 0x24180010  addiu       $t8, $zero, 0x10
    ctx->pc = 0x2c6fa8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c6fac: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2c6facu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c6fb0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c6fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6fb4: 0x0  nop
    ctx->pc = 0x2c6fb4u;
    // NOP
label_2c6fb8:
    // 0x2c6fb8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x2c6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c6fbc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c6fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c6fc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6FC0u;
    {
        const bool branch_taken_0x2c6fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FC0u;
        // 0x2c6fc4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fc0) {
            ctx->pc = 0x2C6FD4u;
            goto label_2c6fd4;
        }
    }
    ctx->pc = 0x2C6FC8u;
    // 0x2c6fc8: 0x3021023  subu        $v0, $t8, $v0
    ctx->pc = 0x2c6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2c6fcc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c6fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c6fd0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c6fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2c6fd4:
    // 0x2c6fd4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x2c6fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c6fd8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6FD8u;
    {
        const bool branch_taken_0x2c6fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FD8u;
        // 0x2c6fdc: 0x8c6d0008  lw          $t5, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fd8) {
            ctx->pc = 0x2C7064u;
            goto label_2c7064;
        }
    }
    ctx->pc = 0x2C6FE0u;
    // 0x2c6fe0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c6fe4: 0xe24021  addu        $t0, $a3, $v0
    ctx->pc = 0x2c6fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c6fe8: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x2c6fe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2c6fec: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C6FECu;
    {
        const bool branch_taken_0x2c6fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FECu;
        // 0x2c6ff0: 0x1a0182d  daddu       $v1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fec) {
            ctx->pc = 0x2C7068u;
            goto label_2c7068;
        }
    }
    ctx->pc = 0x2C6FF4u;
    // 0x2c6ff4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2c6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c6ff8: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C6FF8u;
    {
        const bool branch_taken_0x2c6ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c6ff8) {
            ctx->pc = 0x2C7068u;
            goto label_2c7068;
        }
    }
    ctx->pc = 0x2C7000u;
    // 0x2c7000: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c7004: 0x10af0018  beq         $a1, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C7004u;
    {
        const bool branch_taken_0x2c7004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x2c7004) {
            ctx->pc = 0x2C7068u;
            goto label_2c7068;
        }
    }
    ctx->pc = 0x2C700Cu;
    // 0x2c700c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c700cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2c7010: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2c7010u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7014: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c7014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7018: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x2c7018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x2c701c: 0x240c0007  addiu       $t4, $zero, 0x7
    ctx->pc = 0x2c701cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2c7020:
    // 0x2c7020: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x2c7020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x2c7024: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2c7024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2c7028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C7028u;
    {
        const bool branch_taken_0x2c7028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7028u;
        // 0x2c702c: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7028) {
            ctx->pc = 0x2C7038u;
            goto label_2c7038;
        }
    }
    ctx->pc = 0x2C7030u;
    // 0x2c7030: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2c7030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2c7034: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2c7034u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_2c7038:
    // 0x2c7038: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c7038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c703c: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x2c703cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c7040: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7040u;
    {
        const bool branch_taken_0x2c7040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7040u;
        // 0x2c7044: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7040) {
            ctx->pc = 0x2C7064u;
            goto label_2c7064;
        }
    }
    ctx->pc = 0x2C7048u;
    // 0x2c7048: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7048u;
    {
        const bool branch_taken_0x2c7048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7048u;
        // 0x2c704c: 0x1a0182d  daddu       $v1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7048) {
            ctx->pc = 0x2C7068u;
            goto label_2c7068;
        }
    }
    ctx->pc = 0x2C7050u;
    // 0x2c7050: 0x10870005  beq         $a0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7050u;
    {
        const bool branch_taken_0x2c7050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x2c7050) {
            ctx->pc = 0x2C7068u;
            goto label_2c7068;
        }
    }
    ctx->pc = 0x2C7058u;
    // 0x2c7058: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c705c: 0x144cfff0  bne         $v0, $t4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C705Cu;
    {
        const bool branch_taken_0x2c705c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x2C7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C705Cu;
        // 0x2c7060: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c705c) {
            ctx->pc = 0x2C7020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7020;
        }
    }
    ctx->pc = 0x2C7064u;
label_2c7064:
    // 0x2c7064: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x2c7064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_2c7068:
    // 0x2c7068: 0x5460ffd3  bnel        $v1, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2C7068u;
    {
        const bool branch_taken_0x2c7068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7068) {
            ctx->pc = 0x2C706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7068u;
            // 0x2c706c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6fb8;
        }
    }
    ctx->pc = 0x2C7070u;
label_2c7070:
    // 0x2c7070: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x2c7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x2c7074: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c7074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c7078: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x2c7078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2c707c: 0x4b1823  subu        $v1, $v0, $t3
    ctx->pc = 0x2c707cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c7080: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x2c7080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2c7084: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x2c7084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x2c7088: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2c7088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2c708c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2c708cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x2c7090: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2c7090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2c7094: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x2c7094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x2c7098: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2c7098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x2c709c: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x2c709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
label_2c70a0:
    // 0x2c70a0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2c70a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c70a4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2c70a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c70a8: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x2c70a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2c70ac: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x2c70acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2c70b0: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x2c70b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2c70b4: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x2c70b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2c70b8: 0x6ba6001f  ldl         $a2, 0x1F($sp)
    ctx->pc = 0x2c70b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c70bc: 0x6fa60018  ldr         $a2, 0x18($sp)
    ctx->pc = 0x2c70bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c70c0: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x2c70c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70c4: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x2c70c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70c8: 0xb224000f  sdl         $a0, 0xF($s1)
    ctx->pc = 0x2c70c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70cc: 0xb6240008  sdr         $a0, 0x8($s1)
    ctx->pc = 0x2c70ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70d0: 0xb2250017  sdl         $a1, 0x17($s1)
    ctx->pc = 0x2c70d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70d4: 0xb6250010  sdr         $a1, 0x10($s1)
    ctx->pc = 0x2c70d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70d8: 0xb226001f  sdl         $a2, 0x1F($s1)
    ctx->pc = 0x2c70d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70dc: 0xb6260018  sdr         $a2, 0x18($s1)
    ctx->pc = 0x2c70dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70e0: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x2c70e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c70e4: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x2c70e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c70e8: 0xb2230027  sdl         $v1, 0x27($s1)
    ctx->pc = 0x2c70e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c70ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70f0: 0xb6230020  sdr         $v1, 0x20($s1)
    ctx->pc = 0x2c70f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c70f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c70f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c70f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2c70f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c70fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c70fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7100: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7100u;
        // 0x2c7104: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7108u;
    // 0x2c7108: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c7108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c710c: 0x0  nop
    ctx->pc = 0x2c710cu;
    // NOP
    ctx->pc = 0x2c7110u;
}
