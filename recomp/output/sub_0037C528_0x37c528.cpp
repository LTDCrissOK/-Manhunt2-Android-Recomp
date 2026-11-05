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

// Function: sub_0037C528
// Address: 0x37c528 - 0x37c7c8
void sub_0037C528_0x37c528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C528_0x37c528");
#endif

    switch (ctx->pc) {
        case 0x37c588u: goto label_37c588;
        case 0x37c5e4u: goto label_37c5e4;
        case 0x37c668u: goto label_37c668;
        case 0x37c6c0u: goto label_37c6c0;
        default: break;
    }

    ctx->pc = 0x37c528u;

    // 0x37c528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37c528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37c52c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x37c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x37c530: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x37c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x37c534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c538: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x37c538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x37c53c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37c540: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x37c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x37c544: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x37c544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c548: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x37c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x37c54c: 0x3c176c00  lui         $s7, 0x6C00
    ctx->pc = 0x37c54cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)27648 << 16));
    // 0x37c550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37c554: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x37c554u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c558: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x37c55c: 0x36f78001  ori         $s7, $s7, 0x8001
    ctx->pc = 0x37c55cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32769);
    // 0x37c560: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x37c560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x37c564: 0x2696001c  addiu       $s6, $s4, 0x1C
    ctx->pc = 0x37c564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x37c568: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x37c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x37c56c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x37c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x37c570: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x37c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x37c574: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x37c574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x37c578: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x37c578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x37c57c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x37c57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x37c580: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x37c580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x37c584: 0x0  nop
    ctx->pc = 0x37c584u;
    // NOP
label_37c588:
    // 0x37c588: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x37c588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x37c58c: 0x26830004  addiu       $v1, $s4, 0x4
    ctx->pc = 0x37c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x37c590: 0x62a821  addu        $s5, $v1, $v0
    ctx->pc = 0x37c590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c594: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x37c594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x37c598: 0x10800076  beqz        $a0, . + 4 + (0x76 << 2)
    ctx->pc = 0x37C598u;
    {
        const bool branch_taken_0x37c598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C598u;
        // 0x37c59c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c598) {
            ctx->pc = 0x37C774u;
            goto label_37c774;
        }
    }
    ctx->pc = 0x37C5A0u;
    // 0x37c5a0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x37c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x37c5a4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x37c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x37c5a8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x37C5A8u;
    {
        const bool branch_taken_0x37c5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5A8u;
        // 0x37c5ac: 0x3c13005c  lui         $s3, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5a8) {
            ctx->pc = 0x37C694u;
            goto label_37c694;
        }
    }
    ctx->pc = 0x37C5B0u;
    // 0x37c5b0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37c5b4: 0x2665f910  addiu       $a1, $s3, -0x6F0
    ctx->pc = 0x37c5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965520));
    // 0x37c5b8: 0x8e63f910  lw          $v1, -0x6F0($s3)
    ctx->pc = 0x37c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965520)));
    // 0x37c5bc: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x37c5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37c5c0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x37c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37c5c4: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x37c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x37c5c8: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x37c5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37c5cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x37c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x37c5d0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x37c5d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37c5d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C5D4u;
    {
        const bool branch_taken_0x37c5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5D4u;
        // 0x37c5d8: 0x8e70f910  lw          $s0, -0x6F0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5d4) {
            ctx->pc = 0x37C5E8u;
            goto label_37c5e8;
        }
    }
    ctx->pc = 0x37C5DCu;
    // 0x37c5dc: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37C5DCu;
    SET_GPR_U32(ctx, 31, 0x37C5E4u);
    ctx->pc = 0x37C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C5DCu;
    // 0x37c5e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37C5DCu, 0x37C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C5E4u;
label_37c5e4:
    // 0x37c5e4: 0x8e70f910  lw          $s0, -0x6F0($s3)
    ctx->pc = 0x37c5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965520)));
label_37c5e8:
    // 0x37c5e8: 0x3a220100  xori        $v0, $s1, 0x100
    ctx->pc = 0x37c5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)256);
    // 0x37c5ec: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x37c5ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x37c5f0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x37c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x37c5f4: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x37c5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37c5f8: 0xae63f910  sw          $v1, -0x6F0($s3)
    ctx->pc = 0x37c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294965520), GPR_U32(ctx, 3));
    // 0x37c5fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x37c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x37c600: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x37c600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x37c604: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x37c604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x37c608: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x37c608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x37c60c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x37c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x37c610: 0x2222825  or          $a1, $s1, $v0
    ctx->pc = 0x37c610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x37c614: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x37c614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x37c618: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x37c618u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x37c61c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x37c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x37c620: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x37c620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x37c624: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37c624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37c628: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x37c628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x37c62c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x37c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x37c630: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x37c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x37c634: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x37c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x37c638: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x37c638u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x37c63c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37c640: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x37c640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x37c644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x37c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c648: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x37c648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x37c64c: 0xfe050020  sd          $a1, 0x20($s0)
    ctx->pc = 0x37c64cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
    // 0x37c650: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x37c650u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x37c654: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x37c654u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x37c658: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x37c658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37c65c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x37c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x37c660: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x37C660u;
    SET_GPR_U32(ctx, 31, 0x37C668u);
    ctx->pc = 0x37C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C660u;
    // 0x37c664: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x37C660u, 0x37C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C668u;
