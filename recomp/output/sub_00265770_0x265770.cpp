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

// Function: sub_00265770
// Address: 0x265770 - 0x265970
void sub_00265770_0x265770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265770_0x265770");
#endif

    switch (ctx->pc) {
        case 0x265770u: goto label_265770;
        case 0x265774u: goto label_265774;
        case 0x265778u: goto label_265778;
        case 0x26577cu: goto label_26577c;
        case 0x265780u: goto label_265780;
        case 0x265784u: goto label_265784;
        case 0x265788u: goto label_265788;
        case 0x26578cu: goto label_26578c;
        case 0x265790u: goto label_265790;
        case 0x265794u: goto label_265794;
        case 0x265798u: goto label_265798;
        case 0x26579cu: goto label_26579c;
        case 0x2657a0u: goto label_2657a0;
        case 0x2657a4u: goto label_2657a4;
        case 0x2657a8u: goto label_2657a8;
        case 0x2657acu: goto label_2657ac;
        case 0x2657b0u: goto label_2657b0;
        case 0x2657b4u: goto label_2657b4;
        case 0x2657b8u: goto label_2657b8;
        case 0x2657bcu: goto label_2657bc;
        case 0x2657c0u: goto label_2657c0;
        case 0x2657c4u: goto label_2657c4;
        case 0x2657c8u: goto label_2657c8;
        case 0x2657ccu: goto label_2657cc;
        case 0x2657d0u: goto label_2657d0;
        case 0x2657d4u: goto label_2657d4;
        case 0x2657d8u: goto label_2657d8;
        case 0x2657dcu: goto label_2657dc;
        case 0x2657e0u: goto label_2657e0;
        case 0x2657e4u: goto label_2657e4;
        case 0x2657e8u: goto label_2657e8;
        case 0x2657ecu: goto label_2657ec;
        case 0x2657f0u: goto label_2657f0;
        case 0x2657f4u: goto label_2657f4;
        case 0x2657f8u: goto label_2657f8;
        case 0x2657fcu: goto label_2657fc;
        case 0x265800u: goto label_265800;
        case 0x265804u: goto label_265804;
        case 0x265808u: goto label_265808;
        case 0x26580cu: goto label_26580c;
        case 0x265810u: goto label_265810;
        case 0x265814u: goto label_265814;
        case 0x265818u: goto label_265818;
        case 0x26581cu: goto label_26581c;
        case 0x265820u: goto label_265820;
        case 0x265824u: goto label_265824;
        case 0x265828u: goto label_265828;
        case 0x26582cu: goto label_26582c;
        case 0x265830u: goto label_265830;
        case 0x265834u: goto label_265834;
        case 0x265838u: goto label_265838;
        case 0x26583cu: goto label_26583c;
        case 0x265840u: goto label_265840;
        case 0x265844u: goto label_265844;
        case 0x265848u: goto label_265848;
        case 0x26584cu: goto label_26584c;
        case 0x265850u: goto label_265850;
        case 0x265854u: goto label_265854;
        case 0x265858u: goto label_265858;
        case 0x26585cu: goto label_26585c;
        case 0x265860u: goto label_265860;
        case 0x265864u: goto label_265864;
        case 0x265868u: goto label_265868;
        case 0x26586cu: goto label_26586c;
        case 0x265870u: goto label_265870;
        case 0x265874u: goto label_265874;
        case 0x265878u: goto label_265878;
        case 0x26587cu: goto label_26587c;
        case 0x265880u: goto label_265880;
        case 0x265884u: goto label_265884;
        case 0x265888u: goto label_265888;
        case 0x26588cu: goto label_26588c;
        case 0x265890u: goto label_265890;
        case 0x265894u: goto label_265894;
        case 0x265898u: goto label_265898;
        case 0x26589cu: goto label_26589c;
        case 0x2658a0u: goto label_2658a0;
        case 0x2658a4u: goto label_2658a4;
        case 0x2658a8u: goto label_2658a8;
        case 0x2658acu: goto label_2658ac;
        case 0x2658b0u: goto label_2658b0;
        case 0x2658b4u: goto label_2658b4;
        case 0x2658b8u: goto label_2658b8;
        case 0x2658bcu: goto label_2658bc;
        case 0x2658c0u: goto label_2658c0;
        case 0x2658c4u: goto label_2658c4;
        case 0x2658c8u: goto label_2658c8;
        case 0x2658ccu: goto label_2658cc;
        case 0x2658d0u: goto label_2658d0;
        case 0x2658d4u: goto label_2658d4;
        case 0x2658d8u: goto label_2658d8;
        case 0x2658dcu: goto label_2658dc;
        case 0x2658e0u: goto label_2658e0;
        case 0x2658e4u: goto label_2658e4;
        case 0x2658e8u: goto label_2658e8;
        case 0x2658ecu: goto label_2658ec;
        case 0x2658f0u: goto label_2658f0;
        case 0x2658f4u: goto label_2658f4;
        case 0x2658f8u: goto label_2658f8;
        case 0x2658fcu: goto label_2658fc;
        case 0x265900u: goto label_265900;
        case 0x265904u: goto label_265904;
        case 0x265908u: goto label_265908;
        case 0x26590cu: goto label_26590c;
        case 0x265910u: goto label_265910;
        case 0x265914u: goto label_265914;
        case 0x265918u: goto label_265918;
        case 0x26591cu: goto label_26591c;
        case 0x265920u: goto label_265920;
        case 0x265924u: goto label_265924;
        case 0x265928u: goto label_265928;
        case 0x26592cu: goto label_26592c;
        case 0x265930u: goto label_265930;
        case 0x265934u: goto label_265934;
        case 0x265938u: goto label_265938;
        case 0x26593cu: goto label_26593c;
        case 0x265940u: goto label_265940;
        case 0x265944u: goto label_265944;
        case 0x265948u: goto label_265948;
        case 0x26594cu: goto label_26594c;
        case 0x265950u: goto label_265950;
        case 0x265954u: goto label_265954;
        case 0x265958u: goto label_265958;
        case 0x26595cu: goto label_26595c;
        case 0x265960u: goto label_265960;
        case 0x265964u: goto label_265964;
        case 0x265968u: goto label_265968;
        case 0x26596cu: goto label_26596c;
        default: break;
    }

    ctx->pc = 0x265770u;

