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

// Function: sub_00121658
// Address: 0x121658 - 0x1216c8
void sub_00121658_0x121658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121658_0x121658");
#endif

    switch (ctx->pc) {
        case 0x121680u: goto label_121680;
        case 0x121690u: goto label_121690;
        case 0x1216a4u: goto label_1216a4;
        default: break;
    }

    ctx->pc = 0x121658u;

    // 0x121658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12165c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12166c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12166cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121670: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121674: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121678: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121678u;
    SET_GPR_U32(ctx, 31, 0x121680u);
    ctx->pc = 0x12167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121678u;
    // 0x12167c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121678u, 0x121680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121680u;
label_121680:
    // 0x121680: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121680u;
    {
        const bool branch_taken_0x121680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121680u;
        // 0x121684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121680) {
            ctx->pc = 0x1216B0u;
            goto label_1216b0;
        }
    }
    ctx->pc = 0x121688u;
    // 0x121688: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121688u;
    SET_GPR_U32(ctx, 31, 0x121690u);
    ctx->pc = 0x12168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121688u;
    // 0x12168c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121688u, 0x121690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121690u;
label_121690:
    // 0x121690: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121690u;
    {
        const bool branch_taken_0x121690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121690u;
        // 0x121694: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121690) {
            ctx->pc = 0x1216ACu;
            goto label_1216ac;
        }
    }
    ctx->pc = 0x121698u;
    // 0x121698: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12169c: 0xc042632  jal         func_1098C8
    ctx->pc = 0x12169Cu;
    SET_GPR_U32(ctx, 31, 0x1216A4u);
    ctx->pc = 0x1216A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12169Cu;
    // 0x1216a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1098C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1098C8u, 0x12169Cu, 0x1216A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1216A4u;
label_1216a4:
    // 0x1216a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1216A4u;
    {
        const bool branch_taken_0x1216a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1216A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216A4u;
        // 0x1216a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1216a4) {
            ctx->pc = 0x1216B4u;
            goto label_1216b4;
        }
    }
    ctx->pc = 0x1216ACu;
label_1216ac:
    // 0x1216ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1216acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1216b0:
    // 0x1216b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1216b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1216b4:
    // 0x1216b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1216b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1216b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1216b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1216bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1216bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1216c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1216C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1216C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1216C0u;
        // 0x1216c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1216C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1216C8u;
}
