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

// Function: sub_00119358
// Address: 0x119358 - 0x1193b0
void sub_00119358_0x119358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119358_0x119358");
#endif

    switch (ctx->pc) {
        case 0x11937cu: goto label_11937c;
        case 0x119388u: goto label_119388;
        case 0x119398u: goto label_119398;
        default: break;
    }

    ctx->pc = 0x119358u;

    // 0x119358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11935c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119360: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119364: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119368: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11936c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119370: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x119370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x119374: 0xc045f08  jal         func_117C20
    ctx->pc = 0x119374u;
    SET_GPR_U32(ctx, 31, 0x11937Cu);
    ctx->pc = 0x119378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119374u;
    // 0x119378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C20u, 0x119374u, 0x11937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11937Cu;
label_11937c:
    // 0x11937c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11937cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119380: 0xc045f0a  jal         func_117C28
    ctx->pc = 0x119380u;
    SET_GPR_U32(ctx, 31, 0x119388u);
    ctx->pc = 0x119384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119380u;
    // 0x119384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C28u, 0x119380u, 0x119388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119388u;
label_119388:
    // 0x119388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11938c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119390: 0xc045f02  jal         func_117C08
    ctx->pc = 0x119390u;
    SET_GPR_U32(ctx, 31, 0x119398u);
    ctx->pc = 0x119394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119390u;
    // 0x119394: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C08u, 0x119390u, 0x119398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119398u;
label_119398:
    // 0x119398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11939c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11939cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1193a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1193a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1193a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1193a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1193a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1193A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1193ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193A8u;
        // 0x1193ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193B0u;
}
