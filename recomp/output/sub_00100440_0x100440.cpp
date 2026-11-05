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

// Function: sub_00100440
// Address: 0x100440 - 0x100608
void sub_00100440_0x100440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100440_0x100440");
#endif

    switch (ctx->pc) {
        case 0x1004c8u: goto label_1004c8;
        case 0x100500u: goto label_100500;
        case 0x100538u: goto label_100538;
        case 0x10055cu: goto label_10055c;
        default: break;
    }

    ctx->pc = 0x100440u;

    // 0x100440: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x100444: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x100448: 0x8c622dc0  lw          $v0, 0x2DC0($v1)
    ctx->pc = 0x100448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482DC0u));
    // 0x10044c: 0x24642dc0  addiu       $a0, $v1, 0x2DC0
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
    // 0x100450: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x100450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x100454: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x100454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x100458: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x100458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10045c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x10045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x100460: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x100460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x100464: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x100464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x100468: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x100468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x10046c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x10046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x100470: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x100470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x100474: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x100474u;
    {
        const bool branch_taken_0x100474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100474u;
        // 0x100478: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x100474) {
            ctx->pc = 0x1005D4u;
            goto label_1005d4;
        }
    }
    ctx->pc = 0x10047Cu;
    // 0x10047c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10047cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x100480: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x100484: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100488: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x100488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x10048c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10048cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x100490: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x100490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x100494: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x100494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x100498: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x100498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x10049c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x10049Cu;
    {
        const bool branch_taken_0x10049c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1004A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10049Cu;
        // 0x1004a0: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10049c) {
            ctx->pc = 0x1005D4u;
            goto label_1005d4;
        }
    }
    ctx->pc = 0x1004A4u;
    // 0x1004a4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1004a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1004a8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1004a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1004ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1004acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1004b0: 0x3c160044  lui         $s6, 0x44
    ctx->pc = 0x1004b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)68 << 16));
    // 0x1004b4: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x1004b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x1004b8: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x1004b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x1004bc: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x1004bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x1004c0: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x1004c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x1004c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1004c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1004c8:
    // 0x1004c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1004c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1004cc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1004ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1004d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1004D0u;
    {
        const bool branch_taken_0x1004d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1004D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004D0u;
        // 0x1004d4: 0xc6c1a568  lwc1        $f1, -0x5A98($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004d0) {
            ctx->pc = 0x1004DCu;
            goto label_1004dc;
        }
    }
    ctx->pc = 0x1004D8u;
    // 0x1004d8: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1004d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1004dc:
    // 0x1004dc: 0xc6e089d0  lwc1        $f0, -0x7630($s7)
    ctx->pc = 0x1004dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1004e0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1004e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1004e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1004e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1004e8: 0x0  nop
    ctx->pc = 0x1004e8u;
    // NOP
    // 0x1004ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1004ECu;
    {
        const bool branch_taken_0x1004ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1004F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1004ECu;
        // 0x1004f0: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1004ec) {
            ctx->pc = 0x1004F8u;
            goto label_1004f8;
        }
    }
    ctx->pc = 0x1004F4u;
    // 0x1004f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1004f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1004f8:
    // 0x1004f8: 0xc04199a  jal         func_106668
    ctx->pc = 0x1004F8u;
    SET_GPR_U32(ctx, 31, 0x100500u);
    ctx->pc = 0x1004FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1004F8u;
    // 0x1004fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106668u, 0x1004F8u, 0x100500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100500u;
label_100500:
    // 0x100500: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x100500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x100504: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100504u;
    {
        const bool branch_taken_0x100504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100504u;
        // 0x100508: 0xc6c1a568  lwc1        $f1, -0x5A98($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x100504) {
            ctx->pc = 0x100510u;
            goto label_100510;
        }
    }
    ctx->pc = 0x10050Cu;
    // 0x10050c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x10050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_100510:
    // 0x100510: 0xc64089d0  lwc1        $f0, -0x7630($s2)
    ctx->pc = 0x100510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100514: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x100514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x100518: 0x0  nop
    ctx->pc = 0x100518u;
    // NOP
    // 0x10051c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x10051Cu;
    {
        const bool branch_taken_0x10051c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10051c) {
            ctx->pc = 0x10054Cu;
            goto label_10054c;
        }
    }
    ctx->pc = 0x100524u;
    // 0x100524: 0x1620001e  bnez        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x100524u;
    {
        const bool branch_taken_0x100524 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x100528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100524u;
        // 0x100528: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100524) {
            ctx->pc = 0x1005A0u;
            goto label_1005a0;
        }
    }
    ctx->pc = 0x10052Cu;
    // 0x10052c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100530: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x100530u;
    SET_GPR_U32(ctx, 31, 0x100538u);
    ctx->pc = 0x100534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100530u;
    // 0x100534: 0x26a42d80  addiu       $a0, $s5, 0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x100530u, 0x100538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100538u;
