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

// Function: sub_001AE020
// Address: 0x1ae020 - 0x1ae170
void sub_001AE020_0x1ae020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE020_0x1ae020");
#endif

    switch (ctx->pc) {
        case 0x1ae070u: goto label_1ae070;
        case 0x1ae080u: goto label_1ae080;
        case 0x1ae088u: goto label_1ae088;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae138u: goto label_1ae138;
        default: break;
    }

    ctx->pc = 0x1ae020u;

    // 0x1ae020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae024: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ae028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae02c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae03c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ae03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ae040: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ae040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae044: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ae044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ae048: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ae048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ae04c: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x1ae04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1ae050: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1AE050u;
    {
        const bool branch_taken_0x1ae050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE050u;
        // 0x1ae054: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae050) {
            ctx->pc = 0x1AE148u;
            goto label_1ae148;
        }
    }
    ctx->pc = 0x1AE058u;
    // 0x1ae058: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1ae058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1ae05c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1AE05Cu;
    {
        const bool branch_taken_0x1ae05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE05Cu;
        // 0x1ae060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae05c) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE064u;
    // 0x1ae064: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1ae064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1ae068: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1AE068u;
    SET_GPR_U32(ctx, 31, 0x1AE070u);
    ctx->pc = 0x1AE06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE068u;
    // 0x1ae06c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1AE068u, 0x1AE070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE070u;
label_1ae070:
    // 0x1ae070: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE070u;
    {
        const bool branch_taken_0x1ae070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae070) {
            ctx->pc = 0x1AE074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE070u;
            // 0x1ae074: 0x8e050088  lw          $a1, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE090u;
            goto label_1ae090;
        }
    }
    ctx->pc = 0x1AE078u;
    // 0x1ae078: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1AE078u;
    SET_GPR_U32(ctx, 31, 0x1AE080u);
    ctx->pc = 0x1AE07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE078u;
    // 0x1ae07c: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1AE078u, 0x1AE080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE080u;
label_1ae080:
    // 0x1ae080: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x1AE080u;
    SET_GPR_U32(ctx, 31, 0x1AE088u);
    ctx->pc = 0x1AE084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE080u;
    // 0x1ae084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x1AE080u, 0x1AE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE088u;
label_1ae088:
    // 0x1ae088: 0x2c530001  sltiu       $s3, $v0, 0x1
    ctx->pc = 0x1ae088u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ae08c: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x1ae08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1ae090:
    // 0x1ae090: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ae090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ae094: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE094u;
    {
        const bool branch_taken_0x1ae094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE094u;
        // 0x1ae098: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae094) {
            ctx->pc = 0x1AE0B0u;
            goto label_1ae0b0;
        }
    }
    ctx->pc = 0x1AE09Cu;
    // 0x1ae09c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1ae09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ae0a0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE0A0u;
    {
        const bool branch_taken_0x1ae0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae0a0) {
            ctx->pc = 0x1AE0B0u;
            goto label_1ae0b0;
        }
    }
    ctx->pc = 0x1AE0A8u;
    // 0x1ae0a8: 0x12600028  beqz        $s3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1AE0A8u;
    {
        const bool branch_taken_0x1ae0a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0A8u;
        // 0x1ae0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0a8) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE0B0u;
label_1ae0b0:
    // 0x1ae0b0: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE0B0u;
    {
        const bool branch_taken_0x1ae0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ae0b0) {
            ctx->pc = 0x1AE0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE0B0u;
            // 0x1ae0b4: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE0C4u;
            goto label_1ae0c4;
        }
    }
    ctx->pc = 0x1AE0B8u;
    // 0x1ae0b8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1ae0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1ae0bc: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AE0BCu;
    {
        const bool branch_taken_0x1ae0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0BCu;
        // 0x1ae0c0: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0bc) {
            ctx->pc = 0x1AE11Cu;
            goto label_1ae11c;
        }
    }
    ctx->pc = 0x1AE0C4u;
