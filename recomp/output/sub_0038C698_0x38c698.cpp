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

// Function: sub_0038C698
// Address: 0x38c698 - 0x38c978
void sub_0038C698_0x38c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C698_0x38c698");
#endif

    switch (ctx->pc) {
        case 0x38c6d0u: goto label_38c6d0;
        case 0x38c6d8u: goto label_38c6d8;
        case 0x38c6f4u: goto label_38c6f4;
        case 0x38c794u: goto label_38c794;
        case 0x38c7b8u: goto label_38c7b8;
        case 0x38c7d0u: goto label_38c7d0;
        case 0x38c810u: goto label_38c810;
        case 0x38c898u: goto label_38c898;
        case 0x38c8f4u: goto label_38c8f4;
        case 0x38c918u: goto label_38c918;
        case 0x38c92cu: goto label_38c92c;
        default: break;
    }

    ctx->pc = 0x38c698u;

    // 0x38c698: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38c698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38c69c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38c6a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38c6a4: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x38c6a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x38c6a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38c6ac: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x38c6acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x38c6b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38c6b4: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x38c6b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38c6b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38c6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38c6bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38c6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c6c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38c6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38c6c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38c6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c6cc: 0x0  nop
    ctx->pc = 0x38c6ccu;
    // NOP
label_38c6d0:
    // 0x38c6d0: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38C6D0u;
    SET_GPR_U32(ctx, 31, 0x38C6D8u);
    ctx->pc = 0x38C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C6D0u;
    // 0x38c6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38C6D0u, 0x38C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C6D8u;
label_38c6d8:
    // 0x38c6d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38c6dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c6e0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38c6e4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x38c6e4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 20)); // MMIO: 0x10002000
    // 0x38c6e8: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x38c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x38c6ec: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38C6ECu;
    SET_GPR_U32(ctx, 31, 0x38C6F4u);
    ctx->pc = 0x38C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C6ECu;
    // 0x38c6f0: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38C6ECu, 0x38C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C6F4u;
label_38c6f4:
    // 0x38c6f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38c6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c6f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38c6fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38c700: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x38c700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x38c704: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38c704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38c708: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38c708u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x38c70c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x38c70cu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x38c710: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x38c710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38c714: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38c714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38c718: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38C718u;
    {
        const bool branch_taken_0x38c718 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C718u;
        // 0x38c71c: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c718) {
            ctx->pc = 0x38C734u;
            goto label_38c734;
        }
    }
    ctx->pc = 0x38C720u;
    // 0x38c720: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x38c720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38c724: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x38c724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x38c728: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x38c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x38c72c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38C72Cu;
    {
        const bool branch_taken_0x38c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C72Cu;
        // 0x38c730: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c72c) {
            ctx->pc = 0x38C738u;
            goto label_38c738;
        }
    }
    ctx->pc = 0x38C734u;
label_38c734:
    // 0x38c734: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x38c734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_38c738:
    // 0x38c738: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x38c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x38c73c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x38c73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38c740: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x38c740u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x38c744: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x38c744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x38c748: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x38c748u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38c74c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x38c74cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x38c750: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x38c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x38c754: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x38C754u;
    {
        const bool branch_taken_0x38c754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C754u;
        // 0x38c758: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c754) {
            ctx->pc = 0x38C7B8u;
            goto label_38c7b8;
        }
    }
    ctx->pc = 0x38C75Cu;
    // 0x38c75c: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x38c75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x38c760: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C760u;
    {
        const bool branch_taken_0x38c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C760u;
        // 0x38c764: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c760) {
            ctx->pc = 0x38C778u;
            goto label_38c778;
        }
    }
    ctx->pc = 0x38C768u;
    // 0x38c768: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C768u;
    {
        const bool branch_taken_0x38c768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C768u;
        // 0x38c76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c768) {
            ctx->pc = 0x38C78Cu;
            goto label_38c78c;
        }
    }
    ctx->pc = 0x38C770u;
    // 0x38c770: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x38C770u;
    {
        const bool branch_taken_0x38c770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C770u;
        // 0x38c774: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c770) {
            ctx->pc = 0x38C7E0u;
            goto label_38c7e0;
        }
    }
    ctx->pc = 0x38C778u;
label_38c778:
    // 0x38c778: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38C778u;
    {
        const bool branch_taken_0x38c778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x38c778) {
            ctx->pc = 0x38C77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C778u;
            // 0x38c77c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C7E0u;
            goto label_38c7e0;
        }
    }
    ctx->pc = 0x38C780u;
    // 0x38c780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c784: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x38C784u;
    {
        const bool branch_taken_0x38c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C784u;
        // 0x38c788: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c784) {
            ctx->pc = 0x38C7E4u;
            goto label_38c7e4;
        }
    }
    ctx->pc = 0x38C78Cu;
