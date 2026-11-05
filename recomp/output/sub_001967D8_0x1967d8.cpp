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

// Function: sub_001967D8
// Address: 0x1967d8 - 0x1969d0
void sub_001967D8_0x1967d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001967D8_0x1967d8");
#endif

    switch (ctx->pc) {
        case 0x1967d8u: goto label_1967d8;
        case 0x1967dcu: goto label_1967dc;
        case 0x1967e0u: goto label_1967e0;
        case 0x1967e4u: goto label_1967e4;
        case 0x1967e8u: goto label_1967e8;
        case 0x1967ecu: goto label_1967ec;
        case 0x1967f0u: goto label_1967f0;
        case 0x1967f4u: goto label_1967f4;
        case 0x1967f8u: goto label_1967f8;
        case 0x1967fcu: goto label_1967fc;
        case 0x196800u: goto label_196800;
        case 0x196804u: goto label_196804;
        case 0x196808u: goto label_196808;
        case 0x19680cu: goto label_19680c;
        case 0x196810u: goto label_196810;
        case 0x196814u: goto label_196814;
        case 0x196818u: goto label_196818;
        case 0x19681cu: goto label_19681c;
        case 0x196820u: goto label_196820;
        case 0x196824u: goto label_196824;
        case 0x196828u: goto label_196828;
        case 0x19682cu: goto label_19682c;
        case 0x196830u: goto label_196830;
        case 0x196834u: goto label_196834;
        case 0x196838u: goto label_196838;
        case 0x19683cu: goto label_19683c;
        case 0x196840u: goto label_196840;
        case 0x196844u: goto label_196844;
        case 0x196848u: goto label_196848;
        case 0x19684cu: goto label_19684c;
        case 0x196850u: goto label_196850;
        case 0x196854u: goto label_196854;
        case 0x196858u: goto label_196858;
        case 0x19685cu: goto label_19685c;
        case 0x196860u: goto label_196860;
        case 0x196864u: goto label_196864;
        case 0x196868u: goto label_196868;
        case 0x19686cu: goto label_19686c;
        case 0x196870u: goto label_196870;
        case 0x196874u: goto label_196874;
        case 0x196878u: goto label_196878;
        case 0x19687cu: goto label_19687c;
        case 0x196880u: goto label_196880;
        case 0x196884u: goto label_196884;
        case 0x196888u: goto label_196888;
        case 0x19688cu: goto label_19688c;
        case 0x196890u: goto label_196890;
        case 0x196894u: goto label_196894;
        case 0x196898u: goto label_196898;
        case 0x19689cu: goto label_19689c;
        case 0x1968a0u: goto label_1968a0;
        case 0x1968a4u: goto label_1968a4;
        case 0x1968a8u: goto label_1968a8;
        case 0x1968acu: goto label_1968ac;
        case 0x1968b0u: goto label_1968b0;
        case 0x1968b4u: goto label_1968b4;
        case 0x1968b8u: goto label_1968b8;
        case 0x1968bcu: goto label_1968bc;
        case 0x1968c0u: goto label_1968c0;
        case 0x1968c4u: goto label_1968c4;
        case 0x1968c8u: goto label_1968c8;
        case 0x1968ccu: goto label_1968cc;
        case 0x1968d0u: goto label_1968d0;
        case 0x1968d4u: goto label_1968d4;
        case 0x1968d8u: goto label_1968d8;
        case 0x1968dcu: goto label_1968dc;
        case 0x1968e0u: goto label_1968e0;
        case 0x1968e4u: goto label_1968e4;
        case 0x1968e8u: goto label_1968e8;
        case 0x1968ecu: goto label_1968ec;
        case 0x1968f0u: goto label_1968f0;
        case 0x1968f4u: goto label_1968f4;
        case 0x1968f8u: goto label_1968f8;
        case 0x1968fcu: goto label_1968fc;
        case 0x196900u: goto label_196900;
        case 0x196904u: goto label_196904;
        case 0x196908u: goto label_196908;
        case 0x19690cu: goto label_19690c;
        case 0x196910u: goto label_196910;
        case 0x196914u: goto label_196914;
        case 0x196918u: goto label_196918;
        case 0x19691cu: goto label_19691c;
        case 0x196920u: goto label_196920;
        case 0x196924u: goto label_196924;
        case 0x196928u: goto label_196928;
        case 0x19692cu: goto label_19692c;
        case 0x196930u: goto label_196930;
        case 0x196934u: goto label_196934;
        case 0x196938u: goto label_196938;
        case 0x19693cu: goto label_19693c;
        case 0x196940u: goto label_196940;
        case 0x196944u: goto label_196944;
        case 0x196948u: goto label_196948;
        case 0x19694cu: goto label_19694c;
        case 0x196950u: goto label_196950;
        case 0x196954u: goto label_196954;
        case 0x196958u: goto label_196958;
        case 0x19695cu: goto label_19695c;
        case 0x196960u: goto label_196960;
        case 0x196964u: goto label_196964;
        case 0x196968u: goto label_196968;
        case 0x19696cu: goto label_19696c;
        case 0x196970u: goto label_196970;
        case 0x196974u: goto label_196974;
        case 0x196978u: goto label_196978;
        case 0x19697cu: goto label_19697c;
        case 0x196980u: goto label_196980;
        case 0x196984u: goto label_196984;
        case 0x196988u: goto label_196988;
        case 0x19698cu: goto label_19698c;
        case 0x196990u: goto label_196990;
        case 0x196994u: goto label_196994;
        case 0x196998u: goto label_196998;
        case 0x19699cu: goto label_19699c;
        case 0x1969a0u: goto label_1969a0;
        case 0x1969a4u: goto label_1969a4;
        case 0x1969a8u: goto label_1969a8;
        case 0x1969acu: goto label_1969ac;
        case 0x1969b0u: goto label_1969b0;
        case 0x1969b4u: goto label_1969b4;
        case 0x1969b8u: goto label_1969b8;
        case 0x1969bcu: goto label_1969bc;
        case 0x1969c0u: goto label_1969c0;
        case 0x1969c4u: goto label_1969c4;
        case 0x1969c8u: goto label_1969c8;
        case 0x1969ccu: goto label_1969cc;
        default: break;
    }

    ctx->pc = 0x1967d8u;

