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

// Function: sub_0038BB78
// Address: 0x38bb78 - 0x38bfa0
void sub_0038BB78_0x38bb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BB78_0x38bb78");
#endif

    switch (ctx->pc) {
        case 0x38bbacu: goto label_38bbac;
        case 0x38bbc8u: goto label_38bbc8;
        case 0x38bbecu: goto label_38bbec;
        case 0x38bc64u: goto label_38bc64;
        case 0x38bcd4u: goto label_38bcd4;
        case 0x38bcfcu: goto label_38bcfc;
        case 0x38bd20u: goto label_38bd20;
        case 0x38bd8cu: goto label_38bd8c;
        case 0x38bdb0u: goto label_38bdb0;
        case 0x38be24u: goto label_38be24;
        case 0x38bec4u: goto label_38bec4;
        case 0x38bee8u: goto label_38bee8;
        case 0x38bf0cu: goto label_38bf0c;
        default: break;
    }

    ctx->pc = 0x38bb78u;

    // 0x38bb78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38bb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x38bb7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38bb80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38bb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bb84: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x38bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x38bb88: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x38bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x38bb8c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x38bb8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bb90: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x38bb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x38bb94: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x38bb94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bb98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38bb9c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x38bb9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bba0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38bba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38bba4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x38bba4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bba8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_38bbac:
    // 0x38bbac: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x38bbacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bbb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38bbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38bbb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x38bbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bbb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x38bbbc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x38bbbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bbc0: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38BBC0u;
    SET_GPR_U32(ctx, 31, 0x38BBC8u);
    ctx->pc = 0x38BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BBC0u;
    // 0x38bbc4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38BBC0u, 0x38BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BBC8u;
label_38bbc8:
    // 0x38bbc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38bbcc: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x38bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x38bbd0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38bbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38bbd4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x38bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x38bbd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38bbd8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38bbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bbe0: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x38bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x38bbe4: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38BBE4u;
    SET_GPR_U32(ctx, 31, 0x38BBECu);
    ctx->pc = 0x38BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BBE4u;
    // 0x38bbe8: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38BBE4u, 0x38BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BBECu;
label_38bbec:
    // 0x38bbec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38bbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bbf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38bbf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38bbf8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38bbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38bbfc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38bc00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x38bc04: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38bc04u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38bc08: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38bc0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38bc10: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BC10u;
    {
        const bool branch_taken_0x38bc10 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC10u;
        // 0x38bc14: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc10) {
            ctx->pc = 0x38BC28u;
            goto label_38bc28;
        }
    }
    ctx->pc = 0x38BC18u;
    // 0x38bc18: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x38bc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38bc1c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x38bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x38bc20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38BC20u;
    {
        const bool branch_taken_0x38bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC20u;
        // 0x38bc24: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc20) {
            ctx->pc = 0x38BC2Cu;
            goto label_38bc2c;
        }
    }
    ctx->pc = 0x38BC28u;
label_38bc28:
    // 0x38bc28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38bc2c:
    // 0x38bc2c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x38bc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x38bc30: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x38bc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x38bc34: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x38bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38bc38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bc38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38bc3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38bc3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38bc40: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x38bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38bc44: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x38bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x38bc48: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x38BC48u;
    {
        const bool branch_taken_0x38bc48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC48u;
        // 0x38bc4c: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc48) {
            ctx->pc = 0x38BC6Cu;
            goto label_38bc6c;
        }
    }
    ctx->pc = 0x38BC50u;
    // 0x38bc50: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38BC50u;
    {
        const bool branch_taken_0x38bc50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC50u;
        // 0x38bc54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc50) {
            ctx->pc = 0x38BC70u;
            goto label_38bc70;
        }
    }
    ctx->pc = 0x38BC58u;
    // 0x38bc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38bc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bc5c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38BC5Cu;
    SET_GPR_U32(ctx, 31, 0x38BC64u);
    ctx->pc = 0x38BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BC5Cu;
    // 0x38bc60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38BC5Cu, 0x38BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BC64u;
label_38bc64:
    // 0x38bc64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38BC64u;
    {
        const bool branch_taken_0x38bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC64u;
        // 0x38bc68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc64) {
            ctx->pc = 0x38BC70u;
            goto label_38bc70;
        }
    }
    ctx->pc = 0x38BC6Cu;
