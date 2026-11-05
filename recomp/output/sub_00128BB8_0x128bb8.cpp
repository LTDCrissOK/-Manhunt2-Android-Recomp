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

// Function: sub_00128BB8
// Address: 0x128bb8 - 0x128bf0
void sub_00128BB8_0x128bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128BB8_0x128bb8");
#endif

    switch (ctx->pc) {
        case 0x128bd0u: goto label_128bd0;
        case 0x128bdcu: goto label_128bdc;
        default: break;
    }

    ctx->pc = 0x128bb8u;

    // 0x128bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128bbc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x128bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x128bc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128bc4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x128bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x128bc8: 0xc041d26  jal         func_107498
    ctx->pc = 0x128BC8u;
    SET_GPR_U32(ctx, 31, 0x128BD0u);
    ctx->pc = 0x128BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BC8u;
    // 0x128bcc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107498u, 0x128BC8u, 0x128BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BD0u;
label_128bd0:
    // 0x128bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128bd4: 0xc0455f2  jal         func_1157C8
    ctx->pc = 0x128BD4u;
    SET_GPR_U32(ctx, 31, 0x128BDCu);
    ctx->pc = 0x128BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128BD4u;
    // 0x128bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1157C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157C8u, 0x128BD4u, 0x128BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BDCu;
label_128bdc:
    // 0x128bdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x128bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128be0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x128be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128be8: 0x3e00008  jr          $ra
    ctx->pc = 0x128BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BE8u;
        // 0x128bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128BF0u;
}
