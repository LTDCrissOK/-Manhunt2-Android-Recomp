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

// Function: sub_002C9068
// Address: 0x2c9068 - 0x2c9490
void sub_002C9068_0x2c9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9068_0x2c9068");
#endif

    switch (ctx->pc) {
        case 0x2c9128u: goto label_2c9128;
        case 0x2c922cu: goto label_2c922c;
        case 0x2c92b8u: goto label_2c92b8;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c9360u: goto label_2c9360;
        case 0x2c9384u: goto label_2c9384;
        case 0x2c944cu: goto label_2c944c;
        case 0x2c9470u: goto label_2c9470;
        default: break;
    }

    ctx->pc = 0x2c9068u;

    // 0x2c9068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c906c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c9070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c9070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c907c: 0x2e4200ed  sltiu       $v0, $s2, 0xED
    ctx->pc = 0x2c907cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)237) ? 1 : 0);
    // 0x2c9080: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c9080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c9084: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2C9084u;
    {
        const bool branch_taken_0x2c9084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9084u;
        // 0x2c9088: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9084) {
            ctx->pc = 0x2C92F8u;
            goto label_2c92f8;
        }
    }
    ctx->pc = 0x2C908Cu;
    // 0x2c908c: 0x2e42000b  sltiu       $v0, $s2, 0xB
    ctx->pc = 0x2c908cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2c9090: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9090u;
    {
        const bool branch_taken_0x2c9090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9090u;
        // 0x2c9094: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9090) {
            ctx->pc = 0x2C90A8u;
            goto label_2c90a8;
        }
    }
    ctx->pc = 0x2C9098u;
    // 0x2c9098: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c9098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c909c: 0x26430013  addiu       $v1, $s2, 0x13
    ctx->pc = 0x2c909cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x2c90a0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2c90a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2c90a4: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x2c90a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c90a8:
    // 0x2c90a8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c90ac: 0x1128c2  srl         $a1, $s1, 3
    ctx->pc = 0x2c90acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
    // 0x2c90b0: 0x8c495b88  lw          $t1, 0x5B88($v0)
    ctx->pc = 0x2c90b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23432)));
    // 0x2c90b4: 0x24485b88  addiu       $t0, $v0, 0x5B88
    ctx->pc = 0x2c90b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 23432));
    // 0x2c90b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c90b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c90bc: 0xa91806  srlv        $v1, $t1, $a1
    ctx->pc = 0x2c90bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c90c0: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2c90c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c90c4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C90C4u;
    {
        const bool branch_taken_0x2c90c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C90C4u;
        // 0x2c90c8: 0x31027  nor         $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90c4) {
            ctx->pc = 0x2C914Cu;
            goto label_2c914c;
        }
    }
    ctx->pc = 0x2C90CCu;
    // 0x2c90cc: 0x25040024  addiu       $a0, $t0, 0x24
    ctx->pc = 0x2c90ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x2c90d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c90d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c90d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2c90d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c90d8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2c90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c90dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c90dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c90e0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2c90e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c90e4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x2c90e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c90e8: 0x54660007  bnel        $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C90E8u;
    {
        const bool branch_taken_0x2c90e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c90e8) {
            ctx->pc = 0x2C90ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C90E8u;
            // 0x2c90ec: 0x8d020010  lw          $v0, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9108u;
            goto label_2c9108;
        }
    }
    ctx->pc = 0x2C90F0u;
    // 0x2c90f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c90f4: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x2c90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c90f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c90f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c90fc: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x2c90fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2c9100: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9100u;
    {
        const bool branch_taken_0x2c9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9100u;
        // 0x2c9104: 0xae625b88  sw          $v0, 0x5B88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 23432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9100) {
            ctx->pc = 0x2C9128u;
            goto label_2c9128;
        }
    }
    ctx->pc = 0x2C9108u;
label_2c9108:
    // 0x2c9108: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c9108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c910c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C910Cu;
    {
        const bool branch_taken_0x2c910c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c910c) {
            ctx->pc = 0x2C9120u;
            goto label_2c9120;
        }
    }
    ctx->pc = 0x2C9114u;
    // 0x2c9114: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2c9114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x2c9118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9118u;
    {
        const bool branch_taken_0x2c9118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9118u;
        // 0x2c911c: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9118) {
            ctx->pc = 0x2C9128u;
            goto label_2c9128;
        }
    }
    ctx->pc = 0x2C9120u;
