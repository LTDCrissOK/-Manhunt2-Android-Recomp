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

// Function: sub_00122EF0
// Address: 0x122ef0 - 0x122f58
void sub_00122EF0_0x122ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122EF0_0x122ef0");
#endif

    switch (ctx->pc) {
        case 0x122f18u: goto label_122f18;
        case 0x122f28u: goto label_122f28;
        case 0x122f34u: goto label_122f34;
        default: break;
    }

    ctx->pc = 0x122ef0u;

    // 0x122ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122efc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x122f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x122f0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x122f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f10: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122F10u;
    SET_GPR_U32(ctx, 31, 0x122F18u);
    ctx->pc = 0x122F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F10u;
    // 0x122f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122F10u, 0x122F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F18u;
label_122f18:
    // 0x122f18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122F18u;
    {
        const bool branch_taken_0x122f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F18u;
        // 0x122f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f18) {
            ctx->pc = 0x122F3Cu;
            goto label_122f3c;
        }
    }
    ctx->pc = 0x122F20u;
    // 0x122f20: 0xc049986  jal         func_126618
    ctx->pc = 0x122F20u;
    SET_GPR_U32(ctx, 31, 0x122F28u);
    ctx->pc = 0x122F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F20u;
    // 0x122f24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x122F20u, 0x122F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F28u;
label_122f28:
    // 0x122f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f2c: 0xc05a772  jal         func_169DC8
    ctx->pc = 0x122F2Cu;
    SET_GPR_U32(ctx, 31, 0x122F34u);
    ctx->pc = 0x122F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F2Cu;
    // 0x122f30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DC8u, 0x122F2Cu, 0x122F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F34u;
label_122f34:
    // 0x122f34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122F34u;
    {
        const bool branch_taken_0x122f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F34u;
        // 0x122f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f34) {
            ctx->pc = 0x122F40u;
            goto label_122f40;
        }
    }
    ctx->pc = 0x122F3Cu;
label_122f3c:
    // 0x122f3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122f40:
    // 0x122f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122f44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122f44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122f48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122f4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x122f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122f50: 0x3e00008  jr          $ra
    ctx->pc = 0x122F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F50u;
        // 0x122f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122F58u;
}
