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

// Function: sub_00174730
// Address: 0x174730 - 0x174898
void sub_00174730_0x174730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174730_0x174730");
#endif

    switch (ctx->pc) {
        case 0x17474cu: goto label_17474c;
        case 0x17475cu: goto label_17475c;
        case 0x174798u: goto label_174798;
        case 0x174854u: goto label_174854;
        default: break;
    }

    ctx->pc = 0x174730u;

    // 0x174730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174734: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174738: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x174738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17473c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17473cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174740: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174744: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174744u;
    SET_GPR_U32(ctx, 31, 0x17474Cu);
    ctx->pc = 0x174748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174744u;
    // 0x174748: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174744u, 0x17474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17474Cu;
label_17474c:
    // 0x17474c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17474cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174754: 0xc04f9d0  jal         func_13E740
    ctx->pc = 0x174754u;
    SET_GPR_U32(ctx, 31, 0x17475Cu);
    ctx->pc = 0x174758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174754u;
    // 0x174758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E740u, 0x174754u, 0x17475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17475Cu;
label_17475c:
    // 0x17475c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x17475cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x174760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174764: 0x0  nop
    ctx->pc = 0x174764u;
    // NOP
    // 0x174768: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x174768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17476c: 0x0  nop
    ctx->pc = 0x17476cu;
    // NOP
    // 0x174770: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x174770u;
    {
        const bool branch_taken_0x174770 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174770u;
        // 0x174774: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174770) {
            ctx->pc = 0x174880u;
            goto label_174880;
        }
    }
    ctx->pc = 0x174778u;
    // 0x174778: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x174778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x17477c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x17477Cu;
    {
        const bool branch_taken_0x17477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17477Cu;
        // 0x174780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17477c) {
            ctx->pc = 0x174818u;
            goto label_174818;
        }
    }
    ctx->pc = 0x174784u;
    // 0x174784: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x174784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x174788: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x174788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17478c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17478Cu;
    {
        const bool branch_taken_0x17478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17478Cu;
        // 0x174790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17478c) {
            ctx->pc = 0x1747ACu;
            goto label_1747ac;
        }
    }
    ctx->pc = 0x174794u;
    // 0x174794: 0x0  nop
    ctx->pc = 0x174794u;
    // NOP
label_174798:
    // 0x174798: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x174798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17479c: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x17479cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1747a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1747A0u;
    {
        const bool branch_taken_0x1747a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1747A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747A0u;
        // 0x1747a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1747a0) {
            ctx->pc = 0x1747BCu;
            goto label_1747bc;
        }
    }
    ctx->pc = 0x1747A8u;
    // 0x1747a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1747ac:
    // 0x1747ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1747acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1747b0: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1747B0u;
    {
        const bool branch_taken_0x1747b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1747b0) {
            ctx->pc = 0x1747B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1747B0u;
            // 0x1747b4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174798;
        }
    }
    ctx->pc = 0x1747B8u;
    // 0x1747b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1747b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1747bc:
    // 0x1747bc: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1747BCu;
    {
        const bool branch_taken_0x1747bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1747C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747BCu;
        // 0x1747c0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1747bc) {
            ctx->pc = 0x174818u;
            goto label_174818;
        }
    }
    ctx->pc = 0x1747C4u;
    // 0x1747c4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1747c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1747c8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1747c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747cc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1747ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1747d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1747d4: 0x8c85020c  lw          $a1, 0x20C($a0)
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1747d8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1747dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1747dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1747e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1747e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1747e4: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1747e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1747e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1747E8u;
    {
        const bool branch_taken_0x1747e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1747e8) {
            ctx->pc = 0x1747ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1747E8u;
            // 0x1747ec: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1747F8u;
            goto label_1747f8;
        }
    }
    ctx->pc = 0x1747F0u;
    // 0x1747f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1747F0u;
    {
        const bool branch_taken_0x1747f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1747F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1747F0u;
        // 0x1747f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1747f0) {
            ctx->pc = 0x174800u;
            goto label_174800;
        }
    }
    ctx->pc = 0x1747F8u;
label_1747f8:
    // 0x1747f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1747f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1747fc: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x1747fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_174800:
    // 0x174800: 0x24e39a08  addiu       $v1, $a3, -0x65F8
    ctx->pc = 0x174800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941192));
    // 0x174804: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x174808: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x174808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17480c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x17480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x174810: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x174810u;
    {
        const bool branch_taken_0x174810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174810) {
            ctx->pc = 0x174814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174810u;
            // 0x174814: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174828u;
            goto label_174828;
        }
    }
    ctx->pc = 0x174818u;
label_174818:
    // 0x174818: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x174818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x17481c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17481cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174820: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x174820u;
    {
        const bool branch_taken_0x174820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174820u;
        // 0x174824: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174820) {
            ctx->pc = 0x174884u;
            goto label_174884;
        }
    }
    ctx->pc = 0x174828u;
label_174828:
    // 0x174828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x174828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17482c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174830: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x174830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x174834: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x174834u;
    {
        const bool branch_taken_0x174834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174834) {
            ctx->pc = 0x174838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174834u;
            // 0x174838: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174844u;
            goto label_174844;
        }
    }
    ctx->pc = 0x17483Cu;
    // 0x17483c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17483Cu;
    {
        const bool branch_taken_0x17483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17483Cu;
        // 0x174840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17483c) {
            ctx->pc = 0x17484Cu;
            goto label_17484c;
        }
    }
    ctx->pc = 0x174844u;
label_174844:
    // 0x174844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174848: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x174848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17484c:
    // 0x17484c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17484Cu;
    SET_GPR_U32(ctx, 31, 0x174854u);
    ctx->pc = 0x174850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17484Cu;
    // 0x174850: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17484Cu, 0x174854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174854u;
label_174854:
    // 0x174854: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x174854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x174858: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x174858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17485c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x17485cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x174860: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x174860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x174864: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x174864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x174868: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x174868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17486c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x174870: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x174870u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x174874: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x174874u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x174878: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x174878u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17487c: 0x46000004  c1          0x4
    ctx->pc = 0x17487cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_174880:
    // 0x174880: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174884:
    // 0x174884: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x174884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17488c: 0x3e00008  jr          $ra
    ctx->pc = 0x17488Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17488Cu;
        // 0x174890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17488Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174894u;
    // 0x174894: 0x0  nop
    ctx->pc = 0x174894u;
    // NOP
    ctx->pc = 0x174898u;
}
