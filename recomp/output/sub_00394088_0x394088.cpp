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

// Function: sub_00394088
// Address: 0x394088 - 0x3940f0
void sub_00394088_0x394088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394088_0x394088");
#endif

    switch (ctx->pc) {
        case 0x3940b4u: goto label_3940b4;
        case 0x3940c8u: goto label_3940c8;
        case 0x3940d0u: goto label_3940d0;
        default: break;
    }

    ctx->pc = 0x394088u;

    // 0x394088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39408c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x394094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x394098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x394098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39409c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3940a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3940a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3940a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3940a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3940a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3940a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3940ac: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x3940ACu;
    SET_GPR_U32(ctx, 31, 0x3940B4u);
    ctx->pc = 0x3940B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940ACu;
    // 0x3940b0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x3940ACu, 0x3940B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940B4u;
label_3940b4:
    // 0x3940b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3940b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3940b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3940b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3940bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3940bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3940c0: 0xc0e503c  jal         func_3940F0
    ctx->pc = 0x3940C0u;
    SET_GPR_U32(ctx, 31, 0x3940C8u);
    ctx->pc = 0x3940C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940C0u;
    // 0x3940c4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3940F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3940F0u, 0x3940C0u, 0x3940C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940C8u;
label_3940c8:
    // 0x3940c8: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x3940C8u;
    SET_GPR_U32(ctx, 31, 0x3940D0u);
    ctx->pc = 0x3940CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940C8u;
    // 0x3940cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x3940C8u, 0x3940D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940D0u;
label_3940d0:
    // 0x3940d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3940d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3940d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3940d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3940d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3940d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3940dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3940dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3940e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3940e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3940e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3940e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3940e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3940E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3940ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940E8u;
        // 0x3940ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3940E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3940F0u;
}
