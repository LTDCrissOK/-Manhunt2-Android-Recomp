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

// Function: sub_003C9360
// Address: 0x3c9360 - 0x3c93c0
void sub_003C9360_0x3c9360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9360_0x3c9360");
#endif

    switch (ctx->pc) {
        case 0x3c938cu: goto label_3c938c;
        default: break;
    }

    ctx->pc = 0x3c9360u;

    // 0x3c9360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c9360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c9364: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c9364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c9368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c9368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c936c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c9370: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c9370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9374: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3c9374u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3c9378: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3c9378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c937c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9380: 0xae201130  sw          $zero, 0x1130($s1)
    ctx->pc = 0x3c9380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x661130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x661130u, _value); } while (0);
    // 0x3c9384: 0xc0f281a  jal         func_3CA068
    ctx->pc = 0x3C9384u;
    SET_GPR_U32(ctx, 31, 0x3C938Cu);
    ctx->pc = 0x3C9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9384u;
    // 0x3c9388: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA068u, 0x3C9384u, 0x3C938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C938Cu;
label_3c938c:
    // 0x3c938c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c938cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9390: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c9390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c9394: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9394u;
    {
        const bool branch_taken_0x3c9394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c9394) {
            ctx->pc = 0x3C9398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9394u;
            // 0x3c9398: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C93ACu;
            goto label_3c93ac;
        }
    }
    ctx->pc = 0x3C939Cu;
    // 0x3c939c: 0x8e221130  lw          $v0, 0x1130($s1)
    ctx->pc = 0x3c939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4400)));
    // 0x3c93a0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C93A0u;
    {
        const bool branch_taken_0x3c93a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c93a0) {
            ctx->pc = 0x3C93A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C93A0u;
            // 0x3c93a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C93A8u;
            goto label_3c93a8;
        }
    }
    ctx->pc = 0x3C93A8u;
label_3c93a8:
    // 0x3c93a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c93a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c93ac:
    // 0x3c93ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c93acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c93b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c93b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c93b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c93b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c93b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C93B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C93B8u;
        // 0x3c93bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C93B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C93C0u;
}
