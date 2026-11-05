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

// Function: sub_002943D0
// Address: 0x2943d0 - 0x294440
void sub_002943D0_0x2943d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002943D0_0x2943d0");
#endif

    switch (ctx->pc) {
        case 0x29440cu: goto label_29440c;
        case 0x29441cu: goto label_29441c;
        case 0x29442cu: goto label_29442c;
        default: break;
    }

    ctx->pc = 0x2943d0u;

    // 0x2943d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2943d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2943d4: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x2943d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2943d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2943d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2943dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2943dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2943e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2943e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2943e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2943e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2943e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2943e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2943ec: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2943ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x2943f0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2943f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2943f4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2943f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2943f8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2943f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2943fc: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x2943fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x294400: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x294400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x294404: 0xc0a5140  jal         func_294500
    ctx->pc = 0x294404u;
    SET_GPR_U32(ctx, 31, 0x29440Cu);
    ctx->pc = 0x294408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294404u;
    // 0x294408: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294500u, 0x294404u, 0x29440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29440Cu;
label_29440c:
    // 0x29440c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294410: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x294410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x294414: 0xc0a5172  jal         func_2945C8
    ctx->pc = 0x294414u;
    SET_GPR_U32(ctx, 31, 0x29441Cu);
    ctx->pc = 0x294418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294414u;
    // 0x294418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2945C8u, 0x294414u, 0x29441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29441Cu;
label_29441c:
    // 0x29441c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294424: 0xc0a5110  jal         func_294440
    ctx->pc = 0x294424u;
    SET_GPR_U32(ctx, 31, 0x29442Cu);
    ctx->pc = 0x294428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294424u;
    // 0x294428: 0xa2020061  sb          $v0, 0x61($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294440u, 0x294424u, 0x29442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29442Cu;
label_29442c:
    // 0x29442c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29442cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294430: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x294430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294434: 0x3e00008  jr          $ra
    ctx->pc = 0x294434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294434u;
        // 0x294438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29443Cu;
    // 0x29443c: 0x0  nop
    ctx->pc = 0x29443cu;
    // NOP
    ctx->pc = 0x294440u;
}