label_38c78c:
    // 0x38c78c: 0xc0e32f8  jal         func_38CBE0
    ctx->pc = 0x38C78Cu;
    SET_GPR_U32(ctx, 31, 0x38C794u);
    ctx->pc = 0x38C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C78Cu;
    // 0x38c790: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38C78Cu, 0x38C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C794u;
label_38c794:
    // 0x38c794: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38c794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c798: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x38c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x38c79c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C79Cu;
    {
        const bool branch_taken_0x38c79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C79Cu;
        // 0x38c7a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c79c) {
            ctx->pc = 0x38C7C0u;
            goto label_38c7c0;
        }
    }
    ctx->pc = 0x38C7A4u;
    // 0x38c7a4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38C7A4u;
    {
        const bool branch_taken_0x38c7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7A4u;
        // 0x38c7a8: 0x26a59580  addiu       $a1, $s5, -0x6A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7a4) {
            ctx->pc = 0x38C7C4u;
            goto label_38c7c4;
        }
    }
    ctx->pc = 0x38C7ACu;
    // 0x38c7ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c7b0: 0xc0e3350  jal         func_38CD40
    ctx->pc = 0x38C7B0u;
    SET_GPR_U32(ctx, 31, 0x38C7B8u);
    ctx->pc = 0x38C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7B0u;
    // 0x38c7b4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD40u, 0x38C7B0u, 0x38C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7B8u;
label_38c7b8:
    // 0x38c7b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x38C7B8u;
    {
        const bool branch_taken_0x38c7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7B8u;
        // 0x38c7bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7b8) {
            ctx->pc = 0x38C7E4u;
            goto label_38c7e4;
        }
    }
    ctx->pc = 0x38C7C0u;
label_38c7c0:
    // 0x38c7c0: 0x26a59580  addiu       $a1, $s5, -0x6A80
    ctx->pc = 0x38c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940032));
label_38c7c4:
    // 0x38c7c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38c7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c7c8: 0xc0e290e  jal         func_38A438
    ctx->pc = 0x38C7C8u;
    SET_GPR_U32(ctx, 31, 0x38C7D0u);
    ctx->pc = 0x38C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C7C8u;
    // 0x38c7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A438u, 0x38C7C8u, 0x38C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C7D0u;
label_38c7d0:
    // 0x38c7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c7d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38C7D8u;
    {
        const bool branch_taken_0x38c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7D8u;
        // 0x38c7dc: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7d8) {
            ctx->pc = 0x38C7ECu;
            goto label_38c7ec;
        }
    }
    ctx->pc = 0x38C7E0u;
label_38c7e0:
    // 0x38c7e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38c7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c7e4:
    // 0x38c7e4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x38C7E4u;
    {
        const bool branch_taken_0x38c7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C7E4u;
        // 0x38c7e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c7e4) {
            ctx->pc = 0x38C6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c6d0;
        }
    }
    ctx->pc = 0x38C7ECu;
label_38c7ec:
    // 0x38c7ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38c7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c7f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38c7f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c7f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38c7f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c7f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38c7f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c7fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38c7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38c800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c808: 0x3e00008  jr          $ra
    ctx->pc = 0x38C808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C808u;
        // 0x38c80c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C810u;
label_38c810:
    // 0x38c810: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x38c814: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38c814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38c818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38c81c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x38c81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x38c820: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38c820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x38c824: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x38c824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x38c828: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x38c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x38c82c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x38c82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x38c830: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x38c830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x38c834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c838: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x38c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x38c83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38c83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c840: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38c840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38c844: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38c848: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38c84c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38c850: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38c854: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38c854u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x38c858: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x38c858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x38c85c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x38c85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x38c860: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x38C860u;
    {
        const bool branch_taken_0x38c860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38c860) {
            ctx->pc = 0x38C864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C860u;
            // 0x38c864: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C948u;
            goto label_38c948;
        }
    }
    ctx->pc = 0x38C868u;
    // 0x38c868: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x38c868u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x38c86c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x38c86cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x38c870: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x38c870u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x38c874: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x38c874u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x38c878: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x38c878u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x38c87c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x38c87cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x38c880: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x38c880u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x38c884: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x38c884u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x38c888: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x38c888u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x38c88c: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x38c88cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x38c890: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x38c890u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x38c894: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x38c894u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_38c898:
    // 0x38c898: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x38c898u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x10002020
    // 0x38c89c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38c89cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x38c8a0: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x38c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x38c8a4: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x38c8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x38c8a8: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x38c8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x38c8ac: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x38c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x38c8b0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x38c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x38c8b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38c8b8: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x38c8b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x38c8bc: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C8BCu;
    {
        const bool branch_taken_0x38c8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x38C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8BCu;
        // 0x38c8c0: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8bc) {
            ctx->pc = 0x38C8D4u;
            goto label_38c8d4;
        }
    }
    ctx->pc = 0x38C8C4u;
    // 0x38c8c4: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x38C8C4u;
    {
        const bool branch_taken_0x38c8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x38c8c4) {
            ctx->pc = 0x38C8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C8C4u;
            // 0x38c8c8: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C8D8u;
            goto label_38c8d8;
        }
    }
    ctx->pc = 0x38C8CCu;
    // 0x38c8cc: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x38C8CCu;
    {
        const bool branch_taken_0x38c8cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x38c8cc) {
            ctx->pc = 0x38C8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C8CCu;
            // 0x38c8d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C904u;
            goto label_38c904;
        }
    }
    ctx->pc = 0x38C8D4u;
