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

// Function: sub_003C5718
// Address: 0x3c5718 - 0x3c5948
void sub_003C5718_0x3c5718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5718_0x3c5718");
#endif

    switch (ctx->pc) {
        case 0x3c5768u: goto label_3c5768;
        case 0x3c581cu: goto label_3c581c;
        case 0x3c5834u: goto label_3c5834;
        case 0x3c5840u: goto label_3c5840;
        case 0x3c5880u: goto label_3c5880;
        default: break;
    }

    ctx->pc = 0x3c5718u;

    // 0x3c5718: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c5718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3c571c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3c571cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3c5720: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3c5720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3c5724: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3c5724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3c5728: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3c5728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3c572c: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x3c572cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x3c5730: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3c5730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3c5734: 0x27c50c11  addiu       $a1, $fp, 0xC11
    ctx->pc = 0x3c5734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3089));
    // 0x3c5738: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3c5738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3c573c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c573cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5740: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3c5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3c5744: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3c5744u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5748: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c5748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3c574c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c5750: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3c5750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3c5754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c5754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c5758: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3c5758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3c575c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3c575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3c5760: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x3c5760u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c5764: 0x0  nop
    ctx->pc = 0x3c5764u;
    // NOP
label_3c5768:
    // 0x3c5768: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c5768u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c576c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x3c576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3c5770: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c5770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c5774: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c5774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3c5778: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C5778u;
    {
        const bool branch_taken_0x3c5778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5778u;
        // 0x3c577c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5778) {
            ctx->pc = 0x3C5768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5768;
        }
    }
    ctx->pc = 0x3C5780u;
    // 0x3c5780: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c5780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c5784: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5784u;
    {
        const bool branch_taken_0x3c5784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5784u;
        // 0x3c5788: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5784) {
            ctx->pc = 0x3C5798u;
            goto label_3c5798;
        }
    }
    ctx->pc = 0x3C578Cu;
    // 0x3c578c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c578cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c5790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5790u;
    {
        const bool branch_taken_0x3c5790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5790u;
        // 0x3c5794: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5790) {
            ctx->pc = 0x3C57A4u;
            goto label_3c57a4;
        }
    }
    ctx->pc = 0x3C5798u;
label_3c5798:
    // 0x3c5798: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5798u;
    {
        const bool branch_taken_0x3c5798 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c5798) {
            ctx->pc = 0x3C57A8u;
            goto label_3c57a8;
        }
    }
    ctx->pc = 0x3C57A0u;
    // 0x3c57a0: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c57a0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3c57a4:
    // 0x3c57a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c57a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c57a8:
    // 0x3c57a8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C57A8u;
    {
        const bool branch_taken_0x3c57a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57A8u;
        // 0x3c57ac: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57a8) {
            ctx->pc = 0x3C57B8u;
            goto label_3c57b8;
        }
    }
    ctx->pc = 0x3C57B0u;
    // 0x3c57b0: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C57B0u;
    {
        const bool branch_taken_0x3c57b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c57b0) {
            ctx->pc = 0x3C57E4u;
            goto label_3c57e4;
        }
    }
    ctx->pc = 0x3C57B8u;
label_3c57b8:
    // 0x3c57b8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3c57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3c57bc: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C57BCu;
    {
        const bool branch_taken_0x3c57bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57BCu;
        // 0x3c57c0: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57bc) {
            ctx->pc = 0x3C57E4u;
            goto label_3c57e4;
        }
    }
    ctx->pc = 0x3C57C4u;
    // 0x3c57c4: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3c57c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c57c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C57C8u;
    {
        const bool branch_taken_0x3c57c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57C8u;
        // 0x3c57cc: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57c8) {
            ctx->pc = 0x3C57D8u;
            goto label_3c57d8;
        }
    }
    ctx->pc = 0x3C57D0u;
    // 0x3c57d0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C57D0u;
    {
        const bool branch_taken_0x3c57d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c57d0) {
            ctx->pc = 0x3C57E4u;
            goto label_3c57e4;
        }
    }
    ctx->pc = 0x3C57D8u;
