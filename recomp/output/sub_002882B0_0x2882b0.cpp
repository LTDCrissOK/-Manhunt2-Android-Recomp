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

// Function: sub_002882B0
// Address: 0x2882b0 - 0x288448
void sub_002882B0_0x2882b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002882B0_0x2882b0");
#endif

    switch (ctx->pc) {
        case 0x288304u: goto label_288304;
        case 0x288340u: goto label_288340;
        case 0x28834cu: goto label_28834c;
        case 0x288384u: goto label_288384;
        case 0x2883d8u: goto label_2883d8;
        case 0x2883e4u: goto label_2883e4;
        default: break;
    }

    ctx->pc = 0x2882b0u;

    // 0x2882b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2882b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2882b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2882b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2882b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2882b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2882bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2882bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2882c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2882c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2882c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2882c8: 0x138100  sll         $s0, $s3, 4
    ctx->pc = 0x2882c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2882cc: 0x2451c690  addiu       $s1, $v0, -0x3970
    ctx->pc = 0x2882ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x2882d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2882d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2882d4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2882d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2882d8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2882d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2882dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2882dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882e0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2882e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2882e4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2882e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2882e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2882e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2882ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2882f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2882f4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2882f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2882f8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2882f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2882fc: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2882FCu;
    SET_GPR_U32(ctx, 31, 0x288304u);
    ctx->pc = 0x288300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882FCu;
    // 0x288300: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2882FCu, 0x288304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288304u;
label_288304:
    // 0x288304: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x288308: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x288308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x28830c: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x28830cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x288310: 0x90a4aab0  lbu         $a0, -0x5550($a1)
    ctx->pc = 0x288310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294945456)));
    // 0x288314: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x288314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x288318: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x288318u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28831c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x28831cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288320: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x288320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x288324: 0x16a00018  bnez        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x288324u;
    {
        const bool branch_taken_0x288324 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x288328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288324u;
        // 0x288328: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288324) {
            ctx->pc = 0x288388u;
            goto label_288388;
        }
    }
    ctx->pc = 0x28832Cu;
    // 0x28832c: 0x26320050  addiu       $s2, $s1, 0x50
    ctx->pc = 0x28832cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x288330: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x288330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x288334: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x288334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x288338: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x288338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28833c: 0x0  nop
    ctx->pc = 0x28833cu;
    // NOP
label_288340:
    // 0x288340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288344: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x288344u;
    SET_GPR_U32(ctx, 31, 0x28834Cu);
    ctx->pc = 0x288348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288344u;
    // 0x288348: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x288344u, 0x28834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28834Cu;
label_28834c:
    // 0x28834c: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x28834cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x288350: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x288354: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x288354u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x288358: 0x92c2aab0  lbu         $v0, -0x5550($s6)
    ctx->pc = 0x288358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294945456)));
    // 0x28835c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x28835cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x288360: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x288360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x288364: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x288364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x288368: 0x2631fff0  addiu       $s1, $s1, -0x10
    ctx->pc = 0x288368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x28836c: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x28836Cu;
    {
        const bool branch_taken_0x28836c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x288370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28836Cu;
        // 0x288370: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28836c) {
            ctx->pc = 0x288340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288340;
        }
    }
    ctx->pc = 0x288374u;
    // 0x288374: 0x27d0c690  addiu       $s0, $fp, -0x3970
    ctx->pc = 0x288374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952592));
    // 0x288378: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x288378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28837c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x28837Cu;
    SET_GPR_U32(ctx, 31, 0x288384u);
    ctx->pc = 0x288380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28837Cu;
    // 0x288380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x28837Cu, 0x288384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288384u;
label_288384:
    // 0x288384: 0xae170060  sw          $s7, 0x60($s0)
    ctx->pc = 0x288384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 23));
label_288388:
    // 0x288388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28838c: 0x16a20022  bne         $s5, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x28838Cu;
    {
        const bool branch_taken_0x28838c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x288390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28838Cu;
        // 0x288390: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28838c) {
            ctx->pc = 0x288418u;
            goto label_288418;
        }
    }
    ctx->pc = 0x288394u;
    // 0x288394: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x288394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288398: 0x53a823  subu        $s5, $v0, $s3
    ctx->pc = 0x288398u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x28839c: 0x1aa0001e  blez        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x28839Cu;
    {
        const bool branch_taken_0x28839c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2883A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28839Cu;
        // 0x2883a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28839c) {
            ctx->pc = 0x288418u;
            goto label_288418;
        }
    }
    ctx->pc = 0x2883A4u;
    // 0x2883a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2883a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2883a8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2883a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2883ac: 0x2442c690  addiu       $v0, $v0, -0x3970
    ctx->pc = 0x2883acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x2883b0: 0x133900  sll         $a3, $s3, 4
    ctx->pc = 0x2883b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2883b4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2883b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2883b8: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2883b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2883bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2883bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2883c0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x2883c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2883c4: 0xe29821  addu        $s3, $a3, $v0
    ctx->pc = 0x2883c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2883c8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2883c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2883cc: 0xa49021  addu        $s2, $a1, $a0
    ctx->pc = 0x2883ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2883d0: 0xe68821  addu        $s1, $a3, $a2
    ctx->pc = 0x2883d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2883d4: 0x0  nop
    ctx->pc = 0x2883d4u;
    // NOP
label_2883d8:
    // 0x2883d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2883d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883dc: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2883DCu;
    SET_GPR_U32(ctx, 31, 0x2883E4u);
    ctx->pc = 0x2883E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2883DCu;
    // 0x2883e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2883DCu, 0x2883E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2883E4u;
label_2883e4:
    // 0x2883e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2883e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2883e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2883e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2883ec: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2883ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2883f0: 0x92c3aab0  lbu         $v1, -0x5550($s6)
    ctx->pc = 0x2883f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294945456)));
    // 0x2883f4: 0x295202a  slt         $a0, $s4, $s5
    ctx->pc = 0x2883f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2883f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2883f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2883fc: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x2883fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x288400: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x288400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x288404: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x288404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x288408: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x288408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28840c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x28840Cu;
    {
        const bool branch_taken_0x28840c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x288410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28840Cu;
        // 0x288410: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28840c) {
            ctx->pc = 0x2883D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2883d8;
        }
    }
    ctx->pc = 0x288414u;
    // 0x288414: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x288414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_288418:
    // 0x288418: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x288418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28841c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28841cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288420: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x288420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x288424: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x288424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288428: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x288428u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28842c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x28842cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288430: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x288430u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x288434: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x288434u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288438: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x288438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28843c: 0x3e00008  jr          $ra
    ctx->pc = 0x28843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28843Cu;
        // 0x288440: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288444u;
    // 0x288444: 0x0  nop
    ctx->pc = 0x288444u;
    // NOP
    ctx->pc = 0x288448u;
}
