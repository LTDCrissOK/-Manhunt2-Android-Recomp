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

// Function: sub_002D22A0
// Address: 0x2d22a0 - 0x2d2428
void sub_002D22A0_0x2d22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D22A0_0x2d22a0");
#endif

    switch (ctx->pc) {
        case 0x2d2360u: goto label_2d2360;
        case 0x2d236cu: goto label_2d236c;
        case 0x2d2398u: goto label_2d2398;
        case 0x2d23e8u: goto label_2d23e8;
        default: break;
    }

    ctx->pc = 0x2d22a0u;

    // 0x2d22a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d22a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d22a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d22a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d22a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d22ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d22acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d22b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d22b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d22b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d22b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d22b8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2d22b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d22bc: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x2d22bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d22c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D22C0u;
    {
        const bool branch_taken_0x2d22c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22C0u;
        // 0x2d22c4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22c0) {
            ctx->pc = 0x2D22F0u;
            goto label_2d22f0;
        }
    }
    ctx->pc = 0x2D22C8u;
    // 0x2d22c8: 0x92020074  lbu         $v0, 0x74($s0)
    ctx->pc = 0x2d22c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d22cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D22CCu;
    {
        const bool branch_taken_0x2d22cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22CCu;
        // 0x2d22d0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22cc) {
            ctx->pc = 0x2D22F0u;
            goto label_2d22f0;
        }
    }
    ctx->pc = 0x2D22D4u;
    // 0x2d22d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d22d8: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2d22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d22dc: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x2d22dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d22e0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2d22e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d22e4: 0xc46100e4  lwc1        $f1, 0xE4($v1)
    ctx->pc = 0x2d22e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d22e8: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2d22e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2d22ec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2d22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2d22f0:
    // 0x2d22f0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2d22f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2d22f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D22F4u;
    {
        const bool branch_taken_0x2d22f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22F4u;
        // 0x2d22f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d22f4) {
            ctx->pc = 0x2D2310u;
            goto label_2d2310;
        }
    }
    ctx->pc = 0x2D22FCu;
    // 0x2d22fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d22fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2300: 0x0  nop
    ctx->pc = 0x2d2300u;
    // NOP
    // 0x2d2304: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d2304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d2308: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2308u;
    {
        const bool branch_taken_0x2d2308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2308) {
            ctx->pc = 0x2D2328u;
            goto label_2d2328;
        }
    }
    ctx->pc = 0x2D2310u;
label_2d2310:
    // 0x2d2310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d2314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d2318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d2318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d231c: 0x0  nop
    ctx->pc = 0x2d231cu;
    // NOP
    // 0x2d2320: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d2320u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d2324: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d2324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d2328:
    // 0x2d2328: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2d2328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2d232c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2d232cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2d2330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2338: 0xa2000074  sb          $zero, 0x74($s0)
    ctx->pc = 0x2d2338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d233c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2d2340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2d2344: 0xa2020014  sb          $v0, 0x14($s0)
    ctx->pc = 0x2d2344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d2348: 0x26050078  addiu       $a1, $s0, 0x78
    ctx->pc = 0x2d2348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2d234c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d234cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d2350: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d2350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d2354: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d2354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2358: 0xc0b462a  jal         func_2D18A8
    ctx->pc = 0x2D2358u;
    SET_GPR_U32(ctx, 31, 0x2D2360u);
    ctx->pc = 0x2D235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2358u;
    // 0x2d235c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A8u, 0x2D2358u, 0x2D2360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2360u;
label_2d2360:
    // 0x2d2360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2364: 0xc0b462a  jal         func_2D18A8
    ctx->pc = 0x2D2364u;
    SET_GPR_U32(ctx, 31, 0x2D236Cu);
    ctx->pc = 0x2D2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2364u;
    // 0x2d2368: 0x2605008c  addiu       $a1, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D18A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D18A8u, 0x2D2364u, 0x2D236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D236Cu;
label_2d236c:
    // 0x2d236c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2370: 0x260400c8  addiu       $a0, $s0, 0xC8
    ctx->pc = 0x2d2370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x2d2374: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x2d2374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x2d2378: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x2d2378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2d237c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d2380: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d2380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2384: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d2384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d2388: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D2388u;
    {
        const bool branch_taken_0x2d2388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2388u;
        // 0x2d238c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2388) {
            ctx->pc = 0x2D2404u;
            goto label_2d2404;
        }
    }
    ctx->pc = 0x2D2390u;
    // 0x2d2390: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x2d2390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2d2394: 0x0  nop
    ctx->pc = 0x2d2394u;
    // NOP
label_2d2398:
    // 0x2d2398: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2d2398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d239c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d23a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d23a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d23a4: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x2d23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x2d23a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d23ac: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2d23acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d23b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d23b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d23b4: 0x0  nop
    ctx->pc = 0x2d23b4u;
    // NOP
    // 0x2d23b8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2D23B8u;
    {
        const bool branch_taken_0x2d23b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d23b8) {
            ctx->pc = 0x2D23BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D23B8u;
            // 0x2d23bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D23D0u;
            goto label_2d23d0;
        }
    }
    ctx->pc = 0x2D23C0u;
    // 0x2d23c0: 0xae1100d8  sw          $s1, 0xD8($s0)
    ctx->pc = 0x2d23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
    // 0x2d23c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d23c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d23c8: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x2d23c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x2d23cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d23ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d23d0:
    // 0x2d23d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d23d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d23d4: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x2d23d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2d23d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2d23d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2d23dc: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x2d23dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d23e0: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x2D23E0u;
    SET_GPR_U32(ctx, 31, 0x2D23E8u);
    ctx->pc = 0x2D23E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D23E0u;
    // 0x2d23e4: 0x8c840194  lw          $a0, 0x194($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x2D23E0u, 0x2D23E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D23E8u;
label_2d23e8:
    // 0x2d23e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d23ec: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x2d23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2d23f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d23f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d23f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d23f8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d23f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d23fc: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2D23FCu;
    {
        const bool branch_taken_0x2d23fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d23fc) {
            ctx->pc = 0x2D2400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D23FCu;
            // 0x2d2400: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2398;
        }
    }
    ctx->pc = 0x2D2404u;
label_2d2404:
    // 0x2d2404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d2404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d2408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d240c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d240cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2410: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d2410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2414: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2d2414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d2418: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2418u;
        // 0x2d241c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2420u;
    // 0x2d2420: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2d2420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d2424: 0x0  nop
    ctx->pc = 0x2d2424u;
    // NOP
    ctx->pc = 0x2d2428u;
}
