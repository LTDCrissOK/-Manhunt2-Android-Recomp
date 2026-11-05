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

// Function: sub_001139C0
// Address: 0x1139c0 - 0x113a40
void sub_001139C0_0x1139c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001139C0_0x1139c0");
#endif

    switch (ctx->pc) {
        case 0x1139e8u: goto label_1139e8;
        case 0x1139fcu: goto label_1139fc;
        case 0x113a08u: goto label_113a08;
        case 0x113a14u: goto label_113a14;
        case 0x113a24u: goto label_113a24;
        default: break;
    }

    ctx->pc = 0x1139c0u;

    // 0x1139c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1139c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1139c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1139c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1139c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1139c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1139cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1139ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1139d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1139d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1139d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1139d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1139dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1139dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1139e0: 0xc0449c8  jal         func_112720
    ctx->pc = 0x1139E0u;
    SET_GPR_U32(ctx, 31, 0x1139E8u);
    ctx->pc = 0x1139E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139E0u;
    // 0x1139e4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x1139E0u, 0x1139E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139E8u;
label_1139e8:
    // 0x1139e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1139e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139ec: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1139ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1139f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1139f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139f4: 0xc045612  jal         func_115848
    ctx->pc = 0x1139F4u;
    SET_GPR_U32(ctx, 31, 0x1139FCu);
    ctx->pc = 0x1139F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139F4u;
    // 0x1139f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x1139F4u, 0x1139FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139FCu;
label_1139fc:
    // 0x1139fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1139fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a00: 0xc045668  jal         func_1159A0
    ctx->pc = 0x113A00u;
    SET_GPR_U32(ctx, 31, 0x113A08u);
    ctx->pc = 0x113A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A00u;
    // 0x113a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x113A00u, 0x113A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A08u;
label_113a08:
    // 0x113a08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x113a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a0c: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x113A0Cu;
    SET_GPR_U32(ctx, 31, 0x113A14u);
    ctx->pc = 0x113A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A0Cu;
    // 0x113a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x113A0Cu, 0x113A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A14u;
label_113a14:
    // 0x113a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a1c: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x113A1Cu;
    SET_GPR_U32(ctx, 31, 0x113A24u);
    ctx->pc = 0x113A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A1Cu;
    // 0x113a20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x113A1Cu, 0x113A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A24u;
label_113a24:
    // 0x113a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113a2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x113a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113a34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113a38: 0x3e00008  jr          $ra
    ctx->pc = 0x113A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A38u;
        // 0x113a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A40u;
}