label_3c57d8:
    // 0x3c57d8: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x3c57d8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3c57dc: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3c57dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c57e0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3c57e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_3c57e4:
    // 0x3c57e4: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C57E4u;
    {
        const bool branch_taken_0x3c57e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57E4u;
        // 0x3c57e8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57e4) {
            ctx->pc = 0x3C57F8u;
            goto label_3c57f8;
        }
    }
    ctx->pc = 0x3C57ECu;
    // 0x3c57ec: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x3c57ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c57f0: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x3c57f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x3c57f4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3c57f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3c57f8:
    // 0x3c57f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c57fc: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x3c57fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x3c5800: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3c5800u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c5804: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x3c5804u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x3c5808: 0x57a00b  movn        $s4, $v0, $s7
    ctx->pc = 0x3c5808u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x3c580c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3c580cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c5810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5814: 0xc0f4d12  jal         func_3D3448
    ctx->pc = 0x3C5814u;
    SET_GPR_U32(ctx, 31, 0x3C581Cu);
    ctx->pc = 0x3C5818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5814u;
    // 0x3c5818: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3448u, 0x3C5814u, 0x3C581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C581Cu;
label_3c581c:
    // 0x3c581c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3c581cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5820: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c5820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5824: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x3c5824u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c5828: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x3c5828u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x3c582c: 0xc0f4b9e  jal         func_3D2E78
    ctx->pc = 0x3C582Cu;
    SET_GPR_U32(ctx, 31, 0x3C5834u);
    ctx->pc = 0x3C5830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C582Cu;
    // 0x3c5830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x3C582Cu, 0x3C5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5834u;
label_3c5834:
    // 0x3c5834: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c5834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5838: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C5838u;
    {
        const bool branch_taken_0x3c5838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5838u;
        // 0x3c583c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5838) {
            ctx->pc = 0x3C588Cu;
            goto label_3c588c;
        }
    }
    ctx->pc = 0x3C5840u;
label_3c5840:
    // 0x3c5840: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x3c5840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3c5844: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C5844u;
    {
        const bool branch_taken_0x3c5844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5844) {
            ctx->pc = 0x3C58C4u;
            goto label_3c58c4;
        }
    }
    ctx->pc = 0x3C584Cu;
    // 0x3c584c: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C584Cu;
    {
        const bool branch_taken_0x3c584c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x3C5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C584Cu;
        // 0x3c5850: 0x284102b  sltu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c584c) {
            ctx->pc = 0x3C5870u;
            goto label_3c5870;
        }
    }
    ctx->pc = 0x3C5854u;
    // 0x3c5854: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3C5854u;
    {
        const bool branch_taken_0x3c5854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5854) {
            ctx->pc = 0x3C5858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5854u;
            // 0x3c5858: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5884u;
            goto label_3c5884;
        }
    }
    ctx->pc = 0x3C585Cu;
    // 0x3c585c: 0x14940006  bne         $a0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C585Cu;
    {
        const bool branch_taken_0x3c585c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x3C5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C585Cu;
        // 0x3c5860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c585c) {
            ctx->pc = 0x3C5878u;
            goto label_3c5878;
        }
    }
    ctx->pc = 0x3C5864u;
    // 0x3c5864: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x3c5864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3c5868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5868u;
    {
        const bool branch_taken_0x3c5868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5868) {
            ctx->pc = 0x3C5878u;
            goto label_3c5878;
        }
    }
    ctx->pc = 0x3C5870u;
label_3c5870:
    // 0x3c5870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5870u;
    {
        const bool branch_taken_0x3c5870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5870u;
        // 0x3c5874: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5870) {
            ctx->pc = 0x3C5884u;
            goto label_3c5884;
        }
    }
    ctx->pc = 0x3C5878u;