label_2c9120:
    // 0x2c9120: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9120u;
    SET_GPR_U32(ctx, 31, 0x2C9128u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9120u, 0x2C9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9128u;
label_2c9128:
    // 0x2c9128: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c912c: 0x24f00008  addiu       $s0, $a3, 0x8
    ctx->pc = 0x2c912cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2c9130: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x2c9130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c9134: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x2c9134u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x2c9138: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c913c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c9140: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c9140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2c9144: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2C9144u;
    {
        const bool branch_taken_0x2c9144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9144u;
        // 0x2c9148: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9144) {
            ctx->pc = 0x2C9450u;
            goto label_2c9450;
        }
    }
    ctx->pc = 0x2C914Cu;
label_2c914c:
    // 0x2c914c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c9150: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2c9150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c9154: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x2C9154u;
    {
        const bool branch_taken_0x2c9154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9154) {
            ctx->pc = 0x2C9158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9154u;
            // 0x2c9158: 0x26655b88  addiu       $a1, $s3, 0x5B88 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C93A8u;
            goto label_2c93a8;
        }
    }
    ctx->pc = 0x2C915Cu;
    // 0x2c915c: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C915Cu;
    {
        const bool branch_taken_0x2c915c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C915Cu;
        // 0x2c9160: 0xa31004  sllv        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c915c) {
            ctx->pc = 0x2C92DCu;
            goto label_2c92dc;
        }
    }
    ctx->pc = 0x2C9164u;
    // 0x2c9164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c9164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9168: 0xa71804  sllv        $v1, $a3, $a1
    ctx->pc = 0x2c9168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c916c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c916cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c9170: 0x25050024  addiu       $a1, $t0, 0x24
    ctx->pc = 0x2c9170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x2c9174: 0x32023  negu        $a0, $v1
    ctx->pc = 0x2c9174u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2c9178: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c9178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c917c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c9180: 0x22023  negu        $a0, $v0
    ctx->pc = 0x2c9180u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2c9184: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c9184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c9188: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c918c: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x2c918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2c9190: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2c9190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2c9194: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c9194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9198: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2c9198u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c919c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x2c919cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2c91a0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2c91a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c91a4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x2c91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c91a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c91a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c91ac: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x2c91acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2c91b0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2c91b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2c91b4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x2c91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c91b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c91b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c91bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c91bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c91c0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2c91c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c91c4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x2c91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c91c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c91cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2c91d0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c91d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c91d4: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x2c91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2c91d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c91dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c91e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2c91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c91e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c91e8: 0x8c6b0008  lw          $t3, 0x8($v1)
    ctx->pc = 0x2c91e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c91ec: 0x8d660008  lw          $a2, 0x8($t3)
    ctx->pc = 0x2c91ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x2c91f0: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C91F0u;
    {
        const bool branch_taken_0x2c91f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2c91f0) {
            ctx->pc = 0x2C91F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C91F0u;
            // 0x2c91f4: 0x8d020010  lw          $v0, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C920Cu;
            goto label_2c920c;
        }
    }
    ctx->pc = 0x2C91F8u;
    // 0x2c91f8: 0x871004  sllv        $v0, $a3, $a0
    ctx->pc = 0x2c91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c91fc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2c91fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2c9200: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x2c9200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x2c9204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9204u;
    {
        const bool branch_taken_0x2c9204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9204u;
        // 0x2c9208: 0xae625b88  sw          $v0, 0x5B88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 23432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9204) {
            ctx->pc = 0x2C922Cu;
            goto label_2c922c;
        }
    }
    ctx->pc = 0x2C920Cu;
label_2c920c:
    // 0x2c920c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c920cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9210: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9210u;
    {
        const bool branch_taken_0x2c9210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9210) {
            ctx->pc = 0x2C9224u;
            goto label_2c9224;
        }
    }
    ctx->pc = 0x2C9218u;
    // 0x2c9218: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2c9218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x2c921c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C921Cu;
    {
        const bool branch_taken_0x2c921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C921Cu;
        // 0x2c9220: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c921c) {
            ctx->pc = 0x2C922Cu;
            goto label_2c922c;
        }
    }
    ctx->pc = 0x2C9224u;
