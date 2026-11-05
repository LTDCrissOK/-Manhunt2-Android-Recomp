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

// Function: sub_003E2498
// Address: 0x3e2498 - 0x3e24e8
void sub_003E2498_0x3e2498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2498_0x3e2498");
#endif

    switch (ctx->pc) {
        case 0x3e24c8u: goto label_3e24c8;
        case 0x3e24d4u: goto label_3e24d4;
        default: break;
    }

    ctx->pc = 0x3e2498u;

    // 0x3e2498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e249c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e24a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e24a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e24a4: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x3e24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x3e24a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e24a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e24ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e24acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e24b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e24b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e24b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e24b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e24b8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x3e24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x3e24bc: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x3e24bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x3e24c0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E24C0u;
    SET_GPR_U32(ctx, 31, 0x3E24C8u);
    ctx->pc = 0x3E24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E24C0u;
    // 0x3e24c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E24C0u, 0x3E24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E24C8u;
label_3e24c8:
    // 0x3e24c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e24c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e24cc: 0xc0a6484  jal         func_299210
    ctx->pc = 0x3E24CCu;
    SET_GPR_U32(ctx, 31, 0x3E24D4u);
    ctx->pc = 0x3E24D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E24CCu;
    // 0x3e24d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299210u, 0x3E24CCu, 0x3E24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E24D4u;
label_3e24d4:
    // 0x3e24d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e24d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e24d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e24d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e24dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e24dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e24e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E24E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E24E0u;
        // 0x3e24e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E24E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E24E8u;
}
