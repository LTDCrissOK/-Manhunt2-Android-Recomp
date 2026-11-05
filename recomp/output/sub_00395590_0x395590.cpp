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

// Function: sub_00395590
// Address: 0x395590 - 0x395658
void sub_00395590_0x395590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395590_0x395590");
#endif

    switch (ctx->pc) {
        case 0x3955bcu: goto label_3955bc;
        case 0x3955d0u: goto label_3955d0;
        case 0x39560cu: goto label_39560c;
        case 0x395620u: goto label_395620;
        case 0x39563cu: goto label_39563c;
        default: break;
    }

    ctx->pc = 0x395590u;

    // 0x395590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x395594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39559c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39559cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3955a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3955a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3955a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3955a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3955a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3955a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3955ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3955acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3955b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3955b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3955b4: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x3955B4u;
    SET_GPR_U32(ctx, 31, 0x3955BCu);
    ctx->pc = 0x3955B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3955B4u;
    // 0x3955b8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x3955B4u, 0x3955BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3955BCu;
label_3955bc:
    // 0x3955bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3955bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3955c0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3955C0u;
    {
        const bool branch_taken_0x3955c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3955C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955C0u;
        // 0x3955c4: 0x2484aaa8  addiu       $a0, $a0, -0x5558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955c0) {
            ctx->pc = 0x3955D8u;
            goto label_3955d8;
        }
    }
    ctx->pc = 0x3955C8u;
    // 0x3955c8: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x3955C8u;
    SET_GPR_U32(ctx, 31, 0x3955D0u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3955C8u, 0x3955D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3955D0u;
label_3955d0:
    // 0x3955d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3955D0u;
    {
        const bool branch_taken_0x3955d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3955D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955D0u;
        // 0x3955d4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955d0) {
            ctx->pc = 0x395640u;
            goto label_395640;
        }
    }
    ctx->pc = 0x3955D8u;
label_3955d8:
    // 0x3955d8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3955d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3955dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3955dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3955e0: 0x10710016  beq         $v1, $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3955E0u;
    {
        const bool branch_taken_0x3955e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3955E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955E0u;
        // 0x3955e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955e0) {
            ctx->pc = 0x39563Cu;
            goto label_39563c;
        }
    }
    ctx->pc = 0x3955E8u;
    // 0x3955e8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3955E8u;
    {
        const bool branch_taken_0x3955e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3955e8) {
            ctx->pc = 0x3955ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3955E8u;
            // 0x3955ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3955F8u;
            goto label_3955f8;
        }
    }
    ctx->pc = 0x3955F0u;
    // 0x3955f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3955F0u;
    {
        const bool branch_taken_0x3955f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3955F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955F0u;
        // 0x3955f4: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955f0) {
            ctx->pc = 0x39563Cu;
            goto label_39563c;
        }
    }
    ctx->pc = 0x3955F8u;
label_3955f8:
    // 0x3955f8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3955F8u;
    {
        const bool branch_taken_0x3955f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3955f8) {
            ctx->pc = 0x395618u;
            goto label_395618;
        }
    }
    ctx->pc = 0x395600u;
    // 0x395600: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x395604: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x395604u;
    SET_GPR_U32(ctx, 31, 0x39560Cu);
    ctx->pc = 0x395608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395604u;
    // 0x395608: 0x2484aad0  addiu       $a0, $a0, -0x5530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x395604u, 0x39560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39560Cu;
label_39560c:
    // 0x39560c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x39560Cu;
    {
        const bool branch_taken_0x39560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39560Cu;
        // 0x395610: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39560c) {
            ctx->pc = 0x395640u;
            goto label_395640;
        }
    }
    ctx->pc = 0x395614u;
    // 0x395614: 0x0  nop
    ctx->pc = 0x395614u;
    // NOP
label_395618:
    // 0x395618: 0xc0e673a  jal         func_399CE8
    ctx->pc = 0x395618u;
    SET_GPR_U32(ctx, 31, 0x395620u);
    ctx->pc = 0x399CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CE8u, 0x395618u, 0x395620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395620u;
label_395620:
    // 0x395620: 0xa2110003  sb          $s1, 0x3($s0)
    ctx->pc = 0x395620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x395624: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x395624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x395628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x395628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39562c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39562cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395630: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x395630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395634: 0xc0e4fb8  jal         func_393EE0
    ctx->pc = 0x395634u;
    SET_GPR_U32(ctx, 31, 0x39563Cu);
    ctx->pc = 0x395638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395634u;
    // 0x395638: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x395634u, 0x39563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39563Cu;
label_39563c:
    // 0x39563c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x39563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_395640:
    // 0x395640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x395644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39564c: 0x3e00008  jr          $ra
    ctx->pc = 0x39564Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39564Cu;
        // 0x395650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39564Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395654u;
    // 0x395654: 0x0  nop
    ctx->pc = 0x395654u;
    // NOP
    ctx->pc = 0x395658u;
}
