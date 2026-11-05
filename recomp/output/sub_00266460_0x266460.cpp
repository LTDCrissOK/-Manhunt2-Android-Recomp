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

// Function: sub_00266460
// Address: 0x266460 - 0x2665e8
void sub_00266460_0x266460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266460_0x266460");
#endif

    switch (ctx->pc) {
        case 0x266488u: goto label_266488;
        case 0x266494u: goto label_266494;
        case 0x2664fcu: goto label_2664fc;
        case 0x266530u: goto label_266530;
        case 0x266564u: goto label_266564;
        case 0x2665a0u: goto label_2665a0;
        case 0x2665c0u: goto label_2665c0;
        default: break;
    }

    ctx->pc = 0x266460u;

    // 0x266460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x266460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x266464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266468: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x266468u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26646c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x26646cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x266470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x266470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x266474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x266474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x266478: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x266478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26647c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x266480: 0xc0998ee  jal         func_2663B8
    ctx->pc = 0x266480u;
    SET_GPR_U32(ctx, 31, 0x266488u);
    ctx->pc = 0x266484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266480u;
    // 0x266484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2663B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663B8u, 0x266480u, 0x266488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266488u;
label_266488:
    // 0x266488: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x266488u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26648c: 0xc0998f2  jal         func_2663C8
    ctx->pc = 0x26648Cu;
    SET_GPR_U32(ctx, 31, 0x266494u);
    ctx->pc = 0x266490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26648Cu;
    // 0x266490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2663C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663C8u, 0x26648Cu, 0x266494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266494u;
label_266494:
    // 0x266494: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x266494u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x266498: 0xc60102c0  lwc1        $f1, 0x2C0($s0)
    ctx->pc = 0x266498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26649c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2664a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2664a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2664a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2664a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2664a8: 0xc60202c4  lwc1        $f2, 0x2C4($s0)
    ctx->pc = 0x2664a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2664ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2664acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2664b0: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2664b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2664b4: 0x0  nop
    ctx->pc = 0x2664b4u;
    // NOP
    // 0x2664b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2664B8u;
    {
        const bool branch_taken_0x2664b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2664BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664B8u;
        // 0x2664bc: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664b8) {
            ctx->pc = 0x2664D0u;
            goto label_2664d0;
        }
    }
    ctx->pc = 0x2664C0u;
    // 0x2664c0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2664c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2664c4: 0x0  nop
    ctx->pc = 0x2664c4u;
    // NOP
    // 0x2664c8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2664C8u;
    {
        const bool branch_taken_0x2664c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2664CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664C8u;
        // 0x2664cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664c8) {
            ctx->pc = 0x2664F0u;
            goto label_2664f0;
        }
    }
    ctx->pc = 0x2664D0u;
label_2664d0:
    // 0x2664d0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2664d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2664d4: 0x0  nop
    ctx->pc = 0x2664d4u;
    // NOP
    // 0x2664d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2664D8u;
    {
        const bool branch_taken_0x2664d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2664d8) {
            ctx->pc = 0x2664F4u;
            goto label_2664f4;
        }
    }
    ctx->pc = 0x2664E0u;
    // 0x2664e0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2664e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2664e4: 0x0  nop
    ctx->pc = 0x2664e4u;
    // NOP
    // 0x2664e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2664E8u;
    {
        const bool branch_taken_0x2664e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2664ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2664E8u;
        // 0x2664ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664e8) {
            ctx->pc = 0x2664F4u;
            goto label_2664f4;
        }
    }
    ctx->pc = 0x2664F0u;
label_2664f0:
    // 0x2664f0: 0xa2020284  sb          $v0, 0x284($s0)
    ctx->pc = 0x2664f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 2));
label_2664f4:
    // 0x2664f4: 0xc09990e  jal         func_266438
    ctx->pc = 0x2664F4u;
    SET_GPR_U32(ctx, 31, 0x2664FCu);
    ctx->pc = 0x2664F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2664F4u;
    // 0x2664f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266438u, 0x2664F4u, 0x2664FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2664FCu;
