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

// Function: sub_0012FC90
// Address: 0x12fc90 - 0x12fd38
void sub_0012FC90_0x12fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FC90_0x12fc90");
#endif

    switch (ctx->pc) {
        case 0x12fce0u: goto label_12fce0;
        case 0x12fce8u: goto label_12fce8;
        default: break;
    }

    ctx->pc = 0x12fc90u;

    // 0x12fc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12fc94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12fc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12fc98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12fc9c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x12fc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12fca8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12fcac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12fcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12fcb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12fcb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FCB4u;
    {
        const bool branch_taken_0x12fcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCB4u;
        // 0x12fcb8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcb4) {
            ctx->pc = 0x12FCC4u;
            goto label_12fcc4;
        }
    }
    ctx->pc = 0x12FCBCu;
    // 0x12fcbc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12FCBCu;
    {
        const bool branch_taken_0x12fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCBCu;
        // 0x12fcc0: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcbc) {
            ctx->pc = 0x12FD14u;
            goto label_12fd14;
        }
    }
    ctx->pc = 0x12FCC4u;
label_12fcc4:
    // 0x12fcc4: 0x16660003  bne         $s3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FCC4u;
    {
        const bool branch_taken_0x12fcc4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x12FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCC4u;
        // 0x12fcc8: 0xd31023  subu        $v0, $a2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcc4) {
            ctx->pc = 0x12FCD4u;
            goto label_12fcd4;
        }
    }
    ctx->pc = 0x12FCCCu;
    // 0x12fccc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12FCCCu;
    {
        const bool branch_taken_0x12fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCCCu;
        // 0x12fcd0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fccc) {
            ctx->pc = 0x12FD14u;
            goto label_12fd14;
        }
    }
    ctx->pc = 0x12FCD4u;
label_12fcd4:
    // 0x12fcd4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12fcd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fcd8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x12fcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12fcdc: 0x0  nop
    ctx->pc = 0x12fcdcu;
    // NOP
label_12fce0:
    // 0x12fce0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x12FCE0u;
    SET_GPR_U32(ctx, 31, 0x12FCE8u);
    ctx->pc = 0x12FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCE0u;
    // 0x12fce4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x12FCE0u, 0x12FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCE8u;
label_12fce8:
    // 0x12fce8: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x12fce8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x12fcec: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12FCECu;
    {
        const bool branch_taken_0x12fcec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcec) {
            ctx->pc = 0x12FCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FCECu;
            // 0x12fcf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FCF4u;
            goto label_12fcf4;
        }
    }
    ctx->pc = 0x12FCF4u;
label_12fcf4:
    // 0x12fcf4: 0x1810  mfhi        $v1
    ctx->pc = 0x12fcf4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12fcf8: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FCF8u;
    {
        const bool branch_taken_0x12fcf8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCF8u;
        // 0x12fcfc: 0x731821  addu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcf8) {
            ctx->pc = 0x12FD0Cu;
            goto label_12fd0c;
        }
    }
    ctx->pc = 0x12FD00u;
    // 0x12fd00: 0x721026  xor         $v0, $v1, $s2
    ctx->pc = 0x12fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 18));
    // 0x12fd04: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x12fd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd08: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x12fd08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_12fd0c:
    // 0x12fd0c: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FD0Cu;
    {
        const bool branch_taken_0x12fd0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD0Cu;
        // 0x12fd10: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd0c) {
            ctx->pc = 0x12FCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fce0;
        }
    }
    ctx->pc = 0x12FD14u;
label_12fd14:
    // 0x12fd14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fd14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fd18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12fd18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fd1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12fd1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fd20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12fd20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fd24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12fd24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fd28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12fd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12fd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD2Cu;
        // 0x12fd30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FD34u;
    // 0x12fd34: 0x0  nop
    ctx->pc = 0x12fd34u;
    // NOP
    ctx->pc = 0x12fd38u;
}
