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

// Function: sub_001217A8
// Address: 0x1217a8 - 0x121818
void sub_001217A8_0x1217a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001217A8_0x1217a8");
#endif

    switch (ctx->pc) {
        case 0x1217d0u: goto label_1217d0;
        case 0x1217e0u: goto label_1217e0;
        case 0x1217f4u: goto label_1217f4;
        default: break;
    }

    ctx->pc = 0x1217a8u;

    // 0x1217a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1217a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1217ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1217acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1217b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1217b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1217b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1217b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1217b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1217bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1217bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1217c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1217c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1217c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217c8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1217C8u;
    SET_GPR_U32(ctx, 31, 0x1217D0u);
    ctx->pc = 0x1217CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217C8u;
    // 0x1217cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1217C8u, 0x1217D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217D0u;
label_1217d0:
    // 0x1217d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1217D0u;
    {
        const bool branch_taken_0x1217d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217D0u;
        // 0x1217d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217d0) {
            ctx->pc = 0x121800u;
            goto label_121800;
        }
    }
    ctx->pc = 0x1217D8u;
    // 0x1217d8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1217D8u;
    SET_GPR_U32(ctx, 31, 0x1217E0u);
    ctx->pc = 0x1217DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217D8u;
    // 0x1217dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1217D8u, 0x1217E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217E0u;
label_1217e0:
    // 0x1217e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1217E0u;
    {
        const bool branch_taken_0x1217e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217E0u;
        // 0x1217e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217e0) {
            ctx->pc = 0x1217FCu;
            goto label_1217fc;
        }
    }
    ctx->pc = 0x1217E8u;
    // 0x1217e8: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x1217e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x1217ec: 0xc04273a  jal         func_109CE8
    ctx->pc = 0x1217ECu;
    SET_GPR_U32(ctx, 31, 0x1217F4u);
    ctx->pc = 0x1217F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217ECu;
    // 0x1217f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CE8u, 0x1217ECu, 0x1217F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217F4u;
label_1217f4:
    // 0x1217f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1217F4u;
    {
        const bool branch_taken_0x1217f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1217F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217F4u;
        // 0x1217f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217f4) {
            ctx->pc = 0x121804u;
            goto label_121804;
        }
    }
    ctx->pc = 0x1217FCu;
label_1217fc:
    // 0x1217fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1217fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121800:
    // 0x121800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121804:
    // 0x121804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12180c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12180cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121810: 0x3e00008  jr          $ra
    ctx->pc = 0x121810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121810u;
        // 0x121814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121818u;
}
