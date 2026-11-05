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

// Function: sub_003D0AB8
// Address: 0x3d0ab8 - 0x3d0af0
void sub_003D0AB8_0x3d0ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0AB8_0x3d0ab8");
#endif

    ctx->pc = 0x3d0ab8u;

    // 0x3d0ab8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d0abc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0ABCu;
    {
        const bool branch_taken_0x3d0abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0ABCu;
        // 0x3d0ac0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0abc) {
            ctx->pc = 0x3D0ACCu;
            goto label_3d0acc;
        }
    }
    ctx->pc = 0x3D0AC4u;
    // 0x3d0ac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0AC4u;
    {
        const bool branch_taken_0x3d0ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AC4u;
        // 0x3d0ac8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0ac4) {
            ctx->pc = 0x3D0AD4u;
            goto label_3d0ad4;
        }
    }
    ctx->pc = 0x3D0ACCu;
label_3d0acc:
    // 0x3d0acc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d0accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3d0ad0: 0xac43e658  sw          $v1, -0x19A8($v0)
    ctx->pc = 0x3d0ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x42E658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42E658u, _value); } while (0);
label_3d0ad4:
    // 0x3d0ad4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0AD4u;
    {
        const bool branch_taken_0x3d0ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0ad4) {
            ctx->pc = 0x3D0AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0AD4u;
            // 0x3d0ad8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0AE8u;
            goto label_3d0ae8;
        }
    }
    ctx->pc = 0x3D0ADCu;
    // 0x3d0adc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d0ae0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3d0ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3d0ae4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3d0ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3d0ae8:
    // 0x3d0ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0AE8u;
        // 0x3d0aec: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0AF0u;
}
