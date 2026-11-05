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

// Function: sub_001A2330
// Address: 0x1a2330 - 0x1a23e8
void sub_001A2330_0x1a2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2330_0x1a2330");
#endif

    switch (ctx->pc) {
        case 0x1a2344u: goto label_1a2344;
        case 0x1a2354u: goto label_1a2354;
        case 0x1a23c8u: goto label_1a23c8;
        case 0x1a23d0u: goto label_1a23d0;
        default: break;
    }

    ctx->pc = 0x1a2330u;

    // 0x1a2330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a233c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A233Cu;
    SET_GPR_U32(ctx, 31, 0x1A2344u);
    ctx->pc = 0x1A2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A233Cu;
    // 0x1a2340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A233Cu, 0x1A2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2344u;
label_1a2344:
    // 0x1a2344: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a2348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a234c: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A234Cu;
    SET_GPR_U32(ctx, 31, 0x1A2354u);
    ctx->pc = 0x1A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A234Cu;
    // 0x1a2350: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A234Cu, 0x1A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2354u;
label_1a2354:
    // 0x1a2354: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a2358: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2358u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a235c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A235Cu;
    {
        const bool branch_taken_0x1a235c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A235Cu;
        // 0x1a2360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a235c) {
            ctx->pc = 0x1A2378u;
            goto label_1a2378;
        }
    }
    ctx->pc = 0x1A2364u;
    // 0x1a2364: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2368: 0x0  nop
    ctx->pc = 0x1a2368u;
    // NOP
    // 0x1a236c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a236cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a2370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2370u;
    {
        const bool branch_taken_0x1a2370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2370) {
            ctx->pc = 0x1A2390u;
            goto label_1a2390;
        }
    }
    ctx->pc = 0x1A2378u;
label_1a2378:
    // 0x1a2378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a237c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a2380: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2384: 0x0  nop
    ctx->pc = 0x1a2384u;
    // NOP
    // 0x1a2388: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a238c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a238cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2390:
    // 0x1a2390: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a2394: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a2398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a239c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1a239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a23a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a23a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a23a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a23a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a23a8: 0x0  nop
    ctx->pc = 0x1a23a8u;
    // NOP
    // 0x1a23ac: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1A23ACu;
    {
        const bool branch_taken_0x1a23ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23ACu;
        // 0x1a23b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23ac) {
            ctx->pc = 0x1A23D4u;
            goto label_1a23d4;
        }
    }
    ctx->pc = 0x1A23B4u;
    // 0x1a23b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a23b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a23b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a23b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23bc: 0x8c620ff4  lw          $v0, 0xFF4($v1)
    ctx->pc = 0x1a23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
    // 0x1a23c0: 0xc0688fa  jal         func_1A23E8
    ctx->pc = 0x1A23C0u;
    SET_GPR_U32(ctx, 31, 0x1A23C8u);
    ctx->pc = 0x1A23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23C0u;
    // 0x1a23c4: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23E8u, 0x1A23C0u, 0x1A23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23C8u;
label_1a23c8:
    // 0x1a23c8: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A23C8u;
    SET_GPR_U32(ctx, 31, 0x1A23D0u);
    ctx->pc = 0x1A23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23C8u;
    // 0x1a23cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A23C8u, 0x1A23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23D0u;
label_1a23d0:
    // 0x1a23d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a23d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a23d4:
    // 0x1a23d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a23d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a23d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a23d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a23dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A23DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23DCu;
        // 0x1a23e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A23DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A23E4u;
    // 0x1a23e4: 0x0  nop
    ctx->pc = 0x1a23e4u;
    // NOP
    ctx->pc = 0x1a23e8u;
}
