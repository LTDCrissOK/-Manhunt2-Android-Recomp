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

// Function: sub_0039A708
// Address: 0x39a708 - 0x39a760
void sub_0039A708_0x39a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A708_0x39a708");
#endif

    switch (ctx->pc) {
        case 0x39a72cu: goto label_39a72c;
        case 0x39a73cu: goto label_39a73c;
        case 0x39a744u: goto label_39a744;
        default: break;
    }

    ctx->pc = 0x39a708u;

    // 0x39a708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39a718: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39a718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a71c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39a720: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39a724: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39A724u;
    SET_GPR_U32(ctx, 31, 0x39A72Cu);
    ctx->pc = 0x39A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A724u;
    // 0x39a728: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39A724u, 0x39A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A72Cu;
label_39a72c:
    // 0x39a72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39a730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a734: 0xc0e69d8  jal         func_39A760
    ctx->pc = 0x39A734u;
    SET_GPR_U32(ctx, 31, 0x39A73Cu);
    ctx->pc = 0x39A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A734u;
    // 0x39a738: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A760u, 0x39A734u, 0x39A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A73Cu;
label_39a73c:
    // 0x39a73c: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x39A73Cu;
    SET_GPR_U32(ctx, 31, 0x39A744u);
    ctx->pc = 0x39A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A73Cu;
    // 0x39a740: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x39A73Cu, 0x39A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A744u;
label_39a744:
    // 0x39a744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39a748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a74c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39a74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a754: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39a754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39a758: 0x3e00008  jr          $ra
    ctx->pc = 0x39A758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A758u;
        // 0x39a75c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A760u;
}
