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

// Function: sub_003246D0
// Address: 0x3246d0 - 0x324848
void sub_003246D0_0x3246d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003246D0_0x3246d0");
#endif

    switch (ctx->pc) {
        case 0x3246d0u: goto label_3246d0;
        case 0x3246d4u: goto label_3246d4;
        case 0x3246d8u: goto label_3246d8;
        case 0x3246dcu: goto label_3246dc;
        case 0x3246e0u: goto label_3246e0;
        case 0x3246e4u: goto label_3246e4;
        case 0x3246e8u: goto label_3246e8;
        case 0x3246ecu: goto label_3246ec;
        case 0x3246f0u: goto label_3246f0;
        case 0x3246f4u: goto label_3246f4;
        case 0x3246f8u: goto label_3246f8;
        case 0x3246fcu: goto label_3246fc;
        case 0x324700u: goto label_324700;
        case 0x324704u: goto label_324704;
        case 0x324708u: goto label_324708;
        case 0x32470cu: goto label_32470c;
        case 0x324710u: goto label_324710;
        case 0x324714u: goto label_324714;
        case 0x324718u: goto label_324718;
        case 0x32471cu: goto label_32471c;
        case 0x324720u: goto label_324720;
        case 0x324724u: goto label_324724;
        case 0x324728u: goto label_324728;
        case 0x32472cu: goto label_32472c;
        case 0x324730u: goto label_324730;
        case 0x324734u: goto label_324734;
        case 0x324738u: goto label_324738;
        case 0x32473cu: goto label_32473c;
        case 0x324740u: goto label_324740;
        case 0x324744u: goto label_324744;
        case 0x324748u: goto label_324748;
        case 0x32474cu: goto label_32474c;
        case 0x324750u: goto label_324750;
        case 0x324754u: goto label_324754;
        case 0x324758u: goto label_324758;
        case 0x32475cu: goto label_32475c;
        case 0x324760u: goto label_324760;
        case 0x324764u: goto label_324764;
        case 0x324768u: goto label_324768;
        case 0x32476cu: goto label_32476c;
        case 0x324770u: goto label_324770;
        case 0x324774u: goto label_324774;
        case 0x324778u: goto label_324778;
        case 0x32477cu: goto label_32477c;
        case 0x324780u: goto label_324780;
        case 0x324784u: goto label_324784;
        case 0x324788u: goto label_324788;
        case 0x32478cu: goto label_32478c;
        case 0x324790u: goto label_324790;
        case 0x324794u: goto label_324794;
        case 0x324798u: goto label_324798;
        case 0x32479cu: goto label_32479c;
        case 0x3247a0u: goto label_3247a0;
        case 0x3247a4u: goto label_3247a4;
        case 0x3247a8u: goto label_3247a8;
        case 0x3247acu: goto label_3247ac;
        case 0x3247b0u: goto label_3247b0;
        case 0x3247b4u: goto label_3247b4;
        case 0x3247b8u: goto label_3247b8;
        case 0x3247bcu: goto label_3247bc;
        case 0x3247c0u: goto label_3247c0;
        case 0x3247c4u: goto label_3247c4;
        case 0x3247c8u: goto label_3247c8;
        case 0x3247ccu: goto label_3247cc;
        case 0x3247d0u: goto label_3247d0;
        case 0x3247d4u: goto label_3247d4;
        case 0x3247d8u: goto label_3247d8;
        case 0x3247dcu: goto label_3247dc;
        case 0x3247e0u: goto label_3247e0;
        case 0x3247e4u: goto label_3247e4;
        case 0x3247e8u: goto label_3247e8;
        case 0x3247ecu: goto label_3247ec;
        case 0x3247f0u: goto label_3247f0;
        case 0x3247f4u: goto label_3247f4;
        case 0x3247f8u: goto label_3247f8;
        case 0x3247fcu: goto label_3247fc;
        case 0x324800u: goto label_324800;
        case 0x324804u: goto label_324804;
        case 0x324808u: goto label_324808;
        case 0x32480cu: goto label_32480c;
        case 0x324810u: goto label_324810;
        case 0x324814u: goto label_324814;
        case 0x324818u: goto label_324818;
        case 0x32481cu: goto label_32481c;
        case 0x324820u: goto label_324820;
        case 0x324824u: goto label_324824;
        case 0x324828u: goto label_324828;
        case 0x32482cu: goto label_32482c;
        case 0x324830u: goto label_324830;
        case 0x324834u: goto label_324834;
        case 0x324838u: goto label_324838;
        case 0x32483cu: goto label_32483c;
        case 0x324840u: goto label_324840;
        case 0x324844u: goto label_324844;
        default: break;
    }

    ctx->pc = 0x3246d0u;

