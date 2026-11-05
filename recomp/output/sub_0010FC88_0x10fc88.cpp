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

// Function: sub_0010FC88
// Address: 0x10fc88 - 0x10fe10
void sub_0010FC88_0x10fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC88_0x10fc88");
#endif

    switch (ctx->pc) {
        case 0x10fcd4u: goto label_10fcd4;
        case 0x10fcf8u: goto label_10fcf8;
        case 0x10fd18u: goto label_10fd18;
        case 0x10fd28u: goto label_10fd28;
        case 0x10fd30u: goto label_10fd30;
        case 0x10fd70u: goto label_10fd70;
        case 0x10fd84u: goto label_10fd84;
        case 0x10fd90u: goto label_10fd90;
        case 0x10fd98u: goto label_10fd98;
        case 0x10fda4u: goto label_10fda4;
        case 0x10fdb0u: goto label_10fdb0;
        case 0x10fdc0u: goto label_10fdc0;
        case 0x10fdccu: goto label_10fdcc;
        case 0x10fddcu: goto label_10fddc;
        case 0x10fde8u: goto label_10fde8;
        default: break;
    }

    ctx->pc = 0x10fc88u;

    // 0x10fc88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10fc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10fc8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10fc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10fc90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10fc94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10fc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fc98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10fc9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10fc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fca0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10fca4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fca8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10fcac: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10fcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10fcb0: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x10FCB0u;
    {
        const bool branch_taken_0x10fcb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCB0u;
        // 0x10fcb4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcb0) {
            ctx->pc = 0x10FCDCu;
            goto label_10fcdc;
        }
    }
    ctx->pc = 0x10FCB8u;
    // 0x10fcb8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10fcbc: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x10fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x10fcc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10fcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10fcc4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FCC4u;
    {
        const bool branch_taken_0x10fcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fcc4) {
            ctx->pc = 0x10FCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FCC4u;
            // 0x10fcc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FCDCu;
            goto label_10fcdc;
        }
    }
    ctx->pc = 0x10FCCCu;
    // 0x10fccc: 0xc04514c  jal         func_114530
    ctx->pc = 0x10FCCCu;
    SET_GPR_U32(ctx, 31, 0x10FCD4u);
    ctx->pc = 0x114530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114530u, 0x10FCCCu, 0x10FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCD4u;
label_10fcd4:
    // 0x10fcd4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10FCD4u;
    {
        const bool branch_taken_0x10fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fcd4) {
            ctx->pc = 0x10FCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FCD4u;
            // 0x10fcd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FCDCu;
            goto label_10fcdc;
        }
    }
    ctx->pc = 0x10FCDCu;
label_10fcdc:
    // 0x10fcdc: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10FCDCu;
    {
        const bool branch_taken_0x10fcdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fcdc) {
            ctx->pc = 0x10FD68u;
            goto label_10fd68;
        }
    }
    ctx->pc = 0x10FCE4u;
    // 0x10fce4: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x10fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x10fce8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10FCE8u;
    {
        const bool branch_taken_0x10fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE8u;
        // 0x10fcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce8) {
            ctx->pc = 0x10FD60u;
            goto label_10fd60;
        }
    }
    ctx->pc = 0x10FCF0u;
    // 0x10fcf0: 0xc045616  jal         func_115858
    ctx->pc = 0x10FCF0u;
    SET_GPR_U32(ctx, 31, 0x10FCF8u);
    ctx->pc = 0x10FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCF0u;
    // 0x10fcf4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x10FCF0u, 0x10FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FCF8u;
label_10fcf8:
    // 0x10fcf8: 0x38450006  xori        $a1, $v0, 0x6
    ctx->pc = 0x10fcf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x10fcfc: 0x3843000d  xori        $v1, $v0, 0xD
    ctx->pc = 0x10fcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
    // 0x10fd00: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x10fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x10fd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd08: 0x2c740001  sltiu       $s4, $v1, 0x1
    ctx->pc = 0x10fd08u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10fd0c: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x10fd0cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10fd10: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x10FD10u;
    SET_GPR_U32(ctx, 31, 0x10FD18u);
    ctx->pc = 0x10FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD10u;
    // 0x10fd14: 0x2c530001  sltiu       $s3, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x10FD10u, 0x10FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD18u;