label_1967d8:
    // 0x1967d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1967d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1967dc:
    // 0x1967dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1967dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1967e0:
    // 0x1967e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1967e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1967e4:
    // 0x1967e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1967e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1967e8:
    // 0x1967e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1967e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1967ec:
    // 0x1967ec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1967ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1967f0:
    // 0x1967f0: 0x50430074  beql        $v0, $v1, . + 4 + (0x74 << 2)
label_1967f4:
    if (ctx->pc == 0x1967F4u) {
        ctx->pc = 0x1967F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967F0u;
        // 0x1967f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1967F8u;
        goto label_1967f8;
    }
    ctx->pc = 0x1967F0u;
    {
        const bool branch_taken_0x1967f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1967f0) {
            ctx->pc = 0x1967F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1967F0u;
            // 0x1967f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1969C4u;
            goto label_1969c4;
        }
    }
    ctx->pc = 0x1967F8u;
label_1967f8:
    // 0x1967f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1967fc:
    // 0x1967fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_196800:
    if (ctx->pc == 0x196800u) {
        ctx->pc = 0x196800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967FCu;
        // 0x196800: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196804u;
        goto label_196804;
    }
    ctx->pc = 0x1967FCu;
    {
        const bool branch_taken_0x1967fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967FCu;
        // 0x196800: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967fc) {
            ctx->pc = 0x196814u;
            goto label_196814;
        }
    }
    ctx->pc = 0x196804u;
label_196804:
    // 0x196804: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x196804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_196808:
    // 0x196808: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x196808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19680c:
    // 0x19680c: 0x40f809  jalr        $v0
label_196810:
    if (ctx->pc == 0x196810u) {
        ctx->pc = 0x196814u;
        goto label_196814;
    }
    ctx->pc = 0x19680Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196814u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19680Cu, 0x196814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196814u;
label_196814:
    // 0x196814: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x196814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_196818:
    // 0x196818: 0xc061a12  jal         func_186848
label_19681c:
    if (ctx->pc == 0x19681Cu) {
        ctx->pc = 0x19681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196818u;
        // 0x19681c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196820u;
        goto label_196820;
    }
    ctx->pc = 0x196818u;
    SET_GPR_U32(ctx, 31, 0x196820u);
    ctx->pc = 0x19681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196818u;
    // 0x19681c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196818u, 0x196820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196820u;
label_196820:
    // 0x196820: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x196820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196824:
    // 0x196824: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x196824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_196828:
    // 0x196828: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x196828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_19682c:
    // 0x19682c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x19682cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_196830:
    // 0x196830: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x196830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_196834:
    // 0x196834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x196834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196838:
    // 0x196838: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x196838u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_19683c:
    // 0x19683c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x19683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_196840:
    // 0x196840: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_196844:
    // 0x196844: 0x0  nop
    ctx->pc = 0x196844u;
    // NOP