label_265770:
    // 0x265770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_265774:
    // 0x265774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_265778:
    // 0x265778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x265778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_26577c:
    // 0x26577c: 0xc084172  jal         func_2105C8
label_265780:
    if (ctx->pc == 0x265780u) {
        ctx->pc = 0x265780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26577Cu;
        // 0x265780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265784u;
        goto label_265784;
    }
    ctx->pc = 0x26577Cu;
    SET_GPR_U32(ctx, 31, 0x265784u);
    ctx->pc = 0x265780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26577Cu;
    // 0x265780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x26577Cu, 0x265784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265784u;
label_265784:
    // 0x265784: 0x920202bc  lbu         $v0, 0x2BC($s0)
    ctx->pc = 0x265784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 700)));
label_265788:
    // 0x265788: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_26578c:
    if (ctx->pc == 0x26578Cu) {
        ctx->pc = 0x265790u;
        goto label_265790;
    }
    ctx->pc = 0x265788u;
    {
        const bool branch_taken_0x265788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265788) {
            ctx->pc = 0x265818u;
            goto label_265818;
        }
    }
    ctx->pc = 0x265790u;
label_265790:
    // 0x265790: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x265790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_265794:
    // 0x265794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x265794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265798:
    // 0x265798: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x265798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_26579c:
    // 0x26579c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2657a0:
    if (ctx->pc == 0x2657A0u) {
        ctx->pc = 0x2657A4u;
        goto label_2657a4;
    }
    ctx->pc = 0x26579Cu;
    {
        const bool branch_taken_0x26579c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26579c) {
            ctx->pc = 0x265818u;
            goto label_265818;
        }
    }
    ctx->pc = 0x2657A4u;
label_2657a4:
    // 0x2657a4: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2657a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2657a8:
    // 0x2657a8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2657a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2657ac:
    // 0x2657ac: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2657acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2657b0:
    // 0x2657b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2657b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2657b4:
    // 0x2657b4: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x2657b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2657b8:
    // 0x2657b8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2657b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2657bc:
    // 0x2657bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2657bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2657c0:
    // 0x2657c0: 0x0  nop
    ctx->pc = 0x2657c0u;
    // NOP
label_2657c4:
    // 0x2657c4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2657c8:
    if (ctx->pc == 0x2657C8u) {
        ctx->pc = 0x2657C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657C4u;
        // 0x2657c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2657CCu;
        goto label_2657cc;
    }
    ctx->pc = 0x2657C4u;
    {
        const bool branch_taken_0x2657c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2657C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657C4u;
        // 0x2657c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657c4) {
            ctx->pc = 0x2657E4u;
            goto label_2657e4;
        }
    }
    ctx->pc = 0x2657CCu;
