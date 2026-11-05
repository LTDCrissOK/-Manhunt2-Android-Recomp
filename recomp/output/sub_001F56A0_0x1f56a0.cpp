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

// Function: sub_001F56A0
// Address: 0x1f56a0 - 0x1f5908
void sub_001F56A0_0x1f56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F56A0_0x1f56a0");
#endif

    switch (ctx->pc) {
        case 0x1f56f8u: goto label_1f56f8;
        case 0x1f5710u: goto label_1f5710;
        case 0x1f5768u: goto label_1f5768;
        case 0x1f5780u: goto label_1f5780;
        case 0x1f578cu: goto label_1f578c;
        case 0x1f57a0u: goto label_1f57a0;
        case 0x1f57b4u: goto label_1f57b4;
        case 0x1f57c8u: goto label_1f57c8;
        case 0x1f57d0u: goto label_1f57d0;
        case 0x1f57f0u: goto label_1f57f0;
        case 0x1f5884u: goto label_1f5884;
        case 0x1f58a0u: goto label_1f58a0;
        default: break;
    }

    ctx->pc = 0x1f56a0u;

    // 0x1f56a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f56a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f56a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f56a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f56ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f56acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f56b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f56b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f56b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f56b8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1f56b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f56bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f56bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f56c0: 0x8e0303c0  lw          $v1, 0x3C0($s0)
    ctx->pc = 0x1f56c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x1f56c4: 0x5060008b  beql        $v1, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x1F56C4u;
    {
        const bool branch_taken_0x1f56c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f56c4) {
            ctx->pc = 0x1F56C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F56C4u;
            // 0x1f56c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F58F4u;
            goto label_1f58f4;
        }
    }
    ctx->pc = 0x1F56CCu;
    // 0x1f56cc: 0xde0215e8  ld          $v0, 0x15E8($s0)
    ctx->pc = 0x1f56ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 5608)));
    // 0x1f56d0: 0x54400088  bnel        $v0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x1F56D0u;
    {
        const bool branch_taken_0x1f56d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f56d0) {
            ctx->pc = 0x1F56D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F56D0u;
            // 0x1f56d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F58F4u;
            goto label_1f58f4;
        }
    }
    ctx->pc = 0x1F56D8u;
    // 0x1f56d8: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x1f56d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x1f56dc: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F56DCu;
    {
        const bool branch_taken_0x1f56dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f56dc) {
            ctx->pc = 0x1F56E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F56DCu;
            // 0x1f56e0: 0x8e0503fc  lw          $a1, 0x3FC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F57E8u;
            goto label_1f57e8;
        }
    }
    ctx->pc = 0x1F56E4u;
    // 0x1f56e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1f56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1f56e8: 0x8e0503e8  lw          $a1, 0x3E8($s0)
    ctx->pc = 0x1f56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x1f56ec: 0x24529c38  addiu       $s2, $v0, -0x63C8
    ctx->pc = 0x1f56ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941752));
    // 0x1f56f0: 0xc080a1c  jal         func_202870
    ctx->pc = 0x1F56F0u;
    SET_GPR_U32(ctx, 31, 0x1F56F8u);
    ctx->pc = 0x1F56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56F0u;
    // 0x1f56f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202870u, 0x1F56F0u, 0x1F56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56F8u;
label_1f56f8:
    // 0x1f56f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f56f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f56fc: 0x5043001c  beql        $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F56FCu;
    {
        const bool branch_taken_0x1f56fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f56fc) {
            ctx->pc = 0x1F5700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F56FCu;
            // 0x1f5700: 0x8e020404  lw          $v0, 0x404($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5770u;
            goto label_1f5770;
        }
    }
    ctx->pc = 0x1F5704u;
    // 0x1f5704: 0x8e0503e8  lw          $a1, 0x3E8($s0)
    ctx->pc = 0x1f5704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x1f5708: 0xc080a70  jal         func_2029C0
    ctx->pc = 0x1F5708u;
    SET_GPR_U32(ctx, 31, 0x1F5710u);
    ctx->pc = 0x1F570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5708u;
    // 0x1f570c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029C0u, 0x1F5708u, 0x1F5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5710u;