label_196848:
    // 0x196848: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_19684c:
    if (ctx->pc == 0x19684Cu) {
        ctx->pc = 0x19684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196848u;
        // 0x19684c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196850u;
        goto label_196850;
    }
    ctx->pc = 0x196848u;
    {
        const bool branch_taken_0x196848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196848u;
        // 0x19684c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196848) {
            ctx->pc = 0x196880u;
            goto label_196880;
        }
    }
    ctx->pc = 0x196850u;
label_196850:
    // 0x196850: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x196850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196854:
    // 0x196854: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x196854u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_196858:
    // 0x196858: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19685c:
    // 0x19685c: 0x0  nop
    ctx->pc = 0x19685cu;
    // NOP
label_196860:
    // 0x196860: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_196864:
    if (ctx->pc == 0x196864u) {
        ctx->pc = 0x196864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196860u;
        // 0x196864: 0x4300b  movn        $a2, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196868u;
        goto label_196868;
    }
    ctx->pc = 0x196860u;
    {
        const bool branch_taken_0x196860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x196860) {
            ctx->pc = 0x196864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196860u;
            // 0x196864: 0x4300b  movn        $a2, $zero, $a0 (Delay Slot)
            if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196884u;
            goto label_196884;
        }
    }
    ctx->pc = 0x196868u;
label_196868:
    // 0x196868: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x196868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19686c:
    // 0x19686c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19686cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_196870:
    // 0x196870: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x196870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_196874:
    // 0x196874: 0x0  nop
    ctx->pc = 0x196874u;
    // NOP
label_196878:
    // 0x196878: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19687c:
    if (ctx->pc == 0x19687Cu) {
        ctx->pc = 0x19687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196878u;
        // 0x19687c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196880u;
        goto label_196880;
    }
    ctx->pc = 0x196878u;
    {
        const bool branch_taken_0x196878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196878) {
            ctx->pc = 0x19687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196878u;
            // 0x19687c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196880u;
            goto label_196880;
        }
    }
    ctx->pc = 0x196880u;
label_196880:
    // 0x196880: 0x4300b  movn        $a2, $zero, $a0
    ctx->pc = 0x196880u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_196884:
    // 0x196884: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_196888:
    if (ctx->pc == 0x196888u) {
        ctx->pc = 0x196888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196884u;
        // 0x196888: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19688Cu;
        goto label_19688c;
    }
    ctx->pc = 0x196884u;
    {
        const bool branch_taken_0x196884 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x196888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196884u;
        // 0x196888: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196884) {
            ctx->pc = 0x1968B4u;
            goto label_1968b4;
        }
    }
    ctx->pc = 0x19688Cu;
label_19688c:
    // 0x19688c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x19688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_196890:
    // 0x196890: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x196890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_196894:
    // 0x196894: 0xc0641e0  jal         func_190780
label_196898:
    if (ctx->pc == 0x196898u) {
        ctx->pc = 0x196898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196894u;
        // 0x196898: 0xc60d0020  lwc1        $f13, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19689Cu;
        goto label_19689c;
    }
    ctx->pc = 0x196894u;
    SET_GPR_U32(ctx, 31, 0x19689Cu);
    ctx->pc = 0x196898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196894u;
    // 0x196898: 0xc60d0020  lwc1        $f13, 0x20($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190780u, 0x196894u, 0x19689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19689Cu;
label_19689c:
    // 0x19689c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x19689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1968a0:
    // 0x1968a0: 0xc064270  jal         func_1909C0
label_1968a4:
    if (ctx->pc == 0x1968A4u) {
        ctx->pc = 0x1968A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968A0u;
        // 0x1968a4: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968A8u;
        goto label_1968a8;
    }
    ctx->pc = 0x1968A0u;
    SET_GPR_U32(ctx, 31, 0x1968A8u);
    ctx->pc = 0x1968A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968A0u;
    // 0x1968a4: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1909C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1909C0u, 0x1968A0u, 0x1968A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968A8u;
label_1968a8:
    // 0x1968a8: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1968a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1968ac:
    // 0x1968ac: 0x10000043  b           . + 4 + (0x43 << 2)
label_1968b0:
    if (ctx->pc == 0x1968B0u) {
        ctx->pc = 0x1968B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968ACu;
        // 0x1968b0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968B4u;
        goto label_1968b4;
    }
    ctx->pc = 0x1968ACu;
    {
        const bool branch_taken_0x1968ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968ACu;
        // 0x1968b0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968ac) {
            ctx->pc = 0x1969BCu;
            goto label_1969bc;
        }
    }
    ctx->pc = 0x1968B4u;