label_2657cc:
    // 0x2657cc: 0xc46000f8  lwc1        $f0, 0xF8($v1)
    ctx->pc = 0x2657ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2657d0:
    // 0x2657d0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2657d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_2657d4:
    // 0x2657d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2657d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2657d8:
    // 0x2657d8: 0x0  nop
    ctx->pc = 0x2657d8u;
    // NOP
label_2657dc:
    // 0x2657dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2657e0:
    if (ctx->pc == 0x2657E0u) {
        ctx->pc = 0x2657E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657DCu;
        // 0x2657e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2657E4u;
        goto label_2657e4;
    }
    ctx->pc = 0x2657DCu;
    {
        const bool branch_taken_0x2657dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2657dc) {
            ctx->pc = 0x2657E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2657DCu;
            // 0x2657e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2657E4u;
            goto label_2657e4;
        }
    }
    ctx->pc = 0x2657E4u;
label_2657e4:
    // 0x2657e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2657e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2657e8:
    // 0x2657e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2657ec:
    if (ctx->pc == 0x2657ECu) {
        ctx->pc = 0x2657ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657E8u;
        // 0x2657ec: 0x34820008  ori         $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2657F0u;
        goto label_2657f0;
    }
    ctx->pc = 0x2657E8u;
    {
        const bool branch_taken_0x2657e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657E8u;
        // 0x2657ec: 0x34820008  ori         $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657e8) {
            ctx->pc = 0x265818u;
            goto label_265818;
        }
    }
    ctx->pc = 0x2657F0u;
label_2657f0:
    // 0x2657f0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2657f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2657f4:
    // 0x2657f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2657f8:
    if (ctx->pc == 0x2657F8u) {
        ctx->pc = 0x2657F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657F4u;
        // 0x2657f8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2657FCu;
        goto label_2657fc;
    }
    ctx->pc = 0x2657F4u;
    {
        const bool branch_taken_0x2657f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2657F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2657F4u;
        // 0x2657f8: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2657f4) {
            ctx->pc = 0x265804u;
            goto label_265804;
        }
    }
    ctx->pc = 0x2657FCu;
label_2657fc:
    // 0x2657fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2657fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_265800:
    // 0x265800: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x265800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_265804:
    // 0x265804: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x265804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_265808:
    // 0x265808: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x265808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26580c:
    // 0x26580c: 0x40f809  jalr        $v0
label_265810:
    if (ctx->pc == 0x265810u) {
        ctx->pc = 0x265810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26580Cu;
        // 0x265810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265814u;
        goto label_265814;
    }
    ctx->pc = 0x26580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265814u);
        ctx->pc = 0x265810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26580Cu;
        // 0x265810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26580Cu, 0x265814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265814u;
label_265814:
    // 0x265814: 0xa20002bc  sb          $zero, 0x2BC($s0)
    ctx->pc = 0x265814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 700), (uint8_t)GPR_U32(ctx, 0));
label_265818:
    // 0x265818: 0xc0b84d8  jal         func_2E1360
label_26581c:
    if (ctx->pc == 0x26581Cu) {
        ctx->pc = 0x26581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265818u;
        // 0x26581c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265820u;
        goto label_265820;
    }
    ctx->pc = 0x265818u;
    SET_GPR_U32(ctx, 31, 0x265820u);
    ctx->pc = 0x26581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265818u;
    // 0x26581c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1360u, 0x265818u, 0x265820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265820u;
label_265820:
    // 0x265820: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x265820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_265824:
    // 0x265824: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_265828:
    if (ctx->pc == 0x265828u) {
        ctx->pc = 0x265828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265824u;
        // 0x265828: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26582Cu;
        goto label_26582c;
    }
    ctx->pc = 0x265824u;
    {
        const bool branch_taken_0x265824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265824u;
        // 0x265828: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265824) {
            ctx->pc = 0x265954u;
            goto label_265954;
        }
    }
    ctx->pc = 0x26582Cu;
label_26582c:
    // 0x26582c: 0xc60002cc  lwc1        $f0, 0x2CC($s0)
    ctx->pc = 0x26582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265830:
    // 0x265830: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x265830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_265834:
    // 0x265834: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x265834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_265838:
    // 0x265838: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x265838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_26583c:
    // 0x26583c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x26583cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_265840:
    // 0x265840: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_265844:
    if (ctx->pc == 0x265844u) {
        ctx->pc = 0x265844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265840u;
        // 0x265844: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x265848u;
        goto label_265848;
    }
    ctx->pc = 0x265840u;
    {
        const bool branch_taken_0x265840 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x265844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265840u;
        // 0x265844: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265840) {
            ctx->pc = 0x26585Cu;
            goto label_26585c;
        }
    }
    ctx->pc = 0x265848u;
