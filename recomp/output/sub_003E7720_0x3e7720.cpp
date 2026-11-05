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

// Function: sub_003E7720
// Address: 0x3e7720 - 0x3e78e0
void sub_003E7720_0x3e7720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7720_0x3e7720");
#endif

    switch (ctx->pc) {
        case 0x3e776cu: goto label_3e776c;
        case 0x3e7780u: goto label_3e7780;
        case 0x3e7798u: goto label_3e7798;
        case 0x3e77a4u: goto label_3e77a4;
        case 0x3e77e8u: goto label_3e77e8;
        case 0x3e7860u: goto label_3e7860;
        case 0x3e7870u: goto label_3e7870;
        case 0x3e7880u: goto label_3e7880;
        case 0x3e788cu: goto label_3e788c;
        default: break;
    }

    ctx->pc = 0x3e7720u;

    // 0x3e7720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e7724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e7724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e7728: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e7728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e772c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e772cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e7730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e7734: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e7734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7738: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e7738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e773c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e773cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e7740: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e7740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e7744: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e7744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e7748: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e7748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e774c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e7750: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e7750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e7754: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e7754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7758: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7758u;
    {
        const bool branch_taken_0x3e7758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7758u;
        // 0x3e775c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7758) {
            ctx->pc = 0x3E77D0u;
            goto label_3e77d0;
        }
    }
    ctx->pc = 0x3E7760u;
    // 0x3e7760: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7764: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7764u;
    SET_GPR_U32(ctx, 31, 0x3E776Cu);
    ctx->pc = 0x3E7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7764u;
    // 0x3e7768: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7764u, 0x3E776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E776Cu;
label_3e776c:
    // 0x3e776c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e7770: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e7770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7774: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e7774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e7778: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7778u;
    SET_GPR_U32(ctx, 31, 0x3E7780u);
    ctx->pc = 0x3E777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7778u;
    // 0x3e777c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7778u, 0x3E7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7780u;
label_3e7780:
    // 0x3e7780: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e7780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7784: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e7784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e7788: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E7788u;
    {
        const bool branch_taken_0x3e7788 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7788u;
        // 0x3e778c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7788) {
            ctx->pc = 0x3E77B0u;
            goto label_3e77b0;
        }
    }
    ctx->pc = 0x3E7790u;
    // 0x3e7790: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7790u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7794: 0x0  nop
    ctx->pc = 0x3e7794u;
    // NOP
label_3e7798:
    // 0x3e7798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e779c: 0xc0affb6  jal         func_2BFED8
    ctx->pc = 0x3E779Cu;
    SET_GPR_U32(ctx, 31, 0x3E77A4u);
    ctx->pc = 0x3E77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E779Cu;
    // 0x3e77a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFED8u, 0x3E779Cu, 0x3E77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E77A4u;
label_3e77a4:
    // 0x3e77a4: 0x0  nop
    ctx->pc = 0x3e77a4u;
    // NOP
    // 0x3e77a8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E77A8u;
    {
        const bool branch_taken_0x3e77a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77A8u;
        // 0x3e77ac: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e77a8) {
            ctx->pc = 0x3E7798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7798;
        }
    }
    ctx->pc = 0x3E77B0u;
label_3e77b0:
    // 0x3e77b0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e77b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e77b4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e77b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e77b8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e77bc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e77bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e77c0: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e77c4: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e77c8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E77C8u;
    {
        const bool branch_taken_0x3e77c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77C8u;
        // 0x3e77cc: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e77c8) {
            ctx->pc = 0x3E78B8u;
            goto label_3e78b8;
        }
    }
    ctx->pc = 0x3E77D0u;
label_3e77d0:
    // 0x3e77d0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e77d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e77d4: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E77D4u;
    {
        const bool branch_taken_0x3e77d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E77D4u;
        // 0x3e77d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e77d4) {
            ctx->pc = 0x3E7854u;
            goto label_3e7854;
        }
    }
    ctx->pc = 0x3E77DCu;
    // 0x3e77dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e77dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e77e0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e77e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e77e4: 0x0  nop
    ctx->pc = 0x3e77e4u;
    // NOP
