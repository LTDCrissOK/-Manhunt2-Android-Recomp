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

// Function: sub_0038C978
// Address: 0x38c978 - 0x38caf8
void sub_0038C978_0x38c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C978_0x38c978");
#endif

    switch (ctx->pc) {
        case 0x38ca08u: goto label_38ca08;
        case 0x38ca64u: goto label_38ca64;
        case 0x38ca88u: goto label_38ca88;
        case 0x38ca9cu: goto label_38ca9c;
        default: break;
    }

    ctx->pc = 0x38c978u;

    // 0x38c978: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x38c97c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38c980: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c984: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38c988: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x38c98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c990: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x38c990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x38c994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38c994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c998: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x38c998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x38c99c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x38c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x38c9a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38c9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38c9a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38c9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38c9a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38c9ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38c9b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38c9b4: 0xdc510000  ld          $s1, 0x0($v0)
    ctx->pc = 0x38c9b4u;
    SET_GPR_U64(ctx, 17, runtime->Load64(rdram, ctx, 0x10002000u));
    // 0x38c9b8: 0x6230042  bgezl       $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x38C9B8u;
    {
        const bool branch_taken_0x38c9b8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x38c9b8) {
            ctx->pc = 0x38C9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C9B8u;
            // 0x38c9bc: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CAC4u;
            goto label_38cac4;
        }
    }
    ctx->pc = 0x38C9C0u;
    // 0x38c9c0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38c9c4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38c9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38c9c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38c9cc: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x38c9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x38c9d0: 0x5460003c  bnel        $v1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x38C9D0u;
    {
        const bool branch_taken_0x38c9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c9d0) {
            ctx->pc = 0x38C9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C9D0u;
            // 0x38c9d4: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CAC4u;
            goto label_38cac4;
        }
    }
    ctx->pc = 0x38C9D8u;
    // 0x38c9d8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x38c9d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x38c9dc: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x38c9dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x38c9e0: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x38c9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x38c9e4: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x38c9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x38c9e8: 0x36b52020  ori         $s5, $s5, 0x2020
    ctx->pc = 0x38c9e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8224);
    // 0x38c9ec: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x38c9ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x38c9f0: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x38c9f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x38c9f4: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x38c9f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x38c9f8: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x38c9f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x38c9fc: 0x36732000  ori         $s3, $s3, 0x2000
    ctx->pc = 0x38c9fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8192);
    // 0x38ca00: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x38ca00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x38ca04: 0x0  nop
    ctx->pc = 0x38ca04u;
    // NOP
label_38ca08:
    // 0x38ca08: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x38ca08u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 21), 0))); // MMIO: 0x10002020
    // 0x38ca0c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38ca0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x38ca10: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x38ca10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x38ca14: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x38ca14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x38ca18: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x38ca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x38ca1c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x38ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x38ca20: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x38ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x38ca24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38ca28: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x38ca28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x38ca2c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CA2Cu;
    {
        const bool branch_taken_0x38ca2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x38CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA2Cu;
        // 0x38ca30: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca2c) {
            ctx->pc = 0x38CA44u;
            goto label_38ca44;
        }
    }
    ctx->pc = 0x38CA34u;
    // 0x38ca34: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x38CA34u;
    {
        const bool branch_taken_0x38ca34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x38ca34) {
            ctx->pc = 0x38CA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CA34u;
            // 0x38ca38: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CA48u;
            goto label_38ca48;
        }
    }
    ctx->pc = 0x38CA3Cu;
    // 0x38ca3c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x38CA3Cu;
    {
        const bool branch_taken_0x38ca3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x38ca3c) {
            ctx->pc = 0x38CA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CA3Cu;
            // 0x38ca40: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CA74u;
            goto label_38ca74;
        }
    }
    ctx->pc = 0x38CA44u;