label_265848:
    // 0x265848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x265848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26584c:
    // 0x26584c: 0x0  nop
    ctx->pc = 0x26584cu;
    // NOP
label_265850:
    // 0x265850: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x265850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_265854:
    // 0x265854: 0x10000008  b           . + 4 + (0x8 << 2)
label_265858:
    if (ctx->pc == 0x265858u) {
        ctx->pc = 0x26585Cu;
        goto label_26585c;
    }
    ctx->pc = 0x265854u;
    {
        const bool branch_taken_0x265854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265854) {
            ctx->pc = 0x265878u;
            goto label_265878;
        }
    }
    ctx->pc = 0x26585Cu;
label_26585c:
    // 0x26585c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x26585cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_265860:
    // 0x265860: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x265860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_265864:
    // 0x265864: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x265864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_265868:
    // 0x265868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x265868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26586c:
    // 0x26586c: 0x0  nop
    ctx->pc = 0x26586cu;
    // NOP
label_265870:
    // 0x265870: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x265870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_265874:
    // 0x265874: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x265874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_265878:
    // 0x265878: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x265878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_26587c:
    // 0x26587c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x26587cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_265880:
    // 0x265880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x265880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_265884:
    // 0x265884: 0x0  nop
    ctx->pc = 0x265884u;
    // NOP
label_265888:
    // 0x265888: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x265888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26588c:
    // 0x26588c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26588cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_265890:
    // 0x265890: 0x0  nop
    ctx->pc = 0x265890u;
    // NOP
label_265894:
    // 0x265894: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_265898:
    if (ctx->pc == 0x265898u) {
        ctx->pc = 0x265898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265894u;
        // 0x265898: 0x8e0502c8  lw          $a1, 0x2C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26589Cu;
        goto label_26589c;
    }
    ctx->pc = 0x265894u;
    {
        const bool branch_taken_0x265894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265894u;
        // 0x265898: 0x8e0502c8  lw          $a1, 0x2C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265894) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x26589Cu;
label_26589c:
    // 0x26589c: 0x8ca21060  lw          $v0, 0x1060($a1)
    ctx->pc = 0x26589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4192)));
label_2658a0:
    // 0x2658a0: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x2658a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
label_2658a4:
    // 0x2658a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2658a8:
    if (ctx->pc == 0x2658A8u) {
        ctx->pc = 0x2658A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658A4u;
        // 0x2658a8: 0xc60002d0  lwc1        $f0, 0x2D0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2658ACu;
        goto label_2658ac;
    }
    ctx->pc = 0x2658A4u;
    {
        const bool branch_taken_0x2658a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2658a4) {
            ctx->pc = 0x2658A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2658A4u;
            // 0x2658a8: 0xc60002d0  lwc1        $f0, 0x2D0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2658CCu;
            goto label_2658cc;
        }
    }
    ctx->pc = 0x2658ACu;
label_2658ac:
    // 0x2658ac: 0x8ca300c0  lw          $v1, 0xC0($a1)
    ctx->pc = 0x2658acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_2658b0:
    // 0x2658b0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2658b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2658b4:
    // 0x2658b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2658b8:
    if (ctx->pc == 0x2658B8u) {
        ctx->pc = 0x2658B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658B4u;
        // 0x2658b8: 0xc60002d0  lwc1        $f0, 0x2D0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2658BCu;
        goto label_2658bc;
    }
    ctx->pc = 0x2658B4u;
    {
        const bool branch_taken_0x2658b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2658b4) {
            ctx->pc = 0x2658B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2658B4u;
            // 0x2658b8: 0xc60002d0  lwc1        $f0, 0x2D0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2658CCu;
            goto label_2658cc;
        }
    }
    ctx->pc = 0x2658BCu;
label_2658bc:
    // 0x2658bc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2658bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2658c0:
    // 0x2658c0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2658c4:
    if (ctx->pc == 0x2658C4u) {
        ctx->pc = 0x2658C8u;
        goto label_2658c8;
    }
    ctx->pc = 0x2658C0u;
    {
        const bool branch_taken_0x2658c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2658c0) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x2658C8u;
