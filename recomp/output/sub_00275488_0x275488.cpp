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

// Function: sub_00275488
// Address: 0x275488 - 0x2754c0
void sub_00275488_0x275488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275488_0x275488");
#endif

    ctx->pc = 0x275488u;

    // 0x275488: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x275488u;
    {
        const bool branch_taken_0x275488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275488u;
        // 0x27548c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275488) {
            ctx->pc = 0x2754B0u;
            goto label_2754b0;
        }
    }
    ctx->pc = 0x275490u;
    // 0x275490: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x275490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x275494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x275494u;
    {
        const bool branch_taken_0x275494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275494u;
        // 0x275498: 0x24830220  addiu       $v1, $a0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275494) {
            ctx->pc = 0x2754B4u;
            goto label_2754b4;
        }
    }
    ctx->pc = 0x27549Cu;
    // 0x27549c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2754a0: 0xe46c0004  swc1        $f12, 0x4($v1)
    ctx->pc = 0x2754a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2754a4: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x2754a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x2754a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2754A8u;
    {
        const bool branch_taken_0x2754a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754A8u;
        // 0x2754ac: 0xa0860375  sb          $a2, 0x375($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 885), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754a8) {
            ctx->pc = 0x2754B4u;
            goto label_2754b4;
        }
    }
    ctx->pc = 0x2754B0u;
label_2754b0:
    // 0x2754b0: 0xa0800375  sb          $zero, 0x375($a0)
    ctx->pc = 0x2754b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 885), (uint8_t)GPR_U32(ctx, 0));
label_2754b4:
    // 0x2754b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2754B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2754B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2754B4u;
        // 0x2754b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2754B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2754BCu;
    // 0x2754bc: 0x0  nop
    ctx->pc = 0x2754bcu;
    // NOP
    ctx->pc = 0x2754c0u;
}
