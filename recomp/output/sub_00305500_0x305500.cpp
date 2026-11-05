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

// Function: sub_00305500
// Address: 0x305500 - 0x305588
void sub_00305500_0x305500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305500_0x305500");
#endif

    ctx->pc = 0x305500u;

    // 0x305500: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x305500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x305504: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x305504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x305508: 0x8c456570  lw          $a1, 0x6570($v0)
    ctx->pc = 0x305508u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5A6570u));
    // 0x30550c: 0x8083bb58  lb          $v1, -0x44A8($a0)
    ctx->pc = 0x30550cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3FBB58u));
    // 0x305510: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305510u;
    {
        const bool branch_taken_0x305510 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x305514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305510u;
        // 0x305514: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305510) {
            ctx->pc = 0x305520u;
            goto label_305520;
        }
    }
    ctx->pc = 0x305518u;
    // 0x305518: 0x3e00008  jr          $ra
    ctx->pc = 0x305518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305518u;
        // 0x30551c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305520u;
label_305520:
    // 0x305520: 0x8046bb59  lb          $a2, -0x44A7($v0)
    ctx->pc = 0x305520u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949721)));
    // 0x305524: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x305524u;
    {
        const bool branch_taken_0x305524 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x305528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305524u;
        // 0x305528: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305524) {
            ctx->pc = 0x305534u;
            goto label_305534;
        }
    }
    ctx->pc = 0x30552Cu;
    // 0x30552c: 0x3e00008  jr          $ra
    ctx->pc = 0x30552Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30552Cu;
        // 0x305530: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30552Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305534u;
label_305534:
    // 0x305534: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x305534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x305538: 0x8043bb5a  lb          $v1, -0x44A6($v0)
    ctx->pc = 0x305538u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949722)));
    // 0x30553c: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x30553Cu;
    {
        const bool branch_taken_0x30553c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x305540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30553Cu;
        // 0x305540: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30553c) {
            ctx->pc = 0x30556Cu;
            goto label_30556c;
        }
    }
    ctx->pc = 0x305544u;
    // 0x305544: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x305544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x305548: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305548u;
    {
        const bool branch_taken_0x305548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305548u;
        // 0x30554c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305548) {
            ctx->pc = 0x30556Cu;
            goto label_30556c;
        }
    }
    ctx->pc = 0x305550u;
    // 0x305550: 0x8c43bb50  lw          $v1, -0x44B0($v0)
    ctx->pc = 0x305550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949712)));
    // 0x305554: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x305554u;
    {
        const bool branch_taken_0x305554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305554u;
        // 0x305558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305554) {
            ctx->pc = 0x30557Cu;
            goto label_30557c;
        }
    }
    ctx->pc = 0x30555Cu;
    // 0x30555c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305560: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x305560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x305564: 0x3e00008  jr          $ra
    ctx->pc = 0x305564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305564u;
        // 0x305568: 0xa0e3bb5a  sb          $v1, -0x44A6($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4294949722), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30556Cu;
label_30556c:
    // 0x30556c: 0x80e3bb5a  lb          $v1, -0x44A6($a3)
    ctx->pc = 0x30556cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294949722)));
    // 0x305570: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x305570u;
    {
        const bool branch_taken_0x305570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x305574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305570u;
        // 0x305574: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305570) {
            ctx->pc = 0x30557Cu;
            goto label_30557c;
        }
    }
    ctx->pc = 0x305578u;
    // 0x305578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x305578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30557c:
    // 0x30557c: 0x3e00008  jr          $ra
    ctx->pc = 0x30557Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30557Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305584u;
    // 0x305584: 0x0  nop
    ctx->pc = 0x305584u;
    // NOP
    ctx->pc = 0x305588u;
}