label_10fd18:
    // 0x10fd18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10FD18u;
    {
        const bool branch_taken_0x10fd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd18) {
            ctx->pc = 0x10FD38u;
            goto label_10fd38;
        }
    }
    ctx->pc = 0x10FD20u;
    // 0x10fd20: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x10FD20u;
    SET_GPR_U32(ctx, 31, 0x10FD28u);
    ctx->pc = 0x10FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD20u;
    // 0x10fd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x10FD20u, 0x10FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD28u;
label_10fd28:
    // 0x10fd28: 0xc046172  jal         func_1185C8
    ctx->pc = 0x10FD28u;
    SET_GPR_U32(ctx, 31, 0x10FD30u);
    ctx->pc = 0x10FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD28u;
    // 0x10fd2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1185C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185C8u, 0x10FD28u, 0x10FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD30u;
label_10fd30:
    // 0x10fd30: 0x38420021  xori        $v0, $v0, 0x21
    ctx->pc = 0x10fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)33);
    // 0x10fd34: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x10fd34u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10fd38:
    // 0x10fd38: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10FD38u;
    {
        const bool branch_taken_0x10fd38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD38u;
        // 0x10fd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd38) {
            ctx->pc = 0x10FD44u;
            goto label_10fd44;
        }
    }
    ctx->pc = 0x10FD40u;
    // 0x10fd40: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x10fd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10fd44:
    // 0x10fd44: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FD44u;
    {
        const bool branch_taken_0x10fd44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD44u;
        // 0x10fd48: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd44) {
            ctx->pc = 0x10FD5Cu;
            goto label_10fd5c;
        }
    }
    ctx->pc = 0x10FD4Cu;
    // 0x10fd4c: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FD4Cu;
    {
        const bool branch_taken_0x10fd4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd4c) {
            ctx->pc = 0x10FD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10FD4Cu;
            // 0x10fd50: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10FD60u;
            goto label_10fd60;
        }
    }
    ctx->pc = 0x10FD54u;
    // 0x10fd54: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10FD54u;
    {
        const bool branch_taken_0x10fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd54) {
            ctx->pc = 0x10FD60u;
            goto label_10fd60;
        }
    }
    ctx->pc = 0x10FD5Cu;
label_10fd5c:
    // 0x10fd5c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10fd5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fd60:
    // 0x10fd60: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x10FD60u;
    {
        const bool branch_taken_0x10fd60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD60u;
        // 0x10fd64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd60) {
            ctx->pc = 0x10FDD4u;
            goto label_10fdd4;
        }
    }
    ctx->pc = 0x10FD68u;
label_10fd68:
    // 0x10fd68: 0xc0456a2  jal         func_115A88
    ctx->pc = 0x10FD68u;
    SET_GPR_U32(ctx, 31, 0x10FD70u);
    ctx->pc = 0x10FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD68u;
    // 0x10fd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A88u, 0x10FD68u, 0x10FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD70u;
label_10fd70:
    // 0x10fd70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FD70u;
    {
        const bool branch_taken_0x10fd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD70u;
        // 0x10fd74: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd70) {
            ctx->pc = 0x10FD84u;
            goto label_10fd84;
        }
    }
    ctx->pc = 0x10FD78u;
    // 0x10fd78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10fd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd7c: 0xc04b2a6  jal         func_12CA98
    ctx->pc = 0x10FD7Cu;
    SET_GPR_U32(ctx, 31, 0x10FD84u);
    ctx->pc = 0x10FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD7Cu;
    // 0x10fd80: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA98u, 0x10FD7Cu, 0x10FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD84u;
