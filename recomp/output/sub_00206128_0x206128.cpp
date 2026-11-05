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

// Function: sub_00206128
// Address: 0x206128 - 0x206180
void sub_00206128_0x206128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206128_0x206128");
#endif

    switch (ctx->pc) {
        case 0x206154u: goto label_206154;
        case 0x206168u: goto label_206168;
        default: break;
    }

    ctx->pc = 0x206128u;

    // 0x206128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20612c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x206130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206134: 0x24421530  addiu       $v0, $v0, 0x1530
    ctx->pc = 0x206134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5424));
    // 0x206138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20613c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20613cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206140: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206148: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x206148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x20614c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20614Cu;
    SET_GPR_U32(ctx, 31, 0x206154u);
    ctx->pc = 0x206150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20614Cu;
    // 0x206150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20614Cu, 0x206154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206154u;
label_206154:
    // 0x206154: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x206154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x206158: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x206158u;
    {
        const bool branch_taken_0x206158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206158u;
        // 0x20615c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206158) {
            ctx->pc = 0x20616Cu;
            goto label_20616c;
        }
    }
    ctx->pc = 0x206160u;
    // 0x206160: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x206160u;
    SET_GPR_U32(ctx, 31, 0x206168u);
    ctx->pc = 0x206164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206160u;
    // 0x206164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x206160u, 0x206168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206168u;
label_206168:
    // 0x206168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20616c:
    // 0x20616c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20616cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206174: 0x3e00008  jr          $ra
    ctx->pc = 0x206174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206174u;
        // 0x206178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20617Cu;
    // 0x20617c: 0x0  nop
    ctx->pc = 0x20617cu;
    // NOP
    ctx->pc = 0x206180u;
}
