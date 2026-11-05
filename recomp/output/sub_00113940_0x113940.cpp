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

// Function: sub_00113940
// Address: 0x113940 - 0x1139c0
void sub_00113940_0x113940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113940_0x113940");
#endif

    switch (ctx->pc) {
        case 0x113968u: goto label_113968;
        case 0x11397cu: goto label_11397c;
        case 0x113988u: goto label_113988;
        case 0x113994u: goto label_113994;
        case 0x1139a4u: goto label_1139a4;
        default: break;
    }

    ctx->pc = 0x113940u;

    // 0x113940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113944: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x113948: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11394c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11394cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113950: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x113950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x113954: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x113954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11395c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113960: 0xc0449c8  jal         func_112720
    ctx->pc = 0x113960u;
    SET_GPR_U32(ctx, 31, 0x113968u);
    ctx->pc = 0x113964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113960u;
    // 0x113964: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x113960u, 0x113968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113968u;
label_113968:
    // 0x113968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11396c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x11396cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x113970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x113970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113974: 0xc045612  jal         func_115848
    ctx->pc = 0x113974u;
    SET_GPR_U32(ctx, 31, 0x11397Cu);
    ctx->pc = 0x113978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113974u;
    // 0x113978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x113974u, 0x11397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11397Cu;
label_11397c:
    // 0x11397c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113980: 0xc045668  jal         func_1159A0
    ctx->pc = 0x113980u;
    SET_GPR_U32(ctx, 31, 0x113988u);
    ctx->pc = 0x113984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113980u;
    // 0x113984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x113980u, 0x113988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113988u;
label_113988:
    // 0x113988: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x113988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11398c: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x11398Cu;
    SET_GPR_U32(ctx, 31, 0x113994u);
    ctx->pc = 0x113990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11398Cu;
    // 0x113990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x11398Cu, 0x113994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113994u;
label_113994:
    // 0x113994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11399c: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x11399Cu;
    SET_GPR_U32(ctx, 31, 0x1139A4u);
    ctx->pc = 0x1139A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11399Cu;
    // 0x1139a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x11399Cu, 0x1139A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139A4u;
label_1139a4:
    // 0x1139a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1139a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1139a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1139a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1139ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1139acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1139b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1139b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1139b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1139b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1139b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1139B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1139BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139B8u;
        // 0x1139bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1139B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1139C0u;
}
