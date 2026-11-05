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

// Function: sub_002B76F8
// Address: 0x2b76f8 - 0x2b7748
void sub_002B76F8_0x2b76f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B76F8_0x2b76f8");
#endif

    switch (ctx->pc) {
        case 0x2b771cu: goto label_2b771c;
        case 0x2b7730u: goto label_2b7730;
        default: break;
    }

    ctx->pc = 0x2b76f8u;

    // 0x2b76f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b76f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b76fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b76fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b7704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b770c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b770cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7710: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b7710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b7714: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7714u;
    SET_GPR_U32(ctx, 31, 0x2B771Cu);
    ctx->pc = 0x2B7718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7714u;
    // 0x2b7718: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7714u, 0x2B771Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B771Cu;
label_2b771c:
    // 0x2b771c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7720: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b7720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7724: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b7724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7728: 0xc0ad29e  jal         func_2B4A78
    ctx->pc = 0x2B7728u;
    SET_GPR_U32(ctx, 31, 0x2B7730u);
    ctx->pc = 0x2B772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7728u;
    // 0x2b772c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A78u, 0x2B7728u, 0x2B7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7730u;
label_2b7730:
    // 0x2b7730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b7734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b7738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b773c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b773cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b7740: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7740u;
        // 0x2b7744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7748u;
}
