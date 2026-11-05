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

// Function: sub_0017F418
// Address: 0x17f418 - 0x17f490
void sub_0017F418_0x17f418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F418_0x17f418");
#endif

    switch (ctx->pc) {
        case 0x17f448u: goto label_17f448;
        case 0x17f454u: goto label_17f454;
        case 0x17f470u: goto label_17f470;
        default: break;
    }

    ctx->pc = 0x17f418u;

    // 0x17f418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f41c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f428: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f42c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x17f42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x17f430: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f434: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x17f434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x17f438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f43c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17f43cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f440: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17f440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x17f444: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x17f444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_17f448:
    // 0x17f448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f44c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17F44Cu;
    SET_GPR_U32(ctx, 31, 0x17F454u);
    ctx->pc = 0x17F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F44Cu;
    // 0x17f450: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17F44Cu, 0x17F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F454u;
label_17f454:
    // 0x17f454: 0x0  nop
    ctx->pc = 0x17f454u;
    // NOP
    // 0x17f458: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x17F458u;
    {
        const bool branch_taken_0x17f458 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x17F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F458u;
        // 0x17f45c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f458) {
            ctx->pc = 0x17F448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f448;
        }
    }
    ctx->pc = 0x17F460u;
    // 0x17f460: 0xae200418  sw          $zero, 0x418($s1)
    ctx->pc = 0x17f460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 0));
    // 0x17f464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f468: 0xc05fe58  jal         func_17F960
    ctx->pc = 0x17F468u;
    SET_GPR_U32(ctx, 31, 0x17F470u);
    ctx->pc = 0x17F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F468u;
    // 0x17f46c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F960u, 0x17F468u, 0x17F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F470u;
label_17f470:
    // 0x17f470: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17f470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f47c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f47cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f480: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f488: 0x3e00008  jr          $ra
    ctx->pc = 0x17F488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F488u;
        // 0x17f48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F490u;
}