label_38c8d4:
    // 0x38c8d4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x38c8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_38c8d8:
    // 0x38c8d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38C8D8u;
    {
        const bool branch_taken_0x38c8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8D8u;
        // 0x38c8dc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8d8) {
            ctx->pc = 0x38C904u;
            goto label_38c904;
        }
    }
    ctx->pc = 0x38C8E0u;
    // 0x38c8e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x38c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38c8e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38C8E4u;
    {
        const bool branch_taken_0x38c8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8E4u;
        // 0x38c8e8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8e4) {
            ctx->pc = 0x38C904u;
            goto label_38c904;
        }
    }
    ctx->pc = 0x38C8ECu;
    // 0x38c8ec: 0xc0e182c  jal         func_3860B0
    ctx->pc = 0x38C8ECu;
    SET_GPR_U32(ctx, 31, 0x38C8F4u);
    ctx->pc = 0x38C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C8ECu;
    // 0x38c8f0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3860B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3860B0u, 0x38C8ECu, 0x38C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C8F4u;
label_38c8f4:
    // 0x38c8f4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x38c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x38c8f8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x38C8F8u;
    {
        const bool branch_taken_0x38c8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8F8u;
        // 0x38c8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c8f8) {
            ctx->pc = 0x38C924u;
            goto label_38c924;
        }
    }
    ctx->pc = 0x38C900u;
    // 0x38c900: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38c900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38c904:
    // 0x38c904: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x38c904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x38c908: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38C908u;
    {
        const bool branch_taken_0x38c908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C908u;
        // 0x38c90c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c908) {
            ctx->pc = 0x38C934u;
            goto label_38c934;
        }
    }
    ctx->pc = 0x38C910u;
    // 0x38c910: 0xc0e182c  jal         func_3860B0
    ctx->pc = 0x38C910u;
    SET_GPR_U32(ctx, 31, 0x38C918u);
    ctx->pc = 0x38C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C910u;
    // 0x38c914: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3860B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3860B0u, 0x38C910u, 0x38C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C918u;
label_38c918:
    // 0x38c918: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x38c918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x38c91c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C91Cu;
    {
        const bool branch_taken_0x38c91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C91Cu;
        // 0x38c920: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c91c) {
            ctx->pc = 0x38C934u;
            goto label_38c934;
        }
    }
    ctx->pc = 0x38C924u;
label_38c924:
    // 0x38c924: 0xc0e289e  jal         func_38A278
    ctx->pc = 0x38C924u;
    SET_GPR_U32(ctx, 31, 0x38C92Cu);
    ctx->pc = 0x38A278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A278u, 0x38C924u, 0x38C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C92Cu;
label_38c92c:
    // 0x38c92c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38C92Cu;
    {
        const bool branch_taken_0x38c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C92Cu;
        // 0x38c930: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c92c) {
            ctx->pc = 0x38C948u;
            goto label_38c948;
        }
    }
    ctx->pc = 0x38C934u;
label_38c934:
    // 0x38c934: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38c934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38c938: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x38c938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x38c93c: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x38C93Cu;
    {
        const bool branch_taken_0x38c93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x38c93c) {
            ctx->pc = 0x38C898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38c898;
        }
    }
    ctx->pc = 0x38C944u;
    // 0x38c944: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x38c944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_38c948:
    // 0x38c948: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38c948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38c94c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x38c94cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38c950: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x38c950u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38c954: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x38c954u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c958: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38c958u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c95c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38c95cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c960: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38c960u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c964: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38c964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c968: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38c968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c970: 0x3e00008  jr          $ra
    ctx->pc = 0x38C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C970u;
        // 0x38c974: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C978u;
}
