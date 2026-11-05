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

// Function: sub_003A8148
// Address: 0x3a8148 - 0x3a8198
void sub_003A8148_0x3a8148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8148_0x3a8148");
#endif

    switch (ctx->pc) {
        case 0x3a8180u: goto label_3a8180;
        default: break;
    }

    ctx->pc = 0x3a8148u;

    // 0x3a8148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a8148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a814c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a8150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a8150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8154: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8154u;
    {
        const bool branch_taken_0x3a8154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8154u;
        // 0x3a8158: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8154) {
            ctx->pc = 0x3A8178u;
            goto label_3a8178;
        }
    }
    ctx->pc = 0x3A815Cu;
    // 0x3a815c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a815cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a8160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a8160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8164: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a8164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a8168: 0x24a5e628  addiu       $a1, $a1, -0x19D8
    ctx->pc = 0x3a8168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960680));
    // 0x3a816c: 0x80e9ebe  j           func_3A7AF8
    ctx->pc = 0x3A816Cu;
    ctx->pc = 0x3A8170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A816Cu;
    // 0x3a8170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AF8u;
    sub_003A7AF8_0x3a7af8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A8174u;
    // 0x3a8174: 0x0  nop
    ctx->pc = 0x3a8174u;
    // NOP
label_3a8178:
    // 0x3a8178: 0xc0e9eac  jal         func_3A7AB0
    ctx->pc = 0x3A8178u;
    SET_GPR_U32(ctx, 31, 0x3A8180u);
    ctx->pc = 0x3A7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AB0u, 0x3A8178u, 0x3A8180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8180u;
label_3a8180:
    // 0x3a8180: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a8180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a8184: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a8184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a8188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a8188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a818c: 0x80e9eb2  j           func_3A7AC8
    ctx->pc = 0x3A818Cu;
    ctx->pc = 0x3A8190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A818Cu;
    // 0x3a8190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AC8u;
    sub_003A7AC8_0x3a7ac8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A8194u;
    // 0x3a8194: 0x0  nop
    ctx->pc = 0x3a8194u;
    // NOP
    ctx->pc = 0x3a8198u;
}
