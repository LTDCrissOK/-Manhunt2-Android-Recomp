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

// Function: sub_001A2418
// Address: 0x1a2418 - 0x1a26a8
void sub_001A2418_0x1a2418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2418_0x1a2418");
#endif

    switch (ctx->pc) {
        case 0x1a2434u: goto label_1a2434;
        case 0x1a2440u: goto label_1a2440;
        case 0x1a2474u: goto label_1a2474;
        case 0x1a2484u: goto label_1a2484;
        case 0x1a24f0u: goto label_1a24f0;
        case 0x1a2580u: goto label_1a2580;
        case 0x1a2618u: goto label_1a2618;
        case 0x1a2684u: goto label_1a2684;
        default: break;
    }

    ctx->pc = 0x1a2418u;

    // 0x1a2418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a241c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2420: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a2420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a2424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a242c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A242Cu;
    SET_GPR_U32(ctx, 31, 0x1A2434u);
    ctx->pc = 0x1A2430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A242Cu;
    // 0x1a2430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A242Cu, 0x1A2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2434u;
label_1a2434:
    // 0x1a2434: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x1a2434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1a2438: 0xc08f68a  jal         func_23DA28
    ctx->pc = 0x1A2438u;
    SET_GPR_U32(ctx, 31, 0x1A2440u);
    ctx->pc = 0x1A243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2438u;
    // 0x1a243c: 0xc4540138  lwc1        $f20, 0x138($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x1A2438u, 0x1A2440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2440u;
label_1a2440:
    // 0x1a2440: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A2440u;
    {
        const bool branch_taken_0x1a2440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2440u;
        // 0x1a2444: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2440) {
            ctx->pc = 0x1A2488u;
            goto label_1a2488;
        }
    }
    ctx->pc = 0x1A2448u;
    // 0x1a2448: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1a2448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1a244c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a244cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2450: 0x0  nop
    ctx->pc = 0x1a2450u;
    // NOP
    // 0x1a2454: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1a2454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2458: 0x0  nop
    ctx->pc = 0x1a2458u;
    // NOP
    // 0x1a245c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A245Cu;
    {
        const bool branch_taken_0x1a245c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A245Cu;
        // 0x1a2460: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a245c) {
            ctx->pc = 0x1A247Cu;
            goto label_1a247c;
        }
    }
    ctx->pc = 0x1A2464u;
    // 0x1a2464: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a2464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2468: 0x24a5f010  addiu       $a1, $a1, -0xFF0
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
    // 0x1a246c: 0xc064dc2  jal         func_193708
    ctx->pc = 0x1A246Cu;
    SET_GPR_U32(ctx, 31, 0x1A2474u);
    ctx->pc = 0x1A2470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A246Cu;
    // 0x1a2470: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193708u, 0x1A246Cu, 0x1A2474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2474u;
label_1a2474:
    // 0x1a2474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2474u;
    {
        const bool branch_taken_0x1a2474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2474u;
        // 0x1a2478: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2474) {
            ctx->pc = 0x1A2488u;
            goto label_1a2488;
        }
    }
    ctx->pc = 0x1A247Cu;
label_1a247c:
    // 0x1a247c: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A247Cu;
    SET_GPR_U32(ctx, 31, 0x1A2484u);
    ctx->pc = 0x1A2480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A247Cu;
    // 0x1a2480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A247Cu, 0x1A2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2484u;
label_1a2484:
    // 0x1a2484: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a2488:
    // 0x1a2488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a248c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1a2490: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2490u;
    {
        const bool branch_taken_0x1a2490 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2490u;
        // 0x1a2494: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2490) {
            ctx->pc = 0x1A24ACu;
            goto label_1a24ac;
        }
    }
    ctx->pc = 0x1A2498u;
    // 0x1a2498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a249c: 0x0  nop
    ctx->pc = 0x1a249cu;
    // NOP
    // 0x1a24a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a24a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a24a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A24A4u;
    {
        const bool branch_taken_0x1a24a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24a4) {
            ctx->pc = 0x1A24C4u;
            goto label_1a24c4;
        }
    }
    ctx->pc = 0x1A24ACu;
