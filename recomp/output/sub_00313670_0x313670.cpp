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

// Function: sub_00313670
// Address: 0x313670 - 0x3136d8
void sub_00313670_0x313670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313670_0x313670");
#endif

    switch (ctx->pc) {
        case 0x31368cu: goto label_31368c;
        case 0x31369cu: goto label_31369c;
        case 0x3136acu: goto label_3136ac;
        case 0x3136c8u: goto label_3136c8;
        default: break;
    }

    ctx->pc = 0x313670u;

    // 0x313670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x313670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x313674: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x313674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x313678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x313678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31367c: 0x8c45bcec  lw          $a1, -0x4314($v0)
    ctx->pc = 0x31367cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBCECu));
    // 0x313680: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x313680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x313684: 0xc0c86b2  jal         func_321AC8
    ctx->pc = 0x313684u;
    SET_GPR_U32(ctx, 31, 0x31368Cu);
    ctx->pc = 0x313688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313684u;
    // 0x313688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AC8u, 0x313684u, 0x31368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31368Cu;
label_31368c:
    // 0x31368c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x313690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313694: 0xc0c86b2  jal         func_321AC8
    ctx->pc = 0x313694u;
    SET_GPR_U32(ctx, 31, 0x31369Cu);
    ctx->pc = 0x313698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313694u;
    // 0x313698: 0x8c45bcf8  lw          $a1, -0x4308($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AC8u, 0x313694u, 0x31369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31369Cu;
label_31369c:
    // 0x31369c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3136a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3136a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136a4: 0xc0c86b2  jal         func_321AC8
    ctx->pc = 0x3136A4u;
    SET_GPR_U32(ctx, 31, 0x3136ACu);
    ctx->pc = 0x3136A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136A4u;
    // 0x3136a8: 0x8c45bcf0  lw          $a1, -0x4310($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AC8u, 0x3136A4u, 0x3136ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136ACu;
label_3136ac:
    // 0x3136ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3136acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3136b0: 0x9043bd00  lbu         $v1, -0x4300($v0)
    ctx->pc = 0x3136b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD00u));
    // 0x3136b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3136B4u;
    {
        const bool branch_taken_0x3136b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136B4u;
        // 0x3136b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136b4) {
            ctx->pc = 0x3136C8u;
            goto label_3136c8;
        }
    }
    ctx->pc = 0x3136BCu;
    // 0x3136bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3136bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136c0: 0xc0c86b2  jal         func_321AC8
    ctx->pc = 0x3136C0u;
    SET_GPR_U32(ctx, 31, 0x3136C8u);
    ctx->pc = 0x3136C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136C0u;
    // 0x3136c4: 0x8c45bcf4  lw          $a1, -0x430C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321AC8u, 0x3136C0u, 0x3136C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136C8u;
label_3136c8:
    // 0x3136c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3136c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3136cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3136ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3136d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3136D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3136D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136D0u;
        // 0x3136d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3136D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3136D8u;
}