label_38bc6c:
    // 0x38bc6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38bc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38bc70:
    // 0x38bc70: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x38bc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38bc74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38bc78: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x38bc78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x38bc7c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x38bc7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x38bc80: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x38BC80u;
    {
        const bool branch_taken_0x38bc80 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x38BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BC80u;
        // 0x38bc84: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bc80) {
            ctx->pc = 0x38BCB4u;
            goto label_38bcb4;
        }
    }
    ctx->pc = 0x38BC88u;
    // 0x38bc88: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x38bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x38bc8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38bc90: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x38bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x38bc94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38bc98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38bc9c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x38bc9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x38bca0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x38BCA0u;
    {
        const bool branch_taken_0x38bca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCA0u;
        // 0x38bca4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bca0) {
            ctx->pc = 0x38BCE8u;
            goto label_38bce8;
        }
    }
    ctx->pc = 0x38BCA8u;
    // 0x38bca8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x38bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x38bcac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38BCACu;
    {
        const bool branch_taken_0x38bcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCACu;
        // 0x38bcb0: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcac) {
            ctx->pc = 0x38BCE4u;
            goto label_38bce4;
        }
    }
    ctx->pc = 0x38BCB4u;
label_38bcb4:
    // 0x38bcb4: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x38BCB4u;
    {
        const bool branch_taken_0x38bcb4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x38BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCB4u;
        // 0x38bcb8: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcb4) {
            ctx->pc = 0x38BCE8u;
            goto label_38bce8;
        }
    }
    ctx->pc = 0x38BCBCu;
    // 0x38bcbc: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x38bcbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x38bcc0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x38bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x38bcc4: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x38bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x38bcc8: 0x61823  negu        $v1, $a2
    ctx->pc = 0x38bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x38bccc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38bcd0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x38bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38bcd4:
    // 0x38bcd4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x38bcd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38bcd8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38BCD8u;
    {
        const bool branch_taken_0x38bcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCD8u;
        // 0x38bcdc: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcd8) {
            ctx->pc = 0x38BCE4u;
            goto label_38bce4;
        }
    }
    ctx->pc = 0x38BCE0u;
    // 0x38bce0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38bce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38bce4:
    // 0x38bce4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x38bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_38bce8:
    // 0x38bce8: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x38bce8u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x38bcec: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x38BCECu;
    {
        const bool branch_taken_0x38bcec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCECu;
        // 0x38bcf0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcec) {
            ctx->pc = 0x38BD84u;
            goto label_38bd84;
        }
    }
    ctx->pc = 0x38BCF4u;
    // 0x38bcf4: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38BCF4u;
    SET_GPR_U32(ctx, 31, 0x38BCFCu);
    ctx->pc = 0x38BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BCF4u;
    // 0x38bcf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38BCF4u, 0x38BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BCFCu;
label_38bcfc:
    // 0x38bcfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38bd00: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x38bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x38bd04: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38bd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38bd08: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x38bd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x38bd0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38bd0cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38bd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38bd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bd14: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x38bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x38bd18: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38BD18u;
    SET_GPR_U32(ctx, 31, 0x38BD20u);
    ctx->pc = 0x38BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BD18u;
    // 0x38bd1c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38BD18u, 0x38BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD20u;
label_38bd20:
    // 0x38bd20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38bd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bd24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38bd28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38bd2c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38bd30: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38bd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38bd34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x38bd38: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38bd38u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38bd3c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38bd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38bd40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bd40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38bd44: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BD44u;
    {
        const bool branch_taken_0x38bd44 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD44u;
        // 0x38bd48: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd44) {
            ctx->pc = 0x38BD5Cu;
            goto label_38bd5c;
        }
    }
    ctx->pc = 0x38BD4Cu;
    // 0x38bd4c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x38bd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38bd50: 0x21023  negu        $v0, $v0
    ctx->pc = 0x38bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x38bd54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38BD54u;
    {
        const bool branch_taken_0x38bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD54u;
        // 0x38bd58: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd54) {
            ctx->pc = 0x38BD60u;
            goto label_38bd60;
        }
    }
    ctx->pc = 0x38BD5Cu;