label_1f5710:
    // 0x1f5710: 0x8e030400  lw          $v1, 0x400($s0)
    ctx->pc = 0x1f5710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    // 0x1f5714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f5714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f5718: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x1f5718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f571c: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1F571Cu;
    {
        const bool branch_taken_0x1f571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F571Cu;
        // 0x1f5720: 0xae030400  sw          $v1, 0x400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f571c) {
            ctx->pc = 0x1F58F0u;
            goto label_1f58f0;
        }
    }
    ctx->pc = 0x1F5724u;
    // 0x1f5724: 0x240235e3  addiu       $v0, $zero, 0x35E3
    ctx->pc = 0x1f5724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f5728: 0x340383d0  ori         $v1, $zero, 0x83D0
    ctx->pc = 0x1f5728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33744);
    // 0x1f572c: 0xae0203e8  sw          $v0, 0x3E8($s0)
    ctx->pc = 0x1f572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
    // 0x1f5730: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1f5730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f5734: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1f5734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x1f5738: 0xae0203e0  sw          $v0, 0x3E0($s0)
    ctx->pc = 0x1f5738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 2));
    // 0x1f573c: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1f573cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x1f5740: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1f5740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1f5744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5748: 0x340583fc  ori         $a1, $zero, 0x83FC
    ctx->pc = 0x1f5748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33788);
    // 0x1f574c: 0xae0003f8  sw          $zero, 0x3F8($s0)
    ctx->pc = 0x1f574cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 0));
    // 0x1f5750: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1f5750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f5754: 0xae0003ec  sw          $zero, 0x3EC($s0)
    ctx->pc = 0x1f5754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 0));
    // 0x1f5758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f575c: 0xa20003f0  sb          $zero, 0x3F0($s0)
    ctx->pc = 0x1f575cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1008), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5760: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F5760u;
    SET_GPR_U32(ctx, 31, 0x1F5768u);
    ctx->pc = 0x1F5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5760u;
    // 0x1f5764: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F5760u, 0x1F5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5768u;
label_1f5768:
    // 0x1f5768: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1F5768u;
    {
        const bool branch_taken_0x1f5768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5768u;
        // 0x1f576c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5768) {
            ctx->pc = 0x1F58F4u;
            goto label_1f58f4;
        }
    }
    ctx->pc = 0x1F5770u;
label_1f5770:
    // 0x1f5770: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F5770u;
    {
        const bool branch_taken_0x1f5770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5770u;
        // 0x1f5774: 0x340583fc  ori         $a1, $zero, 0x83FC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33788);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5770) {
            ctx->pc = 0x1F57B8u;
            goto label_1f57b8;
        }
    }
    ctx->pc = 0x1F5778u;
    // 0x1f5778: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1F5778u;
    SET_GPR_U32(ctx, 31, 0x1F5780u);
    ctx->pc = 0x1F577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5778u;
    // 0x1f577c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1F5778u, 0x1F5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5780u;
label_1f5780:
    // 0x1f5780: 0x8e050404  lw          $a1, 0x404($s0)
    ctx->pc = 0x1f5780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x1f5784: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1F5784u;
    SET_GPR_U32(ctx, 31, 0x1F578Cu);
    ctx->pc = 0x1F5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5784u;
    // 0x1f5788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1F5784u, 0x1F578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F578Cu;
label_1f578c:
    // 0x1f578c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F578Cu;
    {
        const bool branch_taken_0x1f578c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f578c) {
            ctx->pc = 0x1F5790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F578Cu;
            // 0x1f5790: 0xae000404  sw          $zero, 0x404($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F57A8u;
            goto label_1f57a8;
        }
    }
    ctx->pc = 0x1F5794u;
    // 0x1f5794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5798: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1F5798u;
    SET_GPR_U32(ctx, 31, 0x1F57A0u);
    ctx->pc = 0x1F579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5798u;
    // 0x1f579c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1F5798u, 0x1F57A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57A0u;
label_1f57a0:
    // 0x1f57a0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1F57A0u;
    {
        const bool branch_taken_0x1f57a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57A0u;
        // 0x1f57a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57a0) {
            ctx->pc = 0x1F58F4u;
            goto label_1f58f4;
        }
    }
    ctx->pc = 0x1F57A8u;
