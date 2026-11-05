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

// Function: sub_0012F1B8
// Address: 0x12f1b8 - 0x12f200
void sub_0012F1B8_0x12f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F1B8_0x12f1b8");
#endif

    switch (ctx->pc) {
        case 0x12f1d8u: goto label_12f1d8;
        case 0x12f1e8u: goto label_12f1e8;
        default: break;
    }

    ctx->pc = 0x12f1b8u;

    // 0x12f1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12f1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12f1bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12f1c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f1c4: 0x24848758  addiu       $a0, $a0, -0x78A8
    ctx->pc = 0x12f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    // 0x12f1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f1cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12f1d0: 0xc041ea4  jal         func_107A90
    ctx->pc = 0x12F1D0u;
    SET_GPR_U32(ctx, 31, 0x12F1D8u);
    ctx->pc = 0x12F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1D0u;
    // 0x12f1d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A90u, 0x12F1D0u, 0x12F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1D8u;
label_12f1d8:
    // 0x12f1d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1e0: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12F1E0u;
    SET_GPR_U32(ctx, 31, 0x12F1E8u);
    ctx->pc = 0x12F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F1E0u;
    // 0x12f1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12F1E0u, 0x12F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1E8u;
label_12f1e8:
    // 0x12f1e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12f1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f1ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f1ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f1f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1F8u;
        // 0x12f1fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F200u;
}