label_3246d0:
    // 0x3246d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3246d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3246d4:
    // 0x3246d4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3246d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_3246d8:
    // 0x3246d8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3246d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3246dc:
    // 0x3246dc: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3246dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_3246e0:
    // 0x3246e0: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x3246e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_3246e4:
    // 0x3246e4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3246e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3246e8:
    // 0x3246e8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x3246e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_3246ec:
    // 0x3246ec: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3246ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3246f0:
    // 0x3246f0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x3246f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_3246f4:
    // 0x3246f4: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x3246f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3246f8:
    // 0x3246f8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x3246f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_3246fc:
    // 0x3246fc: 0x26550010  addiu       $s5, $s2, 0x10
    ctx->pc = 0x3246fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_324700:
    // 0x324700: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x324700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_324704:
    // 0x324704: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x324704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_324708:
    // 0x324708: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x324708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_32470c:
    // 0x32470c: 0x24170299  addiu       $s7, $zero, 0x299
    ctx->pc = 0x32470cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 665));
label_324710:
    // 0x324710: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x324710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_324714:
    // 0x324714: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x324714u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_324718:
    // 0x324718: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x324718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_32471c:
    // 0x32471c: 0x0  nop
    ctx->pc = 0x32471cu;
    // NOP
label_324720:
    // 0x324720: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x324720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_324724:
    // 0x324724: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_324728:
    // 0x324728: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x324728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_32472c:
    // 0x32472c: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x32472cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_324730:
    // 0x324730: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_324734:
    if (ctx->pc == 0x324734u) {
        ctx->pc = 0x324734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324730u;
        // 0x324734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324738u;
        goto label_324738;
    }
    ctx->pc = 0x324730u;
    {
        const bool branch_taken_0x324730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324730u;
        // 0x324734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324730) {
            ctx->pc = 0x324764u;
            goto label_324764;
        }
    }
    ctx->pc = 0x324738u;
label_324738:
    // 0x324738: 0xc0c918c  jal         func_324630
label_32473c:
    if (ctx->pc == 0x32473Cu) {
        ctx->pc = 0x32473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324738u;
        // 0x32473c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324740u;
        goto label_324740;
    }
    ctx->pc = 0x324738u;
    SET_GPR_U32(ctx, 31, 0x324740u);
    ctx->pc = 0x32473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324738u;
    // 0x32473c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324630u, 0x324738u, 0x324740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324740u;
label_324740:
    // 0x324740: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_324744:
    if (ctx->pc == 0x324744u) {
        ctx->pc = 0x324744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324740u;
        // 0x324744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324748u;
        goto label_324748;
    }
    ctx->pc = 0x324740u;
    {
        const bool branch_taken_0x324740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324740u;
        // 0x324744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324740) {
            ctx->pc = 0x324800u;
            goto label_324800;
        }
    }
    ctx->pc = 0x324748u;
label_324748:
    // 0x324748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32474c:
    // 0x32474c: 0x2c0f809  jalr        $s6
label_324750:
    if (ctx->pc == 0x324750u) {
        ctx->pc = 0x324750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32474Cu;
        // 0x324750: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324754u;
        goto label_324754;
    }
    ctx->pc = 0x32474Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x324754u);
        ctx->pc = 0x324750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32474Cu;
        // 0x324750: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32474Cu, 0x324754u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324754u;
label_324754:
    // 0x324754: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_324758:
    if (ctx->pc == 0x324758u) {
        ctx->pc = 0x324758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324754u;
        // 0x324758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32475Cu;
        goto label_32475c;
    }
    ctx->pc = 0x324754u;
    {
        const bool branch_taken_0x324754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324754u;
        // 0x324758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324754) {
            ctx->pc = 0x324800u;
            goto label_324800;
        }
    }
    ctx->pc = 0x32475Cu;