label_38bd5c:
    // 0x38bd5c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38bd60:
    // 0x38bd60: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x38bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x38bd64: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x38bd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x38bd68: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x38bd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38bd6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38bd70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38bd70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38bd74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x38bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38bd78: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x38bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x38bd7c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x38bd7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x38bd80: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x38bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_38bd84:
    // 0x38bd84: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38BD84u;
    SET_GPR_U32(ctx, 31, 0x38BD8Cu);
    ctx->pc = 0x38BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BD84u;
    // 0x38bd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38BD84u, 0x38BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BD8Cu;
label_38bd8c:
    // 0x38bd8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38bd90: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x38bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x38bd94: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38bd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38bd98: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x38bd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x38bd9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38bd9cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38bda0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38bda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bda4: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x38bda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x38bda8: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38BDA8u;
    SET_GPR_U32(ctx, 31, 0x38BDB0u);
    ctx->pc = 0x38BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BDA8u;
    // 0x38bdac: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38BDA8u, 0x38BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BDB0u;
label_38bdb0:
    // 0x38bdb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38bdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bdb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38bdb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38bdbc: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38bdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38bdc0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38bdc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x38bdc8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38bdc8u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38bdcc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38bdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38bdd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bdd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38bdd4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BDD4u;
    {
        const bool branch_taken_0x38bdd4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDD4u;
        // 0x38bdd8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bdd4) {
            ctx->pc = 0x38BDECu;
            goto label_38bdec;
        }
    }
    ctx->pc = 0x38BDDCu;
    // 0x38bddc: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x38bddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38bde0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x38bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x38bde4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38BDE4u;
    {
        const bool branch_taken_0x38bde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDE4u;
        // 0x38bde8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bde4) {
            ctx->pc = 0x38BDF0u;
            goto label_38bdf0;
        }
    }
    ctx->pc = 0x38BDECu;
label_38bdec:
    // 0x38bdec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38bdf0:
    // 0x38bdf0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x38bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x38bdf4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x38bdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x38bdf8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x38bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38bdfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bdfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38be00: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38be00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38be04: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x38be04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38be08: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x38be08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x38be0c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x38BE0Cu;
    {
        const bool branch_taken_0x38be0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE0Cu;
        // 0x38be10: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be0c) {
            ctx->pc = 0x38BE2Cu;
            goto label_38be2c;
        }
    }
    ctx->pc = 0x38BE14u;
    // 0x38be14: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BE14u;
    {
        const bool branch_taken_0x38be14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE14u;
        // 0x38be18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be14) {
            ctx->pc = 0x38BE2Cu;
            goto label_38be2c;
        }
    }
    ctx->pc = 0x38BE1Cu;
    // 0x38be1c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38BE1Cu;
    SET_GPR_U32(ctx, 31, 0x38BE24u);
    ctx->pc = 0x38BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE1Cu;
    // 0x38be20: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38BE1Cu, 0x38BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE24u;
label_38be24:
    // 0x38be24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38BE24u;
    {
        const bool branch_taken_0x38be24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE24u;
        // 0x38be28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be24) {
            ctx->pc = 0x38BE30u;
            goto label_38be30;
        }
    }
    ctx->pc = 0x38BE2Cu;
label_38be2c:
    // 0x38be2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38be2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38be30:
    // 0x38be30: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BE30u;
    {
        const bool branch_taken_0x38be30 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x38be30) {
            ctx->pc = 0x38BE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BE30u;
            // 0x38be34: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BE48u;
            goto label_38be48;
        }
    }
    ctx->pc = 0x38BE38u;
    // 0x38be38: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38be3c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38be3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38be40: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x38be40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x38be44: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x38be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38be48:
    // 0x38be48: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x38be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38be4c: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x38be4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x38be50: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x38be50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x38be54: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x38be54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x38be58: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x38BE58u;
    {
        const bool branch_taken_0x38be58 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x38BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE58u;
        // 0x38be5c: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be58) {
            ctx->pc = 0x38BE8Cu;
            goto label_38be8c;
        }
    }
    ctx->pc = 0x38BE60u;
    // 0x38be60: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x38be60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x38be64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38be64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38be68: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x38be68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x38be6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38be70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38be70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38be74: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x38be74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x38be78: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x38BE78u;
    {
        const bool branch_taken_0x38be78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE78u;
        // 0x38be7c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be78) {
            ctx->pc = 0x38BEC0u;
            goto label_38bec0;
        }
    }
    ctx->pc = 0x38BE80u;
    // 0x38be80: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x38be80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x38be84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38BE84u;
    {
        const bool branch_taken_0x38be84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE84u;
        // 0x38be88: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be84) {
            ctx->pc = 0x38BEBCu;
            goto label_38bebc;
        }
    }
    ctx->pc = 0x38BE8Cu;
