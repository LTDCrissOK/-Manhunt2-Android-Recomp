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

// Function: sub_001AD8B8
// Address: 0x1ad8b8 - 0x1ad900
void sub_001AD8B8_0x1ad8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD8B8_0x1ad8b8");
#endif

    ctx->pc = 0x1ad8b8u;

    // 0x1ad8b8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1ad8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad8bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1ad8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ad8c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD8C0u;
    {
        const bool branch_taken_0x1ad8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8C0u;
        // 0x1ad8c4: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8c0) {
            ctx->pc = 0x1AD8D0u;
            goto label_1ad8d0;
        }
    }
    ctx->pc = 0x1AD8C8u;
    // 0x1ad8c8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD8C8u;
    {
        const bool branch_taken_0x1ad8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8C8u;
        // 0x1ad8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8c8) {
            ctx->pc = 0x1AD8F4u;
            goto label_1ad8f4;
        }
    }
    ctx->pc = 0x1AD8D0u;
label_1ad8d0:
    // 0x1ad8d0: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x1ad8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1ad8d4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1ad8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ad8d8: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1ad8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad8dc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1ad8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad8e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ad8e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad8e4: 0x0  nop
    ctx->pc = 0x1ad8e4u;
    // NOP
    // 0x1ad8e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD8E8u;
    {
        const bool branch_taken_0x1ad8e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8E8u;
        // 0x1ad8ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad8e8) {
            ctx->pc = 0x1AD8F4u;
            goto label_1ad8f4;
        }
    }
    ctx->pc = 0x1AD8F0u;
    // 0x1ad8f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad8f4:
    // 0x1ad8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8FCu;
    // 0x1ad8fc: 0x0  nop
    ctx->pc = 0x1ad8fcu;
    // NOP
    ctx->pc = 0x1ad900u;
}
