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

// Function: sub_003C93C0
// Address: 0x3c93c0 - 0x3c9420
void sub_003C93C0_0x3c93c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C93C0_0x3c93c0");
#endif

    switch (ctx->pc) {
        case 0x3c93ecu: goto label_3c93ec;
        default: break;
    }

    ctx->pc = 0x3c93c0u;

    // 0x3c93c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c93c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c93c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c93c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c93c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c93c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c93cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c93ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c93d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c93d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c93d4: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3c93d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3c93d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c93d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c93dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c93dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c93e0: 0xae201130  sw          $zero, 0x1130($s1)
    ctx->pc = 0x3c93e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x661130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x661130u, _value); } while (0);
    // 0x3c93e4: 0xc0f27fa  jal         func_3C9FE8
    ctx->pc = 0x3C93E4u;
    SET_GPR_U32(ctx, 31, 0x3C93ECu);
    ctx->pc = 0x3C93E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C93E4u;
    // 0x3c93e8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9FE8u, 0x3C93E4u, 0x3C93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C93ECu;
label_3c93ec:
    // 0x3c93ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c93ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c93f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c93f4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C93F4u;
    {
        const bool branch_taken_0x3c93f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c93f4) {
            ctx->pc = 0x3C93F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C93F4u;
            // 0x3c93f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C940Cu;
            goto label_3c940c;
        }
    }
    ctx->pc = 0x3C93FCu;
    // 0x3c93fc: 0x8e221130  lw          $v0, 0x1130($s1)
    ctx->pc = 0x3c93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4400)));
    // 0x3c9400: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C9400u;
    {
        const bool branch_taken_0x3c9400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9400) {
            ctx->pc = 0x3C9404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9400u;
            // 0x3c9404: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9408u;
            goto label_3c9408;
        }
    }
    ctx->pc = 0x3C9408u;
label_3c9408:
    // 0x3c9408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c9408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c940c:
    // 0x3c940c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c940cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9418: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9418u;
        // 0x3c941c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9420u;
}
