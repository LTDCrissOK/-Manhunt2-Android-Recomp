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

// Function: sub_0029D598
// Address: 0x29d598 - 0x29d608
void sub_0029D598_0x29d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D598_0x29d598");
#endif

    switch (ctx->pc) {
        case 0x29d598u: goto label_29d598;
        case 0x29d59cu: goto label_29d59c;
        case 0x29d5a0u: goto label_29d5a0;
        case 0x29d5a4u: goto label_29d5a4;
        case 0x29d5a8u: goto label_29d5a8;
        case 0x29d5acu: goto label_29d5ac;
        case 0x29d5b0u: goto label_29d5b0;
        case 0x29d5b4u: goto label_29d5b4;
        case 0x29d5b8u: goto label_29d5b8;
        case 0x29d5bcu: goto label_29d5bc;
        case 0x29d5c0u: goto label_29d5c0;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5c8u: goto label_29d5c8;
        case 0x29d5ccu: goto label_29d5cc;
        case 0x29d5d0u: goto label_29d5d0;
        case 0x29d5d4u: goto label_29d5d4;
        case 0x29d5d8u: goto label_29d5d8;
        case 0x29d5dcu: goto label_29d5dc;
        case 0x29d5e0u: goto label_29d5e0;
        case 0x29d5e4u: goto label_29d5e4;
        case 0x29d5e8u: goto label_29d5e8;
        case 0x29d5ecu: goto label_29d5ec;
        case 0x29d5f0u: goto label_29d5f0;
        case 0x29d5f4u: goto label_29d5f4;
        case 0x29d5f8u: goto label_29d5f8;
        case 0x29d5fcu: goto label_29d5fc;
        case 0x29d600u: goto label_29d600;
        case 0x29d604u: goto label_29d604;
        default: break;
    }

    ctx->pc = 0x29d598u;

label_29d598:
    // 0x29d598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29d59c:
    // 0x29d59c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29d5a0:
    // 0x29d5a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29d5a4:
    // 0x29d5a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d5a8:
    // 0x29d5a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29d5ac:
    // 0x29d5ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_29d5b0:
    // 0x29d5b0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x29d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_29d5b4:
    // 0x29d5b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29d5b8:
    if (ctx->pc == 0x29D5B8u) {
        ctx->pc = 0x29D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5B4u;
        // 0x29d5b8: 0x24920028  addiu       $s2, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5BCu;
        goto label_29d5bc;
    }
    ctx->pc = 0x29D5B4u;
    {
        const bool branch_taken_0x29d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5B4u;
        // 0x29d5b8: 0x24920028  addiu       $s2, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5b4) {
            ctx->pc = 0x29D5F0u;
            goto label_29d5f0;
        }
    }
    ctx->pc = 0x29D5BCu;
label_29d5bc:
    // 0x29d5bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x29d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29d5c0:
    // 0x29d5c0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x29d5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d5c4:
    // 0x29d5c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x29d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_29d5c8:
    // 0x29d5c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29d5cc:
    // 0x29d5cc: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29d5d0:
    // 0x29d5d0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x29d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_29d5d4:
    // 0x29d5d4: 0x40f809  jalr        $v0
label_29d5d8:
    if (ctx->pc == 0x29D5D8u) {
        ctx->pc = 0x29D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D4u;
        // 0x29d5d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5DCu;
        goto label_29d5dc;
    }
    ctx->pc = 0x29D5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D5DCu);
        ctx->pc = 0x29D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5D4u;
        // 0x29d5d8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D5D4u, 0x29D5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D5DCu;
label_29d5dc:
    // 0x29d5dc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29d5e0:
    // 0x29d5e0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x29d5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_29d5e4:
    // 0x29d5e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d5e8:
    // 0x29d5e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_29d5ec:
    if (ctx->pc == 0x29D5ECu) {
        ctx->pc = 0x29D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5E8u;
        // 0x29d5ec: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D5F0u;
        goto label_29d5f0;
    }
    ctx->pc = 0x29D5E8u;
    {
        const bool branch_taken_0x29d5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5E8u;
        // 0x29d5ec: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5e8) {
            ctx->pc = 0x29D5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d5c0;
        }
    }
    ctx->pc = 0x29D5F0u;
label_29d5f0:
    // 0x29d5f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d5f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d5f4:
    // 0x29d5f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29d5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29d5f8:
    // 0x29d5f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29d5f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d5fc:
    // 0x29d5fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29d5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29d600:
    // 0x29d600: 0x3e00008  jr          $ra
label_29d604:
    if (ctx->pc == 0x29D604u) {
        ctx->pc = 0x29D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D600u;
        // 0x29d604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D608u;
        goto label_fallthrough_0x29d600;
    }
    ctx->pc = 0x29D600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D600u;
        // 0x29d604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d600:
    ctx->pc = 0x29D608u;
}