label_1a24ac:
    // 0x1a24ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a24acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a24b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a24b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a24b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a24b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a24b8: 0x0  nop
    ctx->pc = 0x1a24b8u;
    // NOP
    // 0x1a24bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a24bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a24c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a24c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a24c4:
    // 0x1a24c4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a24c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a24c8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a24c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a24cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a24ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24d0: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1a24d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a24d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a24d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a24d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a24d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a24dc: 0x0  nop
    ctx->pc = 0x1a24dcu;
    // NOP
    // 0x1a24e0: 0x4502006b  bc1fl       . + 4 + (0x6B << 2)
    ctx->pc = 0x1A24E0u;
    {
        const bool branch_taken_0x1a24e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a24e0) {
            ctx->pc = 0x1A24E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A24E0u;
            // 0x1a24e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2690u;
            goto label_1a2690;
        }
    }
    ctx->pc = 0x1A24E8u;
    // 0x1a24e8: 0xc061a22  jal         func_186888
    ctx->pc = 0x1A24E8u;
    SET_GPR_U32(ctx, 31, 0x1A24F0u);
    ctx->pc = 0x1A24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24E8u;
    // 0x1a24ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1A24E8u, 0x1A24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24F0u;
label_1a24f0:
    // 0x1a24f0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1a24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1a24f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a24f8: 0x8c43093c  lw          $v1, 0x93C($v0)
    ctx->pc = 0x1a24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F093Cu));
    // 0x1a24fc: 0x54600064  bnel        $v1, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x1A24FCu;
    {
        const bool branch_taken_0x1a24fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a24fc) {
            ctx->pc = 0x1A2500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A24FCu;
            // 0x1a2500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2690u;
            goto label_1a2690;
        }
    }
    ctx->pc = 0x1A2504u;
    // 0x1a2504: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2508: 0x8e242b00  lw          $a0, 0x2B00($s1)
    ctx->pc = 0x1a2508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1a250c: 0x8c621004  lw          $v0, 0x1004($v1)
    ctx->pc = 0x1a250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1a2510: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a2510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2514: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2514u;
    {
        const bool branch_taken_0x1a2514 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2514u;
        // 0x1a2518: 0xc4431074  lwc1        $f3, 0x1074($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2514) {
            ctx->pc = 0x1A2530u;
            goto label_1a2530;
        }
    }
    ctx->pc = 0x1A251Cu;
    // 0x1a251c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1a251cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2520: 0x0  nop
    ctx->pc = 0x1a2520u;
    // NOP
    // 0x1a2524: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a2528: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A2528u;
    {
        const bool branch_taken_0x1a2528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2528) {
            ctx->pc = 0x1A254Cu;
            goto label_1a254c;
        }
    }
    ctx->pc = 0x1A2530u;
label_1a2530:
    // 0x1a2530: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1a2530u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1a2534: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a2534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a2538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a253c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a253cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2540: 0x0  nop
    ctx->pc = 0x1a2540u;
    // NOP
    // 0x1a2544: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a2548: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a254c:
    // 0x1a254c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a254cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a2550: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a2554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2558: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a2558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a255c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a255cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a2560: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a2564: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a2564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a2568: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1a2568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a256c: 0x0  nop
    ctx->pc = 0x1a256cu;
    // NOP
    // 0x1a2570: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1A2570u;
    {
        const bool branch_taken_0x1a2570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2570) {
            ctx->pc = 0x1A2574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2570u;
            // 0x1a2574: 0x8ca21004  lw          $v0, 0x1004($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A25A0u;
            goto label_1a25a0;
        }
    }
    ctx->pc = 0x1A2578u;
    // 0x1a2578: 0xc061a22  jal         func_186888
    ctx->pc = 0x1A2578u;
    SET_GPR_U32(ctx, 31, 0x1A2580u);
    ctx->pc = 0x1A257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2578u;
    // 0x1a257c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1A2578u, 0x1A2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2580u;
label_1a2580:
    // 0x1a2580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2584: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1a2584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1a2588: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x1a2588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x1a258c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1a2590: 0x4410028  bgez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A2590u;
    {
        const bool branch_taken_0x1a2590 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2590u;
        // 0x1a2594: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2590) {
            ctx->pc = 0x1A2634u;
            goto label_1a2634;
        }
    }
    ctx->pc = 0x1A2598u;
    // 0x1a2598: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A2598u;
    {
        const bool branch_taken_0x1a2598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2598u;
        // 0x1a259c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2598) {
            ctx->pc = 0x1A264Cu;
            goto label_1a264c;
        }
    }
    ctx->pc = 0x1A25A0u;
