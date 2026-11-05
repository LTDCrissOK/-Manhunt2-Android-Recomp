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

// Function: sub_002B8640
// Address: 0x2b8640 - 0x2b86d0
void sub_002B8640_0x2b8640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8640_0x2b8640");
#endif

    switch (ctx->pc) {
        case 0x2b8660u: goto label_2b8660;
        case 0x2b8668u: goto label_2b8668;
        case 0x2b869cu: goto label_2b869c;
        case 0x2b86acu: goto label_2b86ac;
        default: break;
    }

    ctx->pc = 0x2b8640u;

    // 0x2b8640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b864c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b864cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b8654: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b8654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8658: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B8658u;
    SET_GPR_U32(ctx, 31, 0x2B8660u);
    ctx->pc = 0x2B865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8658u;
    // 0x2b865c: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B8658u, 0x2B8660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8660u;
label_2b8660:
    // 0x2b8660: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B8660u;
    SET_GPR_U32(ctx, 31, 0x2B8668u);
    ctx->pc = 0x2B8664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8660u;
    // 0x2b8664: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B8660u, 0x2B8668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8668u;
label_2b8668:
    // 0x2b8668: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b8668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b866c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b866cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b8670: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8670u;
    {
        const bool branch_taken_0x2b8670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8670u;
        // 0x2b8674: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8670) {
            ctx->pc = 0x2B8694u;
            goto label_2b8694;
        }
    }
    ctx->pc = 0x2B8678u;
    // 0x2b8678: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b8678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b867c: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b867cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8680: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b8680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b8684: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b8684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b8688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b868c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B868Cu;
    {
        const bool branch_taken_0x2b868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B868Cu;
        // 0x2b8690: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b868c) {
            ctx->pc = 0x2B86B8u;
            goto label_2b86b8;
        }
    }
    ctx->pc = 0x2B8694u;
label_2b8694:
    // 0x2b8694: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B8694u;
    SET_GPR_U32(ctx, 31, 0x2B869Cu);
    ctx->pc = 0x2B8698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8694u;
    // 0x2b8698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B8694u, 0x2B869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B869Cu;
label_2b869c:
    // 0x2b869c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B869Cu;
    {
        const bool branch_taken_0x2b869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B869Cu;
        // 0x2b86a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b869c) {
            ctx->pc = 0x2B86B8u;
            goto label_2b86b8;
        }
    }
    ctx->pc = 0x2B86A4u;
    // 0x2b86a4: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B86A4u;
    SET_GPR_U32(ctx, 31, 0x2B86ACu);
    ctx->pc = 0x2B86A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B86A4u;
    // 0x2b86a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B86A4u, 0x2B86ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86ACu;
label_2b86ac:
    // 0x2b86ac: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2b86acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b86b0: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2b86b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b86b8:
    // 0x2b86b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b86b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b86bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b86bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b86c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b86c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b86c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B86C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86C4u;
        // 0x2b86c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B86CCu;
    // 0x2b86cc: 0x0  nop
    ctx->pc = 0x2b86ccu;
    // NOP
    ctx->pc = 0x2b86d0u;
}