label_38be8c:
    // 0x38be8c: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x38BE8Cu;
    {
        const bool branch_taken_0x38be8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x38BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE8Cu;
        // 0x38be90: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be8c) {
            ctx->pc = 0x38BEC0u;
            goto label_38bec0;
        }
    }
    ctx->pc = 0x38BE94u;
    // 0x38be94: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x38be94u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x38be98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x38be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x38be9c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x38be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x38bea0: 0x61823  negu        $v1, $a2
    ctx->pc = 0x38bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x38bea4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38bea8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x38bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38beac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x38beacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38beb0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38BEB0u;
    {
        const bool branch_taken_0x38beb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEB0u;
        // 0x38beb4: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38beb0) {
            ctx->pc = 0x38BEBCu;
            goto label_38bebc;
        }
    }
    ctx->pc = 0x38BEB8u;
    // 0x38beb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38bebc:
    // 0x38bebc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x38bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_38bec0:
    // 0x38bec0: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x38bec0u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_38bec4:
    // 0x38bec4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BEC4u;
    {
        const bool branch_taken_0x38bec4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEC4u;
        // 0x38bec8: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bec4) {
            ctx->pc = 0x38BED8u;
            goto label_38bed8;
        }
    }
    ctx->pc = 0x38BECCu;
    // 0x38becc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38bed0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x38bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38bed4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x38bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_38bed8:
    // 0x38bed8: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x38BED8u;
    {
        const bool branch_taken_0x38bed8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BED8u;
        // 0x38bedc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bed8) {
            ctx->pc = 0x38BF74u;
            goto label_38bf74;
        }
    }
    ctx->pc = 0x38BEE0u;
    // 0x38bee0: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38BEE0u;
    SET_GPR_U32(ctx, 31, 0x38BEE8u);
    ctx->pc = 0x38BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BEE0u;
    // 0x38bee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38BEE0u, 0x38BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BEE8u;
label_38bee8:
    // 0x38bee8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38beec: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x38beecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x38bef0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38bef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38bef4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x38bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x38bef8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38bef8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38befc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38befcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bf00: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x38bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x38bf04: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38BF04u;
    SET_GPR_U32(ctx, 31, 0x38BF0Cu);
    ctx->pc = 0x38BF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF04u;
    // 0x38bf08: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38BF04u, 0x38BF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF0Cu;
label_38bf0c:
    // 0x38bf0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38bf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bf10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38bf14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38bf18: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38bf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38bf1c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38bf20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38bf20u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x38bf24: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38bf24u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38bf28: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38bf2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bf2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38bf30: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38BF30u;
    {
        const bool branch_taken_0x38bf30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF30u;
        // 0x38bf34: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf30) {
            ctx->pc = 0x38BF48u;
            goto label_38bf48;
        }
    }
    ctx->pc = 0x38BF38u;
    // 0x38bf38: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x38bf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38bf3c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x38bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x38bf40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38BF40u;
    {
        const bool branch_taken_0x38bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF40u;
        // 0x38bf44: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf40) {
            ctx->pc = 0x38BF4Cu;
            goto label_38bf4c;
        }
    }
    ctx->pc = 0x38BF48u;
label_38bf48:
    // 0x38bf48: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_38bf4c:
    // 0x38bf4c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x38bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x38bf50: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x38bf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x38bf54: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x38bf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38bf58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38bf58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38bf5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38bf5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38bf60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x38bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38bf64: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x38bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x38bf68: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x38bf68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x38bf6c: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x38bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x38bf70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38bf74:
    // 0x38bf74: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x38bf74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38bf78: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x38bf78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38bf7c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x38bf7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38bf80: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38bf80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38bf84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38bf84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38bf88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38bf88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38bf8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38bf8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38bf90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38bf90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38bf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38bf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38bf98: 0x3e00008  jr          $ra
    ctx->pc = 0x38BF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF98u;
        // 0x38bf9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BFA0u;
}
