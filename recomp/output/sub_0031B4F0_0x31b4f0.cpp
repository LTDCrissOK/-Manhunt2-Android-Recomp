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

// Function: sub_0031B4F0
// Address: 0x31b4f0 - 0x31b5c0
void sub_0031B4F0_0x31b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B4F0_0x31b4f0");
#endif

    switch (ctx->pc) {
        case 0x31b538u: goto label_31b538;
        case 0x31b560u: goto label_31b560;
        case 0x31b57cu: goto label_31b57c;
        case 0x31b59cu: goto label_31b59c;
        case 0x31b5acu: goto label_31b5ac;
        default: break;
    }

    ctx->pc = 0x31b4f0u;

    // 0x31b4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b4f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31b4f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b4f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31b4fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31b500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31b504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31b508: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31b508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31b50c: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x31b50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b510: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31b510u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b514: 0x0  nop
    ctx->pc = 0x31b514u;
    // NOP
    // 0x31b518: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31B518u;
    {
        const bool branch_taken_0x31b518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b518) {
            ctx->pc = 0x31B51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B518u;
            // 0x31b51c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B520u;
            goto label_31b520;
        }
    }
    ctx->pc = 0x31B520u;
label_31b520:
    // 0x31b520: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x31b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x31b524: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31B524u;
    {
        const bool branch_taken_0x31b524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B524u;
        // 0x31b528: 0xe602002c  swc1        $f2, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b524) {
            ctx->pc = 0x31B568u;
            goto label_31b568;
        }
    }
    ctx->pc = 0x31B52Cu;
    // 0x31b52c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x31b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31b530: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x31B530u;
    SET_GPR_U32(ctx, 31, 0x31B538u);
    ctx->pc = 0x31B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B530u;
    // 0x31b534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x31B530u, 0x31B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B538u;
label_31b538:
    // 0x31b538: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31b538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31b53c: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x31b53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b540: 0xc46dc8dc  lwc1        $f13, -0x3724($v1)
    ctx->pc = 0x31b540u;
    { uint32_t bits = FAST_READ32(0x3FC8DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31b544: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31b544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31b548: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31b548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31b54c: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x31b54cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31b550: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x31b550u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x31b554: 0xc46cc8e0  lwc1        $f12, -0x3720($v1)
    ctx->pc = 0x31b554u;
    { uint32_t bits = FAST_READ32(0x3FC8E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b558: 0xc0c2d96  jal         func_30B658
    ctx->pc = 0x31B558u;
    SET_GPR_U32(ctx, 31, 0x31B560u);
    ctx->pc = 0x31B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B558u;
    // 0x31b55c: 0x26050024  addiu       $a1, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B658u, 0x31B558u, 0x31B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B560u;
label_31b560:
    // 0x31b560: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31B560u;
    {
        const bool branch_taken_0x31b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B560u;
        // 0x31b564: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b560) {
            ctx->pc = 0x31B5B0u;
            goto label_31b5b0;
        }
    }
    ctx->pc = 0x31B568u;
label_31b568:
    // 0x31b568: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x31b56c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31B56Cu;
    {
        const bool branch_taken_0x31b56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B56Cu;
        // 0x31b570: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b56c) {
            ctx->pc = 0x31B5A4u;
            goto label_31b5a4;
        }
    }
    ctx->pc = 0x31B574u;
    // 0x31b574: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x31B574u;
    SET_GPR_U32(ctx, 31, 0x31B57Cu);
    ctx->pc = 0x31B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B574u;
    // 0x31b578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x31B574u, 0x31B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B57Cu;
label_31b57c:
    // 0x31b57c: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x31b57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31b580: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31b580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31b584: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x31b584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b588: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x31b588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x31b58c: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x31b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31b590: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x31b590u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x31b594: 0xc0c2d96  jal         func_30B658
    ctx->pc = 0x31B594u;
    SET_GPR_U32(ctx, 31, 0x31B59Cu);
    ctx->pc = 0x31B598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B594u;
    // 0x31b598: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B658u, 0x31B594u, 0x31B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B59Cu;
label_31b59c:
    // 0x31b59c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31B59Cu;
    {
        const bool branch_taken_0x31b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B59Cu;
        // 0x31b5a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b59c) {
            ctx->pc = 0x31B5B0u;
            goto label_31b5b0;
        }
    }
    ctx->pc = 0x31B5A4u;
label_31b5a4:
    // 0x31b5a4: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x31B5A4u;
    SET_GPR_U32(ctx, 31, 0x31B5ACu);
    ctx->pc = 0x31B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5A4u;
    // 0x31b5a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x31B5A4u, 0x31B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B5ACu;
label_31b5ac:
    // 0x31b5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31b5b0:
    // 0x31b5b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31b5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x31B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5B4u;
        // 0x31b5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B5BCu;
    // 0x31b5bc: 0x0  nop
    ctx->pc = 0x31b5bcu;
    // NOP
    ctx->pc = 0x31b5c0u;
}
