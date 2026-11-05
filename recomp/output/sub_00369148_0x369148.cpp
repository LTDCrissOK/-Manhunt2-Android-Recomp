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

// Function: sub_00369148
// Address: 0x369148 - 0x3691b0
void sub_00369148_0x369148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369148_0x369148");
#endif

    switch (ctx->pc) {
        case 0x369160u: goto label_369160;
        case 0x369168u: goto label_369168;
        case 0x3691a0u: goto label_3691a0;
        default: break;
    }

    ctx->pc = 0x369148u;

    // 0x369148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x369148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36914c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x36914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x369150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369154: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x369154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x369158: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x369158u;
    SET_GPR_U32(ctx, 31, 0x369160u);
    ctx->pc = 0x36915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369158u;
    // 0x36915c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x369158u, 0x369160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369160u;
label_369160:
    // 0x369160: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x369160u;
    SET_GPR_U32(ctx, 31, 0x369168u);
    ctx->pc = 0x369164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369160u;
    // 0x369164: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x369160u, 0x369168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369168u;
label_369168:
    // 0x369168: 0xc605003c  lwc1        $f5, 0x3C($s0)
    ctx->pc = 0x369168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36916c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369170: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x369170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369174: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x369174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369178: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x369178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36917c: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x36917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x369180: 0xc6040038  lwc1        $f4, 0x38($s0)
    ctx->pc = 0x369180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x369184: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x369184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x369188: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x369188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36918c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x36918cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x369190: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x369190u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x369194: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x369194u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x369198: 0xc0dcec0  jal         func_373B00
    ctx->pc = 0x369198u;
    SET_GPR_U32(ctx, 31, 0x3691A0u);
    ctx->pc = 0x36919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369198u;
    // 0x36919c: 0xe7a50038  swc1        $f5, 0x38($sp) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B00u, 0x369198u, 0x3691A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691A0u;
label_3691a0:
    // 0x3691a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3691a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3691a4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3691a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3691a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3691A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3691ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3691A8u;
        // 0x3691ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3691A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3691B0u;
}
