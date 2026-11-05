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

// Function: sub_0031E8C8
// Address: 0x31e8c8 - 0x31e930
void sub_0031E8C8_0x31e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E8C8_0x31e8c8");
#endif

    switch (ctx->pc) {
        case 0x31e8f8u: goto label_31e8f8;
        case 0x31e90cu: goto label_31e90c;
        case 0x31e918u: goto label_31e918;
        default: break;
    }

    ctx->pc = 0x31e8c8u;

    // 0x31e8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e8d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e8dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E8DCu;
    {
        const bool branch_taken_0x31e8dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8DCu;
        // 0x31e8e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8dc) {
            ctx->pc = 0x31E8ECu;
            goto label_31e8ec;
        }
    }
    ctx->pc = 0x31E8E4u;
    // 0x31e8e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31E8E4u;
    {
        const bool branch_taken_0x31e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8E4u;
        // 0x31e8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e8e4) {
            ctx->pc = 0x31E91Cu;
            goto label_31e91c;
        }
    }
    ctx->pc = 0x31E8ECu;
label_31e8ec:
    // 0x31e8ec: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x31e8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x31e8f0: 0xc0dc4fa  jal         func_3713E8
    ctx->pc = 0x31E8F0u;
    SET_GPR_U32(ctx, 31, 0x31E8F8u);
    ctx->pc = 0x31E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E8F0u;
    // 0x31e8f4: 0x2484f910  addiu       $a0, $a0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713E8u, 0x31E8F0u, 0x31E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E8F8u;
label_31e8f8:
    // 0x31e8f8: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x31e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x31e8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e900: 0x24a5ebc8  addiu       $a1, $a1, -0x1438
    ctx->pc = 0x31e900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962120));
    // 0x31e904: 0xc0c7a52  jal         func_31E948
    ctx->pc = 0x31E904u;
    SET_GPR_U32(ctx, 31, 0x31E90Cu);
    ctx->pc = 0x31E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E904u;
    // 0x31e908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E948u, 0x31E904u, 0x31E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E90Cu;
label_31e90c:
    // 0x31e90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e910: 0xc0fb9f2  jal         func_3EE7C8
    ctx->pc = 0x31E910u;
    SET_GPR_U32(ctx, 31, 0x31E918u);
    ctx->pc = 0x31E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E910u;
    // 0x31e914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE7C8u, 0x31E910u, 0x31E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E918u;
label_31e918:
    // 0x31e918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e91c:
    // 0x31e91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e928: 0x3e00008  jr          $ra
    ctx->pc = 0x31E928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E928u;
        // 0x31e92c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E930u;
}