label_1f57a8:
    // 0x1f57a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f57a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57ac: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1F57ACu;
    SET_GPR_U32(ctx, 31, 0x1F57B4u);
    ctx->pc = 0x1F57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57ACu;
    // 0x1f57b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1F57ACu, 0x1F57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57B4u;
label_1f57b4:
    // 0x1f57b4: 0x340583fc  ori         $a1, $zero, 0x83FC
    ctx->pc = 0x1f57b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33788);
label_1f57b8:
    // 0x1f57b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f57b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f57bc: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1f57bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f57c0: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F57C0u;
    SET_GPR_U32(ctx, 31, 0x1F57C8u);
    ctx->pc = 0x1F57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57C0u;
    // 0x1f57c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F57C0u, 0x1F57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57C8u;
label_1f57c8:
    // 0x1f57c8: 0xc07d642  jal         func_1F5908
    ctx->pc = 0x1F57C8u;
    SET_GPR_U32(ctx, 31, 0x1F57D0u);
    ctx->pc = 0x1F57CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57C8u;
    // 0x1f57cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5908u, 0x1F57C8u, 0x1F57D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57D0u;
label_1f57d0:
    // 0x1f57d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f57d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f57d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f57d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f57dc: 0xac4303f8  sw          $v1, 0x3F8($v0)
    ctx->pc = 0x1f57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1016), GPR_U32(ctx, 3));
    // 0x1f57e0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1F57E0u;
    {
        const bool branch_taken_0x1f57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F57E0u;
        // 0x1f57e4: 0xac400408  sw          $zero, 0x408($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1032), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f57e0) {
            ctx->pc = 0x1F58F0u;
            goto label_1f58f0;
        }
    }
    ctx->pc = 0x1F57E8u;
label_1f57e8:
    // 0x1f57e8: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1F57E8u;
    SET_GPR_U32(ctx, 31, 0x1F57F0u);
    ctx->pc = 0x1F57ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F57E8u;
    // 0x1f57ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1F57E8u, 0x1F57F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F57F0u;
label_1f57f0:
    // 0x1f57f0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F57F0u;
    {
        const bool branch_taken_0x1f57f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f57f0) {
            ctx->pc = 0x1F57F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F57F0u;
            // 0x1f57f4: 0xae0003f8  sw          $zero, 0x3F8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F588Cu;
            goto label_1f588c;
        }
    }
    ctx->pc = 0x1F57F8u;
    // 0x1f57f8: 0x8e0203e8  lw          $v0, 0x3E8($s0)
    ctx->pc = 0x1f57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x1f57fc: 0x8e0303e4  lw          $v1, 0x3E4($s0)
    ctx->pc = 0x1f57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1f5800: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f5800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f5804: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x1F5804u;
    {
        const bool branch_taken_0x1f5804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5804) {
            ctx->pc = 0x1F5808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5804u;
            // 0x1f5808: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F58F4u;
            goto label_1f58f4;
        }
    }
    ctx->pc = 0x1F580Cu;
    // 0x1f580c: 0x8e020408  lw          $v0, 0x408($s0)
    ctx->pc = 0x1f580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x1f5810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5814: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5814u;
    {
        const bool branch_taken_0x1f5814 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5814u;
        // 0x1f5818: 0xae020408  sw          $v0, 0x408($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5814) {
            ctx->pc = 0x1F5830u;
            goto label_1f5830;
        }
    }
    ctx->pc = 0x1F581Cu;
    // 0x1f581c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f581cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5820: 0x0  nop
    ctx->pc = 0x1f5820u;
    // NOP
    // 0x1f5824: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f5824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f5828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5828u;
    {
        const bool branch_taken_0x1f5828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5828) {
            ctx->pc = 0x1F584Cu;
            goto label_1f584c;
        }
    }
    ctx->pc = 0x1F5830u;
