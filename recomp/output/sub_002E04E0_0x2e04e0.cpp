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

// Function: sub_002E04E0
// Address: 0x2e04e0 - 0x2e0538
void sub_002E04E0_0x2e04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E04E0_0x2e04e0");
#endif

    switch (ctx->pc) {
        case 0x2e052cu: goto label_2e052c;
        default: break;
    }

    ctx->pc = 0x2e04e0u;

    // 0x2e04e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e04e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2e04e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e04e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e04ec: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x2e04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x2e04f0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E04F0u;
    {
        const bool branch_taken_0x2e04f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04F0u;
        // 0x2e04f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04f0) {
            ctx->pc = 0x2E0530u;
            goto label_2e0530;
        }
    }
    ctx->pc = 0x2E04F8u;
    // 0x2e04f8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e04fc: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2e04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0500: 0xc440b69c  lwc1        $f0, -0x4964($v0)
    ctx->pc = 0x2e0500u;
    { uint32_t bits = FAST_READ32(0x3FB69Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0504: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x2e0504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0508: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e0508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e050c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e050cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e0510: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x2e0510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0514: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2e0514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e0518: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e0518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e051c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2e051cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e0520: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2e0520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e0524: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2E0524u;
    SET_GPR_U32(ctx, 31, 0x2E052Cu);
    ctx->pc = 0x2E0528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0524u;
    // 0x2e0528: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E0524u, 0x2E052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E052Cu;
label_2e052c:
    // 0x2e052c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e052cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e0530:
    // 0x2e0530: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0530u;
        // 0x2e0534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0538u;
}