label_3c5878:
    // 0x3c5878: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3C5878u;
    SET_GPR_U32(ctx, 31, 0x3C5880u);
    ctx->pc = 0x3C587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5878u;
    // 0x3c587c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3C5878u, 0x3C5880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5880u;
label_3c5880:
    // 0x3c5880: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x3c5880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_3c5884:
    // 0x3c5884: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3c5884u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c5888: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c5888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c588c:
    // 0x3c588c: 0x27c20c11  addiu       $v0, $fp, 0xC11
    ctx->pc = 0x3c588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 3089));
    // 0x3c5890: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c5890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c5894: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3c5894u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c5898: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3c5898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3c589c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C589Cu;
    {
        const bool branch_taken_0x3c589c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C58A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C589Cu;
        // 0x3c58a0: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c589c) {
            ctx->pc = 0x3C58ACu;
            goto label_3c58ac;
        }
    }
    ctx->pc = 0x3C58A4u;
    // 0x3c58a4: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x3C58A4u;
    {
        const bool branch_taken_0x3c58a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58A4u;
        // 0x3c58a8: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58a4) {
            ctx->pc = 0x3C5840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5840;
        }
    }
    ctx->pc = 0x3C58ACu;
label_3c58ac:
    // 0x3c58ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C58ACu;
    {
        const bool branch_taken_0x3c58ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58ACu;
        // 0x3c58b0: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58ac) {
            ctx->pc = 0x3C58C4u;
            goto label_3c58c4;
        }
    }
    ctx->pc = 0x3C58B4u;
    // 0x3c58b4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3c58b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3c58b8: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x3c58b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x3c58bc: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3C58BCu;
    {
        const bool branch_taken_0x3c58bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58BCu;
        // 0x3c58c0: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58bc) {
            ctx->pc = 0x3C5840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5840;
        }
    }
    ctx->pc = 0x3C58C4u;
label_3c58c4:
    // 0x3c58c4: 0x6a1000a  bgez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x3C58C4u;
    {
        const bool branch_taken_0x3c58c4 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3C58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58C4u;
        // 0x3c58c8: 0x4102f  dsubu       $v0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58c4) {
            ctx->pc = 0x3C58F0u;
            goto label_3c58f0;
        }
    }
    ctx->pc = 0x3C58CCu;
    // 0x3c58cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c58d0: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x3c58d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x3c58d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c58d8: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x3c58d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x3c58dc: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x3c58dcu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x3c58e0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3c58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3c58e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c58e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C58E8u;
    {
        const bool branch_taken_0x3c58e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58E8u;
        // 0x3c58ec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58e8) {
            ctx->pc = 0x3C58F4u;
            goto label_3c58f4;
        }
    }
    ctx->pc = 0x3C58F0u;
label_3c58f0:
    // 0x3c58f0: 0x57200b  movn        $a0, $v0, $s7
    ctx->pc = 0x3c58f0u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3c58f4:
    // 0x3c58f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3c58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3c58f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C58F8u;
    {
        const bool branch_taken_0x3c58f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58F8u;
        // 0x3c58fc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58f8) {
            ctx->pc = 0x3C5910u;
            goto label_3c5910;
        }
    }
    ctx->pc = 0x3C5900u;
    // 0x3c5900: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3c5900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3c5904: 0x75100a  movz        $v0, $v1, $s5
    ctx->pc = 0x3c5904u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3c5908: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3c5908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3c590c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3c590cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3c5910:
    // 0x3c5910: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3c5910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c5914: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c5914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5918: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3c5918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c591c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3c591cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c5920: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3c5920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c5924: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c5924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c5928: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c5928u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c592c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3c592cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5930: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3c5930u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5934: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3c5934u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c5938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c593c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C593Cu;
        // 0x3c5940: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C593Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5944u;
    // 0x3c5944: 0x0  nop
    ctx->pc = 0x3c5944u;
    // NOP
    ctx->pc = 0x3c5948u;
}
