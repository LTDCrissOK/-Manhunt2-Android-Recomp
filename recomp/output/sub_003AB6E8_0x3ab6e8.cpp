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

// Function: sub_003AB6E8
// Address: 0x3ab6e8 - 0x3ab740
void sub_003AB6E8_0x3ab6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB6E8_0x3ab6e8");
#endif

    switch (ctx->pc) {
        case 0x3ab70cu: goto label_3ab70c;
        case 0x3ab71cu: goto label_3ab71c;
        case 0x3ab724u: goto label_3ab724;
        default: break;
    }

    ctx->pc = 0x3ab6e8u;

    // 0x3ab6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ab6ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab6f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ab6f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab6fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ab6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ab700: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ab700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ab704: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB704u;
    SET_GPR_U32(ctx, 31, 0x3AB70Cu);
    ctx->pc = 0x3AB708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB704u;
    // 0x3ab708: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB704u, 0x3AB70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB70Cu;
label_3ab70c:
    // 0x3ab70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab714: 0xc0eadd0  jal         func_3AB740
    ctx->pc = 0x3AB714u;
    SET_GPR_U32(ctx, 31, 0x3AB71Cu);
    ctx->pc = 0x3AB718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB714u;
    // 0x3ab718: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB740u, 0x3AB714u, 0x3AB71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB71Cu;
label_3ab71c:
    // 0x3ab71c: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AB71Cu;
    SET_GPR_U32(ctx, 31, 0x3AB724u);
    ctx->pc = 0x3AB720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB71Cu;
    // 0x3ab720: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AB71Cu, 0x3AB724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB724u;
label_3ab724:
    // 0x3ab724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab728: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ab728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab72c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ab72cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab734: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ab734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ab738: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB738u;
        // 0x3ab73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB740u;
}
