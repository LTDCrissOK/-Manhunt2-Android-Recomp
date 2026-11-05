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

// Function: sub_00162870
// Address: 0x162870 - 0x162930
void sub_00162870_0x162870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162870_0x162870");
#endif

    switch (ctx->pc) {
        case 0x1628acu: goto label_1628ac;
        case 0x1628c4u: goto label_1628c4;
        case 0x1628d4u: goto label_1628d4;
        case 0x1628e8u: goto label_1628e8;
        case 0x162908u: goto label_162908;
        case 0x162918u: goto label_162918;
        default: break;
    }

    ctx->pc = 0x162870u;

    // 0x162870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162874: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16287c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16287cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162880: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162884: 0x26110378  addiu       $s1, $s0, 0x378
    ctx->pc = 0x162884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    // 0x162888: 0x8e030398  lw          $v1, 0x398($s0)
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
    // 0x16288c: 0xa3880a  movz        $s1, $a1, $v1
    ctx->pc = 0x16288cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x162890: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162894: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x162894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162898: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x162898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16289c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x16289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1628a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1628a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1628a4: 0xc058b2c  jal         func_162CB0
    ctx->pc = 0x1628A4u;
    SET_GPR_U32(ctx, 31, 0x1628ACu);
    ctx->pc = 0x1628A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628A4u;
    // 0x1628a8: 0xae020350  sw          $v0, 0x350($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162CB0u, 0x1628A4u, 0x1628ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628ACu;
label_1628ac:
    // 0x1628ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1628ACu;
    {
        const bool branch_taken_0x1628ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628ACu;
        // 0x1628b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628ac) {
            ctx->pc = 0x1628DCu;
            goto label_1628dc;
        }
    }
    ctx->pc = 0x1628B4u;
    // 0x1628b4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x1628b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x1628b8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1628b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1628bc: 0xc058b52  jal         func_162D48
    ctx->pc = 0x1628BCu;
    SET_GPR_U32(ctx, 31, 0x1628C4u);
    ctx->pc = 0x1628C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628BCu;
    // 0x1628c0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D48u, 0x1628BCu, 0x1628C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628C4u;
label_1628c4:
    // 0x1628c4: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x1628c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
    // 0x1628c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1628c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628cc: 0xc058a4c  jal         func_162930
    ctx->pc = 0x1628CCu;
    SET_GPR_U32(ctx, 31, 0x1628D4u);
    ctx->pc = 0x1628D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628CCu;
    // 0x1628d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162930u, 0x1628CCu, 0x1628D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628D4u;
label_1628d4:
    // 0x1628d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1628D4u;
    {
        const bool branch_taken_0x1628d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628D4u;
        // 0x1628d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628d4) {
            ctx->pc = 0x16291Cu;
            goto label_16291c;
        }
    }
    ctx->pc = 0x1628DCu;
label_1628dc:
    // 0x1628dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1628e0: 0xc058b2c  jal         func_162CB0
    ctx->pc = 0x1628E0u;
    SET_GPR_U32(ctx, 31, 0x1628E8u);
    ctx->pc = 0x1628E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1628E0u;
    // 0x1628e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162CB0u, 0x1628E0u, 0x1628E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628E8u;
label_1628e8:
    // 0x1628e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1628E8u;
    {
        const bool branch_taken_0x1628e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1628ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1628E8u;
        // 0x1628ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628e8) {
            ctx->pc = 0x1628FCu;
            goto label_1628fc;
        }
    }
    ctx->pc = 0x1628F0u;
    // 0x1628f0: 0x8e020374  lw          $v0, 0x374($s0)
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x1628f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1628F4u;
    {
        const bool branch_taken_0x1628f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628f4) {
            ctx->pc = 0x162910u;
            goto label_162910;
        }
    }
    ctx->pc = 0x1628FCu;
label_1628fc:
    // 0x1628fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1628fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162900: 0xc058a8a  jal         func_162A28
    ctx->pc = 0x162900u;
    SET_GPR_U32(ctx, 31, 0x162908u);
    ctx->pc = 0x162904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162900u;
    // 0x162904: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A28u, 0x162900u, 0x162908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162908u;
label_162908:
    // 0x162908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162908u;
    {
        const bool branch_taken_0x162908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162908u;
        // 0x16290c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162908) {
            ctx->pc = 0x16291Cu;
            goto label_16291c;
        }
    }
    ctx->pc = 0x162910u;
label_162910:
    // 0x162910: 0xc058ad6  jal         func_162B58
    ctx->pc = 0x162910u;
    SET_GPR_U32(ctx, 31, 0x162918u);
    ctx->pc = 0x162914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162910u;
    // 0x162914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162B58u, 0x162910u, 0x162918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162918u;
label_162918:
    // 0x162918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16291c:
    // 0x16291c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16291cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162924: 0x3e00008  jr          $ra
    ctx->pc = 0x162924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162924u;
        // 0x162928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16292Cu;
    // 0x16292c: 0x0  nop
    ctx->pc = 0x16292cu;
    // NOP
    ctx->pc = 0x162930u;
}
