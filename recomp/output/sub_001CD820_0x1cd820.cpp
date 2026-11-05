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

// Function: sub_001CD820
// Address: 0x1cd820 - 0x1cd910
void sub_001CD820_0x1cd820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD820_0x1cd820");
#endif

    switch (ctx->pc) {
        case 0x1cd8ecu: goto label_1cd8ec;
        case 0x1cd8f4u: goto label_1cd8f4;
        case 0x1cd8fcu: goto label_1cd8fc;
        default: break;
    }

    ctx->pc = 0x1cd820u;

    // 0x1cd820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd830: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cd830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cd834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD834u;
    {
        const bool branch_taken_0x1cd834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD834u;
        // 0x1cd838: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd834) {
            ctx->pc = 0x1CD844u;
            goto label_1cd844;
        }
    }
    ctx->pc = 0x1CD83Cu;
    // 0x1cd83c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1CD83Cu;
    {
        const bool branch_taken_0x1cd83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD83Cu;
        // 0x1cd840: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd83c) {
            ctx->pc = 0x1CD8FCu;
            goto label_1cd8fc;
        }
    }
    ctx->pc = 0x1CD844u;
label_1cd844:
    // 0x1cd844: 0x8c628a44  lw          $v0, -0x75BC($v1)
    ctx->pc = 0x1cd844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937156)));
    // 0x1cd848: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CD848u;
    {
        const bool branch_taken_0x1cd848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD848u;
        // 0x1cd84c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd848) {
            ctx->pc = 0x1CD8ECu;
            goto label_1cd8ec;
        }
    }
    ctx->pc = 0x1CD850u;
    // 0x1cd850: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd854: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x1cd854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd858: 0xc4408a40  lwc1        $f0, -0x75C0($v0)
    ctx->pc = 0x1cd858u;
    { uint32_t bits = FAST_READ32(0x3F8A40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd85c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cd85cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd860: 0x0  nop
    ctx->pc = 0x1cd860u;
    // NOP
    // 0x1cd864: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1CD864u;
    {
        const bool branch_taken_0x1cd864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD864u;
        // 0x1cd868: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd864) {
            ctx->pc = 0x1CD8DCu;
            goto label_1cd8dc;
        }
    }
    ctx->pc = 0x1CD86Cu;
    // 0x1cd86c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd870: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1cd870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd874: 0xc44089c4  lwc1        $f0, -0x763C($v0)
    ctx->pc = 0x1cd874u;
    { uint32_t bits = FAST_READ32(0x3F89C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd878: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cd878u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd87c: 0x0  nop
    ctx->pc = 0x1cd87cu;
    // NOP
    // 0x1cd880: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD880u;
    {
        const bool branch_taken_0x1cd880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd880) {
            ctx->pc = 0x1CD8DCu;
            goto label_1cd8dc;
        }
    }
    ctx->pc = 0x1CD888u;
    // 0x1cd888: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1cd888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cd88c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD88Cu;
    {
        const bool branch_taken_0x1cd88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD88Cu;
        // 0x1cd890: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd88c) {
            ctx->pc = 0x1CD8A0u;
            goto label_1cd8a0;
        }
    }
    ctx->pc = 0x1CD894u;
    // 0x1cd894: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1cd894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd898: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CD898u;
    {
        const bool branch_taken_0x1cd898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD898u;
        // 0x1cd89c: 0xc4408a34  lwc1        $f0, -0x75CC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd898) {
            ctx->pc = 0x1CD8CCu;
            goto label_1cd8cc;
        }
    }
    ctx->pc = 0x1CD8A0u;
label_1cd8a0:
    // 0x1cd8a0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1cd8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cd8a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD8A4u;
    {
        const bool branch_taken_0x1cd8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8A4u;
        // 0x1cd8a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8a4) {
            ctx->pc = 0x1CD8B8u;
            goto label_1cd8b8;
        }
    }
    ctx->pc = 0x1CD8ACu;
    // 0x1cd8ac: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1cd8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd8b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD8B0u;
    {
        const bool branch_taken_0x1cd8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B0u;
        // 0x1cd8b4: 0xc4408a38  lwc1        $f0, -0x75C8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8b0) {
            ctx->pc = 0x1CD8CCu;
            goto label_1cd8cc;
        }
    }
    ctx->pc = 0x1CD8B8u;
label_1cd8b8:
    // 0x1cd8b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1cd8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1cd8bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD8BCu;
    {
        const bool branch_taken_0x1cd8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8BCu;
        // 0x1cd8c0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8bc) {
            ctx->pc = 0x1CD8DCu;
            goto label_1cd8dc;
        }
    }
    ctx->pc = 0x1CD8C4u;
    // 0x1cd8c4: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1cd8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd8c8: 0xc4408a3c  lwc1        $f0, -0x75C4($v0)
    ctx->pc = 0x1cd8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd8cc:
    // 0x1cd8cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cd8ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd8d0: 0x0  nop
    ctx->pc = 0x1cd8d0u;
    // NOP
    // 0x1cd8d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD8D4u;
    {
        const bool branch_taken_0x1cd8d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd8d4) {
            ctx->pc = 0x1CD8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD8D4u;
            // 0x1cd8d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD8DCu;
            goto label_1cd8dc;
        }
    }
    ctx->pc = 0x1CD8DCu;
label_1cd8dc:
    // 0x1cd8dc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD8DCu;
    {
        const bool branch_taken_0x1cd8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8dc) {
            ctx->pc = 0x1CD8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD8DCu;
            // 0x1cd8e0: 0xac808a44  sw          $zero, -0x75BC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294937156), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD8ECu;
            goto label_1cd8ec;
        }
    }
    ctx->pc = 0x1CD8E4u;
    // 0x1cd8e4: 0xc0739b6  jal         func_1CE6D8
    ctx->pc = 0x1CD8E4u;
    SET_GPR_U32(ctx, 31, 0x1CD8ECu);
    ctx->pc = 0x1CD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8E4u;
    // 0x1cd8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6D8u, 0x1CD8E4u, 0x1CD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8ECu;
label_1cd8ec:
    // 0x1cd8ec: 0xc07397a  jal         func_1CE5E8
    ctx->pc = 0x1CD8ECu;
    SET_GPR_U32(ctx, 31, 0x1CD8F4u);
    ctx->pc = 0x1CD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8ECu;
    // 0x1cd8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE5E8u, 0x1CD8ECu, 0x1CD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8F4u;
label_1cd8f4:
    // 0x1cd8f4: 0xc073512  jal         func_1CD448
    ctx->pc = 0x1CD8F4u;
    SET_GPR_U32(ctx, 31, 0x1CD8FCu);
    ctx->pc = 0x1CD8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD8F4u;
    // 0x1cd8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD448u, 0x1CD8F4u, 0x1CD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8FCu;
label_1cd8fc:
    // 0x1cd8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd904: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD904u;
        // 0x1cd908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD90Cu;
    // 0x1cd90c: 0x0  nop
    ctx->pc = 0x1cd90cu;
    // NOP
    ctx->pc = 0x1cd910u;
}
