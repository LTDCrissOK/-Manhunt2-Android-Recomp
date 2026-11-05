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

// Function: sub_001DECA8
// Address: 0x1deca8 - 0x1ded18
void sub_001DECA8_0x1deca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DECA8_0x1deca8");
#endif

    switch (ctx->pc) {
        case 0x1ded00u: goto label_1ded00;
        default: break;
    }

    ctx->pc = 0x1deca8u;

    // 0x1deca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1decac: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1decacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1decb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1decb4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1decb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1decb8: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x1decb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x1decbc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1decbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1decc0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1decc4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1decc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1decc8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1decc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1deccc: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1decccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1decd0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1decd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decd4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1decd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1decd8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1decd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1decdc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1decdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1dece0: 0xc460d85c  lwc1        $f0, -0x27A4($v1)
    ctx->pc = 0x1dece0u;
    { uint32_t bits = FAST_READ32(0x45D85Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dece4: 0xac4b0044  sw          $t3, 0x44($v0)
    ctx->pc = 0x1dece4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 11));
    // 0x1dece8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1dece8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1decec: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1dececu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1decf0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1decf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1decf4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1decf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1decf8: 0xc077e10  jal         func_1DF840
    ctx->pc = 0x1DECF8u;
    SET_GPR_U32(ctx, 31, 0x1DED00u);
    ctx->pc = 0x1DECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DECF8u;
    // 0x1decfc: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF840u, 0x1DECF8u, 0x1DED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DED00u;
label_1ded00:
    // 0x1ded00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ded00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ded04: 0x3e00008  jr          $ra
    ctx->pc = 0x1DED04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED04u;
        // 0x1ded08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DED0Cu;
    // 0x1ded0c: 0x0  nop
    ctx->pc = 0x1ded0cu;
    // NOP
    // 0x1ded10: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x1ded10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x1ded14: 0x0  nop
    ctx->pc = 0x1ded14u;
    // NOP
    ctx->pc = 0x1ded18u;
}
