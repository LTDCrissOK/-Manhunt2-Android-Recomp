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

// Function: sub_002093B0
// Address: 0x2093b0 - 0x209408
void sub_002093B0_0x2093b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002093B0_0x2093b0");
#endif

    switch (ctx->pc) {
        case 0x2093e0u: goto label_2093e0;
        default: break;
    }

    ctx->pc = 0x2093b0u;

    // 0x2093b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2093b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2093b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2093b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2093b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2093b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2093bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2093bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093c0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2093c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2093c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2093c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2093c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2093c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2093cc: 0x0  nop
    ctx->pc = 0x2093ccu;
    // NOP
    // 0x2093d0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2093D0u;
    {
        const bool branch_taken_0x2093d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2093d0) {
            ctx->pc = 0x2093D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2093D0u;
            // 0x2093d4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2093ECu;
            goto label_2093ec;
        }
    }
    ctx->pc = 0x2093D8u;
    // 0x2093d8: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2093D8u;
    SET_GPR_U32(ctx, 31, 0x2093E0u);
    ctx->pc = 0x2093DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093D8u;
    // 0x2093dc: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2093D8u, 0x2093E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093E0u;
label_2093e0:
    // 0x2093e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2093e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2093e4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2093e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2093e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2093e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2093ec:
    // 0x2093ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2093ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2093f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2093f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2093f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2093F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2093F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093F4u;
        // 0x2093f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2093F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2093FCu;
    // 0x2093fc: 0x0  nop
    ctx->pc = 0x2093fcu;
    // NOP
    // 0x209400: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x209400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x209404: 0x0  nop
    ctx->pc = 0x209404u;
    // NOP
    ctx->pc = 0x209408u;
}
