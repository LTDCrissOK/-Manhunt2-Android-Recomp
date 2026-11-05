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

// Function: sub_0039EDE0
// Address: 0x39ede0 - 0x39ee48
void sub_0039EDE0_0x39ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EDE0_0x39ede0");
#endif

    switch (ctx->pc) {
        case 0x39ee0cu: goto label_39ee0c;
        case 0x39ee20u: goto label_39ee20;
        case 0x39ee28u: goto label_39ee28;
        default: break;
    }

    ctx->pc = 0x39ede0u;

    // 0x39ede0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39ede4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ede8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ede8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39edec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39edecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39edf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39edf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39edf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39edf8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39edf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39edfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39edfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39ee00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39ee04: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39EE04u;
    SET_GPR_U32(ctx, 31, 0x39EE0Cu);
    ctx->pc = 0x39EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE04u;
    // 0x39ee08: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39EE04u, 0x39EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE0Cu;
label_39ee0c:
    // 0x39ee0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ee0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ee10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39ee14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee18: 0xc0e7b92  jal         func_39EE48
    ctx->pc = 0x39EE18u;
    SET_GPR_U32(ctx, 31, 0x39EE20u);
    ctx->pc = 0x39EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE18u;
    // 0x39ee1c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EE48u, 0x39EE18u, 0x39EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE20u;
label_39ee20:
    // 0x39ee20: 0xc0ecbf2  jal         func_3B2FC8
    ctx->pc = 0x39EE20u;
    SET_GPR_U32(ctx, 31, 0x39EE28u);
    ctx->pc = 0x39EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EE20u;
    // 0x39ee24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC8u, 0x39EE20u, 0x39EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39EE28u;
label_39ee28:
    // 0x39ee28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ee28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ee2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ee2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ee30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39ee30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ee34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ee34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ee38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39ee38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39ee3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x39EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EE40u;
        // 0x39ee44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EE48u;
}