label_32475c:
    // 0x32475c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_324760:
    if (ctx->pc == 0x324760u) {
        ctx->pc = 0x324760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32475Cu;
        // 0x324760: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324764u;
        goto label_324764;
    }
    ctx->pc = 0x32475Cu;
    {
        const bool branch_taken_0x32475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32475Cu;
        // 0x324760: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32475c) {
            ctx->pc = 0x324818u;
            goto label_324818;
        }
    }
    ctx->pc = 0x324764u;
label_324764:
    // 0x324764: 0x2e3102b  sltu        $v0, $s7, $v1
    ctx->pc = 0x324764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_324768:
    // 0x324768: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x324768u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_32476c:
    // 0x32476c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_324770:
    // 0x324770: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x324770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_324774:
    // 0x324774: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x324774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_324778:
    // 0x324778: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x324778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32477c:
    // 0x32477c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x32477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_324780:
    // 0x324780: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x324780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_324784:
    // 0x324784: 0x0  nop
    ctx->pc = 0x324784u;
    // NOP
label_324788:
    // 0x324788: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_32478c:
    if (ctx->pc == 0x32478Cu) {
        ctx->pc = 0x32478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324788u;
        // 0x32478c: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x324790u;
        goto label_324790;
    }
    ctx->pc = 0x324788u;
    {
        const bool branch_taken_0x324788 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324788u;
        // 0x32478c: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x324788) {
            ctx->pc = 0x3247A0u;
            goto label_3247a0;
        }
    }
    ctx->pc = 0x324790u;
label_324790:
    // 0x324790: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x324790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_324794:
    // 0x324794: 0x0  nop
    ctx->pc = 0x324794u;
    // NOP
label_324798:
    // 0x324798: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
label_32479c:
    if (ctx->pc == 0x32479Cu) {
        ctx->pc = 0x32479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324798u;
        // 0x32479c: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247A0u;
        goto label_3247a0;
    }
    ctx->pc = 0x324798u;
    {
        const bool branch_taken_0x324798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x324798) {
            ctx->pc = 0x32479Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324798u;
            // 0x32479c: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3247D8u;
            goto label_3247d8;
        }
    }
    ctx->pc = 0x3247A0u;
label_3247a0:
    // 0x3247a0: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x3247a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3247a4:
    // 0x3247a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3247a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3247a8:
    // 0x3247a8: 0x0  nop
    ctx->pc = 0x3247a8u;
    // NOP
label_3247ac:
    // 0x3247ac: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3247b0:
    if (ctx->pc == 0x3247B0u) {
        ctx->pc = 0x3247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247ACu;
        // 0x3247b0: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247B4u;
        goto label_3247b4;
    }
    ctx->pc = 0x3247ACu;
    {
        const bool branch_taken_0x3247ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3247ac) {
            ctx->pc = 0x3247B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3247ACu;
            // 0x3247b0: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3247C8u;
            goto label_3247c8;
        }
    }
    ctx->pc = 0x3247B4u;
label_3247b4:
    // 0x3247b4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3247b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3247b8:
    // 0x3247b8: 0x0  nop
    ctx->pc = 0x3247b8u;
    // NOP
label_3247bc:
    // 0x3247bc: 0x4502ffd8  bc1fl       . + 4 + (-0x28 << 2)
label_3247c0:
    if (ctx->pc == 0x3247C0u) {
        ctx->pc = 0x3247C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247BCu;
        // 0x3247c0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247C4u;
        goto label_3247c4;
    }
    ctx->pc = 0x3247BCu;
    {
        const bool branch_taken_0x3247bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3247bc) {
            ctx->pc = 0x3247C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3247BCu;
            // 0x3247c0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324720;
        }
    }
    ctx->pc = 0x3247C4u;
label_3247c4:
    // 0x3247c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3247c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3247c8:
    // 0x3247c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3247c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3247cc:
    // 0x3247cc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3247ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3247d0:
    // 0x3247d0: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_3247d4:
    if (ctx->pc == 0x3247D4u) {
        ctx->pc = 0x3247D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247D0u;
        // 0x3247d4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247D8u;
        goto label_3247d8;
    }
    ctx->pc = 0x3247D0u;
    {
        const bool branch_taken_0x3247d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247D0u;
        // 0x3247d4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247d0) {
            ctx->pc = 0x324720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324720;
        }
    }
    ctx->pc = 0x3247D8u;
