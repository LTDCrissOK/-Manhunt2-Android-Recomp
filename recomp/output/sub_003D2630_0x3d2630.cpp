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

// Function: sub_003D2630
// Address: 0x3d2630 - 0x3d26c8
void sub_003D2630_0x3d2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2630_0x3d2630");
#endif

    switch (ctx->pc) {
        case 0x3d2658u: goto label_3d2658;
        case 0x3d2664u: goto label_3d2664;
        case 0x3d2670u: goto label_3d2670;
        case 0x3d2690u: goto label_3d2690;
        case 0x3d26a8u: goto label_3d26a8;
        case 0x3d26b4u: goto label_3d26b4;
        default: break;
    }

    ctx->pc = 0x3d2630u;

    // 0x3d2630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d2634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d2634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d2638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d2638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d263c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d2640: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x3d2640u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x3d2644: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x3d2644u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x3d2648: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x3d2648u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3d264c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d264cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d2650: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3D2650u;
    SET_GPR_U32(ctx, 31, 0x3D2658u);
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3D2650u, 0x3D2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2658u;
label_3d2658:
    // 0x3d2658: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d2658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d265c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3D265Cu;
    SET_GPR_U32(ctx, 31, 0x3D2664u);
    ctx->pc = 0x3D2660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D265Cu;
    // 0x3d2660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3D265Cu, 0x3D2664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2664u;
label_3d2664:
    // 0x3d2664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d2664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2668: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3D2668u;
    SET_GPR_U32(ctx, 31, 0x3D2670u);
    ctx->pc = 0x3D266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2668u;
    // 0x3d266c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3D2668u, 0x3D2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2670u;
label_3d2670:
    // 0x3d2670: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d2670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2674: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d2674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3d2678: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d2678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3d267c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3d267cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3d2680: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3d2680u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d2684: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3d2684u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3d2688: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3D2688u;
    SET_GPR_U32(ctx, 31, 0x3D2690u);
    ctx->pc = 0x3D268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2688u;
    // 0x3d268c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3D2688u, 0x3D2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2690u;
label_3d2690:
    // 0x3d2690: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D2690u;
    {
        const bool branch_taken_0x3d2690 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3D2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2690u;
        // 0x3d2694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2690) {
            ctx->pc = 0x3D26ACu;
            goto label_3d26ac;
        }
    }
    ctx->pc = 0x3D2698u;
    // 0x3d2698: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3d2698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3d269c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3d269cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3d26a0: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3D26A0u;
    SET_GPR_U32(ctx, 31, 0x3D26A8u);
    ctx->pc = 0x3D26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D26A0u;
    // 0x3d26a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3D26A0u, 0x3D26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D26A8u;
label_3d26a8:
    // 0x3d26a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d26a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d26ac:
    // 0x3d26ac: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x3D26ACu;
    SET_GPR_U32(ctx, 31, 0x3D26B4u);
    ctx->pc = 0x3D26B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D26ACu;
    // 0x3d26b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x3D26ACu, 0x3D26B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D26B4u;
label_3d26b4:
    // 0x3d26b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d26b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d26b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d26b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d26bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d26bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d26c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D26C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D26C0u;
        // 0x3d26c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D26C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D26C8u;
}