label_100538:
    // 0x100538: 0x8e822b00  lw          $v0, 0x2B00($s4)
    ctx->pc = 0x100538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11008)));
    // 0x10053c: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10053Cu;
    {
        const bool branch_taken_0x10053c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x100540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10053Cu;
        // 0x100540: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10053c) {
            ctx->pc = 0x100568u;
            goto label_100568;
        }
    }
    ctx->pc = 0x100544u;
    // 0x100544: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x100544u;
    {
        const bool branch_taken_0x100544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100544u;
        // 0x100548: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100544) {
            ctx->pc = 0x100580u;
            goto label_100580;
        }
    }
    ctx->pc = 0x10054Cu;
label_10054c:
    // 0x10054c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x10054Cu;
    {
        const bool branch_taken_0x10054c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10054Cu;
        // 0x100550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10054c) {
            ctx->pc = 0x10059Cu;
            goto label_10059c;
        }
    }
    ctx->pc = 0x100554u;
    // 0x100554: 0xc0f62da  jal         func_3D8B68
    ctx->pc = 0x100554u;
    SET_GPR_U32(ctx, 31, 0x10055Cu);
    ctx->pc = 0x100558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100554u;
    // 0x100558: 0x26a42d80  addiu       $a0, $s5, 0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B68u, 0x100554u, 0x10055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10055Cu;
label_10055c:
    // 0x10055c: 0x8e822b00  lw          $v0, 0x2B00($s4)
    ctx->pc = 0x10055cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11008)));
    // 0x100560: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100560u;
    {
        const bool branch_taken_0x100560 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x100564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100560u;
        // 0x100564: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100560) {
            ctx->pc = 0x10057Cu;
            goto label_10057c;
        }
    }
    ctx->pc = 0x100568u;
label_100568:
    // 0x100568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x100568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10056c: 0x0  nop
    ctx->pc = 0x10056cu;
    // NOP
    // 0x100570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x100570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x100574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x100574u;
    {
        const bool branch_taken_0x100574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100574u;
        // 0x100578: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100574) {
            ctx->pc = 0x100598u;
            goto label_100598;
        }
    }
    ctx->pc = 0x10057Cu;
label_10057c:
    // 0x10057c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_100580:
    // 0x100580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x100584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100588: 0x0  nop
    ctx->pc = 0x100588u;
    // NOP
    // 0x10058c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10058cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x100590: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x100590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x100594: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x100594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_100598:
    // 0x100598: 0xe6600710  swc1        $f0, 0x710($s3)
    ctx->pc = 0x100598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1808), bits); }
label_10059c:
    // 0x10059c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1005a0:
    // 0x1005a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005A0u;
    {
        const bool branch_taken_0x1005a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1005a0) {
            ctx->pc = 0x1005A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1005A0u;
            // 0x1005a4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1005B4u;
            goto label_1005b4;
        }
    }
    ctx->pc = 0x1005A8u;
    // 0x1005a8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1005a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1005ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1005ACu;
    {
        const bool branch_taken_0x1005ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005ACu;
        // 0x1005b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005ac) {
            ctx->pc = 0x1005C4u;
            goto label_1005c4;
        }
    }
    ctx->pc = 0x1005B4u;
label_1005b4:
    // 0x1005b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1005B4u;
    {
        const bool branch_taken_0x1005b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1005B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005B4u;
        // 0x1005b8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005b4) {
            ctx->pc = 0x1005C8u;
            goto label_1005c8;
        }
    }
    ctx->pc = 0x1005BCu;
    // 0x1005bc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1005bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1005c0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1005c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1005c4:
    // 0x1005c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1005c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1005c8:
    // 0x1005c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1005c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1005cc: 0x1462ffbe  bne         $v1, $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1005CCu;
    {
        const bool branch_taken_0x1005cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1005D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005CCu;
        // 0x1005d0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1005cc) {
            ctx->pc = 0x1004C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1004c8;
        }
    }
    ctx->pc = 0x1005D4u;
label_1005d4:
    // 0x1005d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1005d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1005d8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1005d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1005dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1005dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1005e0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1005e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1005e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1005e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1005e8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1005e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1005ec: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1005ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1005f0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1005f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1005f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1005f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1005f8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1005f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1005fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1005FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005FCu;
        // 0x100600: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1005FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100604u;
    // 0x100604: 0x0  nop
    ctx->pc = 0x100604u;
    // NOP
    ctx->pc = 0x100608u;
}