label_1a25a0:
    // 0x1a25a0: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a25a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a25a4: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A25A4u;
    {
        const bool branch_taken_0x1a25a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25A4u;
        // 0x1a25a8: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25a4) {
            ctx->pc = 0x1A268Cu;
            goto label_1a268c;
        }
    }
    ctx->pc = 0x1A25ACu;
    // 0x1a25ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A25ACu;
    {
        const bool branch_taken_0x1a25ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25ACu;
        // 0x1a25b0: 0xc4631074  lwc1        $f3, 0x1074($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25ac) {
            ctx->pc = 0x1A25C8u;
            goto label_1a25c8;
        }
    }
    ctx->pc = 0x1A25B4u;
    // 0x1a25b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a25b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a25b8: 0x0  nop
    ctx->pc = 0x1a25b8u;
    // NOP
    // 0x1a25bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a25bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a25c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A25C0u;
    {
        const bool branch_taken_0x1a25c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25c0) {
            ctx->pc = 0x1A25E4u;
            goto label_1a25e4;
        }
    }
    ctx->pc = 0x1A25C8u;
label_1a25c8:
    // 0x1a25c8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a25cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a25ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a25d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a25d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a25d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a25d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a25d8: 0x0  nop
    ctx->pc = 0x1a25d8u;
    // NOP
    // 0x1a25dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a25dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a25e0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a25e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a25e4:
    // 0x1a25e4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a25e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a25e8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a25e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a25ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a25ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a25f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a25f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a25f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a25f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a25f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a25f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a25fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a25fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a2600: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1a2600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2604: 0x0  nop
    ctx->pc = 0x1a2604u;
    // NOP
    // 0x1a2608: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x1A2608u;
    {
        const bool branch_taken_0x1a2608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2608) {
            ctx->pc = 0x1A260Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2608u;
            // 0x1a260c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2690u;
            goto label_1a2690;
        }
    }
    ctx->pc = 0x1A2610u;
    // 0x1a2610: 0xc061a22  jal         func_186888
    ctx->pc = 0x1A2610u;
    SET_GPR_U32(ctx, 31, 0x1A2618u);
    ctx->pc = 0x1A2614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2610u;
    // 0x1a2614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1A2610u, 0x1A2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2618u;
label_1a2618:
    // 0x1a2618: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a261c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a261cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2620: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x1a2620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x1a2624: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x1a2624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x1a2628: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a2628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1a262c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A262Cu;
    {
        const bool branch_taken_0x1a262c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A262Cu;
        // 0x1a2630: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a262c) {
            ctx->pc = 0x1A2648u;
            goto label_1a2648;
        }
    }
    ctx->pc = 0x1A2634u;
label_1a2634:
    // 0x1a2634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2638: 0x0  nop
    ctx->pc = 0x1a2638u;
    // NOP
    // 0x1a263c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a263cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a2640: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2640u;
    {
        const bool branch_taken_0x1a2640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2640) {
            ctx->pc = 0x1A2660u;
            goto label_1a2660;
        }
    }
    ctx->pc = 0x1A2648u;
label_1a2648:
    // 0x1a2648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a264c:
    // 0x1a264c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a2650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2654: 0x0  nop
    ctx->pc = 0x1a2654u;
    // NOP
    // 0x1a2658: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a2658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a265c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a265cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a2660:
    // 0x1a2660: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a2664: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a2668: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a2668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a266c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1a2670: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a2670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a2674: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1a2674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1a2678: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a2678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a267c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1A267Cu;
    SET_GPR_U32(ctx, 31, 0x1A2684u);
    ctx->pc = 0x1A2680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A267Cu;
    // 0x1a2680: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A267Cu, 0x1A2684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2684u;
label_1a2684:
    // 0x1a2684: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a2684u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a2688: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x1a2688u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a268c:
    // 0x1a268c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a268cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2690:
    // 0x1a2690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a269c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a26a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A26A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A26A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26A0u;
        // 0x1a26a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A26A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A26A8u;
}
