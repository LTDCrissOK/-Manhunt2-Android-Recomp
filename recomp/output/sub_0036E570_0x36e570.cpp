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

// Function: sub_0036E570
// Address: 0x36e570 - 0x36e5c8
void sub_0036E570_0x36e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E570_0x36e570");
#endif

    switch (ctx->pc) {
        case 0x36e5a4u: goto label_36e5a4;
        case 0x36e5acu: goto label_36e5ac;
        case 0x36e5b4u: goto label_36e5b4;
        default: break;
    }

    ctx->pc = 0x36e570u;

    // 0x36e570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36e574: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x36e574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x36e578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36e57c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e580: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x36e580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x36e584: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e588: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x36e588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x36e58c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x36e58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36e590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36e590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e594: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x36e594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x36e598: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x36e598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36e59c: 0xc0dca7c  jal         func_3729F0
    ctx->pc = 0x36E59Cu;
    SET_GPR_U32(ctx, 31, 0x36E5A4u);
    ctx->pc = 0x36E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E59Cu;
    // 0x36e5a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3729F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3729F0u, 0x36E59Cu, 0x36E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5A4u;
label_36e5a4:
    // 0x36e5a4: 0xc0dc32c  jal         func_370CB0
    ctx->pc = 0x36E5A4u;
    SET_GPR_U32(ctx, 31, 0x36E5ACu);
    ctx->pc = 0x370CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370CB0u, 0x36E5A4u, 0x36E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5ACu;
label_36e5ac:
    // 0x36e5ac: 0xc0d9a30  jal         func_3668C0
    ctx->pc = 0x36E5ACu;
    SET_GPR_U32(ctx, 31, 0x36E5B4u);
    ctx->pc = 0x3668C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3668C0u, 0x36E5ACu, 0x36E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5B4u;
label_36e5b4:
    // 0x36e5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5BCu;
        // 0x36e5c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E5C4u;
    // 0x36e5c4: 0x0  nop
    ctx->pc = 0x36e5c4u;
    // NOP
    ctx->pc = 0x36e5c8u;
}
