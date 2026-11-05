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

// Function: sub_00115390
// Address: 0x115390 - 0x1153d0
void sub_00115390_0x115390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115390_0x115390");
#endif

    switch (ctx->pc) {
        case 0x1153a4u: goto label_1153a4;
        case 0x1153bcu: goto label_1153bc;
        default: break;
    }

    ctx->pc = 0x115390u;

    // 0x115390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11539c: 0xc042162  jal         func_108588
    ctx->pc = 0x11539Cu;
    SET_GPR_U32(ctx, 31, 0x1153A4u);
    ctx->pc = 0x1153A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11539Cu;
    // 0x1153a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108588u, 0x11539Cu, 0x1153A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153A4u;
label_1153a4:
    // 0x1153a4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1153a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1153a8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1153a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1153ac: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
    // 0x1153b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1153b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153b4: 0xc04554e  jal         func_115538
    ctx->pc = 0x1153B4u;
    SET_GPR_U32(ctx, 31, 0x1153BCu);
    ctx->pc = 0x1153B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1153B4u;
    // 0x1153b8: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115538u, 0x1153B4u, 0x1153BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153BCu;
label_1153bc:
    // 0x1153bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1153bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1153c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1153c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1153c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1153c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1153C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153C8u;
        // 0x1153cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1153C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1153D0u;
}
