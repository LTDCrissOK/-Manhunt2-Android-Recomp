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

// Function: sub_002B9088
// Address: 0x2b9088 - 0x2b9160
void sub_002B9088_0x2b9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9088_0x2b9088");
#endif

    switch (ctx->pc) {
        case 0x2b90c4u: goto label_2b90c4;
        case 0x2b90d4u: goto label_2b90d4;
        case 0x2b90e8u: goto label_2b90e8;
        case 0x2b9104u: goto label_2b9104;
        case 0x2b9118u: goto label_2b9118;
        default: break;
    }

    ctx->pc = 0x2b9088u;

    // 0x2b9088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b908c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b908cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b9090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9098: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b9098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b909c: 0x8c43a4fc  lw          $v1, -0x5B04($v0)
    ctx->pc = 0x2b909cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA4FCu));
    // 0x2b90a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b90a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b90a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b90a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b90ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b90acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b90b0: 0x10700020  beq         $v1, $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B90B0u;
    {
        const bool branch_taken_0x2b90b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90B0u;
        // 0x2b90b4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90b0) {
            ctx->pc = 0x2B9134u;
            goto label_2b9134;
        }
    }
    ctx->pc = 0x2B90B8u;
    // 0x2b90b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b90b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90bc: 0xc0a2306  jal         func_288C18
    ctx->pc = 0x2B90BCu;
    SET_GPR_U32(ctx, 31, 0x2B90C4u);
    ctx->pc = 0x2B90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90BCu;
    // 0x2b90c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x2B90BCu, 0x2B90C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90C4u;
label_2b90c4:
    // 0x2b90c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b90c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b90c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90cc: 0xc0ae5ec  jal         func_2B97B0
    ctx->pc = 0x2B90CCu;
    SET_GPR_U32(ctx, 31, 0x2B90D4u);
    ctx->pc = 0x2B90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90CCu;
    // 0x2b90d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97B0u, 0x2B90CCu, 0x2B90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90D4u;
label_2b90d4:
    // 0x2b90d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B90D4u;
    {
        const bool branch_taken_0x2b90d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b90d4) {
            ctx->pc = 0x2B90D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B90D4u;
            // 0x2b90d8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B90F4u;
            goto label_2b90f4;
        }
    }
    ctx->pc = 0x2B90DCu;
    // 0x2b90dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b90dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90e0: 0xc0ae5f0  jal         func_2B97C0
    ctx->pc = 0x2B90E0u;
    SET_GPR_U32(ctx, 31, 0x2B90E8u);
    ctx->pc = 0x2B90E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90E0u;
    // 0x2b90e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97C0u, 0x2B90E0u, 0x2B90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90E8u;
label_2b90e8:
    // 0x2b90e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B90E8u;
    {
        const bool branch_taken_0x2b90e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B90E8u;
        // 0x2b90ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b90e8) {
            ctx->pc = 0x2B90F8u;
            goto label_2b90f8;
        }
    }
    ctx->pc = 0x2B90F0u;
    // 0x2b90f0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2b90f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b90f4:
    // 0x2b90f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b90f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b90f8:
    // 0x2b90f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b90f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b90fc: 0xc0ae5ec  jal         func_2B97B0
    ctx->pc = 0x2B90FCu;
    SET_GPR_U32(ctx, 31, 0x2B9104u);
    ctx->pc = 0x2B9100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B90FCu;
    // 0x2b9100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97B0u, 0x2B90FCu, 0x2B9104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9104u;
label_2b9104:
    // 0x2b9104: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9104u;
    {
        const bool branch_taken_0x2b9104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9104) {
            ctx->pc = 0x2B9108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9104u;
            // 0x2b9108: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9120u;
            goto label_2b9120;
        }
    }
    ctx->pc = 0x2B910Cu;
    // 0x2b910c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9110: 0xc0ae5f0  jal         func_2B97C0
    ctx->pc = 0x2B9110u;
    SET_GPR_U32(ctx, 31, 0x2B9118u);
    ctx->pc = 0x2B9114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9110u;
    // 0x2b9114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97C0u, 0x2B9110u, 0x2B9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9118u;
label_2b9118:
    // 0x2b9118: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B9118u;
    {
        const bool branch_taken_0x2b9118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9118) {
            ctx->pc = 0x2B911Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9118u;
            // 0x2b911c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9120u;
            goto label_2b9120;
        }
    }
    ctx->pc = 0x2B9120u;
label_2b9120:
    // 0x2b9120: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9120u;
    {
        const bool branch_taken_0x2b9120 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9120) {
            ctx->pc = 0x2B9124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9120u;
            // 0x2b9124: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9134u;
            goto label_2b9134;
        }
    }
    ctx->pc = 0x2B9128u;
    // 0x2b9128: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9128u;
    {
        const bool branch_taken_0x2b9128 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9128u;
        // 0x2b912c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9128) {
            ctx->pc = 0x2B9138u;
            goto label_2b9138;
        }
    }
    ctx->pc = 0x2B9130u;
    // 0x2b9130: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x2b9130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_2b9134:
    // 0x2b9134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9138:
    // 0x2b9138: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b9138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b913c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b913cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9140: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b9140u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9144: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b9144u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9148: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b9148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b914c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B914Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B914Cu;
        // 0x2b9150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B914Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9154u;
    // 0x2b9154: 0x0  nop
    ctx->pc = 0x2b9154u;
    // NOP
    // 0x2b9158: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b915c: 0x0  nop
    ctx->pc = 0x2b915cu;
    // NOP
    ctx->pc = 0x2b9160u;
}