label_37c668:
    // 0x37c668: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x37c668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x37c66c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x37c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37c670: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x37c670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x37c674: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x37c674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x37c678: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x37c678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37c67c: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x37c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x37c680: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x37c680u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x37c684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37c684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37c688: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x37c688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x37c68c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x37C68Cu;
    {
        const bool branch_taken_0x37c68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C68Cu;
        // 0x37c690: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c68c) {
            ctx->pc = 0x37C75Cu;
            goto label_37c75c;
        }
    }
    ctx->pc = 0x37C694u;
label_37c694:
    // 0x37c694: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x37c694u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x37c698: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37c69c: 0x2625f910  addiu       $a1, $s1, -0x6F0
    ctx->pc = 0x37c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965520));
    // 0x37c6a0: 0x8e23f910  lw          $v1, -0x6F0($s1)
    ctx->pc = 0x37c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF910u));
    // 0x37c6a4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x37c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5BF914u));
    // 0x37c6a8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x37c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x37c6ac: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x37c6acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37c6b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C6B0u;
    {
        const bool branch_taken_0x37c6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C6B0u;
        // 0x37c6b4: 0x28080  sll         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c6b0) {
            ctx->pc = 0x37C6C0u;
            goto label_37c6c0;
        }
    }
    ctx->pc = 0x37C6B8u;
    // 0x37c6b8: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37C6B8u;
    SET_GPR_U32(ctx, 31, 0x37C6C0u);
    ctx->pc = 0x37C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C6B8u;
    // 0x37c6bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37C6B8u, 0x37C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C6C0u;
label_37c6c0:
    // 0x37c6c0: 0x8e25f910  lw          $a1, -0x6F0($s1)
    ctx->pc = 0x37c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
    // 0x37c6c4: 0x3a020100  xori        $v0, $s0, 0x100
    ctx->pc = 0x37c6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)256);
    // 0x37c6c8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x37c6c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x37c6cc: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x37c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x37c6d0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x37c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x37c6d4: 0xae23f910  sw          $v1, -0x6F0($s1)
    ctx->pc = 0x37c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 3));
    // 0x37c6d8: 0x2022025  or          $a0, $s0, $v0
    ctx->pc = 0x37c6d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x37c6dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x37c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x37c6e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x37c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x37c6e4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x37c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x37c6e8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x37c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x37c6ec: 0x24a90010  addiu       $t1, $a1, 0x10
    ctx->pc = 0x37c6ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x37c6f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x37c6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x37c6f4: 0x103400  sll         $a2, $s0, 16
    ctx->pc = 0x37c6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x37c6f8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x37c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x37c6fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x37c6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x37c700: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x37c700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x37c704: 0xd73025  or          $a2, $a2, $s7
    ctx->pc = 0x37c704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    // 0x37c708: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x37c708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x37c70c: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x37c70cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x37c710: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x37c710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x37c714: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x37c714u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x37c718: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37c71c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x37c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x37c720: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x37c720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c724: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x37c724u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x37c728: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x37c728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
    // 0x37c72c: 0x9ea20000  lwu         $v0, 0x0($s5)
    ctx->pc = 0x37c72cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x37c730: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37c730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37c734: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37c734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37c738: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x37c738u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x37c73c: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x37c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x37c740: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x37c740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x37c744: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x37c744u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x37c748: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x37c748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37c74c: 0xfca40030  sd          $a0, 0x30($a1)
    ctx->pc = 0x37c74cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 4));
    // 0x37c750: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37c754: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x37c754u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x37c758: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x37c758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_37c75c:
    // 0x37c75c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x37c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37c760: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x37c760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x37c764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37c764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37c768: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x37c768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37c76c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37c770: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x37c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_37c774:
    // 0x37c774: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x37c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37c778: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x37c778u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x37c77c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x37c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x37c780: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x37c780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x37c784: 0x2fc20002  sltiu       $v0, $fp, 0x2
    ctx->pc = 0x37c784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x37c788: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x37C788u;
    {
        const bool branch_taken_0x37c788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C788u;
        // 0x37c78c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c788) {
            ctx->pc = 0x37C588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c588;
        }
    }
    ctx->pc = 0x37C790u;
    // 0x37c790: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x37c790u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
    // 0x37c794: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37c794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c798: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x37c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x37c79c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x37c79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c7a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x37c7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c7a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x37c7a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37c7a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x37c7a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c7ac: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x37c7acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37c7b0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x37c7b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c7b4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x37c7b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37c7b8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x37c7b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37c7bc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x37c7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x37c7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7C0u;
        // 0x37c7c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C7C8u;
}