label_10fd84:
    // 0x10fd84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10fd88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10FD88u;
    {
        const bool branch_taken_0x10fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD88u;
        // 0x10fd8c: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd88) {
            ctx->pc = 0x10FDA4u;
            goto label_10fda4;
        }
    }
    ctx->pc = 0x10FD90u;
label_10fd90:
    // 0x10fd90: 0xc042426  jal         func_109098
    ctx->pc = 0x10FD90u;
    SET_GPR_U32(ctx, 31, 0x10FD98u);
    ctx->pc = 0x10FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD90u;
    // 0x10fd94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x10FD90u, 0x10FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD98u;
label_10fd98:
    // 0x10fd98: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x10fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fd9c: 0xc041eca  jal         func_107B28
    ctx->pc = 0x10FD9Cu;
    SET_GPR_U32(ctx, 31, 0x10FDA4u);
    ctx->pc = 0x10FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD9Cu;
    // 0x10fda0: 0x26248758  addiu       $a0, $s1, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B28u, 0x10FD9Cu, 0x10FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDA4u;
label_10fda4:
    // 0x10fda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fda8: 0xc045632  jal         func_1158C8
    ctx->pc = 0x10FDA8u;
    SET_GPR_U32(ctx, 31, 0x10FDB0u);
    ctx->pc = 0x10FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDA8u;
    // 0x10fdac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1158C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C8u, 0x10FDA8u, 0x10FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDB0u;
label_10fdb0:
    // 0x10fdb0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10FDB0u;
    {
        const bool branch_taken_0x10fdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fdb0) {
            ctx->pc = 0x10FD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fd90;
        }
    }
    ctx->pc = 0x10FDB8u;
    // 0x10fdb8: 0xc0455fe  jal         func_1157F8
    ctx->pc = 0x10FDB8u;
    SET_GPR_U32(ctx, 31, 0x10FDC0u);
    ctx->pc = 0x10FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDB8u;
    // 0x10fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1157F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157F8u, 0x10FDB8u, 0x10FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDC0u;
label_10fdc0:
    // 0x10fdc0: 0x26248758  addiu       $a0, $s1, -0x78A8
    ctx->pc = 0x10fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936408));
    // 0x10fdc4: 0xc041ef2  jal         func_107BC8
    ctx->pc = 0x10FDC4u;
    SET_GPR_U32(ctx, 31, 0x10FDCCu);
    ctx->pc = 0x10FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDC4u;
    // 0x10fdc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107BC8u, 0x10FDC4u, 0x10FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDCCu;
label_10fdcc:
    // 0x10fdcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10FDCCu;
    {
        const bool branch_taken_0x10fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDCCu;
        // 0x10fdd0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fdcc) {
            ctx->pc = 0x10FDECu;
            goto label_10fdec;
        }
    }
    ctx->pc = 0x10FDD4u;
label_10fdd4:
    // 0x10fdd4: 0xc044a30  jal         func_1128C0
    ctx->pc = 0x10FDD4u;
    SET_GPR_U32(ctx, 31, 0x10FDDCu);
    ctx->pc = 0x10FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDD4u;
    // 0x10fdd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1128C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1128C0u, 0x10FDD4u, 0x10FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDDCu;
label_10fddc:
    // 0x10fddc: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x10fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10fde0: 0xc04ca42  jal         func_132908
    ctx->pc = 0x10FDE0u;
    SET_GPR_U32(ctx, 31, 0x10FDE8u);
    ctx->pc = 0x10FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FDE0u;
    // 0x10fde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132908u, 0x10FDE0u, 0x10FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FDE8u;
label_10fde8:
    // 0x10fde8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10fde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10fdec:
    // 0x10fdec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10fdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10fdf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fdf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fdf4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10fdf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10fdf8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10fdf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fdfc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x10fdfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10fe00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10fe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10fe04: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE04u;
        // 0x10fe08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FE0Cu;
    // 0x10fe0c: 0x0  nop
    ctx->pc = 0x10fe0cu;
    // NOP
    ctx->pc = 0x10fe10u;
}