label_2664fc:
    // 0x2664fc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2664fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x266500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x266500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x266504: 0x0  nop
    ctx->pc = 0x266504u;
    // NOP
    // 0x266508: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x266508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26650c: 0x0  nop
    ctx->pc = 0x26650cu;
    // NOP
    // 0x266510: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x266510u;
    {
        const bool branch_taken_0x266510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266510) {
            ctx->pc = 0x266514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266510u;
            // 0x266514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2665B8u;
            goto label_2665b8;
        }
    }
    ctx->pc = 0x266518u;
    // 0x266518: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x266518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x26651c: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x26651Cu;
    {
        const bool branch_taken_0x26651c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x266520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26651Cu;
        // 0x266520: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26651c) {
            ctx->pc = 0x2665B4u;
            goto label_2665b4;
        }
    }
    ctx->pc = 0x266524u;
    // 0x266524: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x266524u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
    // 0x266528: 0x26110278  addiu       $s1, $s0, 0x278
    ctx->pc = 0x266528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    // 0x26652c: 0x0  nop
    ctx->pc = 0x26652cu;
    // NOP
label_266530:
    // 0x266530: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x266530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266534: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x266534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266538: 0x0  nop
    ctx->pc = 0x266538u;
    // NOP
    // 0x26653c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x26653Cu;
    {
        const bool branch_taken_0x26653c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26653c) {
            ctx->pc = 0x26656Cu;
            goto label_26656c;
        }
    }
    ctx->pc = 0x266544u;
    // 0x266544: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x266544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266548: 0x0  nop
    ctx->pc = 0x266548u;
    // NOP
    // 0x26654c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x26654Cu;
    {
        const bool branch_taken_0x26654c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26654Cu;
        // 0x266550: 0x26649b10  addiu       $a0, $s3, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26654c) {
            ctx->pc = 0x26656Cu;
            goto label_26656c;
        }
    }
    ctx->pc = 0x266554u;
    // 0x266554: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x266554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x266558: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x266558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26655c: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x26655Cu;
    SET_GPR_U32(ctx, 31, 0x266564u);
    ctx->pc = 0x266560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26655Cu;
    // 0x266560: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26655Cu, 0x266564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266564u;
label_266564:
    // 0x266564: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x266564u;
    {
        const bool branch_taken_0x266564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266564u;
        // 0x266568: 0x8e020274  lw          $v0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266564) {
            ctx->pc = 0x2665A4u;
            goto label_2665a4;
        }
    }
    ctx->pc = 0x26656Cu;
label_26656c:
    // 0x26656c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26656cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266570: 0x0  nop
    ctx->pc = 0x266570u;
    // NOP
    // 0x266574: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x266574u;
    {
        const bool branch_taken_0x266574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x266574) {
            ctx->pc = 0x266578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266574u;
            // 0x266578: 0x8e020274  lw          $v0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2665A4u;
            goto label_2665a4;
        }
    }
    ctx->pc = 0x26657Cu;
    // 0x26657c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x26657cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x266580: 0x0  nop
    ctx->pc = 0x266580u;
    // NOP
    // 0x266584: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x266584u;
    {
        const bool branch_taken_0x266584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x266588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266584u;
        // 0x266588: 0x26649b10  addiu       $a0, $s3, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266584) {
            ctx->pc = 0x2665A0u;
            goto label_2665a0;
        }
    }
    ctx->pc = 0x26658Cu;
    // 0x26658c: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x26658cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x266590: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x266590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x266594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x266594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266598: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x266598u;
    SET_GPR_U32(ctx, 31, 0x2665A0u);
    ctx->pc = 0x26659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266598u;
    // 0x26659c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x266598u, 0x2665A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665A0u;
label_2665a0:
    // 0x2665a0: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x2665a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_2665a4:
    // 0x2665a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2665a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2665a8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2665a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2665ac: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2665ACu;
    {
        const bool branch_taken_0x2665ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2665B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665ACu;
        // 0x2665b0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665ac) {
            ctx->pc = 0x266530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266530;
        }
    }
    ctx->pc = 0x2665B4u;
label_2665b4:
    // 0x2665b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2665b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2665b8:
    // 0x2665b8: 0xc0998f4  jal         func_2663D0
    ctx->pc = 0x2665B8u;
    SET_GPR_U32(ctx, 31, 0x2665C0u);
    ctx->pc = 0x2665BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2665B8u;
    // 0x2665bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2663D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663D0u, 0x2665B8u, 0x2665C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2665C0u;
label_2665c0:
    // 0x2665c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2665c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2665c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2665c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2665c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2665c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2665cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2665ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2665d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2665d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2665d4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2665d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2665d8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2665d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2665dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2665DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2665E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665DCu;
        // 0x2665e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2665DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2665E4u;
    // 0x2665e4: 0x0  nop
    ctx->pc = 0x2665e4u;
    // NOP
    ctx->pc = 0x2665e8u;
}
