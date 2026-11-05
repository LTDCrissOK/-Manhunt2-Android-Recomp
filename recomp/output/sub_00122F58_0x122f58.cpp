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

// Function: sub_00122F58
// Address: 0x122f58 - 0x122fb8
void sub_00122F58_0x122f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122F58_0x122f58");
#endif

    switch (ctx->pc) {
        case 0x122f80u: goto label_122f80;
        case 0x122f90u: goto label_122f90;
        default: break;
    }

    ctx->pc = 0x122f58u;

    // 0x122f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122f5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122f60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122f64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122f6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x122f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x122f74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x122f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f78: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122F78u;
    SET_GPR_U32(ctx, 31, 0x122F80u);
    ctx->pc = 0x122F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F78u;
    // 0x122f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122F78u, 0x122F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F80u;
label_122f80:
    // 0x122f80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x122F80u;
    {
        const bool branch_taken_0x122f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F80u;
        // 0x122f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f80) {
            ctx->pc = 0x122F9Cu;
            goto label_122f9c;
        }
    }
    ctx->pc = 0x122F88u;
    // 0x122f88: 0xc049986  jal         func_126618
    ctx->pc = 0x122F88u;
    SET_GPR_U32(ctx, 31, 0x122F90u);
    ctx->pc = 0x122F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F88u;
    // 0x122f8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x122F88u, 0x122F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F90u;
label_122f90:
    // 0x122f90: 0xac5200c0  sw          $s2, 0xC0($v0)
    ctx->pc = 0x122f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 18));
    // 0x122f94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122F94u;
    {
        const bool branch_taken_0x122f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F94u;
        // 0x122f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f94) {
            ctx->pc = 0x122FA0u;
            goto label_122fa0;
        }
    }
    ctx->pc = 0x122F9Cu;
label_122f9c:
    // 0x122f9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122fa0:
    // 0x122fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122fa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122fac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x122facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x122FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FB0u;
        // 0x122fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122FB8u;
}
