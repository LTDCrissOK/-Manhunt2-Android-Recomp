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

// Function: sub_003E7560
// Address: 0x3e7560 - 0x3e7720
void sub_003E7560_0x3e7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7560_0x3e7560");
#endif

    switch (ctx->pc) {
        case 0x3e75acu: goto label_3e75ac;
        case 0x3e75c0u: goto label_3e75c0;
        case 0x3e75d8u: goto label_3e75d8;
        case 0x3e75e4u: goto label_3e75e4;
        case 0x3e7628u: goto label_3e7628;
        case 0x3e76a0u: goto label_3e76a0;
        case 0x3e76b0u: goto label_3e76b0;
        case 0x3e76c0u: goto label_3e76c0;
        case 0x3e76ccu: goto label_3e76cc;
        default: break;
    }

    ctx->pc = 0x3e7560u;

    // 0x3e7560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e7564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e7564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e7568: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e7568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e756c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e756cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e7570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e7574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e7574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7578: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e7578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e757c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e757cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e7580: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e7584: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e7584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e7588: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e7588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e758c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e7590: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e7594: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7598: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7598u;
    {
        const bool branch_taken_0x3e7598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7598u;
        // 0x3e759c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7598) {
            ctx->pc = 0x3E7610u;
            goto label_3e7610;
        }
    }
    ctx->pc = 0x3E75A0u;
    // 0x3e75a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e75a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E75A4u;
    SET_GPR_U32(ctx, 31, 0x3E75ACu);
    ctx->pc = 0x3E75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E75A4u;
    // 0x3e75a8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E75A4u, 0x3E75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E75ACu;
label_3e75ac:
    // 0x3e75ac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e75acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e75b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e75b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e75b4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e75b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e75b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E75B8u;
    SET_GPR_U32(ctx, 31, 0x3E75C0u);
    ctx->pc = 0x3E75BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E75B8u;
    // 0x3e75bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E75B8u, 0x3E75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E75C0u;
label_3e75c0:
    // 0x3e75c0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e75c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e75c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e75c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E75C8u;
    {
        const bool branch_taken_0x3e75c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75C8u;
        // 0x3e75cc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e75c8) {
            ctx->pc = 0x3E75F0u;
            goto label_3e75f0;
        }
    }
    ctx->pc = 0x3E75D0u;
    // 0x3e75d0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e75d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e75d4: 0x0  nop
    ctx->pc = 0x3e75d4u;
    // NOP
label_3e75d8:
    // 0x3e75d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e75d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e75dc: 0xc0aff7e  jal         func_2BFDF8
    ctx->pc = 0x3E75DCu;
    SET_GPR_U32(ctx, 31, 0x3E75E4u);
    ctx->pc = 0x3E75E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E75DCu;
    // 0x3e75e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFDF8u, 0x3E75DCu, 0x3E75E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E75E4u;
label_3e75e4:
    // 0x3e75e4: 0x0  nop
    ctx->pc = 0x3e75e4u;
    // NOP
    // 0x3e75e8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E75E8u;
    {
        const bool branch_taken_0x3e75e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E75E8u;
        // 0x3e75ec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e75e8) {
            ctx->pc = 0x3E75D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e75d8;
        }
    }
    ctx->pc = 0x3E75F0u;
label_3e75f0:
    // 0x3e75f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e75f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e75f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e75f8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e75f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e75fc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e75fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e7600: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e7600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e7604: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e7604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e7608: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E7608u;
    {
        const bool branch_taken_0x3e7608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7608u;
        // 0x3e760c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7608) {
            ctx->pc = 0x3E76F8u;
            goto label_3e76f8;
        }
    }
    ctx->pc = 0x3E7610u;
label_3e7610:
    // 0x3e7610: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e7610u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e7614: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E7614u;
    {
        const bool branch_taken_0x3e7614 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7614u;
        // 0x3e7618: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7614) {
            ctx->pc = 0x3E7694u;
            goto label_3e7694;
        }
    }
    ctx->pc = 0x3E761Cu;
    // 0x3e761c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e761cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e7620: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e7620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e7624: 0x0  nop
    ctx->pc = 0x3e7624u;
    // NOP