label_3e77e8:
    // 0x3e77e8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e77e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e77ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e77ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e77f0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e77f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e77f4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E77F4u;
    {
        const bool branch_taken_0x3e77f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e77f4) {
            ctx->pc = 0x3E77F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E77F4u;
            // 0x3e77f8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7848u;
            goto label_3e7848;
        }
    }
    ctx->pc = 0x3E77FCu;
    // 0x3e77fc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E77FCu;
    {
        const bool branch_taken_0x3e77fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e77fc) {
            ctx->pc = 0x3E7800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E77FCu;
            // 0x3e7800: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7828u;
            goto label_3e7828;
        }
    }
    ctx->pc = 0x3E7804u;
    // 0x3e7804: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7804u;
    {
        const bool branch_taken_0x3e7804 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7804u;
        // 0x3e7808: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7804) {
            ctx->pc = 0x3E7814u;
            goto label_3e7814;
        }
    }
    ctx->pc = 0x3E780Cu;
    // 0x3e780c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E780Cu;
    {
        const bool branch_taken_0x3e780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E780Cu;
        // 0x3e7810: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e780c) {
            ctx->pc = 0x3E7818u;
            goto label_3e7818;
        }
    }
    ctx->pc = 0x3E7814u;
label_3e7814:
    // 0x3e7814: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e7814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e7818:
    // 0x3e7818: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e781c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e781cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e7820: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e7820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e7824: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e7824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e7828:
    // 0x3e7828: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e7828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e782c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7830: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e7830u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e7834: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e7838: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e7838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e783c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e783cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e7840: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7840u;
    {
        const bool branch_taken_0x3e7840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7840u;
        // 0x3e7844: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7840) {
            ctx->pc = 0x3E78B8u;
            goto label_3e78b8;
        }
    }
    ctx->pc = 0x3E7848u;
label_3e7848:
    // 0x3e7848: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e7848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e784c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E784Cu;
    {
        const bool branch_taken_0x3e784c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e784c) {
            ctx->pc = 0x3E7850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E784Cu;
            // 0x3e7850: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E77E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e77e8;
        }
    }
    ctx->pc = 0x3E7854u;
label_3e7854:
    // 0x3e7854: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7858: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7858u;
    SET_GPR_U32(ctx, 31, 0x3E7860u);
    ctx->pc = 0x3E785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7858u;
    // 0x3e785c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7858u, 0x3E7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7860u;
label_3e7860:
    // 0x3e7860: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e7860u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e7864: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e7864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7868: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E7868u;
    SET_GPR_U32(ctx, 31, 0x3E7870u);
    ctx->pc = 0x3E786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7868u;
    // 0x3e786c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E7868u, 0x3E7870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7870u;
label_3e7870:
    // 0x3e7870: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e7870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e7874: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e7874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e7878: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e7878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e787c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e787cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e7880:
    // 0x3e7880: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7884: 0xc0affb6  jal         func_2BFED8
    ctx->pc = 0x3E7884u;
    SET_GPR_U32(ctx, 31, 0x3E788Cu);
    ctx->pc = 0x3E7888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7884u;
    // 0x3e7888: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFED8u, 0x3E7884u, 0x3E788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E788Cu;
label_3e788c:
    // 0x3e788c: 0x0  nop
    ctx->pc = 0x3e788cu;
    // NOP
    // 0x3e7890: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E7890u;
    {
        const bool branch_taken_0x3e7890 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7890u;
        // 0x3e7894: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7890) {
            ctx->pc = 0x3E7880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7880;
        }
    }
    ctx->pc = 0x3E7898u;
    // 0x3e7898: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e7898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e789c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e78a0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e78a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e78a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e78a8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e78a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e78ac: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e78acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e78b0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e78b4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e78b8:
    // 0x3e78b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e78b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e78bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e78bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e78c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e78c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e78c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e78c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e78c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e78c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e78cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e78ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e78d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e78d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e78d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e78d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e78d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E78D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E78D8u;
        // 0x3e78dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E78D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E78E0u;
}
