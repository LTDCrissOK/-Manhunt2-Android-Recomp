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

// Function: sub_0017F068
// Address: 0x17f068 - 0x17f0d8
void sub_0017F068_0x17f068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F068_0x17f068");
#endif

    switch (ctx->pc) {
        case 0x17f0a0u: goto label_17f0a0;
        case 0x17f0b8u: goto label_17f0b8;
        default: break;
    }

    ctx->pc = 0x17f068u;

    // 0x17f068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f07c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17f07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f080: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f084: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17f084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f08c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f090: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F090u;
    {
        const bool branch_taken_0x17f090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F090u;
        // 0x17f094: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f090) {
            ctx->pc = 0x17F0A4u;
            goto label_17f0a4;
        }
    }
    ctx->pc = 0x17F098u;
    // 0x17f098: 0xc05fd5c  jal         func_17F570
    ctx->pc = 0x17F098u;
    SET_GPR_U32(ctx, 31, 0x17F0A0u);
    ctx->pc = 0x17F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F570u, 0x17F098u, 0x17F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0A0u;
label_17f0a0:
    // 0x17f0a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17f0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17f0a4:
    // 0x17f0a4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17f0a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F0A8u;
    {
        const bool branch_taken_0x17f0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0A8u;
        // 0x17f0ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0a8) {
            ctx->pc = 0x17F0B8u;
            goto label_17f0b8;
        }
    }
    ctx->pc = 0x17F0B0u;
    // 0x17f0b0: 0xc05efac  jal         func_17BEB0
    ctx->pc = 0x17F0B0u;
    SET_GPR_U32(ctx, 31, 0x17F0B8u);
    ctx->pc = 0x17F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F0B0u;
    // 0x17f0b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEB0u, 0x17F0B0u, 0x17F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0B8u;
label_17f0b8:
    // 0x17f0b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x17f0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f0c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f0c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f0c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f0c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f0cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D0u;
        // 0x17f0d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F0D8u;
}