label_3e7628:
    // 0x3e7628: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e7628u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e762c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e7630: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e7630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e7634: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E7634u;
    {
        const bool branch_taken_0x3e7634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7634) {
            ctx->pc = 0x3E7638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7634u;
            // 0x3e7638: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7688u;
            goto label_3e7688;
        }
    }
    ctx->pc = 0x3E763Cu;
    // 0x3e763c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E763Cu;
    {
        const bool branch_taken_0x3e763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e763c) {
            ctx->pc = 0x3E7640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E763Cu;
            // 0x3e7640: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7668u;
            goto label_3e7668;
        }
    }
    ctx->pc = 0x3E7644u;
    // 0x3e7644: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E7644u;
    {
        const bool branch_taken_0x3e7644 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7644u;
        // 0x3e7648: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7644) {
            ctx->pc = 0x3E7654u;
            goto label_3e7654;
        }
    }
    ctx->pc = 0x3E764Cu;
    // 0x3e764c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E764Cu;
    {
        const bool branch_taken_0x3e764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E764Cu;
        // 0x3e7650: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e764c) {
            ctx->pc = 0x3E7658u;
            goto label_3e7658;
        }
    }
    ctx->pc = 0x3E7654u;
label_3e7654:
    // 0x3e7654: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e7654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e7658:
    // 0x3e7658: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e765c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e765cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e7660: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e7660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e7664: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e7664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e7668:
    // 0x3e7668: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e7668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e766c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e7670: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e7670u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e7674: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e7678: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e7678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e767c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e767cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e7680: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E7680u;
    {
        const bool branch_taken_0x3e7680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7680u;
        // 0x3e7684: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7680) {
            ctx->pc = 0x3E76F8u;
            goto label_3e76f8;
        }
    }
    ctx->pc = 0x3E7688u;
label_3e7688:
    // 0x3e7688: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e7688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e768c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E768Cu;
    {
        const bool branch_taken_0x3e768c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e768c) {
            ctx->pc = 0x3E7690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E768Cu;
            // 0x3e7690: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e7628;
        }
    }
    ctx->pc = 0x3E7694u;
label_3e7694:
    // 0x3e7694: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e7698: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E7698u;
    SET_GPR_U32(ctx, 31, 0x3E76A0u);
    ctx->pc = 0x3E769Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7698u;
    // 0x3e769c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E7698u, 0x3E76A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76A0u;
label_3e76a0:
    // 0x3e76a0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e76a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e76a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e76a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e76a8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E76A8u;
    SET_GPR_U32(ctx, 31, 0x3E76B0u);
    ctx->pc = 0x3E76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76A8u;
    // 0x3e76ac: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E76A8u, 0x3E76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76B0u;
label_3e76b0:
    // 0x3e76b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e76b4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e76b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e76b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e76bc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e76bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e76c0:
    // 0x3e76c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e76c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e76c4: 0xc0aff7e  jal         func_2BFDF8
    ctx->pc = 0x3E76C4u;
    SET_GPR_U32(ctx, 31, 0x3E76CCu);
    ctx->pc = 0x3E76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E76C4u;
    // 0x3e76c8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFDF8u, 0x3E76C4u, 0x3E76CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E76CCu;
label_3e76cc:
    // 0x3e76cc: 0x0  nop
    ctx->pc = 0x3e76ccu;
    // NOP
    // 0x3e76d0: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E76D0u;
    {
        const bool branch_taken_0x3e76d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E76D0u;
        // 0x3e76d4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e76d0) {
            ctx->pc = 0x3E76C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e76c0;
        }
    }
    ctx->pc = 0x3E76D8u;
    // 0x3e76d8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e76dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e76e0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e76e4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e76e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e76e8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e76e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e76ec: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e76ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e76f0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e76f4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e76f8:
    // 0x3e76f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e76f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e76fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e76fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e7700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7704: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e7704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e7708: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e7708u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e770c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e770cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e7710: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e7710u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e7714: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e7714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e7718: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7718u;
        // 0x3e771c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7720u;
}
