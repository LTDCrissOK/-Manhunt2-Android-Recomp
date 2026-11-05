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

// Function: sub_001233D8
// Address: 0x1233d8 - 0x123428
void sub_001233D8_0x1233d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001233D8_0x1233d8");
#endif

    switch (ctx->pc) {
        case 0x1233f8u: goto label_1233f8;
        case 0x12340cu: goto label_12340c;
        default: break;
    }

    ctx->pc = 0x1233d8u;

    // 0x1233d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1233d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1233dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1233dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1233e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1233e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1233e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1233e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1233e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1233ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1233f0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1233F0u;
    SET_GPR_U32(ctx, 31, 0x1233F8u);
    ctx->pc = 0x1233F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233F0u;
    // 0x1233f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1233F0u, 0x1233F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233F8u;
label_1233f8:
    // 0x1233f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1233F8u;
    {
        const bool branch_taken_0x1233f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233F8u;
        // 0x1233fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233f8) {
            ctx->pc = 0x123414u;
            goto label_123414;
        }
    }
    ctx->pc = 0x123400u;
    // 0x123400: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123404: 0xc042b40  jal         func_10AD00
    ctx->pc = 0x123404u;
    SET_GPR_U32(ctx, 31, 0x12340Cu);
    ctx->pc = 0x123408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123404u;
    // 0x123408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AD00u, 0x123404u, 0x12340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12340Cu;
label_12340c:
    // 0x12340c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12340Cu;
    {
        const bool branch_taken_0x12340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12340Cu;
        // 0x123410: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12340c) {
            ctx->pc = 0x123418u;
            goto label_123418;
        }
    }
    ctx->pc = 0x123414u;
label_123414:
    // 0x123414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123418:
    // 0x123418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12341c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123420: 0x3e00008  jr          $ra
    ctx->pc = 0x123420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123420u;
        // 0x123424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123428u;
}
