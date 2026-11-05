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

// Function: sub_0010D6C0
// Address: 0x10d6c0 - 0x10d750
void sub_0010D6C0_0x10d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D6C0_0x10d6c0");
#endif

    switch (ctx->pc) {
        case 0x10d6f8u: goto label_10d6f8;
        case 0x10d718u: goto label_10d718;
        default: break;
    }

    ctx->pc = 0x10d6c0u;

    // 0x10d6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d6c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d6c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d6cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10d6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10d6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10d6d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d6d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d6dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d6e0: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10d6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10d6e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10D6E4u;
    {
        const bool branch_taken_0x10d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6E4u;
        // 0x10d6e8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6e4) {
            ctx->pc = 0x10D730u;
            goto label_10d730;
        }
    }
    ctx->pc = 0x10D6ECu;
    // 0x10d6ec: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x10d6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10d6f0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10d6f4: 0x0  nop
    ctx->pc = 0x10d6f4u;
    // NOP
label_10d6f8:
    // 0x10d6f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10d6fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d700: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10d700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10d704: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x10d704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x10d708: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D708u;
    {
        const bool branch_taken_0x10d708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D708u;
        // 0x10d70c: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d708) {
            ctx->pc = 0x10D71Cu;
            goto label_10d71c;
        }
    }
    ctx->pc = 0x10D710u;
    // 0x10d710: 0xc04417e  jal         func_1105F8
    ctx->pc = 0x10D710u;
    SET_GPR_U32(ctx, 31, 0x10D718u);
    ctx->pc = 0x10D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D710u;
    // 0x10d714: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1105F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1105F8u, 0x10D710u, 0x10D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D718u;
label_10d718:
    // 0x10d718: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x10d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10d71c:
    // 0x10d71c: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10d71cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10d720: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10d720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10d724: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10d724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d728: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x10D728u;
    {
        const bool branch_taken_0x10d728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D728u;
        // 0x10d72c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d728) {
            ctx->pc = 0x10D6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d6f8;
        }
    }
    ctx->pc = 0x10D730u;
label_10d730:
    // 0x10d730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d73c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10d73cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d744: 0x3e00008  jr          $ra
    ctx->pc = 0x10D744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D744u;
        // 0x10d748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D74Cu;
    // 0x10d74c: 0x0  nop
    ctx->pc = 0x10d74cu;
    // NOP
    ctx->pc = 0x10d750u;
}
