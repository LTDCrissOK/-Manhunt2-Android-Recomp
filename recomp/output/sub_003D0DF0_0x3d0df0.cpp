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

// Function: sub_003D0DF0
// Address: 0x3d0df0 - 0x3d0e60
void sub_003D0DF0_0x3d0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0DF0_0x3d0df0");
#endif

    ctx->pc = 0x3d0df0u;

    // 0x3d0df0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3d0df4: 0x2447e640  addiu       $a3, $v0, -0x19C0
    ctx->pc = 0x3d0df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x3d0df8: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x3d0df8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x42E654u));
    // 0x3d0dfc: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0DFCu;
    {
        const bool branch_taken_0x3d0dfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0dfc) {
            ctx->pc = 0x3D0E10u;
            goto label_3d0e10;
        }
    }
    ctx->pc = 0x3D0E04u;
    // 0x3d0e04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d0e08: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E08u;
        // 0x3d0e0c: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0E10u;
label_3d0e10:
    // 0x3d0e10: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x3d0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3d0e14: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3d0e14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3d0e18: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3d0e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d0e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d0e20: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x3d0e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x3d0e24: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x3d0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x3d0e28: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3d0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x3d0e2c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x3d0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x3d0e30: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x3d0e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3d0e34: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x3d0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x3d0e38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d0e3c: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x3d0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x3d0e40: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3d0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3d0e44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3d0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3d0e48: 0x304203fe  andi        $v0, $v0, 0x3FE
    ctx->pc = 0x3d0e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1022);
    // 0x3d0e4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3d0e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3d0e50: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3d0e50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3d0e54: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3d0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3d0e58: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E58u;
        // 0x3d0e5c: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0E60u;
}
