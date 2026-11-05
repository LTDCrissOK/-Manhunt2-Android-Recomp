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

// Function: sub_003C9480
// Address: 0x3c9480 - 0x3c94e0
void sub_003C9480_0x3c9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9480_0x3c9480");
#endif

    switch (ctx->pc) {
        case 0x3c94acu: goto label_3c94ac;
        default: break;
    }

    ctx->pc = 0x3c9480u;

    // 0x3c9480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c9484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c9488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c9488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c948c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c948cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c9490: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c9490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9494: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3c9494u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3c9498: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c9498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c949c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c94a0: 0xae201130  sw          $zero, 0x1130($s1)
    ctx->pc = 0x3c94a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x661130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x661130u, _value); } while (0);
    // 0x3c94a4: 0xc0f27da  jal         func_3C9F68
    ctx->pc = 0x3C94A4u;
    SET_GPR_U32(ctx, 31, 0x3C94ACu);
    ctx->pc = 0x3C94A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C94A4u;
    // 0x3c94a8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F68u, 0x3C94A4u, 0x3C94ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C94ACu;
label_3c94ac:
    // 0x3c94ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c94acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c94b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c94b4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C94B4u;
    {
        const bool branch_taken_0x3c94b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c94b4) {
            ctx->pc = 0x3C94B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C94B4u;
            // 0x3c94b8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C94CCu;
            goto label_3c94cc;
        }
    }
    ctx->pc = 0x3C94BCu;
    // 0x3c94bc: 0x8e221130  lw          $v0, 0x1130($s1)
    ctx->pc = 0x3c94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4400)));
    // 0x3c94c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C94C0u;
    {
        const bool branch_taken_0x3c94c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c94c0) {
            ctx->pc = 0x3C94C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C94C0u;
            // 0x3c94c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C94C8u;
            goto label_3c94c8;
        }
    }
    ctx->pc = 0x3C94C8u;
label_3c94c8:
    // 0x3c94c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c94c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c94cc:
    // 0x3c94cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c94ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c94d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c94d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c94d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c94d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c94d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C94D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C94D8u;
        // 0x3c94dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C94D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C94E0u;
}
