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

// Function: sub_00248DC8
// Address: 0x248dc8 - 0x248e20
void sub_00248DC8_0x248dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248DC8_0x248dc8");
#endif

    ctx->pc = 0x248dc8u;

    // 0x248dc8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x248dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x248dcc: 0x24445870  addiu       $a0, $v0, 0x5870
    ctx->pc = 0x248dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x248dd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x248dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x595874u));
    // 0x248dd4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x248DD4u;
    {
        const bool branch_taken_0x248dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x248DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DD4u;
        // 0x248dd8: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248dd4) {
            ctx->pc = 0x248DECu;
            goto label_248dec;
        }
    }
    ctx->pc = 0x248DDCu;
    // 0x248ddc: 0x908202f1  lbu         $v0, 0x2F1($a0)
    ctx->pc = 0x248ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 753)));
    // 0x248de0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x248DE0u;
    {
        const bool branch_taken_0x248de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248de0) {
            ctx->pc = 0x248DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248DE0u;
            // 0x248de4: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248DECu;
            goto label_248dec;
        }
    }
    ctx->pc = 0x248DE8u;
    // 0x248de8: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x248de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_248dec:
    // 0x248dec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x248decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x248df0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x248df0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x248df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248df8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x248df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248dfc: 0x0  nop
    ctx->pc = 0x248dfcu;
    // NOP
    // 0x248e00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x248e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x248e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248e08: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x248e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x248e0c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x248e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x248e10: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x248e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x248e14: 0x3e00008  jr          $ra
    ctx->pc = 0x248E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E14u;
        // 0x248e18: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E1Cu;
    // 0x248e1c: 0x0  nop
    ctx->pc = 0x248e1cu;
    // NOP
    ctx->pc = 0x248e20u;
}
