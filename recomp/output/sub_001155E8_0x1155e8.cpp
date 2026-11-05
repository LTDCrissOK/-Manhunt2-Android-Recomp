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

// Function: sub_001155E8
// Address: 0x1155e8 - 0x115628
void sub_001155E8_0x1155e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001155E8_0x1155e8");
#endif

    switch (ctx->pc) {
        case 0x1155fcu: goto label_1155fc;
        case 0x115614u: goto label_115614;
        default: break;
    }

    ctx->pc = 0x1155e8u;

    // 0x1155e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1155e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1155ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1155ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1155f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1155f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1155f4: 0xc042162  jal         func_108588
    ctx->pc = 0x1155F4u;
    SET_GPR_U32(ctx, 31, 0x1155FCu);
    ctx->pc = 0x1155F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1155F4u;
    // 0x1155f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108588u, 0x1155F4u, 0x1155FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1155FCu;
label_1155fc:
    // 0x1155fc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1155fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x115600: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x115600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x115604: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x115604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x115608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11560c: 0xc0455c2  jal         func_115708
    ctx->pc = 0x11560Cu;
    SET_GPR_U32(ctx, 31, 0x115614u);
    ctx->pc = 0x115610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11560Cu;
    // 0x115610: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115708u, 0x11560Cu, 0x115614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115614u;
label_115614:
    // 0x115614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x115614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11561c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11561cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115620: 0x3e00008  jr          $ra
    ctx->pc = 0x115620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115620u;
        // 0x115624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115628u;
}