label_2c9224:
    // 0x2c9224: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9224u;
    SET_GPR_U32(ctx, 31, 0x2C922Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9224u, 0x2C922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C922Cu;
label_2c922c:
    // 0x2c922c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2c922cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c9230: 0x36230003  ori         $v1, $s1, 0x3
    ctx->pc = 0x2c9230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3);
    // 0x2c9234: 0x514823  subu        $t1, $v0, $s1
    ctx->pc = 0x2c9234u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2c9238: 0xad630004  sw          $v1, 0x4($t3)
    ctx->pc = 0x2c9238u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
    // 0x2c923c: 0x1712821  addu        $a1, $t3, $s1
    ctx->pc = 0x2c923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x2c9240: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x2c9240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x2c9244: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2c9244u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2c9248: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x2c9248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2c924c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x2c924cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x2c9250: 0x26685b88  addiu       $t0, $s3, 0x5B88
    ctx->pc = 0x2c9250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
    // 0x2c9254: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x2c9254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2c9258: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C9258u;
    {
        const bool branch_taken_0x2c9258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9258u;
        // 0x2c925c: 0x8e6a5b88  lw          $t2, 0x5B88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9258) {
            ctx->pc = 0x2C92C8u;
            goto label_2c92c8;
        }
    }
    ctx->pc = 0x2C9260u;
    // 0x2c9260: 0x430c2  srl         $a2, $a0, 3
    ctx->pc = 0x2c9260u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x2c9264: 0x25030024  addiu       $v1, $t0, 0x24
    ctx->pc = 0x2c9264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x2c9268: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2c9268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c926c: 0xca1006  srlv        $v0, $t2, $a2
    ctx->pc = 0x2c926cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c9270: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2c9270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c9274: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c9274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c9278: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x2c9278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2c927c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c9280: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C9280u;
    {
        const bool branch_taken_0x2c9280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9280u;
        // 0x2c9284: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9280) {
            ctx->pc = 0x2C929Cu;
            goto label_2c929c;
        }
    }
    ctx->pc = 0x2C9288u;
    // 0x2c9288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c928c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x2c928cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x2c9290: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x2c9290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x2c9294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9294u;
    {
        const bool branch_taken_0x2c9294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9294u;
        // 0x2c9298: 0xae625b88  sw          $v0, 0x5B88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 23432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9294) {
            ctx->pc = 0x2C92B8u;
            goto label_2c92b8;
        }
    }
    ctx->pc = 0x2C929Cu;
label_2c929c:
    // 0x2c929c: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x2c929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2c92a0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2c92a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c92a4: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c92a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c92a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C92A8u;
    {
        const bool branch_taken_0x2c92a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92A8u;
        // 0x2c92ac: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92a8) {
            ctx->pc = 0x2C92B8u;
            goto label_2c92b8;
        }
    }
    ctx->pc = 0x2C92B0u;
    // 0x2c92b0: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C92B0u;
    SET_GPR_U32(ctx, 31, 0x2C92B8u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C92B0u, 0x2C92B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92B8u;
label_2c92b8:
    // 0x2c92b8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2c92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2c92bc: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x2c92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x2c92c0: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x2c92c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
    // 0x2c92c4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x2c92c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_2c92c8:
    // 0x2c92c8: 0x26625b88  addiu       $v0, $s3, 0x5B88
    ctx->pc = 0x2c92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
    // 0x2c92cc: 0x25700008  addiu       $s0, $t3, 0x8
    ctx->pc = 0x2c92ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2c92d0: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2c92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x2c92d4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2C92D4u;
    {
        const bool branch_taken_0x2c92d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92D4u;
        // 0x2c92d8: 0xac490008  sw          $t1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92d4) {
            ctx->pc = 0x2C9450u;
            goto label_2c9450;
        }
    }
    ctx->pc = 0x2C92DCu;
label_2c92dc:
    // 0x2c92dc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2c92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2c92e0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C92E0u;
    {
        const bool branch_taken_0x2c92e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92E0u;
        // 0x2c92e4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92e0) {
            ctx->pc = 0x2C9390u;
            goto label_2c9390;
        }
    }
    ctx->pc = 0x2C92E8u;
    // 0x2c92e8: 0xc0b233a  jal         func_2C8CE8
    ctx->pc = 0x2C92E8u;
    SET_GPR_U32(ctx, 31, 0x2C92F0u);
    ctx->pc = 0x2C92ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C92E8u;
    // 0x2c92ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CE8u, 0x2C92E8u, 0x2C92F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92F0u;
label_2c92f0:
    // 0x2c92f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2C92F0u;
    {
        const bool branch_taken_0x2c92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C92F0u;
        // 0x2c92f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c92f0) {
            ctx->pc = 0x2C9388u;
            goto label_2c9388;
        }
    }
    ctx->pc = 0x2C92F8u;
