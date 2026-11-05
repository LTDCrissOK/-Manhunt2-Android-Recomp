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

// Function: sub_00254760
// Address: 0x254760 - 0x2547b0
void sub_00254760_0x254760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254760_0x254760");
#endif

    switch (ctx->pc) {
        case 0x254760u: goto label_254760;
        case 0x254764u: goto label_254764;
        case 0x254768u: goto label_254768;
        case 0x25476cu: goto label_25476c;
        case 0x254770u: goto label_254770;
        case 0x254774u: goto label_254774;
        case 0x254778u: goto label_254778;
        case 0x25477cu: goto label_25477c;
        case 0x254780u: goto label_254780;
        case 0x254784u: goto label_254784;
        case 0x254788u: goto label_254788;
        case 0x25478cu: goto label_25478c;
        case 0x254790u: goto label_254790;
        case 0x254794u: goto label_254794;
        case 0x254798u: goto label_254798;
        case 0x25479cu: goto label_25479c;
        case 0x2547a0u: goto label_2547a0;
        case 0x2547a4u: goto label_2547a4;
        case 0x2547a8u: goto label_2547a8;
        case 0x2547acu: goto label_2547ac;
        default: break;
    }

    ctx->pc = 0x254760u;

label_254760:
    // 0x254760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_254764:
    // 0x254764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_254768:
    // 0x254768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_25476c:
    // 0x25476c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25476cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_254770:
    // 0x254770: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_254774:
    // 0x254774: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x254774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_254778:
    // 0x254778: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_25477c:
    if (ctx->pc == 0x25477Cu) {
        ctx->pc = 0x25477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254778u;
        // 0x25477c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254780u;
        goto label_254780;
    }
    ctx->pc = 0x254778u;
    {
        const bool branch_taken_0x254778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254778) {
            ctx->pc = 0x25477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254778u;
            // 0x25477c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2547A0u;
            goto label_2547a0;
        }
    }
    ctx->pc = 0x254780u;
label_254780:
    // 0x254780: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x254780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_254784:
    // 0x254784: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x254784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_254788:
    // 0x254788: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x254788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_25478c:
    // 0x25478c: 0x40f809  jalr        $v0
label_254790:
    if (ctx->pc == 0x254790u) {
        ctx->pc = 0x254794u;
        goto label_254794;
    }
    ctx->pc = 0x25478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254794u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25478Cu, 0x254794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254794u;
label_254794:
    // 0x254794: 0xc0944f6  jal         func_2513D8
label_254798:
    if (ctx->pc == 0x254798u) {
        ctx->pc = 0x254798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254794u;
        // 0x254798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25479Cu;
        goto label_25479c;
    }
    ctx->pc = 0x254794u;
    SET_GPR_U32(ctx, 31, 0x25479Cu);
    ctx->pc = 0x254798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254794u;
    // 0x254798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x254794u, 0x25479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25479Cu;
label_25479c:
    // 0x25479c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2547a0:
    // 0x2547a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2547a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2547a4:
    // 0x2547a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2547a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2547a8:
    // 0x2547a8: 0x3e00008  jr          $ra
label_2547ac:
    if (ctx->pc == 0x2547ACu) {
        ctx->pc = 0x2547ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547A8u;
        // 0x2547ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547B0u;
        goto label_fallthrough_0x2547a8;
    }
    ctx->pc = 0x2547A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2547ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547A8u;
        // 0x2547ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2547A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2547a8:
    ctx->pc = 0x2547B0u;
}
