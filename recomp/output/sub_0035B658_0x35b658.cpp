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

// Function: sub_0035B658
// Address: 0x35b658 - 0x35b6f0
void sub_0035B658_0x35b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B658_0x35b658");
#endif

    switch (ctx->pc) {
        case 0x35b678u: goto label_35b678;
        case 0x35b6a8u: goto label_35b6a8;
        default: break;
    }

    ctx->pc = 0x35b658u;

    // 0x35b658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b65c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b660: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x35b660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x35b664: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x35b664u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x35b668: 0x2610d4c0  addiu       $s0, $s0, -0x2B40
    ctx->pc = 0x35b668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956224));
    // 0x35b66c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35b66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35b670: 0xc0d640c  jal         func_359030
    ctx->pc = 0x35B670u;
    SET_GPR_U32(ctx, 31, 0x35B678u);
    ctx->pc = 0x35B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B670u;
    // 0x35b674: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359030u, 0x35B670u, 0x35B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B678u;
label_35b678:
    // 0x35b678: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x35B678u;
    {
        const bool branch_taken_0x35b678 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35b678) {
            ctx->pc = 0x35B67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B678u;
            // 0x35b67c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B680u;
            goto label_35b680;
        }
    }
    ctx->pc = 0x35B680u;
label_35b680:
    // 0x35b680: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x35b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x35b684: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35b684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35b688: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35b68c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b690: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b694: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x35B694u;
    {
        const bool branch_taken_0x35b694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x35B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B694u;
        // 0x35b698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b694) {
            ctx->pc = 0x35B6C4u;
            goto label_35b6c4;
        }
    }
    ctx->pc = 0x35B69Cu;
    // 0x35b69c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b6a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b6a4: 0x0  nop
    ctx->pc = 0x35b6a4u;
    // NOP
label_35b6a8:
    // 0x35b6a8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B6A8u;
    {
        const bool branch_taken_0x35b6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x35B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6A8u;
        // 0x35b6ac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b6a8) {
            ctx->pc = 0x35B6C4u;
            goto label_35b6c4;
        }
    }
    ctx->pc = 0x35B6B0u;
    // 0x35b6b0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x35b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x35b6b4: 0x0  nop
    ctx->pc = 0x35b6b4u;
    // NOP
    // 0x35b6b8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35B6B8u;
    {
        const bool branch_taken_0x35b6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x35b6b8) {
            ctx->pc = 0x35B6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B6B8u;
            // 0x35b6bc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b6a8;
        }
    }
    ctx->pc = 0x35B6C0u;
    // 0x35b6c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b6c4:
    // 0x35b6c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35B6C4u;
    {
        const bool branch_taken_0x35b6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b6c4) {
            ctx->pc = 0x35B6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B6C4u;
            // 0x35b6c8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B6D4u;
            goto label_35b6d4;
        }
    }
    ctx->pc = 0x35B6CCu;
    // 0x35b6cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35B6CCu;
    {
        const bool branch_taken_0x35b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6CCu;
        // 0x35b6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b6cc) {
            ctx->pc = 0x35B6DCu;
            goto label_35b6dc;
        }
    }
    ctx->pc = 0x35B6D4u;
label_35b6d4:
    // 0x35b6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b6d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35b6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_35b6dc:
    // 0x35b6dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b6e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35b6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6E4u;
        // 0x35b6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B6ECu;
    // 0x35b6ec: 0x0  nop
    ctx->pc = 0x35b6ecu;
    // NOP
    ctx->pc = 0x35b6f0u;
}
