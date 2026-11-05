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

// Function: sub_002A0968
// Address: 0x2a0968 - 0x2a09b0
void sub_002A0968_0x2a0968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0968_0x2a0968");
#endif

    switch (ctx->pc) {
        case 0x2a09a4u: goto label_2a09a4;
        default: break;
    }

    ctx->pc = 0x2a0968u;

    // 0x2a0968: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2a0968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2a096c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a096cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a0970: 0x9062a928  lbu         $v0, -0x56D8($v1)
    ctx->pc = 0x2a0970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FA928u));
    // 0x2a0974: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A0974u;
    {
        const bool branch_taken_0x2a0974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0974u;
        // 0x2a0978: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0974) {
            ctx->pc = 0x2A09A4u;
            goto label_2a09a4;
        }
    }
    ctx->pc = 0x2A097Cu;
    // 0x2a097c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a0980: 0x9043a930  lbu         $v1, -0x56D0($v0)
    ctx->pc = 0x2a0980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FA930u));
    // 0x2a0984: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0984u;
    {
        const bool branch_taken_0x2a0984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0984u;
        // 0x2a0988: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0984) {
            ctx->pc = 0x2A09A8u;
            goto label_2a09a8;
        }
    }
    ctx->pc = 0x2A098Cu;
    // 0x2a098c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a098cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a0990: 0x9043a932  lbu         $v1, -0x56CE($v0)
    ctx->pc = 0x2a0990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FA932u));
    // 0x2a0994: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0994u;
    {
        const bool branch_taken_0x2a0994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0994) {
            ctx->pc = 0x2A09A8u;
            goto label_2a09a8;
        }
    }
    ctx->pc = 0x2A099Cu;
    // 0x2a099c: 0xc0a7b60  jal         func_29ED80
    ctx->pc = 0x2A099Cu;
    SET_GPR_U32(ctx, 31, 0x2A09A4u);
    ctx->pc = 0x29ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED80u, 0x2A099Cu, 0x2A09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09A4u;
label_2a09a4:
    // 0x2a09a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a09a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a09a8:
    // 0x2a09a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A09A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A09A8u;
        // 0x2a09ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A09A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A09B0u;
}
