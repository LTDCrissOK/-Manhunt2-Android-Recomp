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

// Function: sub_00205640
// Address: 0x205640 - 0x2056a0
void sub_00205640_0x205640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205640_0x205640");
#endif

    switch (ctx->pc) {
        case 0x205678u: goto label_205678;
        case 0x20568cu: goto label_20568c;
        default: break;
    }

    ctx->pc = 0x205640u;

    // 0x205640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205644: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x205644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x205648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20564c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x205650: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x205650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205654: 0x904393c0  lbu         $v1, -0x6C40($v0)
    ctx->pc = 0x205654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F93C0u));
    // 0x205658: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x205658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20565c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20565Cu;
    {
        const bool branch_taken_0x20565c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20565Cu;
        // 0x205660: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20565c) {
            ctx->pc = 0x20568Cu;
            goto label_20568c;
        }
    }
    ctx->pc = 0x205664u;
    // 0x205664: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x205664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x205668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20566c: 0x2484c100  addiu       $a0, $a0, -0x3F00
    ctx->pc = 0x20566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    // 0x205670: 0xc082a9c  jal         func_20AA70
    ctx->pc = 0x205670u;
    SET_GPR_U32(ctx, 31, 0x205678u);
    ctx->pc = 0x205674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205670u;
    // 0x205674: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA70u, 0x205670u, 0x205678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205678u;
label_205678:
    // 0x205678: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205678u;
    {
        const bool branch_taken_0x205678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205678u;
        // 0x20567c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205678) {
            ctx->pc = 0x20568Cu;
            goto label_20568c;
        }
    }
    ctx->pc = 0x205680u;
    // 0x205680: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205684: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x205684u;
    SET_GPR_U32(ctx, 31, 0x20568Cu);
    ctx->pc = 0x205688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205684u;
    // 0x205688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x205684u, 0x20568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20568Cu;
label_20568c:
    // 0x20568c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20568cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x205694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205698: 0x3e00008  jr          $ra
    ctx->pc = 0x205698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205698u;
        // 0x20569c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2056A0u;
}
