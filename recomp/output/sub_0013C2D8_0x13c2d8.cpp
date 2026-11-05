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

// Function: sub_0013C2D8
// Address: 0x13c2d8 - 0x13c320
void sub_0013C2D8_0x13c2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C2D8_0x13c2d8");
#endif

    switch (ctx->pc) {
        case 0x13c2f8u: goto label_13c2f8;
        case 0x13c308u: goto label_13c308;
        default: break;
    }

    ctx->pc = 0x13c2d8u;

    // 0x13c2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c2dc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13c2e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c2e4: 0x24848758  addiu       $a0, $a0, -0x78A8
    ctx->pc = 0x13c2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    // 0x13c2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c2ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c2f0: 0xc041ea4  jal         func_107A90
    ctx->pc = 0x13C2F0u;
    SET_GPR_U32(ctx, 31, 0x13C2F8u);
    ctx->pc = 0x13C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C2F0u;
    // 0x13c2f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A90u, 0x13C2F0u, 0x13C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C2F8u;
label_13c2f8:
    // 0x13c2f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c300: 0xc045edc  jal         func_117B70
    ctx->pc = 0x13C300u;
    SET_GPR_U32(ctx, 31, 0x13C308u);
    ctx->pc = 0x13C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C300u;
    // 0x13c304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x13C300u, 0x13C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C308u;
label_13c308:
    // 0x13c308: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c30c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c30cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c318: 0x3e00008  jr          $ra
    ctx->pc = 0x13C318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C318u;
        // 0x13c31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C320u;
}
