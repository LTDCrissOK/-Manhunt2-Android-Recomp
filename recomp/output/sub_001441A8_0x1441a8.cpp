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

// Function: sub_001441A8
// Address: 0x1441a8 - 0x1441e8
void sub_001441A8_0x1441a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001441A8_0x1441a8");
#endif

    switch (ctx->pc) {
        case 0x1441c8u: goto label_1441c8;
        case 0x1441d4u: goto label_1441d4;
        default: break;
    }

    ctx->pc = 0x1441a8u;

    // 0x1441a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1441a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1441ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1441acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1441b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1441b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1441b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1441b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441b8: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1441b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1441bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1441bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1441c0: 0xc04e836  jal         func_13A0D8
    ctx->pc = 0x1441C0u;
    SET_GPR_U32(ctx, 31, 0x1441C8u);
    ctx->pc = 0x1441C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441C0u;
    // 0x1441c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A0D8u, 0x1441C0u, 0x1441C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441C8u;
label_1441c8:
    // 0x1441c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1441c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441cc: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x1441CCu;
    SET_GPR_U32(ctx, 31, 0x1441D4u);
    ctx->pc = 0x1441D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441CCu;
    // 0x1441d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x1441CCu, 0x1441D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441D4u;
label_1441d4:
    // 0x1441d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1441d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1441d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1441d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1441dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1441dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1441e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1441E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1441E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441E0u;
        // 0x1441e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1441E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1441E8u;
}
