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

// Function: sub_00142128
// Address: 0x142128 - 0x142178
void sub_00142128_0x142128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142128_0x142128");
#endif

    switch (ctx->pc) {
        case 0x142148u: goto label_142148;
        case 0x142154u: goto label_142154;
        case 0x142160u: goto label_142160;
        default: break;
    }

    ctx->pc = 0x142128u;

    // 0x142128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14212c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142130: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142138: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x142138u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14213c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142140: 0xc05085e  jal         func_142178
    ctx->pc = 0x142140u;
    SET_GPR_U32(ctx, 31, 0x142148u);
    ctx->pc = 0x142144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142140u;
    // 0x142144: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142178u, 0x142140u, 0x142148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142148u;
label_142148:
    // 0x142148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14214c: 0xc04e836  jal         func_13A0D8
    ctx->pc = 0x14214Cu;
    SET_GPR_U32(ctx, 31, 0x142154u);
    ctx->pc = 0x142150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14214Cu;
    // 0x142150: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A0D8u, 0x14214Cu, 0x142154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142154u;
label_142154:
    // 0x142154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142158: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x142158u;
    SET_GPR_U32(ctx, 31, 0x142160u);
    ctx->pc = 0x14215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142158u;
    // 0x14215c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x142158u, 0x142160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142160u;
label_142160:
    // 0x142160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14216c: 0x3e00008  jr          $ra
    ctx->pc = 0x14216Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14216Cu;
        // 0x142170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14216Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142174u;
    // 0x142174: 0x0  nop
    ctx->pc = 0x142174u;
    // NOP
    ctx->pc = 0x142178u;
}