label_1ae0c4:
    // 0x1ae0c4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE0C4u;
    {
        const bool branch_taken_0x1ae0c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0C4u;
        // 0x1ae0c8: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0c4) {
            ctx->pc = 0x1AE0D8u;
            goto label_1ae0d8;
        }
    }
    ctx->pc = 0x1AE0CCu;
    // 0x1ae0cc: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1ae0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1ae0d0: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AE0D0u;
    {
        const bool branch_taken_0x1ae0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0D0u;
        // 0x1ae0d4: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0d0) {
            ctx->pc = 0x1AE11Cu;
            goto label_1ae11c;
        }
    }
    ctx->pc = 0x1AE0D8u;
label_1ae0d8:
    // 0x1ae0d8: 0x12420017  beq         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1AE0D8u;
    {
        const bool branch_taken_0x1ae0d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0D8u;
        // 0x1ae0dc: 0x2a22001f  slti        $v0, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0d8) {
            ctx->pc = 0x1AE138u;
            goto label_1ae138;
        }
    }
    ctx->pc = 0x1AE0E0u;
    // 0x1ae0e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AE0E0u;
    {
        const bool branch_taken_0x1ae0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0E0u;
        // 0x1ae0e4: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0e0) {
            ctx->pc = 0x1AE128u;
            goto label_1ae128;
        }
    }
    ctx->pc = 0x1AE0E8u;
    // 0x1ae0e8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1ae0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ae0ec: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1ae0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae0f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ae0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ae0f4: 0x24428658  addiu       $v0, $v0, -0x79A8
    ctx->pc = 0x1ae0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x1ae0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ae0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae0fc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1ae0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ae100: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE100u;
    {
        const bool branch_taken_0x1ae100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE100u;
        // 0x1ae104: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae100) {
            ctx->pc = 0x1AE128u;
            goto label_1ae128;
        }
    }
    ctx->pc = 0x1AE108u;
    // 0x1ae108: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ae108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae10c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ae10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae110: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE110u;
    {
        const bool branch_taken_0x1ae110 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE110u;
        // 0x1ae114: 0x2251026  xor         $v0, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae110) {
            ctx->pc = 0x1AE124u;
            goto label_1ae124;
        }
    }
    ctx->pc = 0x1AE118u;
    // 0x1ae118: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x1ae118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
label_1ae11c:
    // 0x1ae11c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AE11Cu;
    {
        const bool branch_taken_0x1ae11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE11Cu;
        // 0x1ae120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae11c) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE124u;
label_1ae124:
    // 0x1ae124: 0xc2880a  movz        $s1, $a2, $v0
    ctx->pc = 0x1ae124u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
label_1ae128:
    // 0x1ae128: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ae128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae130: 0xc06c45e  jal         func_1B1178
    ctx->pc = 0x1AE130u;
    SET_GPR_U32(ctx, 31, 0x1AE138u);
    ctx->pc = 0x1AE134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE130u;
    // 0x1ae134: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1178u, 0x1AE130u, 0x1AE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE138u;
label_1ae138:
    // 0x1ae138: 0x1280fff8  beqz        $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AE138u;
    {
        const bool branch_taken_0x1ae138 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE138u;
        // 0x1ae13c: 0xae110084  sw          $s1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae138) {
            ctx->pc = 0x1AE11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae11c;
        }
    }
    ctx->pc = 0x1AE140u;
    // 0x1ae140: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1AE140u;
    {
        const bool branch_taken_0x1ae140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE140u;
        // 0x1ae144: 0xae1400b0  sw          $s4, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae140) {
            ctx->pc = 0x1AE11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae11c;
        }
    }
    ctx->pc = 0x1AE148u;
label_1ae148:
    // 0x1ae148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae14c:
    // 0x1ae14c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae158: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ae158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae15c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ae15cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae160: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ae160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ae164: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE164u;
        // 0x1ae168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE16Cu;
    // 0x1ae16c: 0x0  nop
    ctx->pc = 0x1ae16cu;
    // NOP
    ctx->pc = 0x1ae170u;
}
