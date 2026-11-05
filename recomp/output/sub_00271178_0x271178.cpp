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

// Function: sub_00271178
// Address: 0x271178 - 0x2711d8
void sub_00271178_0x271178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271178_0x271178");
#endif

    switch (ctx->pc) {
        case 0x2711b8u: goto label_2711b8;
        case 0x2711c4u: goto label_2711c4;
        default: break;
    }

    ctx->pc = 0x271178u;

    // 0x271178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27117c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x27117cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x271180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271184: 0x244229f8  addiu       $v0, $v0, 0x29F8
    ctx->pc = 0x271184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10744));
    // 0x271188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x271188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27118c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27118cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x271194: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x271194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x271198: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x271198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x27119c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27119cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711a0: 0x26040278  addiu       $a0, $s0, 0x278
    ctx->pc = 0x2711a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    // 0x2711a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2711a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2711a8: 0x8c629df0  lw          $v0, -0x6210($v1)
    ctx->pc = 0x2711a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9DF0u));
    // 0x2711ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2711acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2711b0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2711B0u;
    SET_GPR_U32(ctx, 31, 0x2711B8u);
    ctx->pc = 0x2711B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711B0u;
    // 0x2711b4: 0xac629df0  sw          $v0, -0x6210($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2711B0u, 0x2711B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711B8u;
label_2711b8:
    // 0x2711b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2711b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711bc: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x2711BCu;
    SET_GPR_U32(ctx, 31, 0x2711C4u);
    ctx->pc = 0x2711C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711BCu;
    // 0x2711c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x2711BCu, 0x2711C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711C4u;
label_2711c4:
    // 0x2711c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2711c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2711c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2711c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2711cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2711ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2711d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2711D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2711D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711D0u;
        // 0x2711d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2711D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2711D8u;
}