label_1f5830:
    // 0x1f5830: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1f5830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1f5834: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f5834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f5838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f5838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f583c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f583cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5840: 0x0  nop
    ctx->pc = 0x1f5840u;
    // NOP
    // 0x1f5844: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f5844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f5848: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f5848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1f584c:
    // 0x1f584c: 0x3c0141c7  lui         $at, 0x41C7
    ctx->pc = 0x1f584cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16839 << 16));
    // 0x1f5850: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1f5850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1f5854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f5854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5858: 0x0  nop
    ctx->pc = 0x1f5858u;
    // NOP
    // 0x1f585c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f585cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5860: 0x0  nop
    ctx->pc = 0x1f5860u;
    // NOP
    // 0x1f5864: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1F5864u;
    {
        const bool branch_taken_0x1f5864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5864u;
        // 0x1f5868: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5864) {
            ctx->pc = 0x1F58F0u;
            goto label_1f58f0;
        }
    }
    ctx->pc = 0x1F586Cu;
    // 0x1f586c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f5870: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f5870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f5874: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1f5874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1f5878: 0x8c4503e8  lw          $a1, 0x3E8($v0)
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
    // 0x1f587c: 0xc080a70  jal         func_2029C0
    ctx->pc = 0x1F587Cu;
    SET_GPR_U32(ctx, 31, 0x1F5884u);
    ctx->pc = 0x1F5880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F587Cu;
    // 0x1f5880: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029C0u, 0x1F587Cu, 0x1F5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5884u;
label_1f5884:
    // 0x1f5884: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F5884u;
    {
        const bool branch_taken_0x1f5884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5884u;
        // 0x1f5888: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5884) {
            ctx->pc = 0x1F58F4u;
            goto label_1f58f4;
        }
    }
    ctx->pc = 0x1F588Cu;
label_1f588c:
    // 0x1f588c: 0x340583fc  ori         $a1, $zero, 0x83FC
    ctx->pc = 0x1f588cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33788);
    // 0x1f5890: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1f5890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f5894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5898: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F5898u;
    SET_GPR_U32(ctx, 31, 0x1F58A0u);
    ctx->pc = 0x1F589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5898u;
    // 0x1f589c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F5898u, 0x1F58A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58A0u;
label_1f58a0:
    // 0x1f58a0: 0x8e0303e8  lw          $v1, 0x3E8($s0)
    ctx->pc = 0x1f58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x1f58a4: 0x8e0203e4  lw          $v0, 0x3E4($s0)
    ctx->pc = 0x1f58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 996)));
    // 0x1f58a8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f58a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f58ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F58ACu;
    {
        const bool branch_taken_0x1f58ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58ACu;
        // 0x1f58b0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58ac) {
            ctx->pc = 0x1F58E4u;
            goto label_1f58e4;
        }
    }
    ctx->pc = 0x1F58B4u;
    // 0x1f58b4: 0x240235e3  addiu       $v0, $zero, 0x35E3
    ctx->pc = 0x1f58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f58b8: 0x340383d0  ori         $v1, $zero, 0x83D0
    ctx->pc = 0x1f58b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33744);
    // 0x1f58bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1f58bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f58c0: 0xae0203e8  sw          $v0, 0x3E8($s0)
    ctx->pc = 0x1f58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
    // 0x1f58c4: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1f58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x1f58c8: 0xae0203e0  sw          $v0, 0x3E0($s0)
    ctx->pc = 0x1f58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 2));
    // 0x1f58cc: 0xae0203e4  sw          $v0, 0x3E4($s0)
    ctx->pc = 0x1f58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 996), GPR_U32(ctx, 2));
    // 0x1f58d0: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1f58d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1f58d4: 0xae000404  sw          $zero, 0x404($s0)
    ctx->pc = 0x1f58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 0));
    // 0x1f58d8: 0xae0003ec  sw          $zero, 0x3EC($s0)
    ctx->pc = 0x1f58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 0));
    // 0x1f58dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F58DCu;
    {
        const bool branch_taken_0x1f58dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58DCu;
        // 0x1f58e0: 0xa20003f0  sb          $zero, 0x3F0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1008), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58dc) {
            ctx->pc = 0x1F58F0u;
            goto label_1f58f0;
        }
    }
    ctx->pc = 0x1F58E4u;
label_1f58e4:
    // 0x1f58e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f58e8: 0xae0203e8  sw          $v0, 0x3E8($s0)
    ctx->pc = 0x1f58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
    // 0x1f58ec: 0xae030400  sw          $v1, 0x400($s0)
    ctx->pc = 0x1f58ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 3));
label_1f58f0:
    // 0x1f58f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f58f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f58f4:
    // 0x1f58f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f58f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f58f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f58f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f58fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f58fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5900: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5900u;
        // 0x1f5904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5908u;
}
