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

// Function: sub_00217420
// Address: 0x217420 - 0x2174a8
void sub_00217420_0x217420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217420_0x217420");
#endif

    switch (ctx->pc) {
        case 0x217448u: goto label_217448;
        case 0x217450u: goto label_217450;
        case 0x217464u: goto label_217464;
        default: break;
    }

    ctx->pc = 0x217420u;

    // 0x217420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217424: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x217424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x217428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21742c: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x21742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x217430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217438: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x21743c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21743cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x217440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217440u;
    {
        const bool branch_taken_0x217440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217440u;
        // 0x217444: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217440) {
            ctx->pc = 0x217464u;
            goto label_217464;
        }
    }
    ctx->pc = 0x217448u;
label_217448:
    // 0x217448: 0xc083ba8  jal         func_20EEA0
    ctx->pc = 0x217448u;
    SET_GPR_U32(ctx, 31, 0x217450u);
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x217448u, 0x217450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217450u;
label_217450:
    // 0x217450: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x217450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x217454: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217454u;
    {
        const bool branch_taken_0x217454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x217458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217454u;
        // 0x217458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217454) {
            ctx->pc = 0x217464u;
            goto label_217464;
        }
    }
    ctx->pc = 0x21745Cu;
    // 0x21745c: 0xc095b5c  jal         func_256D70
    ctx->pc = 0x21745Cu;
    SET_GPR_U32(ctx, 31, 0x217464u);
    ctx->pc = 0x256D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256D70u, 0x21745Cu, 0x217464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217464u;
label_217464:
    // 0x217464: 0x26233500  addiu       $v1, $s1, 0x3500
    ctx->pc = 0x217464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13568));
    // 0x217468: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21746c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21746Cu;
    {
        const bool branch_taken_0x21746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21746Cu;
        // 0x217470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21746c) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x217474u;
    // 0x217474: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x217474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217478:
    // 0x217478: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217478u;
    {
        const bool branch_taken_0x217478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217478u;
        // 0x21747c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217478) {
            ctx->pc = 0x217488u;
            goto label_217488;
        }
    }
    ctx->pc = 0x217480u;
    // 0x217480: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x217480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x217484: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x217484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_217488:
    // 0x217488: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x217488u;
    {
        const bool branch_taken_0x217488 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217488u;
        // 0x21748c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217488) {
            ctx->pc = 0x217448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217448;
        }
    }
    ctx->pc = 0x217490u;
    // 0x217490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217498: 0x3e00008  jr          $ra
    ctx->pc = 0x217498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217498u;
        // 0x21749c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174A0u;
    // 0x2174a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2174a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2174a4: 0x0  nop
    ctx->pc = 0x2174a4u;
    // NOP
    ctx->pc = 0x2174a8u;
}
