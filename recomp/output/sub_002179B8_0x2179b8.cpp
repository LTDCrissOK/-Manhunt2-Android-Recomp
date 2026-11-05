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

// Function: sub_002179B8
// Address: 0x2179b8 - 0x217a58
void sub_002179B8_0x2179b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002179B8_0x2179b8");
#endif

    switch (ctx->pc) {
        case 0x2179e4u: goto label_2179e4;
        case 0x2179fcu: goto label_2179fc;
        case 0x217a1cu: goto label_217a1c;
        case 0x217a34u: goto label_217a34;
        default: break;
    }

    ctx->pc = 0x2179b8u;

label_2179b8:
    // 0x2179b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2179b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2179bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2179bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2179c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2179c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2179c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2179c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2179c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2179ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2179d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2179d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2179d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2179d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2179d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2179dc: 0xc085e14  jal         func_217850
    ctx->pc = 0x2179DCu;
    SET_GPR_U32(ctx, 31, 0x2179E4u);
    ctx->pc = 0x2179E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179DCu;
    // 0x2179e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217850u, 0x2179DCu, 0x2179E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179E4u;
label_2179e4:
    // 0x2179e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2179e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179e8: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2179E8u;
    {
        const bool branch_taken_0x2179e8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2179ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179E8u;
        // 0x2179ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2179e8) {
            ctx->pc = 0x217A08u;
            goto label_217a08;
        }
    }
    ctx->pc = 0x2179F0u;
    // 0x2179f0: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2179f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2179f4: 0xc085e62  jal         func_217988
    ctx->pc = 0x2179F4u;
    SET_GPR_U32(ctx, 31, 0x2179FCu);
    ctx->pc = 0x2179F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179F4u;
    // 0x2179f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217988u, 0x2179F4u, 0x2179FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179FCu;
label_2179fc:
    // 0x2179fc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2179fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x217a00: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x217a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x217a04: 0xac6201bc  sw          $v0, 0x1BC($v1)
    ctx->pc = 0x217a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 444), GPR_U32(ctx, 2));
label_217a08:
    // 0x217a08: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x217a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217a0c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x217A0Cu;
    {
        const bool branch_taken_0x217a0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a0c) {
            ctx->pc = 0x217A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217A0Cu;
            // 0x217a10: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217A24u;
            goto label_217a24;
        }
    }
    ctx->pc = 0x217A14u;
    // 0x217a14: 0xc085e6e  jal         func_2179B8
    ctx->pc = 0x217A14u;
    SET_GPR_U32(ctx, 31, 0x217A1Cu);
    ctx->pc = 0x217A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A14u;
    // 0x217a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2179B8u;
    goto label_2179b8;
    ctx->pc = 0x217A1Cu;
label_217a1c:
    // 0x217a1c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x217a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x217a20: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x217a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_217a24:
    // 0x217a24: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x217A24u;
    {
        const bool branch_taken_0x217a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A24u;
        // 0x217a28: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a24) {
            ctx->pc = 0x217A3Cu;
            goto label_217a3c;
        }
    }
    ctx->pc = 0x217A2Cu;
    // 0x217a2c: 0xc085e6e  jal         func_2179B8
    ctx->pc = 0x217A2Cu;
    SET_GPR_U32(ctx, 31, 0x217A34u);
    ctx->pc = 0x217A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A2Cu;
    // 0x217a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2179B8u;
    goto label_2179b8;
    ctx->pc = 0x217A34u;
label_217a34:
    // 0x217a34: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x217a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x217a38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x217a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217a3c:
    // 0x217a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217a44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x217a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217a50: 0x3e00008  jr          $ra
    ctx->pc = 0x217A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A50u;
        // 0x217a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A58u;
}
