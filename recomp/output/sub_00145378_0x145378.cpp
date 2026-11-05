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

// Function: sub_00145378
// Address: 0x145378 - 0x1453c0
void sub_00145378_0x145378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145378_0x145378");
#endif

    switch (ctx->pc) {
        case 0x14539cu: goto label_14539c;
        case 0x1453acu: goto label_1453ac;
        default: break;
    }

    ctx->pc = 0x145378u;

    // 0x145378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14537c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14538c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14538cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145394: 0xc05158e  jal         func_145638
    ctx->pc = 0x145394u;
    SET_GPR_U32(ctx, 31, 0x14539Cu);
    ctx->pc = 0x145398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145394u;
    // 0x145398: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145638u, 0x145394u, 0x14539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14539Cu;
label_14539c:
    // 0x14539c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1453a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453a4: 0xc04d88a  jal         func_136228
    ctx->pc = 0x1453A4u;
    SET_GPR_U32(ctx, 31, 0x1453ACu);
    ctx->pc = 0x1453A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1453A4u;
    // 0x1453a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x1453A4u, 0x1453ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1453ACu;
label_1453ac:
    // 0x1453ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1453acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1453b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1453b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1453b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1453b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1453b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1453B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1453BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453B8u;
        // 0x1453bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1453B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1453C0u;
}
