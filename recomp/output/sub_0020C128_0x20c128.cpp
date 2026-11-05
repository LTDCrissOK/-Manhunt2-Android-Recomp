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

// Function: sub_0020C128
// Address: 0x20c128 - 0x20c188
void sub_0020C128_0x20c128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C128_0x20c128");
#endif

    switch (ctx->pc) {
        case 0x20c154u: goto label_20c154;
        default: break;
    }

    ctx->pc = 0x20c128u;

    // 0x20c128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c12c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20c12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c138: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20c13c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20c13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c140: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x20c140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x20c144: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20c144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20c148: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x20c148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x20c14c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x20C14Cu;
    SET_GPR_U32(ctx, 31, 0x20C154u);
    ctx->pc = 0x20C150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C14Cu;
    // 0x20c150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x20C14Cu, 0x20C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C154u;
label_20c154:
    // 0x20c154: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x20c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c158: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c15c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20c15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c160: 0x0  nop
    ctx->pc = 0x20c160u;
    // NOP
    // 0x20c164: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x20C164u;
    {
        const bool branch_taken_0x20c164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c164) {
            ctx->pc = 0x20C168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C164u;
            // 0x20c168: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C178u;
            goto label_20c178;
        }
    }
    ctx->pc = 0x20C16Cu;
    // 0x20c16c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20c16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20c170: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x20c170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x20c174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c178:
    // 0x20c178: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20c178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c17c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C17Cu;
        // 0x20c180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C184u;
    // 0x20c184: 0x0  nop
    ctx->pc = 0x20c184u;
    // NOP
    ctx->pc = 0x20c188u;
}
