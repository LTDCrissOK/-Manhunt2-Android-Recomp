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

// Function: sub_003E50A0
// Address: 0x3e50a0 - 0x3e5260
void sub_003E50A0_0x3e50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E50A0_0x3e50a0");
#endif

    switch (ctx->pc) {
        case 0x3e50ecu: goto label_3e50ec;
        case 0x3e5100u: goto label_3e5100;
        case 0x3e5118u: goto label_3e5118;
        case 0x3e5124u: goto label_3e5124;
        case 0x3e5168u: goto label_3e5168;
        case 0x3e51e0u: goto label_3e51e0;
        case 0x3e51f0u: goto label_3e51f0;
        case 0x3e5200u: goto label_3e5200;
        case 0x3e520cu: goto label_3e520c;
        default: break;
    }

    ctx->pc = 0x3e50a0u;

    // 0x3e50a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e50a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e50a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e50a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e50ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e50acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e50b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e50b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e50b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e50b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e50bc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e50bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e50c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e50c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e50c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e50c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e50cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e50ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e50d0: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e50d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e50d8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E50D8u;
    {
        const bool branch_taken_0x3e50d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E50D8u;
        // 0x3e50dc: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e50d8) {
            ctx->pc = 0x3E5150u;
            goto label_3e5150;
        }
    }
    ctx->pc = 0x3E50E0u;
    // 0x3e50e0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e50e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E50E4u;
    SET_GPR_U32(ctx, 31, 0x3E50ECu);
    ctx->pc = 0x3E50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50E4u;
    // 0x3e50e8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E50E4u, 0x3E50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E50ECu;
label_3e50ec:
    // 0x3e50ec: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e50ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e50f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e50f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e50f4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e50f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e50f8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E50F8u;
    SET_GPR_U32(ctx, 31, 0x3E5100u);
    ctx->pc = 0x3E50FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E50F8u;
    // 0x3e50fc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E50F8u, 0x3E5100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5100u;
label_3e5100:
    // 0x3e5100: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e5100u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5104: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e5104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e5108: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5108u;
    {
        const bool branch_taken_0x3e5108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5108u;
        // 0x3e510c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5108) {
            ctx->pc = 0x3E5130u;
            goto label_3e5130;
        }
    }
    ctx->pc = 0x3E5110u;
    // 0x3e5110: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5110u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5114: 0x0  nop
    ctx->pc = 0x3e5114u;
    // NOP
label_3e5118:
    // 0x3e5118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e511c: 0xc0afa76  jal         func_2BE9D8
    ctx->pc = 0x3E511Cu;
    SET_GPR_U32(ctx, 31, 0x3E5124u);
    ctx->pc = 0x3E5120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E511Cu;
    // 0x3e5120: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE9D8u, 0x3E511Cu, 0x3E5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5124u;
label_3e5124:
    // 0x3e5124: 0x0  nop
    ctx->pc = 0x3e5124u;
    // NOP
    // 0x3e5128: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5128u;
    {
        const bool branch_taken_0x3e5128 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5128u;
        // 0x3e512c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5128) {
            ctx->pc = 0x3E5118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5118;
        }
    }
    ctx->pc = 0x3E5130u;
label_3e5130:
    // 0x3e5130: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e5130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5134: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e5134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5138: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e5138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e513c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e513cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5140: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e5140u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e5144: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e5144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e5148: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E5148u;
    {
        const bool branch_taken_0x3e5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5148u;
        // 0x3e514c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5148) {
            ctx->pc = 0x3E5238u;
            goto label_3e5238;
        }
    }
    ctx->pc = 0x3E5150u;
label_3e5150:
    // 0x3e5150: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e5150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5154: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E5154u;
    {
        const bool branch_taken_0x3e5154 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5154u;
        // 0x3e5158: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5154) {
            ctx->pc = 0x3E51D4u;
            goto label_3e51d4;
        }
    }
    ctx->pc = 0x3E515Cu;
    // 0x3e515c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5160: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e5160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e5164: 0x0  nop
    ctx->pc = 0x3e5164u;
    // NOP
