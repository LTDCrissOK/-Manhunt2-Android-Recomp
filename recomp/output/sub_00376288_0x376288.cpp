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

// Function: sub_00376288
// Address: 0x376288 - 0x3763a0
void sub_00376288_0x376288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376288_0x376288");
#endif

    switch (ctx->pc) {
        case 0x3762dcu: goto label_3762dc;
        case 0x376358u: goto label_376358;
        default: break;
    }

    ctx->pc = 0x376288u;

    // 0x376288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37628c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x37628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x376290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x376290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x376294: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x376294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x376298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37629c: 0x8c42cd68  lw          $v0, -0x3298($v0)
    ctx->pc = 0x37629cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD68u));
    // 0x3762a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3762a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3762a4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3762A4u;
    {
        const bool branch_taken_0x3762a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3762A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762A4u;
        // 0x3762a8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3762a4) {
            ctx->pc = 0x376384u;
            goto label_376384;
        }
    }
    ctx->pc = 0x3762ACu;
    // 0x3762ac: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x3762acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x3762b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3762b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3762b4: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x3762b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3762b8: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x3762b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x3762bc: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x3762bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3762c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3762c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3762c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3762c8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3762c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3762cc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3762CCu;
    {
        const bool branch_taken_0x3762cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3762cc) {
            ctx->pc = 0x3762D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3762CCu;
            // 0x3762d0: 0x8e44cd68  lw          $a0, -0x3298($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3762E0u;
            goto label_3762e0;
        }
    }
    ctx->pc = 0x3762D4u;
    // 0x3762d4: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3762D4u;
    SET_GPR_U32(ctx, 31, 0x3762DCu);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3762D4u, 0x3762DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762DCu;
label_3762dc:
    // 0x3762dc: 0x8e44cd68  lw          $a0, -0x3298($s2)
    ctx->pc = 0x3762dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954344)));
label_3762e0:
    // 0x3762e0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3762e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3762e4: 0x8e08f910  lw          $t0, -0x6F0($s0)
    ctx->pc = 0x3762e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3762e8: 0x3c055100  lui         $a1, 0x5100
    ctx->pc = 0x3762e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20736 << 16));
    // 0x3762ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3762ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3762f0: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x3762f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3762f4: 0x73b7c  dsll32      $a3, $a3, 13
    ctx->pc = 0x3762f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 13));
    // 0x3762f8: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x3762f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x3762fc: 0x1111821  addu        $v1, $t0, $s1
    ctx->pc = 0x3762fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x376300: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x376300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x376304: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x376304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x376308: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x376308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x37630c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x37630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x376310: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x376310u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x376314: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x376314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x376318: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x376318u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x37631c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x37631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x376320: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x376320u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x376324: 0x9e42cd68  lwu         $v0, -0x3298($s2)
    ctx->pc = 0x376324u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954344)));
    // 0x376328: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x376328u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x37632c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x37632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x376330: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x376330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x376334: 0xfd020010  sd          $v0, 0x10($t0)
    ctx->pc = 0x376334u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    // 0x376338: 0x8e43cd68  lw          $v1, -0x3298($s2)
    ctx->pc = 0x376338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954344)));
    // 0x37633c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x37633Cu;
    {
        const bool branch_taken_0x37633c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x376340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37633Cu;
        // 0x376340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37633c) {
            ctx->pc = 0x376380u;
            goto label_376380;
        }
    }
    ctx->pc = 0x376344u;
    // 0x376344: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x376344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x376348: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x376348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37634c: 0x244560d0  addiu       $a1, $v0, 0x60D0
    ctx->pc = 0x37634cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24784));
    // 0x376350: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x376350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376354: 0x0  nop
    ctx->pc = 0x376354u;
    // NOP
label_376358:
    // 0x376358: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x376358u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37635c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x37635cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x376360: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x376360u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x376364: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x376364u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x376368: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x376368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x37636c: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x37636cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x376370: 0x8ce2cd68  lw          $v0, -0x3298($a3)
    ctx->pc = 0x376370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954344)));
    // 0x376374: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x376374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x376378: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x376378u;
    {
        const bool branch_taken_0x376378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376378u;
        // 0x37637c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376378) {
            ctx->pc = 0x376358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376358;
        }
    }
    ctx->pc = 0x376380u;
label_376380:
    // 0x376380: 0xae40cd68  sw          $zero, -0x3298($s2)
    ctx->pc = 0x376380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294954344), GPR_U32(ctx, 0));
label_376384:
    // 0x376384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x376388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37638c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37638cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376390: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x376390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x376394: 0x3e00008  jr          $ra
    ctx->pc = 0x376394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376394u;
        // 0x376398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37639Cu;
    // 0x37639c: 0x0  nop
    ctx->pc = 0x37639cu;
    // NOP
    ctx->pc = 0x3763a0u;
}
