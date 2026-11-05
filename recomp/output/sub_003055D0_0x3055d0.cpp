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

// Function: sub_003055D0
// Address: 0x3055d0 - 0x3056a0
void sub_003055D0_0x3055d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003055D0_0x3055d0");
#endif

    ctx->pc = 0x3055d0u;

    // 0x3055d0: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x3055d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x3055d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3055d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3055d8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3055d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3055dc: 0x80a2bb59  lb          $v0, -0x44A7($a1)
    ctx->pc = 0x3055dcu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3FBB59u));
    // 0x3055e0: 0x24636560  addiu       $v1, $v1, 0x6560
    ctx->pc = 0x3055e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25952));
    // 0x3055e4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3055e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5A6570u));
    // 0x3055e8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3055e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3055ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3055ECu;
    {
        const bool branch_taken_0x3055ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3055ECu;
        // 0x3055f0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3055ec) {
            ctx->pc = 0x305610u;
            goto label_305610;
        }
    }
    ctx->pc = 0x3055F4u;
    // 0x3055f4: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x3055f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x3055f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3055f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3055fc: 0x8c6565b0  lw          $a1, 0x65B0($v1)
    ctx->pc = 0x3055fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5A65B0u));
    // 0x305600: 0x8082bb5c  lb          $v0, -0x44A4($a0)
    ctx->pc = 0x305600u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3FBB5Cu));
    // 0x305604: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x305604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x305608: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305608u;
    {
        const bool branch_taken_0x305608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305608u;
        // 0x30560c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305608) {
            ctx->pc = 0x305618u;
            goto label_305618;
        }
    }
    ctx->pc = 0x305610u;
label_305610:
    // 0x305610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305614: 0xa062bb5f  sb          $v0, -0x44A1($v1)
    ctx->pc = 0x305614u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294949727), (uint8_t)GPR_U32(ctx, 2));
label_305618:
    // 0x305618: 0x24c36560  addiu       $v1, $a2, 0x6560
    ctx->pc = 0x305618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 25952));
    // 0x30561c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30561cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x305620: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x305620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x305624: 0x8082bb5a  lb          $v0, -0x44A6($a0)
    ctx->pc = 0x305624u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3FBB5Au));
    // 0x305628: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x305628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30562c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30562Cu;
    {
        const bool branch_taken_0x30562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30562Cu;
        // 0x305630: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30562c) {
            ctx->pc = 0x305650u;
            goto label_305650;
        }
    }
    ctx->pc = 0x305634u;
    // 0x305634: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x305634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x305638: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x305638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x30563c: 0x8c6565b0  lw          $a1, 0x65B0($v1)
    ctx->pc = 0x30563cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5A65B0u));
    // 0x305640: 0x8082bb5d  lb          $v0, -0x44A3($a0)
    ctx->pc = 0x305640u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3FBB5Du));
    // 0x305644: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x305644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x305648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x305648u;
    {
        const bool branch_taken_0x305648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305648u;
        // 0x30564c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305648) {
            ctx->pc = 0x305658u;
            goto label_305658;
        }
    }
    ctx->pc = 0x305650u;
label_305650:
    // 0x305650: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305654: 0xa062bb60  sb          $v0, -0x44A0($v1)
    ctx->pc = 0x305654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294949728), (uint8_t)GPR_U32(ctx, 2));
label_305658:
    // 0x305658: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x305658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x30565c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x30565cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x305660: 0x8c4565f0  lw          $a1, 0x65F0($v0)
    ctx->pc = 0x305660u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5A65F0u));
    // 0x305664: 0x8083bb5e  lb          $v1, -0x44A2($a0)
    ctx->pc = 0x305664u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3FBB5Eu));
    // 0x305668: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x305668u;
    {
        const bool branch_taken_0x305668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x30566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305668u;
        // 0x30566c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305668) {
            ctx->pc = 0x305678u;
            goto label_305678;
        }
    }
    ctx->pc = 0x305670u;
    // 0x305670: 0x3e00008  jr          $ra
    ctx->pc = 0x305670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305670u;
        // 0x305674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305678u;
label_305678:
    // 0x305678: 0x8043bb5f  lb          $v1, -0x44A1($v0)
    ctx->pc = 0x305678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949727)));
    // 0x30567c: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30567Cu;
    {
        const bool branch_taken_0x30567c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x305680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30567Cu;
        // 0x305680: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30567c) {
            ctx->pc = 0x305698u;
            goto label_305698;
        }
    }
    ctx->pc = 0x305684u;
    // 0x305684: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x305684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x305688: 0x8064bb60  lb          $a0, -0x44A0($v1)
    ctx->pc = 0x305688u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294949728)));
    // 0x30568c: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x30568cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x305690: 0x3e00008  jr          $ra
    ctx->pc = 0x305690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305690u;
        // 0x305694: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305698u;
label_305698:
    // 0x305698: 0x3e00008  jr          $ra
    ctx->pc = 0x305698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305698u;
        // 0x30569c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3056A0u;
}
