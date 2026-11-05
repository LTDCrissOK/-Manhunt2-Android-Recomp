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

// Function: sub_003EF450
// Address: 0x3ef450 - 0x3ef4a0
void sub_003EF450_0x3ef450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF450_0x3ef450");
#endif

    switch (ctx->pc) {
        case 0x3ef47cu: goto label_3ef47c;
        case 0x3ef488u: goto label_3ef488;
        default: break;
    }

    ctx->pc = 0x3ef450u;

    // 0x3ef450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef454: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3ef454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3ef458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ef458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ef45c: 0x24424530  addiu       $v0, $v0, 0x4530
    ctx->pc = 0x3ef45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17712));
    // 0x3ef460: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ef460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ef464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ef464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ef468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ef46c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ef46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef470: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3ef470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x3ef474: 0xc0d767c  jal         func_35D9F0
    ctx->pc = 0x3EF474u;
    SET_GPR_U32(ctx, 31, 0x3EF47Cu);
    ctx->pc = 0x3EF478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF474u;
    // 0x3ef478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D9F0u, 0x3EF474u, 0x3EF47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF47Cu;
label_3ef47c:
    // 0x3ef47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ef47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef480: 0xc0d762c  jal         func_35D8B0
    ctx->pc = 0x3EF480u;
    SET_GPR_U32(ctx, 31, 0x3EF488u);
    ctx->pc = 0x3EF484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF480u;
    // 0x3ef484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D8B0u, 0x3EF480u, 0x3EF488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF488u;
label_3ef488:
    // 0x3ef488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ef488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ef48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ef490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ef490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef494: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF494u;
        // 0x3ef498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF49Cu;
    // 0x3ef49c: 0x0  nop
    ctx->pc = 0x3ef49cu;
    // NOP
    ctx->pc = 0x3ef4a0u;
}
