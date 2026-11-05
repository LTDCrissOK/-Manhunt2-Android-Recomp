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

// Function: sub_003E6760
// Address: 0x3e6760 - 0x3e6920
void sub_003E6760_0x3e6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6760_0x3e6760");
#endif

    switch (ctx->pc) {
        case 0x3e67acu: goto label_3e67ac;
        case 0x3e67c0u: goto label_3e67c0;
        case 0x3e67d8u: goto label_3e67d8;
        case 0x3e67e4u: goto label_3e67e4;
        case 0x3e6828u: goto label_3e6828;
        case 0x3e68a0u: goto label_3e68a0;
        case 0x3e68b0u: goto label_3e68b0;
        case 0x3e68c0u: goto label_3e68c0;
        case 0x3e68ccu: goto label_3e68cc;
        default: break;
    }

    ctx->pc = 0x3e6760u;

    // 0x3e6760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e6764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e6764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e6768: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e6768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e676c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e676cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e6770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e6774: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e6774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e6778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e677c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e677cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e6780: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e6780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e6784: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e6784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e6788: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e6788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e678c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e6790: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e6790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e6794: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6798: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6798u;
    {
        const bool branch_taken_0x3e6798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6798u;
        // 0x3e679c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6798) {
            ctx->pc = 0x3E6810u;
            goto label_3e6810;
        }
    }
    ctx->pc = 0x3E67A0u;
    // 0x3e67a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e67a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E67A4u;
    SET_GPR_U32(ctx, 31, 0x3E67ACu);
    ctx->pc = 0x3E67A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E67A4u;
    // 0x3e67a8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E67A4u, 0x3E67ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E67ACu;
label_3e67ac:
    // 0x3e67ac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e67acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e67b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e67b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67b4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e67b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e67b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E67B8u;
    SET_GPR_U32(ctx, 31, 0x3E67C0u);
    ctx->pc = 0x3E67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E67B8u;
    // 0x3e67bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E67B8u, 0x3E67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E67C0u;
label_3e67c0:
    // 0x3e67c0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e67c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e67c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e67c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E67C8u;
    {
        const bool branch_taken_0x3e67c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E67CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E67C8u;
        // 0x3e67cc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e67c8) {
            ctx->pc = 0x3E67F0u;
            goto label_3e67f0;
        }
    }
    ctx->pc = 0x3E67D0u;
    // 0x3e67d0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e67d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e67d4: 0x0  nop
    ctx->pc = 0x3e67d4u;
    // NOP
label_3e67d8:
    // 0x3e67d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e67d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67dc: 0xc0afdb2  jal         func_2BF6C8
    ctx->pc = 0x3E67DCu;
    SET_GPR_U32(ctx, 31, 0x3E67E4u);
    ctx->pc = 0x3E67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E67DCu;
    // 0x3e67e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF6C8u, 0x3E67DCu, 0x3E67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E67E4u;
label_3e67e4:
    // 0x3e67e4: 0x0  nop
    ctx->pc = 0x3e67e4u;
    // NOP
    // 0x3e67e8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E67E8u;
    {
        const bool branch_taken_0x3e67e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E67E8u;
        // 0x3e67ec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e67e8) {
            ctx->pc = 0x3E67D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e67d8;
        }
    }
    ctx->pc = 0x3E67F0u;
label_3e67f0:
    // 0x3e67f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e67f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e67f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67f8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e67f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e67fc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e67fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6800: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e6800u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e6804: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e6804u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e6808: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E6808u;
    {
        const bool branch_taken_0x3e6808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6808u;
        // 0x3e680c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6808) {
            ctx->pc = 0x3E68F8u;
            goto label_3e68f8;
        }
    }
    ctx->pc = 0x3E6810u;
label_3e6810:
    // 0x3e6810: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e6810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6814: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E6814u;
    {
        const bool branch_taken_0x3e6814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6814u;
        // 0x3e6818: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6814) {
            ctx->pc = 0x3E6894u;
            goto label_3e6894;
        }
    }
    ctx->pc = 0x3E681Cu;
    // 0x3e681c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6820: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e6820u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e6824: 0x0  nop
    ctx->pc = 0x3e6824u;
    // NOP
