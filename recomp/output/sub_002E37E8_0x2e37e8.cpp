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

// Function: sub_002E37E8
// Address: 0x2e37e8 - 0x2e3828
void sub_002E37E8_0x2e37e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E37E8_0x2e37e8");
#endif

    ctx->pc = 0x2e37e8u;

    // 0x2e37e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e37ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E37ECu;
    {
        const bool branch_taken_0x2e37ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e37ec) {
            ctx->pc = 0x2E3800u;
            goto label_2e3800;
        }
    }
    ctx->pc = 0x2E37F4u;
    // 0x2e37f4: 0x908202f1  lbu         $v0, 0x2F1($a0)
    ctx->pc = 0x2e37f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 753)));
    // 0x2e37f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E37F8u;
    {
        const bool branch_taken_0x2e37f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e37f8) {
            ctx->pc = 0x2E37FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E37F8u;
            // 0x2e37fc: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3800u;
            goto label_2e3800;
        }
    }
    ctx->pc = 0x2E3800u;
label_2e3800:
    // 0x2e3800: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e3800u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3804: 0x0  nop
    ctx->pc = 0x2e3804u;
    // NOP
    // 0x2e3808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e3808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e380c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3810: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x2e3810u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2e3814: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e3814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e3818: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2e3818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2e381c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E381Cu;
        // 0x2e3820: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E381Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3824u;
    // 0x2e3824: 0x0  nop
    ctx->pc = 0x2e3824u;
    // NOP
    ctx->pc = 0x2e3828u;
}
