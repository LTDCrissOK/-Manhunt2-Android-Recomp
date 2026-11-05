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

// Function: sub_001CE7A8
// Address: 0x1ce7a8 - 0x1ce848
void sub_001CE7A8_0x1ce7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE7A8_0x1ce7a8");
#endif

    switch (ctx->pc) {
        case 0x1ce7d8u: goto label_1ce7d8;
        case 0x1ce7e4u: goto label_1ce7e4;
        case 0x1ce804u: goto label_1ce804;
        case 0x1ce828u: goto label_1ce828;
        default: break;
    }

    ctx->pc = 0x1ce7a8u;

    // 0x1ce7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce7ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ce7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ce7b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce7b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ce7b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce7bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ce7c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce7c4: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x1ce7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1ce7c8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE7C8u;
    {
        const bool branch_taken_0x1ce7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce7c8) {
            ctx->pc = 0x1CE7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE7C8u;
            // 0x1ce7cc: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE7DCu;
            goto label_1ce7dc;
        }
    }
    ctx->pc = 0x1CE7D0u;
    // 0x1ce7d0: 0xc076e7c  jal         func_1DB9F0
    ctx->pc = 0x1CE7D0u;
    SET_GPR_U32(ctx, 31, 0x1CE7D8u);
    ctx->pc = 0x1CE7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7D0u;
    // 0x1ce7d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9F0u, 0x1CE7D0u, 0x1CE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7D8u;
label_1ce7d8:
    // 0x1ce7d8: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1ce7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1ce7dc:
    // 0x1ce7dc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1CE7DCu;
    SET_GPR_U32(ctx, 31, 0x1CE7E4u);
    ctx->pc = 0x1CE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7DCu;
    // 0x1ce7e0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1CE7DCu, 0x1CE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7E4u;
label_1ce7e4:
    // 0x1ce7e4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1ce7e8: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1ce7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1ce7ec: 0xc60c8a48  lwc1        $f12, -0x75B8($s0)
    ctx->pc = 0x1ce7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294937160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce7f0: 0xc62d8a4c  lwc1        $f13, -0x75B4($s1)
    ctx->pc = 0x1ce7f0u;
    { uint32_t bits = FAST_READ32(0x3F8A4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce7f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce7f8: 0xc64e8a50  lwc1        $f14, -0x75B0($s2)
    ctx->pc = 0x1ce7f8u;
    { uint32_t bits = FAST_READ32(0x3F8A50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce7fc: 0xc076e4a  jal         func_1DB928
    ctx->pc = 0x1CE7FCu;
    SET_GPR_U32(ctx, 31, 0x1CE804u);
    ctx->pc = 0x1CE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE7FCu;
    // 0x1ce800: 0x8e650058  lw          $a1, 0x58($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB928u, 0x1CE7FCu, 0x1CE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE804u;
label_1ce804:
    // 0x1ce804: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x1ce804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x1ce808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ce808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce80c: 0xc6008a48  lwc1        $f0, -0x75B8($s0)
    ctx->pc = 0x1ce80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294937160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce810: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x1ce810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x1ce814: 0xc6218a4c  lwc1        $f1, -0x75B4($s1)
    ctx->pc = 0x1ce814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce818: 0xe661003c  swc1        $f1, 0x3C($s3)
    ctx->pc = 0x1ce818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x1ce81c: 0xc6408a50  lwc1        $f0, -0x75B0($s2)
    ctx->pc = 0x1ce81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294937168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce820: 0xc0735e8  jal         func_1CD7A0
    ctx->pc = 0x1CE820u;
    SET_GPR_U32(ctx, 31, 0x1CE828u);
    ctx->pc = 0x1CE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE820u;
    // 0x1ce824: 0xe6600040  swc1        $f0, 0x40($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD7A0u, 0x1CE820u, 0x1CE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE828u;
label_1ce828:
    // 0x1ce828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce82c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce82cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce830: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce834: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce83c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE83Cu;
        // 0x1ce840: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE844u;
    // 0x1ce844: 0x0  nop
    ctx->pc = 0x1ce844u;
    // NOP
    ctx->pc = 0x1ce848u;
}
