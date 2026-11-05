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

// Function: sub_002DA670
// Address: 0x2da670 - 0x2da6f0
void sub_002DA670_0x2da670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA670_0x2da670");
#endif

    switch (ctx->pc) {
        case 0x2da690u: goto label_2da690;
        case 0x2da6a8u: goto label_2da6a8;
        case 0x2da6c0u: goto label_2da6c0;
        case 0x2da6d8u: goto label_2da6d8;
        default: break;
    }

    ctx->pc = 0x2da670u;

    // 0x2da670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da674: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2da674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2da678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da67c: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x2da67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x2da680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da688: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DA688u;
    SET_GPR_U32(ctx, 31, 0x2DA690u);
    ctx->pc = 0x2DA68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA688u;
    // 0x2da68c: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DA688u, 0x2DA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA690u;
label_2da690:
    // 0x2da690: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2da690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2da694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da698: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x2da698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x2da69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6a0: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DA6A0u;
    SET_GPR_U32(ctx, 31, 0x2DA6A8u);
    ctx->pc = 0x2DA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6A0u;
    // 0x2da6a4: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DA6A0u, 0x2DA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6A8u;
label_2da6a8:
    // 0x2da6a8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2da6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2da6ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6b0: 0x244278e0  addiu       $v0, $v0, 0x78E0
    ctx->pc = 0x2da6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
    // 0x2da6b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6b8: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DA6B8u;
    SET_GPR_U32(ctx, 31, 0x2DA6C0u);
    ctx->pc = 0x2DA6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6B8u;
    // 0x2da6bc: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DA6B8u, 0x2DA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6C0u;
label_2da6c0:
    // 0x2da6c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2da6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2da6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2da6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6c8: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x2da6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2da6cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da6d0: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DA6D0u;
    SET_GPR_U32(ctx, 31, 0x2DA6D8u);
    ctx->pc = 0x2DA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA6D0u;
    // 0x2da6d4: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DA6D0u, 0x2DA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA6D8u;
label_2da6d8:
    // 0x2da6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA6DCu;
        // 0x2da6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA6E4u;
    // 0x2da6e4: 0x0  nop
    ctx->pc = 0x2da6e4u;
    // NOP
    // 0x2da6e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2da6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2da6ec: 0x0  nop
    ctx->pc = 0x2da6ecu;
    // NOP
    ctx->pc = 0x2da6f0u;
}
