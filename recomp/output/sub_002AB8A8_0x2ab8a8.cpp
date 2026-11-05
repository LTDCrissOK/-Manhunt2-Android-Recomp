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

// Function: sub_002AB8A8
// Address: 0x2ab8a8 - 0x2ab908
void sub_002AB8A8_0x2ab8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB8A8_0x2ab8a8");
#endif

    switch (ctx->pc) {
        case 0x2ab8d0u: goto label_2ab8d0;
        case 0x2ab8dcu: goto label_2ab8dc;
        case 0x2ab8e8u: goto label_2ab8e8;
        default: break;
    }

    ctx->pc = 0x2ab8a8u;

    // 0x2ab8a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab8b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ab8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ab8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ab8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ab8bc: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2ab8bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2ab8c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ab8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ab8c4: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x2ab8c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ab8c8: 0xc0aae68  jal         func_2AB9A0
    ctx->pc = 0x2AB8C8u;
    SET_GPR_U32(ctx, 31, 0x2AB8D0u);
    ctx->pc = 0x2AB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8C8u;
    // 0x2ab8cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB9A0u, 0x2AB8C8u, 0x2AB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8D0u;
label_2ab8d0:
    // 0x2ab8d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8d4: 0xc0f8d8c  jal         func_3E3630
    ctx->pc = 0x2AB8D4u;
    SET_GPR_U32(ctx, 31, 0x2AB8DCu);
    ctx->pc = 0x2AB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8D4u;
    // 0x2ab8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3630u, 0x2AB8D4u, 0x2AB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8DCu;
label_2ab8dc:
    // 0x2ab8dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8e0: 0xc0f8d8a  jal         func_3E3628
    ctx->pc = 0x2AB8E0u;
    SET_GPR_U32(ctx, 31, 0x2AB8E8u);
    ctx->pc = 0x2AB8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8E0u;
    // 0x2ab8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3628u, 0x2AB8E0u, 0x2AB8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8E8u;
label_2ab8e8:
    // 0x2ab8e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab8ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ab8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab8f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2ab8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2ab8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab8f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ab8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab8fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ab8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab900: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB900u;
        // 0x2ab904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB908u;
}
