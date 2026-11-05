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

// Function: sub_00254E30
// Address: 0x254e30 - 0x254e98
void sub_00254E30_0x254e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E30_0x254e30");
#endif

    switch (ctx->pc) {
        case 0x254e6cu: goto label_254e6c;
        case 0x254e74u: goto label_254e74;
        case 0x254e84u: goto label_254e84;
        default: break;
    }

    ctx->pc = 0x254e30u;

    // 0x254e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254e34: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x254e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x254e38: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x254e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x254e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254e48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e4c: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x254e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254e50: 0xac4004c0  sw          $zero, 0x4C0($v0)
    ctx->pc = 0x254e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1216), GPR_U32(ctx, 0));
    // 0x254e54: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x254e58: 0xac6004b4  sw          $zero, 0x4B4($v1)
    ctx->pc = 0x254e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1204), GPR_U32(ctx, 0));
    // 0x254e5c: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x254e5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x254e60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x254e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x254e64: 0xc0944da  jal         func_251368
    ctx->pc = 0x254E64u;
    SET_GPR_U32(ctx, 31, 0x254E6Cu);
    ctx->pc = 0x254E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E64u;
    // 0x254e68: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x254E64u, 0x254E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E6Cu;
label_254e6c:
    // 0x254e6c: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x254E6Cu;
    SET_GPR_U32(ctx, 31, 0x254E74u);
    ctx->pc = 0x254E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E6Cu;
    // 0x254e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x254E6Cu, 0x254E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E74u;
label_254e74:
    // 0x254e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e78: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x254e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x254e7c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x254E7Cu;
    SET_GPR_U32(ctx, 31, 0x254E84u);
    ctx->pc = 0x254E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E7Cu;
    // 0x254e80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x254E7Cu, 0x254E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E84u;
label_254e84:
    // 0x254e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254e88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x254E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E8Cu;
        // 0x254e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E94u;
    // 0x254e94: 0x0  nop
    ctx->pc = 0x254e94u;
    // NOP
    ctx->pc = 0x254e98u;
}