label_2658c8:
    // 0x2658c8: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2658c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2658cc:
    // 0x2658cc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2658ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2658d0:
    // 0x2658d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2658d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2658d4:
    // 0x2658d4: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2658d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2658d8:
    // 0x2658d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2658d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2658dc:
    // 0x2658dc: 0x0  nop
    ctx->pc = 0x2658dcu;
    // NOP
label_2658e0:
    // 0x2658e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2658e4:
    if (ctx->pc == 0x2658E4u) {
        ctx->pc = 0x2658E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658E0u;
        // 0x2658e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2658E8u;
        goto label_2658e8;
    }
    ctx->pc = 0x2658E0u;
    {
        const bool branch_taken_0x2658e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2658E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2658E0u;
        // 0x2658e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658e0) {
            ctx->pc = 0x2658ECu;
            goto label_2658ec;
        }
    }
    ctx->pc = 0x2658E8u;
label_2658e8:
    // 0x2658e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2658e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2658ec:
    // 0x2658ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2658ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2658f0:
    // 0x2658f0: 0x41823  negu        $v1, $a0
    ctx->pc = 0x2658f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2658f4:
    // 0x2658f4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2658f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2658f8:
    // 0x2658f8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2658f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_2658fc:
    // 0x2658fc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_265900:
    if (ctx->pc == 0x265900u) {
        ctx->pc = 0x265904u;
        goto label_265904;
    }
    ctx->pc = 0x2658FCu;
    {
        const bool branch_taken_0x2658fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2658fc) {
            ctx->pc = 0x265930u;
            goto label_265930;
        }
    }
    ctx->pc = 0x265904u;
label_265904:
    // 0x265904: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x265904u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
label_265908:
    // 0x265908: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x265908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_26590c:
    // 0x26590c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_265910:
    // 0x265910: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x265910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
label_265914:
    // 0x265914: 0x346307ff  ori         $v1, $v1, 0x7FF
    ctx->pc = 0x265914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2047);
label_265918:
    // 0x265918: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x265918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_26591c:
    // 0x26591c: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x26591cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
label_265920:
    // 0x265920: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_265924:
    // 0x265924: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x265924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_265928:
    // 0x265928: 0x1000000c  b           . + 4 + (0xC << 2)
label_26592c:
    if (ctx->pc == 0x26592Cu) {
        ctx->pc = 0x26592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265928u;
        // 0x26592c: 0xfca21020  sd          $v0, 0x1020($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265930u;
        goto label_265930;
    }
    ctx->pc = 0x265928u;
    {
        const bool branch_taken_0x265928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265928u;
        // 0x26592c: 0xfca21020  sd          $v0, 0x1020($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265928) {
            ctx->pc = 0x26595Cu;
            goto label_26595c;
        }
    }
    ctx->pc = 0x265930u;
label_265930:
    // 0x265930: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
label_265934:
    if (ctx->pc == 0x265934u) {
        ctx->pc = 0x265934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265930u;
        // 0x265934: 0xae0002cc  sw          $zero, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265938u;
        goto label_265938;
    }
    ctx->pc = 0x265930u;
    {
        const bool branch_taken_0x265930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x265930) {
            ctx->pc = 0x265934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265930u;
            // 0x265934: 0xae0002cc  sw          $zero, 0x2CC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265958u;
            goto label_265958;
        }
    }
    ctx->pc = 0x265938u;
label_265938:
    // 0x265938: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x265938u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
label_26593c:
    // 0x26593c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x26593cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_265940:
    // 0x265940: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x265940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_265944:
    // 0x265944: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x265944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
label_265948:
    // 0x265948: 0x346307ff  ori         $v1, $v1, 0x7FF
    ctx->pc = 0x265948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2047);
label_26594c:
    // 0x26594c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_265950:
    // 0x265950: 0xfca21020  sd          $v0, 0x1020($a1)
    ctx->pc = 0x265950u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
label_265954:
    // 0x265954: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x265954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
label_265958:
    // 0x265958: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x265958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
label_26595c:
    // 0x26595c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26595cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_265960:
    // 0x265960: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x265960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_265964:
    // 0x265964: 0x3e00008  jr          $ra
label_265968:
    if (ctx->pc == 0x265968u) {
        ctx->pc = 0x265968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265964u;
        // 0x265968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26596Cu;
        goto label_26596c;
    }
    ctx->pc = 0x265964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265964u;
        // 0x265968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26596Cu;
label_26596c:
    // 0x26596c: 0x0  nop
    ctx->pc = 0x26596cu;
    // NOP
    ctx->pc = 0x265970u;
}
