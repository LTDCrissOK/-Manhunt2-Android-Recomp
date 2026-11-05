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

// Function: sub_002175E0
// Address: 0x2175e0 - 0x217670
void sub_002175E0_0x2175e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002175E0_0x2175e0");
#endif

    switch (ctx->pc) {
        case 0x217610u: goto label_217610;
        case 0x217618u: goto label_217618;
        default: break;
    }

    ctx->pc = 0x2175e0u;

    // 0x2175e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2175e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2175e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2175e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2175e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2175e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2175ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2175ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2175f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2175f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2175f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2175f8: 0x244434f0  addiu       $a0, $v0, 0x34F0
    ctx->pc = 0x2175f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2175fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2175fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x217600: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x217600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A34F4u));
    // 0x217604: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x217604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A34FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34FCu, _value); } while (0);
    // 0x217608: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x217608u;
    {
        const bool branch_taken_0x217608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217608u;
        // 0x21760c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217608) {
            ctx->pc = 0x217624u;
            goto label_217624;
        }
    }
    ctx->pc = 0x217610u;
label_217610:
    // 0x217610: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x217610u;
    SET_GPR_U32(ctx, 31, 0x217618u);
    ctx->pc = 0x217614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217610u;
    // 0x217614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x217610u, 0x217618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217618u;
label_217618:
    // 0x217618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x217618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21761c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21761Cu;
    {
        const bool branch_taken_0x21761c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21761Cu;
        // 0x217620: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21761c) {
            ctx->pc = 0x217654u;
            goto label_217654;
        }
    }
    ctx->pc = 0x217624u;
label_217624:
    // 0x217624: 0x262334f0  addiu       $v1, $s1, 0x34F0
    ctx->pc = 0x217624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13552));
    // 0x217628: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x217628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21762c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21762Cu;
    {
        const bool branch_taken_0x21762c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21762Cu;
        // 0x217630: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21762c) {
            ctx->pc = 0x217638u;
            goto label_217638;
        }
    }
    ctx->pc = 0x217634u;
    // 0x217634: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x217634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217638:
    // 0x217638: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217638u;
    {
        const bool branch_taken_0x217638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217638) {
            ctx->pc = 0x217648u;
            goto label_217648;
        }
    }
    ctx->pc = 0x217640u;
    // 0x217640: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x217640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x217644: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x217644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_217648:
    // 0x217648: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x217648u;
    {
        const bool branch_taken_0x217648 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217648u;
        // 0x21764c: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217648) {
            ctx->pc = 0x217610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217610;
        }
    }
    ctx->pc = 0x217650u;
    // 0x217650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217654:
    // 0x217654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21765c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21765cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217660: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217664: 0x3e00008  jr          $ra
    ctx->pc = 0x217664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217664u;
        // 0x217668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21766Cu;
    // 0x21766c: 0x0  nop
    ctx->pc = 0x21766cu;
    // NOP
    ctx->pc = 0x217670u;
}