label_2c92f8:
    // 0x2c92f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c92fc: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x2c92fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x2c9300: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2c9300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c9304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9304u;
    {
        const bool branch_taken_0x2c9304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9304u;
        // 0x2c9308: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9304) {
            ctx->pc = 0x2C9318u;
            goto label_2c9318;
        }
    }
    ctx->pc = 0x2C930Cu;
    // 0x2c930c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x2c930cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9310: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2C9310u;
    {
        const bool branch_taken_0x2c9310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9310u;
        // 0x2c9314: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9310) {
            ctx->pc = 0x2C9390u;
            goto label_2c9390;
        }
    }
    ctx->pc = 0x2C9318u;
label_2c9318:
    // 0x2c9318: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2c9318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2c931c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9320: 0x24a65b88  addiu       $a2, $a1, 0x5B88
    ctx->pc = 0x2c9320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
    // 0x2c9324: 0x26440013  addiu       $a0, $s2, 0x13
    ctx->pc = 0x2c9324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x2c9328: 0x8cc301b4  lw          $v1, 0x1B4($a2)
    ctx->pc = 0x2c9328u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x575D3Cu));
    // 0x2c932c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2c932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2c9330: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x2c9330u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2c9334: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c9334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c9338: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C9338u;
    {
        const bool branch_taken_0x2c9338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9338u;
        // 0x2c933c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9338) {
            ctx->pc = 0x2C936Cu;
            goto label_2c936c;
        }
    }
    ctx->pc = 0x2C9340u;
    // 0x2c9340: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c9340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2c9344: 0x8c625b7c  lw          $v0, 0x5B7C($v1)
    ctx->pc = 0x2c9344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x575B7Cu));
    // 0x2c9348: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2c9348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c934c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C934Cu;
    {
        const bool branch_taken_0x2c934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C934Cu;
        // 0x2c9350: 0x26645b88  addiu       $a0, $s3, 0x5B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c934c) {
            ctx->pc = 0x2C9370u;
            goto label_2c9370;
        }
    }
    ctx->pc = 0x2C9354u;
    // 0x2c9354: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c9354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9358: 0xc0b1ec6  jal         func_2C7B18
    ctx->pc = 0x2C9358u;
    SET_GPR_U32(ctx, 31, 0x2C9360u);
    ctx->pc = 0x2C935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9358u;
    // 0x2c935c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7B18u, 0x2C9358u, 0x2C9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9360u;
label_2c9360:
    // 0x2c9360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9364: 0x1600003c  bnez        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2C9364u;
    {
        const bool branch_taken_0x2c9364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9364u;
        // 0x2c9368: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9364) {
            ctx->pc = 0x2C9458u;
            goto label_2c9458;
        }
    }
    ctx->pc = 0x2C936Cu;
label_2c936c:
    // 0x2c936c: 0x26645b88  addiu       $a0, $s3, 0x5B88
    ctx->pc = 0x2c936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
label_2c9370:
    // 0x2c9370: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c9370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c9374: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9374u;
    {
        const bool branch_taken_0x2c9374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9374u;
        // 0x2c9378: 0x26665b88  addiu       $a2, $s3, 0x5B88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9374) {
            ctx->pc = 0x2C9394u;
            goto label_2c9394;
        }
    }
    ctx->pc = 0x2C937Cu;
    // 0x2c937c: 0xc0b21ae  jal         func_2C86B8
    ctx->pc = 0x2C937Cu;
    SET_GPR_U32(ctx, 31, 0x2C9384u);
    ctx->pc = 0x2C9380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C937Cu;
    // 0x2c9380: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86B8u, 0x2C937Cu, 0x2C9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9384u;
label_2c9384:
    // 0x2c9384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c9384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9388:
    // 0x2c9388: 0x16000033  bnez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2C9388u;
    {
        const bool branch_taken_0x2c9388 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9388u;
        // 0x2c938c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9388) {
            ctx->pc = 0x2C9458u;
            goto label_2c9458;
        }
    }
    ctx->pc = 0x2C9390u;
label_2c9390:
    // 0x2c9390: 0x26665b88  addiu       $a2, $s3, 0x5B88
    ctx->pc = 0x2c9390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
label_2c9394:
    // 0x2c9394: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2c9394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2c9398: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2c9398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2c939c: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C939Cu;
    {
        const bool branch_taken_0x2c939c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c939c) {
            ctx->pc = 0x2C93A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C939Cu;
            // 0x2c93a0: 0x8cc4000c  lw          $a0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C940Cu;
            goto label_2c940c;
        }
    }
    ctx->pc = 0x2C93A4u;
    // 0x2c93a4: 0x26655b88  addiu       $a1, $s3, 0x5B88
    ctx->pc = 0x2c93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 23432));
