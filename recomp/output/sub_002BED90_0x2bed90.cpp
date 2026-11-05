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

// Function: sub_002BED90
// Address: 0x2bed90 - 0x2bedd8
void sub_002BED90_0x2bed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BED90_0x2bed90");
#endif

    switch (ctx->pc) {
        case 0x2bedacu: goto label_2bedac;
        default: break;
    }

    ctx->pc = 0x2bed90u;

    // 0x2bed90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bed94: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bed98: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bed9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bed9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beda0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2beda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2beda4: 0xc0b0098  jal         func_2C0260
    ctx->pc = 0x2BEDA4u;
    SET_GPR_U32(ctx, 31, 0x2BEDACu);
    ctx->pc = 0x2BEDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDA4u;
    // 0x2beda8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0260u, 0x2BEDA4u, 0x2BEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDACu;
label_2bedac:
    // 0x2bedac: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bedacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bedb0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2bedb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bedb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bedb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bedb8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2bedb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bedbc: 0xe6020060  swc1        $f2, 0x60($s0)
    ctx->pc = 0x2bedbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2bedc0: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x2bedc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2bedc4: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2bedc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2bedc8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bedc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bedcc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bedccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bedd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDD0u;
        // 0x2bedd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEDD8u;
}
