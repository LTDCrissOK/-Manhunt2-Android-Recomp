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

// Function: sub_0011FCD0
// Address: 0x11fcd0 - 0x11fd20
void sub_0011FCD0_0x11fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FCD0_0x11fcd0");
#endif

    switch (ctx->pc) {
        case 0x11fcf4u: goto label_11fcf4;
        case 0x11fd04u: goto label_11fd04;
        default: break;
    }

    ctx->pc = 0x11fcd0u;

    // 0x11fcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11fcd4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x11fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x11fcd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11fcdc: 0x24842408  addiu       $a0, $a0, 0x2408
    ctx->pc = 0x11fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
    // 0x11fce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11fce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fce4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11fce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11fcec: 0xc0f6dfa  jal         func_3DB7E8
    ctx->pc = 0x11FCECu;
    SET_GPR_U32(ctx, 31, 0x11FCF4u);
    ctx->pc = 0x11FCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FCECu;
    // 0x11fcf0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB7E8u, 0x11FCECu, 0x11FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FCF4u;
label_11fcf4:
    // 0x11fcf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11fcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11fcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcfc: 0xc0aae0e  jal         func_2AB838
    ctx->pc = 0x11FCFCu;
    SET_GPR_U32(ctx, 31, 0x11FD04u);
    ctx->pc = 0x11FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FCFCu;
    // 0x11fd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB838u, 0x11FCFCu, 0x11FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD04u;
label_11fd04:
    // 0x11fd04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11fd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11fd08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11fd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11fd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fd10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11fd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fd14: 0x3e00008  jr          $ra
    ctx->pc = 0x11FD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD14u;
        // 0x11fd18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD1Cu;
    // 0x11fd1c: 0x0  nop
    ctx->pc = 0x11fd1cu;
    // NOP
    ctx->pc = 0x11fd20u;
}