label_3e5168:
    // 0x3e5168: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e5168u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e516c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e5170: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e5170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e5174: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E5174u;
    {
        const bool branch_taken_0x3e5174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5174) {
            ctx->pc = 0x3E5178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5174u;
            // 0x3e5178: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E51C8u;
            goto label_3e51c8;
        }
    }
    ctx->pc = 0x3E517Cu;
    // 0x3e517c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E517Cu;
    {
        const bool branch_taken_0x3e517c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e517c) {
            ctx->pc = 0x3E5180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E517Cu;
            // 0x3e5180: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E51A8u;
            goto label_3e51a8;
        }
    }
    ctx->pc = 0x3E5184u;
    // 0x3e5184: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5184u;
    {
        const bool branch_taken_0x3e5184 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5184u;
        // 0x3e5188: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5184) {
            ctx->pc = 0x3E5194u;
            goto label_3e5194;
        }
    }
    ctx->pc = 0x3E518Cu;
    // 0x3e518c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E518Cu;
    {
        const bool branch_taken_0x3e518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E518Cu;
        // 0x3e5190: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e518c) {
            ctx->pc = 0x3E5198u;
            goto label_3e5198;
        }
    }
    ctx->pc = 0x3E5194u;
label_3e5194:
    // 0x3e5194: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e5194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e5198:
    // 0x3e5198: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e5198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e519c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e519cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e51a0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e51a4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e51a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e51a8:
    // 0x3e51a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e51ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e51acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e51b0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e51b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e51b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e51b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e51b8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e51bc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e51bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e51c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E51C0u;
    {
        const bool branch_taken_0x3e51c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E51C0u;
        // 0x3e51c4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e51c0) {
            ctx->pc = 0x3E5238u;
            goto label_3e5238;
        }
    }
    ctx->pc = 0x3E51C8u;
label_3e51c8:
    // 0x3e51c8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e51c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e51cc: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E51CCu;
    {
        const bool branch_taken_0x3e51cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e51cc) {
            ctx->pc = 0x3E51D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E51CCu;
            // 0x3e51d0: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5168;
        }
    }
    ctx->pc = 0x3E51D4u;
label_3e51d4:
    // 0x3e51d4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e51d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e51d8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E51D8u;
    SET_GPR_U32(ctx, 31, 0x3E51E0u);
    ctx->pc = 0x3E51DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E51D8u;
    // 0x3e51dc: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E51D8u, 0x3E51E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E51E0u;
label_3e51e0:
    // 0x3e51e0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e51e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e51e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e51e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e51e8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E51E8u;
    SET_GPR_U32(ctx, 31, 0x3E51F0u);
    ctx->pc = 0x3E51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E51E8u;
    // 0x3e51ec: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E51E8u, 0x3E51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E51F0u;
label_3e51f0:
    // 0x3e51f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e51f4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e51f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e51f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e51fc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e51fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5200:
    // 0x3e5200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5204: 0xc0afa76  jal         func_2BE9D8
    ctx->pc = 0x3E5204u;
    SET_GPR_U32(ctx, 31, 0x3E520Cu);
    ctx->pc = 0x3E5208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5204u;
    // 0x3e5208: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE9D8u, 0x3E5204u, 0x3E520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E520Cu;
label_3e520c:
    // 0x3e520c: 0x0  nop
    ctx->pc = 0x3e520cu;
    // NOP
    // 0x3e5210: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5210u;
    {
        const bool branch_taken_0x3e5210 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5210u;
        // 0x3e5214: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5210) {
            ctx->pc = 0x3E5200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5200;
        }
    }
    ctx->pc = 0x3E5218u;
    // 0x3e5218: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e5218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e521c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5220: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e5220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e5224: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e5224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5228: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e5228u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e522c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e522cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5230: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e5230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e5234: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e5234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e5238:
    // 0x3e5238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e5238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e523c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e523cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e5240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e5240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5244: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e5244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e5248: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e5248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e524c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e524cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e5250: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e5250u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5254: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e5254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e5258: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5258u;
        // 0x3e525c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5260u;
}