label_38ca44:
    // 0x38ca44: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x38ca44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_38ca48:
    // 0x38ca48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38CA48u;
    {
        const bool branch_taken_0x38ca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA48u;
        // 0x38ca4c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca48) {
            ctx->pc = 0x38CA74u;
            goto label_38ca74;
        }
    }
    ctx->pc = 0x38CA50u;
    // 0x38ca50: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x38ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x38ca54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38CA54u;
    {
        const bool branch_taken_0x38ca54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA54u;
        // 0x38ca58: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca54) {
            ctx->pc = 0x38CA74u;
            goto label_38ca74;
        }
    }
    ctx->pc = 0x38CA5Cu;
    // 0x38ca5c: 0xc0e182c  jal         func_3860B0
    ctx->pc = 0x38CA5Cu;
    SET_GPR_U32(ctx, 31, 0x38CA64u);
    ctx->pc = 0x38CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA5Cu;
    // 0x38ca60: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3860B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3860B0u, 0x38CA5Cu, 0x38CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA64u;
label_38ca64:
    // 0x38ca64: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x38ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x38ca68: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x38CA68u;
    {
        const bool branch_taken_0x38ca68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA68u;
        // 0x38ca6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca68) {
            ctx->pc = 0x38CA94u;
            goto label_38ca94;
        }
    }
    ctx->pc = 0x38CA70u;
    // 0x38ca70: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38ca70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38ca74:
    // 0x38ca74: 0x284201f5  slti        $v0, $v0, 0x1F5
    ctx->pc = 0x38ca74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)501) ? 1 : 0);
    // 0x38ca78: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38CA78u;
    {
        const bool branch_taken_0x38ca78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA78u;
        // 0x38ca7c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca78) {
            ctx->pc = 0x38CAA4u;
            goto label_38caa4;
        }
    }
    ctx->pc = 0x38CA80u;
    // 0x38ca80: 0xc0e182c  jal         func_3860B0
    ctx->pc = 0x38CA80u;
    SET_GPR_U32(ctx, 31, 0x38CA88u);
    ctx->pc = 0x38CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CA80u;
    // 0x38ca84: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3860B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3860B0u, 0x38CA80u, 0x38CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA88u;
label_38ca88:
    // 0x38ca88: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x38ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x38ca8c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CA8Cu;
    {
        const bool branch_taken_0x38ca8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA8Cu;
        // 0x38ca90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca8c) {
            ctx->pc = 0x38CAA4u;
            goto label_38caa4;
        }
    }
    ctx->pc = 0x38CA94u;
label_38ca94:
    // 0x38ca94: 0xc0e289e  jal         func_38A278
    ctx->pc = 0x38CA94u;
    SET_GPR_U32(ctx, 31, 0x38CA9Cu);
    ctx->pc = 0x38A278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A278u, 0x38CA94u, 0x38CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CA9Cu;
label_38ca9c:
    // 0x38ca9c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x38CA9Cu;
    {
        const bool branch_taken_0x38ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA9Cu;
        // 0x38caa0: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ca9c) {
            ctx->pc = 0x38CAC4u;
            goto label_38cac4;
        }
    }
    ctx->pc = 0x38CAA4u;
label_38caa4:
    // 0x38caa4: 0xde710000  ld          $s1, 0x0($s3)
    ctx->pc = 0x38caa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38caa8: 0x6230006  bgezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CAA8u;
    {
        const bool branch_taken_0x38caa8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x38caa8) {
            ctx->pc = 0x38CAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CAA8u;
            // 0x38caac: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CAC4u;
            goto label_38cac4;
        }
    }
    ctx->pc = 0x38CAB0u;
    // 0x38cab0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38cab4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x38cab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x38cab8: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x38CAB8u;
    {
        const bool branch_taken_0x38cab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cab8) {
            ctx->pc = 0x38CA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ca08;
        }
    }
    ctx->pc = 0x38CAC0u;
    // 0x38cac0: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x38cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_38cac4:
    // 0x38cac4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38cac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cac8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38cac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38cacc: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x38caccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38cad0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x38cad0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38cad4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x38cad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38cad8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38cad8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38cadc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38cadcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38cae0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38cae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38cae4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38cae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38cae8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38cae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38caec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38caecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x38CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CAF0u;
        // 0x38caf4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CAF8u;
}
