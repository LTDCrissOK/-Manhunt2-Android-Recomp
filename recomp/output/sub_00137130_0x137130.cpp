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

// Function: sub_00137130
// Address: 0x137130 - 0x137230
void sub_00137130_0x137130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137130_0x137130");
#endif

    switch (ctx->pc) {
        case 0x137164u: goto label_137164;
        case 0x137174u: goto label_137174;
        case 0x137180u: goto label_137180;
        case 0x13718cu: goto label_13718c;
        case 0x137198u: goto label_137198;
        case 0x1371a0u: goto label_1371a0;
        case 0x1371b4u: goto label_1371b4;
        case 0x1371c0u: goto label_1371c0;
        case 0x1371ccu: goto label_1371cc;
        case 0x1371d8u: goto label_1371d8;
        case 0x1371e8u: goto label_1371e8;
        case 0x137208u: goto label_137208;
        default: break;
    }

    ctx->pc = 0x137130u;

    // 0x137130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x137134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x137138: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x137138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13713c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13713cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x137140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x137144: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x137144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137148: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x137148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13714c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13714cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137150: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x137150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x137154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x137158: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x137158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13715c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13715Cu;
    SET_GPR_U32(ctx, 31, 0x137164u);
    ctx->pc = 0x137160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13715Cu;
    // 0x137160: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13715Cu, 0x137164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137164u;
label_137164:
    // 0x137164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137168: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13716c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x13716Cu;
    SET_GPR_U32(ctx, 31, 0x137174u);
    ctx->pc = 0x137170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13716Cu;
    // 0x137170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x13716Cu, 0x137174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137174u;
label_137174:
    // 0x137174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137178: 0xc046154  jal         func_118550
    ctx->pc = 0x137178u;
    SET_GPR_U32(ctx, 31, 0x137180u);
    ctx->pc = 0x13717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137178u;
    // 0x13717c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x137178u, 0x137180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137180u;
label_137180:
    // 0x137180: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x137180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137184: 0xc046164  jal         func_118590
    ctx->pc = 0x137184u;
    SET_GPR_U32(ctx, 31, 0x13718Cu);
    ctx->pc = 0x137188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137184u;
    // 0x137188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x137184u, 0x13718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13718Cu;
label_13718c:
    // 0x13718c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13718cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137190: 0xc046256  jal         func_118958
    ctx->pc = 0x137190u;
    SET_GPR_U32(ctx, 31, 0x137198u);
    ctx->pc = 0x137194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137190u;
    // 0x137194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x137190u, 0x137198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137198u;
label_137198:
    // 0x137198: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x137198u;
    SET_GPR_U32(ctx, 31, 0x1371A0u);
    ctx->pc = 0x13719Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137198u;
    // 0x13719c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x137198u, 0x1371A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371A0u;
label_1371a0:
    // 0x1371a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1371a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1371a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1371a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371ac: 0xc045612  jal         func_115848
    ctx->pc = 0x1371ACu;
    SET_GPR_U32(ctx, 31, 0x1371B4u);
    ctx->pc = 0x1371B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371ACu;
    // 0x1371b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x1371ACu, 0x1371B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371B4u;
label_1371b4:
    // 0x1371b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1371b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371b8: 0xc045668  jal         func_1159A0
    ctx->pc = 0x1371B8u;
    SET_GPR_U32(ctx, 31, 0x1371C0u);
    ctx->pc = 0x1371BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371B8u;
    // 0x1371bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x1371B8u, 0x1371C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371C0u;
label_1371c0:
    // 0x1371c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1371c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371c4: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x1371C4u;
    SET_GPR_U32(ctx, 31, 0x1371CCu);
    ctx->pc = 0x1371C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371C4u;
    // 0x1371c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x1371C4u, 0x1371CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371CCu;
label_1371cc:
    // 0x1371cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1371ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1371d0: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x1371D0u;
    SET_GPR_U32(ctx, 31, 0x1371D8u);
    ctx->pc = 0x1371D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371D0u;
    // 0x1371d4: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x1371D0u, 0x1371D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371D8u;
label_1371d8:
    // 0x1371d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1371d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1371dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371e0: 0xc0456a6  jal         func_115A98
    ctx->pc = 0x1371E0u;
    SET_GPR_U32(ctx, 31, 0x1371E8u);
    ctx->pc = 0x1371E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371E0u;
    // 0x1371e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A98u, 0x1371E0u, 0x1371E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371E8u;
label_1371e8:
    // 0x1371e8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1371e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1371ec: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1371ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1371f0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1371f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1371f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1371f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1371f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1371fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1371fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137200: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x137200u;
    SET_GPR_U32(ctx, 31, 0x137208u);
    ctx->pc = 0x137204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137200u;
    // 0x137204: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x137200u, 0x137208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137208u;
label_137208:
    // 0x137208: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x137208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13720c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13720cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x137210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x137214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x137214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137218: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x137218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13721c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13721cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137220: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x137220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137224: 0x3e00008  jr          $ra
    ctx->pc = 0x137224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137224u;
        // 0x137228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13722Cu;
    // 0x13722c: 0x0  nop
    ctx->pc = 0x13722cu;
    // NOP
    ctx->pc = 0x137230u;
}
