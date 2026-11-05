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

// Function: sub_003E6060
// Address: 0x3e6060 - 0x3e6220
void sub_003E6060_0x3e6060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6060_0x3e6060");
#endif

    switch (ctx->pc) {
        case 0x3e60acu: goto label_3e60ac;
        case 0x3e60c0u: goto label_3e60c0;
        case 0x3e60d8u: goto label_3e60d8;
        case 0x3e60e4u: goto label_3e60e4;
        case 0x3e6128u: goto label_3e6128;
        case 0x3e61a0u: goto label_3e61a0;
        case 0x3e61b0u: goto label_3e61b0;
        case 0x3e61c0u: goto label_3e61c0;
        case 0x3e61ccu: goto label_3e61cc;
        default: break;
    }

    ctx->pc = 0x3e6060u;

    // 0x3e6060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e6064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e6064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e6068: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e6068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e606c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e606cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e6070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e6074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e6074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e6078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e607c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e607cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e6080: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e6080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e6084: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e6088: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e6088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e608c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e6090: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e6090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e6094: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6098: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6098u;
    {
        const bool branch_taken_0x3e6098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6098u;
        // 0x3e609c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6098) {
            ctx->pc = 0x3E6110u;
            goto label_3e6110;
        }
    }
    ctx->pc = 0x3E60A0u;
    // 0x3e60a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e60a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E60A4u;
    SET_GPR_U32(ctx, 31, 0x3E60ACu);
    ctx->pc = 0x3E60A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E60A4u;
    // 0x3e60a8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E60A4u, 0x3E60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E60ACu;
label_3e60ac:
    // 0x3e60ac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e60acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e60b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e60b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e60b4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e60b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e60b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E60B8u;
    SET_GPR_U32(ctx, 31, 0x3E60C0u);
    ctx->pc = 0x3E60BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E60B8u;
    // 0x3e60bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E60B8u, 0x3E60C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E60C0u;
label_3e60c0:
    // 0x3e60c0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e60c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e60c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e60c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e60c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E60C8u;
    {
        const bool branch_taken_0x3e60c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60C8u;
        // 0x3e60cc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60c8) {
            ctx->pc = 0x3E60F0u;
            goto label_3e60f0;
        }
    }
    ctx->pc = 0x3E60D0u;
    // 0x3e60d0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e60d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e60d4: 0x0  nop
    ctx->pc = 0x3e60d4u;
    // NOP
label_3e60d8:
    // 0x3e60d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e60d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e60dc: 0xc0afc88  jal         func_2BF220
    ctx->pc = 0x3E60DCu;
    SET_GPR_U32(ctx, 31, 0x3E60E4u);
    ctx->pc = 0x3E60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E60DCu;
    // 0x3e60e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF220u, 0x3E60DCu, 0x3E60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E60E4u;
label_3e60e4:
    // 0x3e60e4: 0x0  nop
    ctx->pc = 0x3e60e4u;
    // NOP
    // 0x3e60e8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E60E8u;
    {
        const bool branch_taken_0x3e60e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60E8u;
        // 0x3e60ec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60e8) {
            ctx->pc = 0x3E60D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e60d8;
        }
    }
    ctx->pc = 0x3E60F0u;
label_3e60f0:
    // 0x3e60f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e60f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e60f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e60f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e60f8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e60f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e60fc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e60fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6100: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e6100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e6104: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e6104u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e6108: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E6108u;
    {
        const bool branch_taken_0x3e6108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6108u;
        // 0x3e610c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6108) {
            ctx->pc = 0x3E61F8u;
            goto label_3e61f8;
        }
    }
    ctx->pc = 0x3E6110u;
label_3e6110:
    // 0x3e6110: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e6110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6114: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E6114u;
    {
        const bool branch_taken_0x3e6114 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6114u;
        // 0x3e6118: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6114) {
            ctx->pc = 0x3E6194u;
            goto label_3e6194;
        }
    }
    ctx->pc = 0x3E611Cu;
    // 0x3e611c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6120: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e6120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e6124: 0x0  nop
    ctx->pc = 0x3e6124u;
    // NOP