label_3247d8:
    // 0x3247d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3247d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3247dc:
    // 0x3247dc: 0x0  nop
    ctx->pc = 0x3247dcu;
    // NOP
label_3247e0:
    // 0x3247e0: 0x4503ffcf  bc1tl       . + 4 + (-0x31 << 2)
label_3247e4:
    if (ctx->pc == 0x3247E4u) {
        ctx->pc = 0x3247E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247E0u;
        // 0x3247e4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3247E8u;
        goto label_3247e8;
    }
    ctx->pc = 0x3247E0u;
    {
        const bool branch_taken_0x3247e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3247e0) {
            ctx->pc = 0x3247E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3247E0u;
            // 0x3247e4: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324720;
        }
    }
    ctx->pc = 0x3247E8u;
label_3247e8:
    // 0x3247e8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3247e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3247ec:
    // 0x3247ec: 0x0  nop
    ctx->pc = 0x3247ecu;
    // NOP
label_3247f0:
    // 0x3247f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3247f4:
    if (ctx->pc == 0x3247F4u) {
        ctx->pc = 0x3247F8u;
        goto label_3247f8;
    }
    ctx->pc = 0x3247F0u;
    {
        const bool branch_taken_0x3247f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3247f0) {
            ctx->pc = 0x324800u;
            goto label_324800;
        }
    }
    ctx->pc = 0x3247F8u;
label_3247f8:
    // 0x3247f8: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_3247fc:
    if (ctx->pc == 0x3247FCu) {
        ctx->pc = 0x3247FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247F8u;
        // 0x3247fc: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324800u;
        goto label_324800;
    }
    ctx->pc = 0x3247F8u;
    {
        const bool branch_taken_0x3247f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3247FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247F8u;
        // 0x3247fc: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3247f8) {
            ctx->pc = 0x324720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324720;
        }
    }
    ctx->pc = 0x324800u;
label_324800:
    // 0x324800: 0x123d0003  beq         $s1, $sp, . + 4 + (0x3 << 2)
label_324804:
    if (ctx->pc == 0x324804u) {
        ctx->pc = 0x324804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324800u;
        // 0x324804: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324808u;
        goto label_324808;
    }
    ctx->pc = 0x324800u;
    {
        const bool branch_taken_0x324800 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x324804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324800u;
        // 0x324804: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324800) {
            ctx->pc = 0x324810u;
            goto label_324810;
        }
    }
    ctx->pc = 0x324808u;
label_324808:
    // 0x324808: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
label_32480c:
    if (ctx->pc == 0x32480Cu) {
        ctx->pc = 0x32480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324808u;
        // 0x32480c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324810u;
        goto label_324810;
    }
    ctx->pc = 0x324808u;
    {
        const bool branch_taken_0x324808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324808u;
        // 0x32480c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324808) {
            ctx->pc = 0x324720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324720;
        }
    }
    ctx->pc = 0x324810u;
label_324810:
    // 0x324810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_324814:
    // 0x324814: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x324814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_324818:
    // 0x324818: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x324818u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_32481c:
    // 0x32481c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x32481cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_324820:
    // 0x324820: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x324820u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_324824:
    // 0x324824: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x324824u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_324828:
    // 0x324828: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x324828u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_32482c:
    // 0x32482c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x32482cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_324830:
    // 0x324830: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x324830u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_324834:
    // 0x324834: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x324834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_324838:
    // 0x324838: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x324838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_32483c:
    // 0x32483c: 0x3e00008  jr          $ra
label_324840:
    if (ctx->pc == 0x324840u) {
        ctx->pc = 0x324840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32483Cu;
        // 0x324840: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324844u;
        goto label_324844;
    }
    ctx->pc = 0x32483Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32483Cu;
        // 0x324840: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32483Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324844u;
label_324844:
    // 0x324844: 0x0  nop
    ctx->pc = 0x324844u;
    // NOP
    ctx->pc = 0x324848u;
}
