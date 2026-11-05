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

// Function: sub_0019DC80
// Address: 0x19dc80 - 0x19dce8
void sub_0019DC80_0x19dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DC80_0x19dc80");
#endif

    switch (ctx->pc) {
        case 0x19dcb4u: goto label_19dcb4;
        case 0x19dcc8u: goto label_19dcc8;
        default: break;
    }

    ctx->pc = 0x19dc80u;

    // 0x19dc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19dc88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19dc8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19dc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19dc94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19dc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc98: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19dc98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19dc9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19dc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dca0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19dca4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19dca4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19dca8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x19dca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcac: 0xc06fb2a  jal         func_1BECA8
    ctx->pc = 0x19DCACu;
    SET_GPR_U32(ctx, 31, 0x19DCB4u);
    ctx->pc = 0x19DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCACu;
    // 0x19dcb0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECA8u, 0x19DCACu, 0x19DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCB4u;
label_19dcb4:
    // 0x19dcb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19dcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19dcbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcc0: 0xc067774  jal         func_19DDD0
    ctx->pc = 0x19DCC0u;
    SET_GPR_U32(ctx, 31, 0x19DCC8u);
    ctx->pc = 0x19DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DCC0u;
    // 0x19dcc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDD0u, 0x19DCC0u, 0x19DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCC8u;
label_19dcc8:
    // 0x19dcc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19dcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19dcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19dcd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19dcd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19dcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19dcd8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19dcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x19DCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCDCu;
        // 0x19dce0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DCE4u;
    // 0x19dce4: 0x0  nop
    ctx->pc = 0x19dce4u;
    // NOP
    ctx->pc = 0x19dce8u;
}
