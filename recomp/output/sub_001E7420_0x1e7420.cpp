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

// Function: sub_001E7420
// Address: 0x1e7420 - 0x1e7638
void sub_001E7420_0x1e7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7420_0x1e7420");
#endif

    switch (ctx->pc) {
        case 0x1e745cu: goto label_1e745c;
        case 0x1e7490u: goto label_1e7490;
        case 0x1e74c8u: goto label_1e74c8;
        case 0x1e74d0u: goto label_1e74d0;
        case 0x1e7500u: goto label_1e7500;
        default: break;
    }

    ctx->pc = 0x1e7420u;

    // 0x1e7420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7424: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1e7424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1e7428: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1e7428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1e742c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e742cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7430: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1e7430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1e7434: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e7434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7438: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1e7438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1e743c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e743cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7440: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1e7440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1e7444: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1e7444u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7448: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1e7448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1e744c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e744cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7450: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e7450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e7454: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E7454u;
    SET_GPR_U32(ctx, 31, 0x1E745Cu);
    ctx->pc = 0x1E7458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7454u;
    // 0x1e7458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E7454u, 0x1E745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E745Cu;
label_1e745c:
    // 0x1e745c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e745cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7460: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1e7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7468: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e7468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e746c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e746cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7470: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1e7470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e7474: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7478: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1e7478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e747c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7480: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e7480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e7484: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e7484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7488: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E7488u;
    SET_GPR_U32(ctx, 31, 0x1E7490u);
    ctx->pc = 0x1E748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7488u;
    // 0x1e748c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E7488u, 0x1E7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7490u;
label_1e7490:
    // 0x1e7490: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1e7490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7494: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1e7494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e7498: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e749c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e74a0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e74a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e74a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e74a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e74a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e74ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e74b0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1e74b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e74b4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e74b8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1E74B8u;
    {
        const bool branch_taken_0x1e74b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74B8u;
        // 0x1e74bc: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74b8) {
            ctx->pc = 0x1E75C0u;
            goto label_1e75c0;
        }
    }
    ctx->pc = 0x1E74C0u;
    // 0x1e74c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e74c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e74c4: 0x0  nop
    ctx->pc = 0x1e74c4u;
    // NOP
label_1e74c8:
    // 0x1e74c8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E74C8u;
    SET_GPR_U32(ctx, 31, 0x1E74D0u);
    ctx->pc = 0x1E74CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74C8u;
    // 0x1e74cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E74C8u, 0x1E74D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E74D0u;
label_1e74d0:
    // 0x1e74d0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1e74d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e74d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e74d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e74d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e74dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e74dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e74e0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e74e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e74e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e74e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e74e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e74e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e74ec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1e74ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e74f0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1e74f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e74f4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e74f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e74f8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E74F8u;
    SET_GPR_U32(ctx, 31, 0x1E7500u);
    ctx->pc = 0x1E74FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E74F8u;
    // 0x1e74fc: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E74F8u, 0x1E7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7500u;
label_1e7500:
    // 0x1e7500: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1e7500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7504: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e7504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7508: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e750c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e750cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e7510: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e7510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7514: 0x0  nop
    ctx->pc = 0x1e7514u;
    // NOP
    // 0x1e7518: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E7518u;
    {
        const bool branch_taken_0x1e7518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7518) {
            ctx->pc = 0x1E751Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7518u;
            // 0x1e751c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7520u;
            goto label_1e7520;
        }
    }
    ctx->pc = 0x1E7520u;
label_1e7520:
    // 0x1e7520: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e7520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7524: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e7524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7528: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e7528u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e752c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e752cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7530: 0x0  nop
    ctx->pc = 0x1e7530u;
    // NOP
    // 0x1e7534: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E7534u;
    {
        const bool branch_taken_0x1e7534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7534) {
            ctx->pc = 0x1E7538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7534u;
            // 0x1e7538: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E753Cu;
            goto label_1e753c;
        }
    }
    ctx->pc = 0x1E753Cu;
label_1e753c:
    // 0x1e753c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7540: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e7540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7544: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e7544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e7548: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e7548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e754c: 0x0  nop
    ctx->pc = 0x1e754cu;
    // NOP
    // 0x1e7550: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E7550u;
    {
        const bool branch_taken_0x1e7550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7550) {
            ctx->pc = 0x1E7554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7550u;
            // 0x1e7554: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7558u;
            goto label_1e7558;
        }
    }
    ctx->pc = 0x1E7558u;
label_1e7558:
    // 0x1e7558: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e755c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1e755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7560: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e7560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e7564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e7564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7568: 0x0  nop
    ctx->pc = 0x1e7568u;
    // NOP
    // 0x1e756c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E756Cu;
    {
        const bool branch_taken_0x1e756c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e756c) {
            ctx->pc = 0x1E7570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E756Cu;
            // 0x1e7570: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7574u;
            goto label_1e7574;
        }
    }
    ctx->pc = 0x1E7574u;
label_1e7574:
    // 0x1e7574: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e7574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7578: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e757c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e757cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e7580: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e7580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7584: 0x0  nop
    ctx->pc = 0x1e7584u;
    // NOP
    // 0x1e7588: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E7588u;
    {
        const bool branch_taken_0x1e7588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7588) {
            ctx->pc = 0x1E758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7588u;
            // 0x1e758c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7590u;
            goto label_1e7590;
        }
    }
    ctx->pc = 0x1E7590u;
label_1e7590:
    // 0x1e7590: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7594: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1e7594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7598: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e7598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e759c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e759cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e75a0: 0x0  nop
    ctx->pc = 0x1e75a0u;
    // NOP
    // 0x1e75a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E75A4u;
    {
        const bool branch_taken_0x1e75a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e75a4) {
            ctx->pc = 0x1E75A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E75A4u;
            // 0x1e75a8: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E75ACu;
            goto label_1e75ac;
        }
    }
    ctx->pc = 0x1E75ACu;
label_1e75ac:
    // 0x1e75ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e75acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e75b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e75b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e75b4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e75b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e75b8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1E75B8u;
    {
        const bool branch_taken_0x1e75b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E75B8u;
        // 0x1e75bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e75b8) {
            ctx->pc = 0x1E74C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e74c8;
        }
    }
    ctx->pc = 0x1E75C0u;
label_1e75c0:
    // 0x1e75c0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E75C0u;
    {
        const bool branch_taken_0x1e75c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e75c0) {
            ctx->pc = 0x1E75E0u;
            goto label_1e75e0;
        }
    }
    ctx->pc = 0x1E75C8u;
    // 0x1e75c8: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E75C8u;
    {
        const bool branch_taken_0x1e75c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e75c8) {
            ctx->pc = 0x1E75E0u;
            goto label_1e75e0;
        }
    }
    ctx->pc = 0x1E75D0u;
    // 0x1e75d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e75d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75d4: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1e75d4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e75d8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e75d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e75dc: 0xfaa10000  sqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e75dcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e75e0:
    // 0x1e75e0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e75e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e75e4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e75e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e75e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e75ec: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e75ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e75f0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1e75f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e75f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e75f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e75f8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e75fc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e75fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7600: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1e7600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7604: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x1e7604u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1e7608: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1e7608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e760c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x1e760cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1e7610: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x1e7610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1e7614: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1e7614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7618: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1e7618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e761c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1e761cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7620: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1e7620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e7624: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1e7624u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7628: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1e7628u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e762c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e762cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7630: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7630u;
        // 0x1e7634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7638u;
}
