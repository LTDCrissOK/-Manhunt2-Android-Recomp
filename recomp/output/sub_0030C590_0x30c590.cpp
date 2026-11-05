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

// Function: sub_0030C590
// Address: 0x30c590 - 0x30c608
void sub_0030C590_0x30c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C590_0x30c590");
#endif

    switch (ctx->pc) {
        case 0x30c590u: goto label_30c590;
        case 0x30c594u: goto label_30c594;
        case 0x30c598u: goto label_30c598;
        case 0x30c59cu: goto label_30c59c;
        case 0x30c5a0u: goto label_30c5a0;
        case 0x30c5a4u: goto label_30c5a4;
        case 0x30c5a8u: goto label_30c5a8;
        case 0x30c5acu: goto label_30c5ac;
        case 0x30c5b0u: goto label_30c5b0;
        case 0x30c5b4u: goto label_30c5b4;
        case 0x30c5b8u: goto label_30c5b8;
        case 0x30c5bcu: goto label_30c5bc;
        case 0x30c5c0u: goto label_30c5c0;
        case 0x30c5c4u: goto label_30c5c4;
        case 0x30c5c8u: goto label_30c5c8;
        case 0x30c5ccu: goto label_30c5cc;
        case 0x30c5d0u: goto label_30c5d0;
        case 0x30c5d4u: goto label_30c5d4;
        case 0x30c5d8u: goto label_30c5d8;
        case 0x30c5dcu: goto label_30c5dc;
        case 0x30c5e0u: goto label_30c5e0;
        case 0x30c5e4u: goto label_30c5e4;
        case 0x30c5e8u: goto label_30c5e8;
        case 0x30c5ecu: goto label_30c5ec;
        case 0x30c5f0u: goto label_30c5f0;
        case 0x30c5f4u: goto label_30c5f4;
        case 0x30c5f8u: goto label_30c5f8;
        case 0x30c5fcu: goto label_30c5fc;
        case 0x30c600u: goto label_30c600;
        case 0x30c604u: goto label_30c604;
        default: break;
    }

    ctx->pc = 0x30c590u;

label_30c590:
    // 0x30c590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30c594:
    // 0x30c594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_30c598:
    // 0x30c598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_30c59c:
    // 0x30c59c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30c59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30c5a0:
    // 0x30c5a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_30c5a4:
    // 0x30c5a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30c5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30c5a8:
    // 0x30c5a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_30c5ac:
    // 0x30c5ac: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x30c5acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_30c5b0:
    // 0x30c5b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_30c5b4:
    // 0x30c5b4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30c5b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30c5b8:
    // 0x30c5b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x30c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_30c5bc:
    // 0x30c5bc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x30c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_30c5c0:
    // 0x30c5c0: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
label_30c5c4:
    if (ctx->pc == 0x30C5C4u) {
        ctx->pc = 0x30C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5C0u;
        // 0x30c5c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5C8u;
        goto label_30c5c8;
    }
    ctx->pc = 0x30C5C0u;
    {
        const bool branch_taken_0x30c5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x30C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5C0u;
        // 0x30c5c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5c0) {
            ctx->pc = 0x30C5DCu;
            goto label_30c5dc;
        }
    }
    ctx->pc = 0x30C5C8u;
label_30c5c8:
    // 0x30c5c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x30c5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30c5cc:
    // 0x30c5cc: 0x280f809  jalr        $s4
label_30c5d0:
    if (ctx->pc == 0x30C5D0u) {
        ctx->pc = 0x30C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5CCu;
        // 0x30c5d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5D4u;
        goto label_30c5d4;
    }
    ctx->pc = 0x30C5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x30C5D4u);
        ctx->pc = 0x30C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5CCu;
        // 0x30c5d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C5CCu, 0x30C5D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30C5D4u;
label_30c5d4:
    // 0x30c5d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_30c5d8:
    if (ctx->pc == 0x30C5D8u) {
        ctx->pc = 0x30C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5D4u;
        // 0x30c5d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C5DCu;
        goto label_30c5dc;
    }
    ctx->pc = 0x30C5D4u;
    {
        const bool branch_taken_0x30c5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5D4u;
        // 0x30c5d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5d4) {
            ctx->pc = 0x30C5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c5c0;
        }
    }
    ctx->pc = 0x30C5DCu;
label_30c5dc:
    // 0x30c5dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x30c5dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30c5e0:
    // 0x30c5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c5e4:
    // 0x30c5e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30c5e8:
    // 0x30c5e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30c5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30c5ec:
    // 0x30c5ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30c5ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_30c5f0:
    // 0x30c5f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30c5f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30c5f4:
    // 0x30c5f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x30c5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_30c5f8:
    // 0x30c5f8: 0x3e00008  jr          $ra
label_30c5fc:
    if (ctx->pc == 0x30C5FCu) {
        ctx->pc = 0x30C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5F8u;
        // 0x30c5fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C600u;
        goto label_30c600;
    }
    ctx->pc = 0x30C5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5F8u;
        // 0x30c5fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C600u;
label_30c600:
    // 0x30c600: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_30c604:
    // 0x30c604: 0x0  nop
    ctx->pc = 0x30c604u;
    // NOP
    ctx->pc = 0x30c608u;
}