label_2c93a8:
    // 0x2c93a8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2c93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c93ac: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x2c93acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c93b0: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x2c93b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c93b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C93B4u;
    {
        const bool branch_taken_0x2c93b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93B4u;
        // 0x2c93b8: 0x8ca60014  lw          $a2, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93b4) {
            ctx->pc = 0x2C93E4u;
            goto label_2c93e4;
        }
    }
    ctx->pc = 0x2C93BCu;
    // 0x2c93bc: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x2c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2c93c0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2c93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2c93c4: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x2c93c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x2c93c8: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x2c93c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2c93cc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2c93ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2c93d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c93d4: 0x36230003  ori         $v1, $s1, 0x3
    ctx->pc = 0x2c93d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3);
    // 0x2c93d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2c93d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2c93dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C93DCu;
    {
        const bool branch_taken_0x2c93dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C93E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C93DCu;
        // 0x2c93e0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c93dc) {
            ctx->pc = 0x2C9404u;
            goto label_2c9404;
        }
    }
    ctx->pc = 0x2C93E4u;
label_2c93e4:
    // 0x2c93e4: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2c93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2c93e8: 0x34640003  ori         $a0, $v1, 0x3
    ctx->pc = 0x2c93e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2c93ec: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2c93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2c93f0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2c93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c93f4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x2c93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x2c93f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c93fc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c93fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c9400: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2c9400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2c9404:
    // 0x2c9404: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C9404u;
    {
        const bool branch_taken_0x2c9404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9404u;
        // 0x2c9408: 0x24d00008  addiu       $s0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9404) {
            ctx->pc = 0x2C9450u;
            goto label_2c9450;
        }
    }
    ctx->pc = 0x2C940Cu;
label_2c940c:
    // 0x2c940c: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x2c940cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c9410: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C9410u;
    {
        const bool branch_taken_0x2c9410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9410u;
        // 0x2c9414: 0x911023  subu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9410) {
            ctx->pc = 0x2C9440u;
            goto label_2c9440;
        }
    }
    ctx->pc = 0x2C9418u;
    // 0x2c9418: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2c9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2c941c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2c941cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2c9420: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x2c9420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2c9424: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2c9424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c9428: 0x36220003  ori         $v0, $s1, 0x3
    ctx->pc = 0x2c9428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3);
    // 0x2c942c: 0xacc40018  sw          $a0, 0x18($a2)
    ctx->pc = 0x2c942cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 4));
    // 0x2c9430: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x2c9430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2c9434: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2c9434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2c9438: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C9438u;
    {
        const bool branch_taken_0x2c9438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9438u;
        // 0x2c943c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9438) {
            ctx->pc = 0x2C9450u;
            goto label_2c9450;
        }
    }
    ctx->pc = 0x2C9440u;
label_2c9440:
    // 0x2c9440: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c9440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9444: 0xc0b1ec6  jal         func_2C7B18
    ctx->pc = 0x2C9444u;
    SET_GPR_U32(ctx, 31, 0x2C944Cu);
    ctx->pc = 0x2C9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9444u;
    // 0x2c9448: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7B18u, 0x2C9444u, 0x2C944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C944Cu;
label_2c944c:
    // 0x2c944c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c944cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9450:
    // 0x2c9450: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9450u;
    {
        const bool branch_taken_0x2c9450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9450u;
        // 0x2c9454: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9450) {
            ctx->pc = 0x2C9470u;
            goto label_2c9470;
        }
    }
    ctx->pc = 0x2C9458u;
label_2c9458:
    // 0x2c9458: 0x9043b44c  lbu         $v1, -0x4BB4($v0)
    ctx->pc = 0x2c9458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947916)));
    // 0x2c945c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C945Cu;
    {
        const bool branch_taken_0x2c945c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C945Cu;
        // 0x2c9460: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c945c) {
            ctx->pc = 0x2C9470u;
            goto label_2c9470;
        }
    }
    ctx->pc = 0x2C9464u;
    // 0x2c9464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9468: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2C9468u;
    SET_GPR_U32(ctx, 31, 0x2C9470u);
    ctx->pc = 0x2C946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9468u;
    // 0x2c946c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2C9468u, 0x2C9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9470u;
label_2c9470:
    // 0x2c9470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c947c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c947cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9480: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c9480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c9484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c9484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9488: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9488u;
        // 0x2c948c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9490u;
}
