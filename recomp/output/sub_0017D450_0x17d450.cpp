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

// Function: sub_0017D450
// Address: 0x17d450 - 0x17d4a8
void sub_0017D450_0x17d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D450_0x17d450");
#endif

    switch (ctx->pc) {
        case 0x17d47cu: goto label_17d47c;
        case 0x17d488u: goto label_17d488;
        case 0x17d498u: goto label_17d498;
        default: break;
    }

    ctx->pc = 0x17d450u;

    // 0x17d450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d454: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17d458: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17d458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17d45c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d460: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x17d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17d464: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x17D464u;
    {
        const bool branch_taken_0x17d464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d464) {
            ctx->pc = 0x17D468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D464u;
            // 0x17d468: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D49Cu;
            goto label_17d49c;
        }
    }
    ctx->pc = 0x17D46Cu;
    // 0x17d46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d474: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17D474u;
    SET_GPR_U32(ctx, 31, 0x17D47Cu);
    ctx->pc = 0x17D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D474u;
    // 0x17d478: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17D474u, 0x17D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D47Cu;
label_17d47c:
    // 0x17d47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d480: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17D480u;
    SET_GPR_U32(ctx, 31, 0x17D488u);
    ctx->pc = 0x17D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D480u;
    // 0x17d484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17D480u, 0x17D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D488u;
label_17d488:
    // 0x17d488: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17d488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x17d48c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d490: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17D490u;
    SET_GPR_U32(ctx, 31, 0x17D498u);
    ctx->pc = 0x17D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D490u;
    // 0x17d494: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17D490u, 0x17D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D498u;
label_17d498:
    // 0x17d498: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17d498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d49c:
    // 0x17d49c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17d49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D4A0u;
        // 0x17d4a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D4A8u;
}
