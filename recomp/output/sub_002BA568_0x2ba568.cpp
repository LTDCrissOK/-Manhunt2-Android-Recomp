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

// Function: sub_002BA568
// Address: 0x2ba568 - 0x2ba620
void sub_002BA568_0x2ba568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA568_0x2ba568");
#endif

    switch (ctx->pc) {
        case 0x2ba5b8u: goto label_2ba5b8;
        case 0x2ba5c0u: goto label_2ba5c0;
        case 0x2ba5d0u: goto label_2ba5d0;
        default: break;
    }

    ctx->pc = 0x2ba568u;

    // 0x2ba568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ba56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba570: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ba570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ba574: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ba574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ba578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba57c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ba57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ba580: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ba580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba584: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ba584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ba588: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ba588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba58c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ba58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ba590: 0x138102  srl         $s0, $s3, 4
    ctx->pc = 0x2ba590u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x2ba594: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ba594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ba598: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2ba598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2ba59c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA59Cu;
    {
        const bool branch_taken_0x2ba59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA59Cu;
        // 0x2ba5a0: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba59c) {
            ctx->pc = 0x2BA5C4u;
            goto label_2ba5c4;
        }
    }
    ctx->pc = 0x2BA5A4u;
    // 0x2ba5a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba5a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA5A8u;
    {
        const bool branch_taken_0x2ba5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba5a8) {
            ctx->pc = 0x2BA5B8u;
            goto label_2ba5b8;
        }
    }
    ctx->pc = 0x2BA5B0u;
    // 0x2ba5b0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2BA5B0u;
    SET_GPR_U32(ctx, 31, 0x2BA5B8u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2BA5B0u, 0x2BA5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5B8u;
label_2ba5b8:
    // 0x2ba5b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2BA5B8u;
    SET_GPR_U32(ctx, 31, 0x2BA5C0u);
    ctx->pc = 0x2BA5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5B8u;
    // 0x2ba5bc: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2BA5B8u, 0x2BA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5C0u;
label_2ba5c0:
    // 0x2ba5c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba5c4:
    // 0x2ba5c4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2ba5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2ba5c8: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x2BA5C8u;
    {
        const bool branch_taken_0x2ba5c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5C8u;
        // 0x2ba5cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5c8) {
            ctx->pc = 0x2BA5FCu;
            goto label_2ba5fc;
        }
    }
    ctx->pc = 0x2BA5D0u;
label_2ba5d0:
    // 0x2ba5d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba5d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ba5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba5d8: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2ba5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2ba5dc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2ba5dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba5e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ba5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ba5e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ba5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ba5e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ba5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ba5ec: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2ba5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ba5f0: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x2ba5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2ba5f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BA5F4u;
    {
        const bool branch_taken_0x2ba5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5F4u;
        // 0x2ba5f8: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5f4) {
            ctx->pc = 0x2BA5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba5d0;
        }
    }
    ctx->pc = 0x2BA5FCu;
label_2ba5fc:
    // 0x2ba5fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ba600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba604: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ba604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba608: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ba608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba60c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ba60cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba610: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ba610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ba614: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA614u;
        // 0x2ba618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA61Cu;
    // 0x2ba61c: 0x0  nop
    ctx->pc = 0x2ba61cu;
    // NOP
    ctx->pc = 0x2ba620u;
}
