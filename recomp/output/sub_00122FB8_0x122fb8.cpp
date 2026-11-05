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

// Function: sub_00122FB8
// Address: 0x122fb8 - 0x123018
void sub_00122FB8_0x122fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122FB8_0x122fb8");
#endif

    switch (ctx->pc) {
        case 0x122fe0u: goto label_122fe0;
        case 0x122ff0u: goto label_122ff0;
        default: break;
    }

    ctx->pc = 0x122fb8u;

    // 0x122fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122fc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x122fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x122fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x122fd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x122fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fd8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122FD8u;
    SET_GPR_U32(ctx, 31, 0x122FE0u);
    ctx->pc = 0x122FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FD8u;
    // 0x122fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122FD8u, 0x122FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FE0u;
label_122fe0:
    // 0x122fe0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x122FE0u;
    {
        const bool branch_taken_0x122fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FE0u;
        // 0x122fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fe0) {
            ctx->pc = 0x122FFCu;
            goto label_122ffc;
        }
    }
    ctx->pc = 0x122FE8u;
    // 0x122fe8: 0xc049986  jal         func_126618
    ctx->pc = 0x122FE8u;
    SET_GPR_U32(ctx, 31, 0x122FF0u);
    ctx->pc = 0x122FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FE8u;
    // 0x122fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x122FE8u, 0x122FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FF0u;
label_122ff0:
    // 0x122ff0: 0xac5200c4  sw          $s2, 0xC4($v0)
    ctx->pc = 0x122ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 18));
    // 0x122ff4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122FF4u;
    {
        const bool branch_taken_0x122ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FF4u;
        // 0x122ff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ff4) {
            ctx->pc = 0x123000u;
            goto label_123000;
        }
    }
    ctx->pc = 0x122FFCu;
label_122ffc:
    // 0x122ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123000:
    // 0x123000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12300c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123010: 0x3e00008  jr          $ra
    ctx->pc = 0x123010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123010u;
        // 0x123014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123018u;
}
