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

// Function: sub_003999B0
// Address: 0x3999b0 - 0x3999f0
void sub_003999B0_0x3999b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003999B0_0x3999b0");
#endif

    switch (ctx->pc) {
        case 0x3999c4u: goto label_3999c4;
        case 0x3999ccu: goto label_3999cc;
        default: break;
    }

    ctx->pc = 0x3999b0u;

    // 0x3999b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3999b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3999b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3999b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3999b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3999b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3999bc: 0xc0e673a  jal         func_399CE8
    ctx->pc = 0x3999BCu;
    SET_GPR_U32(ctx, 31, 0x3999C4u);
    ctx->pc = 0x3999C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999BCu;
    // 0x3999c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CE8u, 0x3999BCu, 0x3999C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999C4u;
label_3999c4:
    // 0x3999c4: 0xc0e6a60  jal         func_39A980
    ctx->pc = 0x3999C4u;
    SET_GPR_U32(ctx, 31, 0x3999CCu);
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x3999C4u, 0x3999CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999CCu;
label_3999cc:
    // 0x3999cc: 0x8203004d  lb          $v1, 0x4D($s0)
    ctx->pc = 0x3999ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x3999d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3999d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3999d4: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3999D4u;
    {
        const bool branch_taken_0x3999d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3999d4) {
            ctx->pc = 0x3999D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3999D4u;
            // 0x3999d8: 0xa203004a  sb          $v1, 0x4A($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3999DCu;
            goto label_3999dc;
        }
    }
    ctx->pc = 0x3999DCu;
label_3999dc:
    // 0x3999dc: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x3999dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x3999e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3999e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3999e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3999e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3999e8: 0x80e6a66  j           func_39A998
    ctx->pc = 0x3999E8u;
    ctx->pc = 0x3999ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999E8u;
    // 0x3999ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    sub_0039A998_0x39a998(rdram, ctx, runtime); return;
    ctx->pc = 0x3999F0u;
}
