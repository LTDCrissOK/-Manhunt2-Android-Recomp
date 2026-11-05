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

// Function: sub_001B26E8
// Address: 0x1b26e8 - 0x1b2870
void sub_001B26E8_0x1b26e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B26E8_0x1b26e8");
#endif

    switch (ctx->pc) {
        case 0x1b2744u: goto label_1b2744;
        case 0x1b2758u: goto label_1b2758;
        case 0x1b278cu: goto label_1b278c;
        case 0x1b27bcu: goto label_1b27bc;
        case 0x1b27d4u: goto label_1b27d4;
        case 0x1b27e4u: goto label_1b27e4;
        case 0x1b2834u: goto label_1b2834;
        default: break;
    }

    ctx->pc = 0x1b26e8u;

    // 0x1b26e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b26e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b26ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b26ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b26f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b26f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b26f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b26f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b26f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b26fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b26fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2700: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2704: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b2704u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b2708: 0x8e440088  lw          $a0, 0x88($s2)
    ctx->pc = 0x1b2708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b270c: 0x2482ffee  addiu       $v0, $a0, -0x12
    ctx->pc = 0x1b270cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967278));
    // 0x1b2710: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b2710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b2714: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2714u;
    {
        const bool branch_taken_0x1b2714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2714u;
        // 0x1b2718: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2714) {
            ctx->pc = 0x1B2730u;
            goto label_1b2730;
        }
    }
    ctx->pc = 0x1B271Cu;
    // 0x1b271c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b2720: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b2720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b2724: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2728: 0x2863015a  slti        $v1, $v1, 0x15A
    ctx->pc = 0x1b2728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)346) ? 1 : 0);
    // 0x1b272c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1b272cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1b2730:
    // 0x1b2730: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2730u;
    {
        const bool branch_taken_0x1b2730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2730u;
        // 0x1b2734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2730) {
            ctx->pc = 0x1B274Cu;
            goto label_1b274c;
        }
    }
    ctx->pc = 0x1B2738u;
    // 0x1b2738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b273c: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B273Cu;
    SET_GPR_U32(ctx, 31, 0x1B2744u);
    ctx->pc = 0x1B2740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B273Cu;
    // 0x1b2740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B273Cu, 0x1B2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2744u;
label_1b2744:
    // 0x1b2744: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1B2744u;
    {
        const bool branch_taken_0x1b2744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2744u;
        // 0x1b2748: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2744) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B274Cu;
label_1b274c:
    // 0x1b274c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b2750: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B2750u;
    SET_GPR_U32(ctx, 31, 0x1B2758u);
    ctx->pc = 0x1B2754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2750u;
    // 0x1b2754: 0x8c530110  lw          $s3, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B2750u, 0x1B2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2758u;
label_1b2758:
    // 0x1b2758: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1b2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1b275c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1B275Cu;
    {
        const bool branch_taken_0x1b275c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B275Cu;
        // 0x1b2760: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b275c) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B2764u;
    // 0x1b2764: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b2764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b2768: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1b2768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1b276c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2770: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B2770u;
    {
        const bool branch_taken_0x1b2770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2770) {
            ctx->pc = 0x1B2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2770u;
            // 0x1b2774: 0x8e4400a0  lw          $a0, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B27E8u;
            goto label_1b27e8;
        }
    }
    ctx->pc = 0x1B2778u;
    // 0x1b2778: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b2778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b277c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2780: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1b2780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b2784: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B2784u;
    SET_GPR_U32(ctx, 31, 0x1B278Cu);
    ctx->pc = 0x1B2788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2784u;
    // 0x1b2788: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B2784u, 0x1B278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B278Cu;
label_1b278c:
    // 0x1b278c: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b2790: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1b2790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1b2794: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1b2794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1b2798: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b2798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b279c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b279cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b27a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b27a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b27a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b27a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b27a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b27ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b27acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b27b4: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1B27B4u;
    SET_GPR_U32(ctx, 31, 0x1B27BCu);
    ctx->pc = 0x1B27B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27B4u;
    // 0x1b27b8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1B27B4u, 0x1B27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27BCu;
label_1b27bc:
    // 0x1b27bc: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b27bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b27c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b27c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27c4: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1b27c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b27c8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b27cc: 0xc06c680  jal         func_1B1A00
    ctx->pc = 0x1B27CCu;
    SET_GPR_U32(ctx, 31, 0x1B27D4u);
    ctx->pc = 0x1B27D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27CCu;
    // 0x1b27d0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A00u, 0x1B27CCu, 0x1B27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27D4u;
label_1b27d4:
    // 0x1b27d4: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b27d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b27d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b27dc: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B27DCu;
    SET_GPR_U32(ctx, 31, 0x1B27E4u);
    ctx->pc = 0x1B27E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27DCu;
    // 0x1b27e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B27DCu, 0x1B27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27E4u;
label_1b27e4:
    // 0x1b27e4: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b27e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1b27e8:
    // 0x1b27e8: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b27e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b27ec: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b27ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b27f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b27f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b27f4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1b27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b27f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b27f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b27fc: 0x0  nop
    ctx->pc = 0x1b27fcu;
    // NOP
    // 0x1b2800: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2800u;
    {
        const bool branch_taken_0x1b2800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2800u;
        // 0x1b2804: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2800) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B2808u;
    // 0x1b2808: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1b2808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b280c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b280cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2810: 0x0  nop
    ctx->pc = 0x1b2810u;
    // NOP
    // 0x1b2814: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b2814u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2818: 0x0  nop
    ctx->pc = 0x1b2818u;
    // NOP
    // 0x1b281c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1B281Cu;
    {
        const bool branch_taken_0x1b281c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b281c) {
            ctx->pc = 0x1B2820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B281Cu;
            // 0x1b2820: 0x9482002a  lhu         $v0, 0x2A($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B283Cu;
            goto label_1b283c;
        }
    }
    ctx->pc = 0x1B2824u;
    // 0x1b2824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2828: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b2828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b282c: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B282Cu;
    SET_GPR_U32(ctx, 31, 0x1B2834u);
    ctx->pc = 0x1B2830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B282Cu;
    // 0x1b2830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B282Cu, 0x1B2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2834u;
label_1b2834:
    // 0x1b2834: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2834u;
    {
        const bool branch_taken_0x1b2834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2834u;
        // 0x1b2838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2834) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B283Cu;
label_1b283c:
    // 0x1b283c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b2840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2840u;
    {
        const bool branch_taken_0x1b2840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2840u;
        // 0x1b2844: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2840) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B2848u;
    // 0x1b2848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b284c: 0xae420098  sw          $v0, 0x98($s2)
    ctx->pc = 0x1b284cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
label_1b2850:
    // 0x1b2850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b285c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2860: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b2860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2864: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2864u;
        // 0x1b2868: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B286Cu;
    // 0x1b286c: 0x0  nop
    ctx->pc = 0x1b286cu;
    // NOP
    ctx->pc = 0x1b2870u;
}
