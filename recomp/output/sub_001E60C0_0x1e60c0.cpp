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

// Function: sub_001E60C0
// Address: 0x1e60c0 - 0x1e6120
void sub_001E60C0_0x1e60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E60C0_0x1e60c0");
#endif

    switch (ctx->pc) {
        case 0x1e60e4u: goto label_1e60e4;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e60fcu: goto label_1e60fc;
        default: break;
    }

    ctx->pc = 0x1e60c0u;

    // 0x1e60c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e60c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e60c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e60c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e60c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e60cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e60ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e60d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e60d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e60d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e60d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e60dc: 0xc079686  jal         func_1E5A18
    ctx->pc = 0x1E60DCu;
    SET_GPR_U32(ctx, 31, 0x1E60E4u);
    ctx->pc = 0x1E60E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60DCu;
    // 0x1e60e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5A18u, 0x1E60DCu, 0x1E60E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60E4u;
label_1e60e4:
    // 0x1e60e4: 0xc07984e  jal         func_1E6138
    ctx->pc = 0x1E60E4u;
    SET_GPR_U32(ctx, 31, 0x1E60ECu);
    ctx->pc = 0x1E60E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60E4u;
    // 0x1e60e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6138u, 0x1E60E4u, 0x1E60ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60ECu;
label_1e60ec:
    // 0x1e60ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e60ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e60f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60f4: 0xc0798fc  jal         func_1E63F0
    ctx->pc = 0x1E60F4u;
    SET_GPR_U32(ctx, 31, 0x1E60FCu);
    ctx->pc = 0x1E60F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60F4u;
    // 0x1e60f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63F0u, 0x1E60F4u, 0x1E60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60FCu;
label_1e60fc:
    // 0x1e60fc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e6100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6104: 0x8c6291e0  lw          $v0, -0x6E20($v1)
    ctx->pc = 0x1e6104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91E0u));
    // 0x1e6108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e610c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e610cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6110: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e6110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6114: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e6114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e6118: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6118u;
        // 0x1e611c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6120u;
}
