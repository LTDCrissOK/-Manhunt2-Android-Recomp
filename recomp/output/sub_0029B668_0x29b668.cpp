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

// Function: sub_0029B668
// Address: 0x29b668 - 0x29b718
void sub_0029B668_0x29b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B668_0x29b668");
#endif

    switch (ctx->pc) {
        case 0x29b6b0u: goto label_29b6b0;
        case 0x29b6bcu: goto label_29b6bc;
        case 0x29b6d0u: goto label_29b6d0;
        default: break;
    }

    ctx->pc = 0x29b668u;

    // 0x29b668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29b674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29b678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b67c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29b67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29b680: 0x261100f8  addiu       $s1, $s0, 0xF8
    ctx->pc = 0x29b680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    // 0x29b684: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29b688: 0x24120031  addiu       $s2, $zero, 0x31
    ctx->pc = 0x29b688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x29b68c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b690: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x29b690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b694: 0xa20200f4  sb          $v0, 0xF4($s0)
    ctx->pc = 0x29b694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 244), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b698: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x29b698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b69c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29b69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29b6a0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x29b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x29b6a4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x29b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x29b6a8: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x29b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x29b6ac: 0x0  nop
    ctx->pc = 0x29b6acu;
    // NOP
label_29b6b0:
    // 0x29b6b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6b4: 0xc0a6d6e  jal         func_29B5B8
    ctx->pc = 0x29B6B4u;
    SET_GPR_U32(ctx, 31, 0x29B6BCu);
    ctx->pc = 0x29B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6B4u;
    // 0x29b6b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5B8u, 0x29B6B4u, 0x29B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6BCu;
label_29b6bc:
    // 0x29b6bc: 0x0  nop
    ctx->pc = 0x29b6bcu;
    // NOP
    // 0x29b6c0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x29B6C0u;
    {
        const bool branch_taken_0x29b6c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x29B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6C0u;
        // 0x29b6c4: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6c0) {
            ctx->pc = 0x29B6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b6b0;
        }
    }
    ctx->pc = 0x29B6C8u;
    // 0x29b6c8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29B6C8u;
    SET_GPR_U32(ctx, 31, 0x29B6D0u);
    ctx->pc = 0x29B6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6C8u;
    // 0x29b6cc: 0x260405a8  addiu       $a0, $s0, 0x5A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29B6C8u, 0x29B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6D0u;
label_29b6d0:
    // 0x29b6d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6d4: 0xae0005b4  sw          $zero, 0x5B4($s0)
    ctx->pc = 0x29b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 0));
    // 0x29b6d8: 0xae0005b8  sw          $zero, 0x5B8($s0)
    ctx->pc = 0x29b6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 0));
    // 0x29b6dc: 0xae0005bc  sw          $zero, 0x5BC($s0)
    ctx->pc = 0x29b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1468), GPR_U32(ctx, 0));
    // 0x29b6e0: 0xae0005c4  sw          $zero, 0x5C4($s0)
    ctx->pc = 0x29b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1476), GPR_U32(ctx, 0));
    // 0x29b6e4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x29b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x29b6e8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x29b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x29b6ec: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x29b6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x29b6f0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x29b6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x29b6f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x29b6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x29b6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29b6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29b700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b704: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29b704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29b708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B70Cu;
        // 0x29b710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B714u;
    // 0x29b714: 0x0  nop
    ctx->pc = 0x29b714u;
    // NOP
    ctx->pc = 0x29b718u;
}