label_1968b4:
    // 0x1968b4: 0xc0f6a96  jal         func_3DAA58
label_1968b8:
    if (ctx->pc == 0x1968B8u) {
        ctx->pc = 0x1968B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968B4u;
        // 0x1968b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968BCu;
        goto label_1968bc;
    }
    ctx->pc = 0x1968B4u;
    SET_GPR_U32(ctx, 31, 0x1968BCu);
    ctx->pc = 0x1968B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968B4u;
    // 0x1968b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1968B4u, 0x1968BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968BCu;
label_1968bc:
    // 0x1968bc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1968bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1968c0:
    // 0x1968c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1968c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1968c4:
    // 0x1968c4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_1968c8:
    if (ctx->pc == 0x1968C8u) {
        ctx->pc = 0x1968C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968C4u;
        // 0x1968c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968CCu;
        goto label_1968cc;
    }
    ctx->pc = 0x1968C4u;
    {
        const bool branch_taken_0x1968c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1968C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968C4u;
        // 0x1968c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968c4) {
            ctx->pc = 0x196950u;
            goto label_196950;
        }
    }
    ctx->pc = 0x1968CCu;
label_1968cc:
    // 0x1968cc: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_1968d0:
    if (ctx->pc == 0x1968D0u) {
        ctx->pc = 0x1968D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968CCu;
        // 0x1968d0: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968D4u;
        goto label_1968d4;
    }
    ctx->pc = 0x1968CCu;
    {
        const bool branch_taken_0x1968cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1968cc) {
            ctx->pc = 0x1968D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1968CCu;
            // 0x1968d0: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1969C0u;
            goto label_1969c0;
        }
    }
    ctx->pc = 0x1968D4u;
label_1968d4:
    // 0x1968d4: 0x5460003a  bnel        $v1, $zero, . + 4 + (0x3A << 2)
label_1968d8:
    if (ctx->pc == 0x1968D8u) {
        ctx->pc = 0x1968D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968D4u;
        // 0x1968d8: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968DCu;
        goto label_1968dc;
    }
    ctx->pc = 0x1968D4u;
    {
        const bool branch_taken_0x1968d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1968d4) {
            ctx->pc = 0x1968D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1968D4u;
            // 0x1968d8: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1969C0u;
            goto label_1969c0;
        }
    }
    ctx->pc = 0x1968DCu;
label_1968dc:
    // 0x1968dc: 0xc061a12  jal         func_186848
label_1968e0:
    if (ctx->pc == 0x1968E0u) {
        ctx->pc = 0x1968E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968DCu;
        // 0x1968e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968E4u;
        goto label_1968e4;
    }
    ctx->pc = 0x1968DCu;
    SET_GPR_U32(ctx, 31, 0x1968E4u);
    ctx->pc = 0x1968E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968DCu;
    // 0x1968e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1968DCu, 0x1968E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1968E4u;
label_1968e4:
    // 0x1968e4: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1968e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_1968e8:
    // 0x1968e8: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1968ec:
    // 0x1968ec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1968ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1968f0:
    // 0x1968f0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1968f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1968f4:
    // 0x1968f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1968f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1968f8:
    // 0x1968f8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1968f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1968fc:
    // 0x1968fc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1968fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196900:
    // 0x196900: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x196900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_196904:
    // 0x196904: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x196904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_196908:
    // 0x196908: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x196908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19690c:
    // 0x19690c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19690cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_196910:
    // 0x196910: 0x4a0003bf  vwaitq
    ctx->pc = 0x196910u;
    // VWAITQ (Q already resolved in this runtime)
label_196914:
    // 0x196914: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x196914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_196918:
    // 0x196918: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x196918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_19691c:
    // 0x19691c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x19691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_196920:
    // 0x196920: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x196920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_196924:
    // 0x196924: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x196924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_196928:
    // 0x196928: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x196928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19692c:
    // 0x19692c: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x19692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_196930:
    // 0x196930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196934:
    // 0x196934: 0xc0641e0  jal         func_190780
label_196938:
    if (ctx->pc == 0x196938u) {
        ctx->pc = 0x196938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196934u;
        // 0x196938: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19693Cu;
        goto label_19693c;
    }
    ctx->pc = 0x196934u;
    SET_GPR_U32(ctx, 31, 0x19693Cu);
    ctx->pc = 0x196938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196934u;
    // 0x196938: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190780u, 0x196934u, 0x19693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19693Cu;
