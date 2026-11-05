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

// Function: sub_0034E608
// Address: 0x34e608 - 0x34e6d8
void sub_0034E608_0x34e608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E608_0x34e608");
#endif

    switch (ctx->pc) {
        case 0x34e628u: goto label_34e628;
        case 0x34e658u: goto label_34e658;
        case 0x34e690u: goto label_34e690;
        case 0x34e6b4u: goto label_34e6b4;
        default: break;
    }

    ctx->pc = 0x34e608u;

    // 0x34e608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34e610: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34e610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34e614: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34e614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34e61c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x34e61cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x34e620: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34e620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34e624: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x34e624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_34e628:
    // 0x34e628: 0x8e22c60c  lw          $v0, -0x39F4($s1)
    ctx->pc = 0x34e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952460)));
    // 0x34e62c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34e630: 0x90430045  lbu         $v1, 0x45($v0)
    ctx->pc = 0x34e630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 69)));
    // 0x34e634: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34E634u;
    {
        const bool branch_taken_0x34e634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e634) {
            ctx->pc = 0x34E638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E634u;
            // 0x34e638: 0xa0400045  sb          $zero, 0x45($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E63Cu;
            goto label_34e63c;
        }
    }
    ctx->pc = 0x34E63Cu;
label_34e63c:
    // 0x34e63c: 0x8e22c60c  lw          $v0, -0x39F4($s1)
    ctx->pc = 0x34e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952460)));
    // 0x34e640: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34e644: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x34e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x34e648: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34E648u;
    {
        const bool branch_taken_0x34e648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E648u;
        // 0x34e64c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e648) {
            ctx->pc = 0x34E664u;
            goto label_34e664;
        }
    }
    ctx->pc = 0x34E650u;
    // 0x34e650: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x34E650u;
    SET_GPR_U32(ctx, 31, 0x34E658u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x34E650u, 0x34E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E658u;
label_34e658:
    // 0x34e658: 0x8e23c60c  lw          $v1, -0x39F4($s1)
    ctx->pc = 0x34e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952460)));
    // 0x34e65c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x34e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x34e660: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x34e660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_34e664:
    // 0x34e664: 0x641fff0  bgez        $s2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x34E664u;
    {
        const bool branch_taken_0x34e664 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x34E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E664u;
        // 0x34e668: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e664) {
            ctx->pc = 0x34E628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e628;
        }
    }
    ctx->pc = 0x34E66Cu;
    // 0x34e66c: 0x8e24c60c  lw          $a0, -0x39F4($s1)
    ctx->pc = 0x34e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952460)));
    // 0x34e670: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34E670u;
    {
        const bool branch_taken_0x34e670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E670u;
        // 0x34e674: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e670) {
            ctx->pc = 0x34E6B4u;
            goto label_34e6b4;
        }
    }
    ctx->pc = 0x34E678u;
    // 0x34e678: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x34e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x34e67c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x34e67cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34e680: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x34e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34e684: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E684u;
    {
        const bool branch_taken_0x34e684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E684u;
        // 0x34e688: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e684) {
            ctx->pc = 0x34E6ACu;
            goto label_34e6ac;
        }
    }
    ctx->pc = 0x34E68Cu;
    // 0x34e68c: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x34e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
label_34e690:
    // 0x34e690: 0x0  nop
    ctx->pc = 0x34e690u;
    // NOP
    // 0x34e694: 0x0  nop
    ctx->pc = 0x34e694u;
    // NOP
    // 0x34e698: 0x0  nop
    ctx->pc = 0x34e698u;
    // NOP
    // 0x34e69c: 0x0  nop
    ctx->pc = 0x34e69cu;
    // NOP
    // 0x34e6a0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x34E6A0u;
    {
        const bool branch_taken_0x34e6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6A0u;
        // 0x34e6a4: 0x2442ffb0  addiu       $v0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6a0) {
            ctx->pc = 0x34E690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e690;
        }
    }
    ctx->pc = 0x34E6A8u;
    // 0x34e6a8: 0x8e24c60c  lw          $a0, -0x39F4($s1)
    ctx->pc = 0x34e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952460)));
label_34e6ac:
    // 0x34e6ac: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x34E6ACu;
    SET_GPR_U32(ctx, 31, 0x34E6B4u);
    ctx->pc = 0x34E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E6ACu;
    // 0x34e6b0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x34E6ACu, 0x34E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E6B4u;
label_34e6b4:
    // 0x34e6b4: 0xae20c60c  sw          $zero, -0x39F4($s1)
    ctx->pc = 0x34e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952460), GPR_U32(ctx, 0));
    // 0x34e6b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34e6bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34e6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e6c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34e6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34e6c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34e6c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e6c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34e6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34e6cc: 0xac402cec  sw          $zero, 0x2CEC($v0)
    ctx->pc = 0x34e6ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CECu, _value); } while (0);
    // 0x34e6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x34E6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E6D0u;
        // 0x34e6d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E6D8u;
}
