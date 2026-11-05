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

// Function: sub_0017D118
// Address: 0x17d118 - 0x17d168
void sub_0017D118_0x17d118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D118_0x17d118");
#endif

    switch (ctx->pc) {
        case 0x17d140u: goto label_17d140;
        case 0x17d154u: goto label_17d154;
        default: break;
    }

    ctx->pc = 0x17d118u;

    // 0x17d118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d120: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d12c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x17d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17d130: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D130u;
    {
        const bool branch_taken_0x17d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D130u;
        // 0x17d134: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d130) {
            ctx->pc = 0x17D140u;
            goto label_17d140;
        }
    }
    ctx->pc = 0x17D138u;
    // 0x17d138: 0xc05f466  jal         func_17D198
    ctx->pc = 0x17D138u;
    SET_GPR_U32(ctx, 31, 0x17D140u);
    ctx->pc = 0x17D198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D198u, 0x17D138u, 0x17D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D140u;
label_17d140:
    // 0x17d140: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x17d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x17d144: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D144u;
    {
        const bool branch_taken_0x17d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d144) {
            ctx->pc = 0x17D148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D144u;
            // 0x17d148: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D158u;
            goto label_17d158;
        }
    }
    ctx->pc = 0x17D14Cu;
    // 0x17d14c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x17D14Cu;
    SET_GPR_U32(ctx, 31, 0x17D154u);
    ctx->pc = 0x17D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D14Cu;
    // 0x17d150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x17D14Cu, 0x17D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D154u;
label_17d154:
    // 0x17d154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d158:
    // 0x17d158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d15c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d160: 0x3e00008  jr          $ra
    ctx->pc = 0x17D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D160u;
        // 0x17d164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D168u;
}