label_3e6128:
    // 0x3e6128: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e6128u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e612c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e6130: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e6130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e6134: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6134u;
    {
        const bool branch_taken_0x3e6134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6134) {
            ctx->pc = 0x3E6138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6134u;
            // 0x3e6138: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6188u;
            goto label_3e6188;
        }
    }
    ctx->pc = 0x3E613Cu;
    // 0x3e613c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E613Cu;
    {
        const bool branch_taken_0x3e613c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e613c) {
            ctx->pc = 0x3E6140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E613Cu;
            // 0x3e6140: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6168u;
            goto label_3e6168;
        }
    }
    ctx->pc = 0x3E6144u;
    // 0x3e6144: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6144u;
    {
        const bool branch_taken_0x3e6144 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6144u;
        // 0x3e6148: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6144) {
            ctx->pc = 0x3E6154u;
            goto label_3e6154;
        }
    }
    ctx->pc = 0x3E614Cu;
    // 0x3e614c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E614Cu;
    {
        const bool branch_taken_0x3e614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E614Cu;
        // 0x3e6150: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e614c) {
            ctx->pc = 0x3E6158u;
            goto label_3e6158;
        }
    }
    ctx->pc = 0x3E6154u;
label_3e6154:
    // 0x3e6154: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e6154u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e6158:
    // 0x3e6158: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e615c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e615cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e6160: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e6160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e6164: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e6164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e6168:
    // 0x3e6168: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e6168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e616c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6170: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e6170u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6174: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6178: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e6178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e617c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e617cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6180: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6180u;
    {
        const bool branch_taken_0x3e6180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6180u;
        // 0x3e6184: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6180) {
            ctx->pc = 0x3E61F8u;
            goto label_3e61f8;
        }
    }
    ctx->pc = 0x3E6188u;
label_3e6188:
    // 0x3e6188: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e6188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e618c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E618Cu;
    {
        const bool branch_taken_0x3e618c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e618c) {
            ctx->pc = 0x3E6190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E618Cu;
            // 0x3e6190: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6128;
        }
    }
    ctx->pc = 0x3E6194u;
label_3e6194:
    // 0x3e6194: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6198: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6198u;
    SET_GPR_U32(ctx, 31, 0x3E61A0u);
    ctx->pc = 0x3E619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6198u;
    // 0x3e619c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6198u, 0x3E61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E61A0u;
label_3e61a0:
    // 0x3e61a0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e61a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e61a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e61a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e61a8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E61A8u;
    SET_GPR_U32(ctx, 31, 0x3E61B0u);
    ctx->pc = 0x3E61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E61A8u;
    // 0x3e61ac: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E61A8u, 0x3E61B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E61B0u;
label_3e61b0:
    // 0x3e61b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e61b4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e61b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e61b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e61bc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e61bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e61c0:
    // 0x3e61c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e61c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e61c4: 0xc0afc88  jal         func_2BF220
    ctx->pc = 0x3E61C4u;
    SET_GPR_U32(ctx, 31, 0x3E61CCu);
    ctx->pc = 0x3E61C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E61C4u;
    // 0x3e61c8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF220u, 0x3E61C4u, 0x3E61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E61CCu;
label_3e61cc:
    // 0x3e61cc: 0x0  nop
    ctx->pc = 0x3e61ccu;
    // NOP
    // 0x3e61d0: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E61D0u;
    {
        const bool branch_taken_0x3e61d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61D0u;
        // 0x3e61d4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e61d0) {
            ctx->pc = 0x3E61C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e61c0;
        }
    }
    ctx->pc = 0x3E61D8u;
    // 0x3e61d8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e61dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e61e0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e61e4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e61e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e61e8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e61e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e61ec: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e61ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e61f0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e61f4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e61f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e61f8:
    // 0x3e61f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e61f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e61fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e61fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e6200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e6200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6204: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e6204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e6208: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e6208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e620c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e620cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e6210: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e6210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6214: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e6214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e6218: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6218u;
        // 0x3e621c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6220u;
}
