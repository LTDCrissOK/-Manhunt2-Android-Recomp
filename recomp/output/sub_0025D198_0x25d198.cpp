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

// Function: sub_0025D198
// Address: 0x25d198 - 0x25d210
void sub_0025D198_0x25d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D198_0x25d198");
#endif

    switch (ctx->pc) {
        case 0x25d1c0u: goto label_25d1c0;
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1f0u: goto label_25d1f0;
        default: break;
    }

    ctx->pc = 0x25d198u;

    // 0x25d198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d19c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x25d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x25d1a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25d1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x25d1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25d1ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25d1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x25d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x25d1b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25D1B8u;
    SET_GPR_U32(ctx, 31, 0x25D1C0u);
    ctx->pc = 0x25D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1B8u;
    // 0x25d1bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25D1B8u, 0x25D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1C0u;
label_25d1c0:
    // 0x25d1c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25d1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1cc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x25d1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25d1d0: 0xc09734c  jal         func_25CD30
    ctx->pc = 0x25D1D0u;
    SET_GPR_U32(ctx, 31, 0x25D1D8u);
    ctx->pc = 0x25D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1D0u;
    // 0x25d1d4: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD30u, 0x25D1D0u, 0x25D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1D8u;
label_25d1d8:
    // 0x25d1d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D1D8u;
    {
        const bool branch_taken_0x25d1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1D8u;
        // 0x25d1dc: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1d8) {
            ctx->pc = 0x25D1F0u;
            goto label_25d1f0;
        }
    }
    ctx->pc = 0x25D1E0u;
    // 0x25d1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1e8: 0xc0973ea  jal         func_25CFA8
    ctx->pc = 0x25D1E8u;
    SET_GPR_U32(ctx, 31, 0x25D1F0u);
    ctx->pc = 0x25D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1E8u;
    // 0x25d1ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CFA8u, 0x25D1E8u, 0x25D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1F0u;
label_25d1f0:
    // 0x25d1f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25d1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d1f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x25d1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25d1fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25d1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d200: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x25d200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25d204: 0x3e00008  jr          $ra
    ctx->pc = 0x25D204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D204u;
        // 0x25d208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D20Cu;
    // 0x25d20c: 0x0  nop
    ctx->pc = 0x25d20cu;
    // NOP
    ctx->pc = 0x25d210u;
}
