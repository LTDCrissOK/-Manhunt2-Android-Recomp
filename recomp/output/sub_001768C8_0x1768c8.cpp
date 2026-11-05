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

// Function: sub_001768C8
// Address: 0x1768c8 - 0x176948
void sub_001768C8_0x1768c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001768C8_0x1768c8");
#endif

    switch (ctx->pc) {
        case 0x1768c8u: goto label_1768c8;
        case 0x1768ccu: goto label_1768cc;
        case 0x1768d0u: goto label_1768d0;
        case 0x1768d4u: goto label_1768d4;
        case 0x1768d8u: goto label_1768d8;
        case 0x1768dcu: goto label_1768dc;
        case 0x1768e0u: goto label_1768e0;
        case 0x1768e4u: goto label_1768e4;
        case 0x1768e8u: goto label_1768e8;
        case 0x1768ecu: goto label_1768ec;
        case 0x1768f0u: goto label_1768f0;
        case 0x1768f4u: goto label_1768f4;
        case 0x1768f8u: goto label_1768f8;
        case 0x1768fcu: goto label_1768fc;
        case 0x176900u: goto label_176900;
        case 0x176904u: goto label_176904;
        case 0x176908u: goto label_176908;
        case 0x17690cu: goto label_17690c;
        case 0x176910u: goto label_176910;
        case 0x176914u: goto label_176914;
        case 0x176918u: goto label_176918;
        case 0x17691cu: goto label_17691c;
        case 0x176920u: goto label_176920;
        case 0x176924u: goto label_176924;
        case 0x176928u: goto label_176928;
        case 0x17692cu: goto label_17692c;
        case 0x176930u: goto label_176930;
        case 0x176934u: goto label_176934;
        case 0x176938u: goto label_176938;
        case 0x17693cu: goto label_17693c;
        case 0x176940u: goto label_176940;
        case 0x176944u: goto label_176944;
        default: break;
    }

    ctx->pc = 0x1768c8u;

label_1768c8:
    // 0x1768c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1768cc:
    // 0x1768cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1768ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1768d0:
    // 0x1768d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1768d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1768d4:
    // 0x1768d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1768d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1768d8:
    // 0x1768d8: 0xc04f9a4  jal         func_13E690
label_1768dc:
    if (ctx->pc == 0x1768DCu) {
        ctx->pc = 0x1768DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768D8u;
        // 0x1768dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1768E0u;
        goto label_1768e0;
    }
    ctx->pc = 0x1768D8u;
    SET_GPR_U32(ctx, 31, 0x1768E0u);
    ctx->pc = 0x1768DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768D8u;
    // 0x1768dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x1768D8u, 0x1768E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768E0u;
label_1768e0:
    // 0x1768e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1768e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1768e4:
    // 0x1768e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1768e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1768e8:
    // 0x1768e8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1768e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_1768ec:
    // 0x1768ec: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1768ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1768f0:
    // 0x1768f0: 0xc04f8fc  jal         func_13E3F0
label_1768f4:
    if (ctx->pc == 0x1768F4u) {
        ctx->pc = 0x1768F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768F0u;
        // 0x1768f4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1768F8u;
        goto label_1768f8;
    }
    ctx->pc = 0x1768F0u;
    SET_GPR_U32(ctx, 31, 0x1768F8u);
    ctx->pc = 0x1768F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1768F0u;
    // 0x1768f4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x1768F0u, 0x1768F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1768F8u;
label_1768f8:
    // 0x1768f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1768f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1768fc:
    // 0x1768fc: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1768fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_176900:
    // 0x176900: 0xc0461e8  jal         func_1187A0
label_176904:
    if (ctx->pc == 0x176904u) {
        ctx->pc = 0x176904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176900u;
        // 0x176904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176908u;
        goto label_176908;
    }
    ctx->pc = 0x176900u;
    SET_GPR_U32(ctx, 31, 0x176908u);
    ctx->pc = 0x176904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176900u;
    // 0x176904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x176900u, 0x176908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176908u;
label_176908:
    // 0x176908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17690c:
    // 0x17690c: 0xc046104  jal         func_118410
label_176910:
    if (ctx->pc == 0x176910u) {
        ctx->pc = 0x176910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17690Cu;
        // 0x176910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176914u;
        goto label_176914;
    }
    ctx->pc = 0x17690Cu;
    SET_GPR_U32(ctx, 31, 0x176914u);
    ctx->pc = 0x176910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17690Cu;
    // 0x176910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x17690Cu, 0x176914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176914u;
label_176914:
    // 0x176914: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x176914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_176918:
    // 0x176918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17691c:
    // 0x17691c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x17691cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_176920:
    // 0x176920: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176924:
    // 0x176924: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176928:
    // 0x176928: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_17692c:
    // 0x17692c: 0x40f809  jalr        $v0
label_176930:
    if (ctx->pc == 0x176930u) {
        ctx->pc = 0x176930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17692Cu;
        // 0x176930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176934u;
        goto label_176934;
    }
    ctx->pc = 0x17692Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176934u);
        ctx->pc = 0x176930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17692Cu;
        // 0x176930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17692Cu, 0x176934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176934u;
label_176934:
    // 0x176934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176938:
    // 0x176938: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17693c:
    // 0x17693c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17693cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176940:
    // 0x176940: 0x3e00008  jr          $ra
label_176944:
    if (ctx->pc == 0x176944u) {
        ctx->pc = 0x176944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176940u;
        // 0x176944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176948u;
        goto label_fallthrough_0x176940;
    }
    ctx->pc = 0x176940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176940u;
        // 0x176944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176940:
    ctx->pc = 0x176948u;
}