label_3e6828:
    // 0x3e6828: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e6828u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e682c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e6830: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e6830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e6834: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6834u;
    {
        const bool branch_taken_0x3e6834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6834) {
            ctx->pc = 0x3E6838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6834u;
            // 0x3e6838: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6888u;
            goto label_3e6888;
        }
    }
    ctx->pc = 0x3E683Cu;
    // 0x3e683c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E683Cu;
    {
        const bool branch_taken_0x3e683c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e683c) {
            ctx->pc = 0x3E6840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E683Cu;
            // 0x3e6840: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6868u;
            goto label_3e6868;
        }
    }
    ctx->pc = 0x3E6844u;
    // 0x3e6844: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6844u;
    {
        const bool branch_taken_0x3e6844 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6844u;
        // 0x3e6848: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6844) {
            ctx->pc = 0x3E6854u;
            goto label_3e6854;
        }
    }
    ctx->pc = 0x3E684Cu;
    // 0x3e684c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E684Cu;
    {
        const bool branch_taken_0x3e684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E684Cu;
        // 0x3e6850: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e684c) {
            ctx->pc = 0x3E6858u;
            goto label_3e6858;
        }
    }
    ctx->pc = 0x3E6854u;
label_3e6854:
    // 0x3e6854: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e6854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e6858:
    // 0x3e6858: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e6858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e685c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e685cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e6860: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e6860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e6864: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e6864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e6868:
    // 0x3e6868: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e686c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6870: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e6870u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6874: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6878: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e6878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e687c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e687cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6880: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6880u;
    {
        const bool branch_taken_0x3e6880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6880u;
        // 0x3e6884: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6880) {
            ctx->pc = 0x3E68F8u;
            goto label_3e68f8;
        }
    }
    ctx->pc = 0x3E6888u;
label_3e6888:
    // 0x3e6888: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e6888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e688c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E688Cu;
    {
        const bool branch_taken_0x3e688c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e688c) {
            ctx->pc = 0x3E6890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E688Cu;
            // 0x3e6890: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6828;
        }
    }
    ctx->pc = 0x3E6894u;
label_3e6894:
    // 0x3e6894: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6898: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6898u;
    SET_GPR_U32(ctx, 31, 0x3E68A0u);
    ctx->pc = 0x3E689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6898u;
    // 0x3e689c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6898u, 0x3E68A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E68A0u;
label_3e68a0:
    // 0x3e68a0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e68a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e68a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e68a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68a8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E68A8u;
    SET_GPR_U32(ctx, 31, 0x3E68B0u);
    ctx->pc = 0x3E68ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E68A8u;
    // 0x3e68ac: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E68A8u, 0x3E68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E68B0u;
label_3e68b0:
    // 0x3e68b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e68b4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e68b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e68b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e68b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e68bc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e68bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e68c0:
    // 0x3e68c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e68c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68c4: 0xc0afdb2  jal         func_2BF6C8
    ctx->pc = 0x3E68C4u;
    SET_GPR_U32(ctx, 31, 0x3E68CCu);
    ctx->pc = 0x3E68C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E68C4u;
    // 0x3e68c8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF6C8u, 0x3E68C4u, 0x3E68CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E68CCu;
label_3e68cc:
    // 0x3e68cc: 0x0  nop
    ctx->pc = 0x3e68ccu;
    // NOP
    // 0x3e68d0: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E68D0u;
    {
        const bool branch_taken_0x3e68d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E68D0u;
        // 0x3e68d4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e68d0) {
            ctx->pc = 0x3E68C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e68c0;
        }
    }
    ctx->pc = 0x3E68D8u;
    // 0x3e68d8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e68d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e68dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e68dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e68e0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e68e4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e68e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68e8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e68e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e68ec: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e68ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e68f0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e68f4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e68f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e68f8:
    // 0x3e68f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e68f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e68fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e68fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e6900: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e6900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6904: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e6904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e6908: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e6908u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e690c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e690cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e6910: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e6910u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6914: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e6914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e6918: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6918u;
        // 0x3e691c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6920u;
}
