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

// Function: sub_001A6178
// Address: 0x1a6178 - 0x1a61e0
void sub_001A6178_0x1a6178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6178_0x1a6178");
#endif

    switch (ctx->pc) {
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61b4u: goto label_1a61b4;
        default: break;
    }

    ctx->pc = 0x1a6178u;

    // 0x1a6178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a617c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a617cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a6180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6184: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a6184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a6188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a618c: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x1a618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6190: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a6190u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6194: 0x0  nop
    ctx->pc = 0x1a6194u;
    // NOP
    // 0x1a6198: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x1A6198u;
    {
        const bool branch_taken_0x1a6198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6198) {
            ctx->pc = 0x1A619Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6198u;
            // 0x1a619c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61D0u;
            goto label_1a61d0;
        }
    }
    ctx->pc = 0x1A61A0u;
    // 0x1a61a0: 0xc069832  jal         func_1A60C8
    ctx->pc = 0x1A61A0u;
    SET_GPR_U32(ctx, 31, 0x1A61A8u);
    ctx->pc = 0x1A61A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61A0u;
    // 0x1a61a4: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x1A61A0u, 0x1A61A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61A8u;
label_1a61a8:
    // 0x1a61a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a61a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a61ac: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A61ACu;
    SET_GPR_U32(ctx, 31, 0x1A61B4u);
    ctx->pc = 0x1A61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61ACu;
    // 0x1a61b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A61ACu, 0x1A61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A61B4u;
label_1a61b4:
    // 0x1a61b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a61b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a61b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a61bc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1a61bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1a61c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a61c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a61c4: 0xe60001bc  swc1        $f0, 0x1BC($s0)
    ctx->pc = 0x1a61c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
    // 0x1a61c8: 0xe6010168  swc1        $f1, 0x168($s0)
    ctx->pc = 0x1a61c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 360), bits); }
    // 0x1a61cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a61ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a61d0:
    // 0x1a61d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a61d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a61d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A61D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61D4u;
        // 0x1a61d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A61D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A61DCu;
    // 0x1a61dc: 0x0  nop
    ctx->pc = 0x1a61dcu;
    // NOP
    ctx->pc = 0x1a61e0u;
}
