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

// Function: sub_0037B0B0
// Address: 0x37b0b0 - 0x37b108
void sub_0037B0B0_0x37b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B0B0_0x37b0b0");
#endif

    switch (ctx->pc) {
        case 0x37b0b8u: goto label_37b0b8;
        case 0x37b0c4u: goto label_37b0c4;
        case 0x37b0f0u: goto label_37b0f0;
        default: break;
    }

    ctx->pc = 0x37b0b0u;

    // 0x37b0b0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x37b0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37b0b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37b0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37b0b8:
    // 0x37b0b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x37b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x37b0bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37b0c0: 0x0  nop
    ctx->pc = 0x37b0c0u;
    // NOP
label_37b0c4:
    // 0x37b0c4: 0x0  nop
    ctx->pc = 0x37b0c4u;
    // NOP
    // 0x37b0c8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37B0C8u;
    {
        const bool branch_taken_0x37b0c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x37B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0C8u;
        // 0x37b0cc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b0c8) {
            ctx->pc = 0x37B0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b0b8;
        }
    }
    ctx->pc = 0x37B0D0u;
    // 0x37b0d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37b0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37b0d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x37b0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b0d8: 0x0  nop
    ctx->pc = 0x37b0d8u;
    // NOP
    // 0x37b0dc: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x37b0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x37b0e0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x37b0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37b0e4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x37b0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x37b0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37B0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B0E8u;
        // 0x37b0ec: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B0F0u;
label_37b0f0:
    // 0x37b0f0: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x37b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x37b0f4: 0x0  nop
    ctx->pc = 0x37b0f4u;
    // NOP
    // 0x37b0f8: 0x0  nop
    ctx->pc = 0x37b0f8u;
    // NOP
    // 0x37b0fc: 0x0  nop
    ctx->pc = 0x37b0fcu;
    // NOP
    // 0x37b100: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37b104: 0x0  nop
    ctx->pc = 0x37b104u;
    // NOP
    ctx->pc = 0x37b108u;
}
