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

// Function: sub_00143A50
// Address: 0x143a50 - 0x143a98
void sub_00143A50_0x143a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143A50_0x143a50");
#endif

    switch (ctx->pc) {
        case 0x143a70u: goto label_143a70;
        case 0x143a80u: goto label_143a80;
        default: break;
    }

    ctx->pc = 0x143a50u;

    // 0x143a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143a58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a60: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x143a60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x143a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143a68: 0xc05107a  jal         func_1441E8
    ctx->pc = 0x143A68u;
    SET_GPR_U32(ctx, 31, 0x143A70u);
    ctx->pc = 0x143A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A68u;
    // 0x143a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1441E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1441E8u, 0x143A68u, 0x143A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A70u;
label_143a70:
    // 0x143a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x143a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a78: 0xc04e820  jal         func_13A080
    ctx->pc = 0x143A78u;
    SET_GPR_U32(ctx, 31, 0x143A80u);
    ctx->pc = 0x143A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A78u;
    // 0x143a7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A080u, 0x143A78u, 0x143A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A80u;
label_143a80:
    // 0x143a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x143A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A8Cu;
        // 0x143a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143A94u;
    // 0x143a94: 0x0  nop
    ctx->pc = 0x143a94u;
    // NOP
    ctx->pc = 0x143a98u;
}