label_19693c:
    // 0x19693c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x19693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_196940:
    // 0x196940: 0xc064270  jal         func_1909C0
label_196944:
    if (ctx->pc == 0x196944u) {
        ctx->pc = 0x196944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196940u;
        // 0x196944: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196948u;
        goto label_196948;
    }
    ctx->pc = 0x196940u;
    SET_GPR_U32(ctx, 31, 0x196948u);
    ctx->pc = 0x196944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196940u;
    // 0x196944: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1909C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1909C0u, 0x196940u, 0x196948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196948u;
label_196948:
    // 0x196948: 0x1000001d  b           . + 4 + (0x1D << 2)
label_19694c:
    if (ctx->pc == 0x19694Cu) {
        ctx->pc = 0x19694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196948u;
        // 0x19694c: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196950u;
        goto label_196950;
    }
    ctx->pc = 0x196948u;
    {
        const bool branch_taken_0x196948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196948u;
        // 0x19694c: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196948) {
            ctx->pc = 0x1969C0u;
            goto label_1969c0;
        }
    }
    ctx->pc = 0x196950u;
label_196950:
    // 0x196950: 0xc061a12  jal         func_186848
label_196954:
    if (ctx->pc == 0x196954u) {
        ctx->pc = 0x196954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196950u;
        // 0x196954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196958u;
        goto label_196958;
    }
    ctx->pc = 0x196950u;
    SET_GPR_U32(ctx, 31, 0x196958u);
    ctx->pc = 0x196954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196950u;
    // 0x196954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196950u, 0x196958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196958u;
label_196958:
    // 0x196958: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x196958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_19695c:
    // 0x19695c: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x19695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_196960:
    // 0x196960: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x196960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_196964:
    // 0x196964: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x196964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_196968:
    // 0x196968: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x196968u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19696c:
    // 0x19696c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19696cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_196970:
    // 0x196970: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x196970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196974:
    // 0x196974: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x196974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_196978:
    // 0x196978: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x196978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19697c:
    // 0x19697c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19697cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_196980:
    // 0x196980: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x196980u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_196984:
    // 0x196984: 0x4a0003bf  vwaitq
    ctx->pc = 0x196984u;
    // VWAITQ (Q already resolved in this runtime)
label_196988:
    // 0x196988: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x196988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19698c:
    // 0x19698c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_196990:
    // 0x196990: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x196990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_196994:
    // 0x196994: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_196998:
    // 0x196998: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x196998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19699c:
    // 0x19699c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19699cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1969a0:
    // 0x1969a0: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x1969a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1969a4:
    // 0x1969a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1969a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1969a8:
    // 0x1969a8: 0xc0641e0  jal         func_190780
label_1969ac:
    if (ctx->pc == 0x1969ACu) {
        ctx->pc = 0x1969ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969A8u;
        // 0x1969ac: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969B0u;
        goto label_1969b0;
    }
    ctx->pc = 0x1969A8u;
    SET_GPR_U32(ctx, 31, 0x1969B0u);
    ctx->pc = 0x1969ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1969A8u;
    // 0x1969ac: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190780u, 0x1969A8u, 0x1969B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969B0u;
label_1969b0:
    // 0x1969b0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1969b4:
    // 0x1969b4: 0xc064270  jal         func_1909C0
label_1969b8:
    if (ctx->pc == 0x1969B8u) {
        ctx->pc = 0x1969B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B4u;
        // 0x1969b8: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969BCu;
        goto label_1969bc;
    }
    ctx->pc = 0x1969B4u;
    SET_GPR_U32(ctx, 31, 0x1969BCu);
    ctx->pc = 0x1969B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1969B4u;
    // 0x1969b8: 0x8e050094  lw          $a1, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1909C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1909C0u, 0x1969B4u, 0x1969BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969BCu;
label_1969bc:
    // 0x1969bc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1969bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_1969c0:
    // 0x1969c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1969c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1969c4:
    // 0x1969c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1969c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1969c8:
    // 0x1969c8: 0x3e00008  jr          $ra
label_1969cc:
    if (ctx->pc == 0x1969CCu) {
        ctx->pc = 0x1969CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969C8u;
        // 0x1969cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969D0u;
        goto label_fallthrough_0x1969c8;
    }
    ctx->pc = 0x1969C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1969CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969C8u;
        // 0x1969cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1969C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1969c8:
    ctx->pc = 0x1969D0u;
}
