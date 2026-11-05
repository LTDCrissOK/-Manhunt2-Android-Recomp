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

// Function: sub_0013D350
// Address: 0x13d350 - 0x13d438
void sub_0013D350_0x13d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D350_0x13d350");
#endif

    switch (ctx->pc) {
        case 0x13d384u: goto label_13d384;
        case 0x13d394u: goto label_13d394;
        case 0x13d3acu: goto label_13d3ac;
        case 0x13d3b8u: goto label_13d3b8;
        case 0x13d3c4u: goto label_13d3c4;
        case 0x13d3ccu: goto label_13d3cc;
        case 0x13d3e0u: goto label_13d3e0;
        case 0x13d3ecu: goto label_13d3ec;
        case 0x13d3f8u: goto label_13d3f8;
        case 0x13d418u: goto label_13d418;
        default: break;
    }

    ctx->pc = 0x13d350u;

    // 0x13d350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d354: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13d358: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13d358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13d35c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13d35cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13d364: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13d364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13d36c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x13d36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13d374: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13d374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d378: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13d378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13d37c: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x13D37Cu;
    SET_GPR_U32(ctx, 31, 0x13D384u);
    ctx->pc = 0x13D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D37Cu;
    // 0x13d380: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x13D37Cu, 0x13D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D384u;
label_13d384:
    // 0x13d384: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13d384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d38c: 0xc046138  jal         func_1184E0
    ctx->pc = 0x13D38Cu;
    SET_GPR_U32(ctx, 31, 0x13D394u);
    ctx->pc = 0x13D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D38Cu;
    // 0x13d390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x13D38Cu, 0x13D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D394u;
label_13d394:
    // 0x13d394: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x13d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x13d398: 0x52420005  beql        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D398u;
    {
        const bool branch_taken_0x13d398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x13d398) {
            ctx->pc = 0x13D39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D398u;
            // 0x13d39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D3B0u;
            goto label_13d3b0;
        }
    }
    ctx->pc = 0x13D3A0u;
    // 0x13d3a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13d3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3a4: 0xc046138  jal         func_1184E0
    ctx->pc = 0x13D3A4u;
    SET_GPR_U32(ctx, 31, 0x13D3ACu);
    ctx->pc = 0x13D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3A4u;
    // 0x13d3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x13D3A4u, 0x13D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3ACu;
label_13d3ac:
    // 0x13d3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d3b0:
    // 0x13d3b0: 0xc046154  jal         func_118550
    ctx->pc = 0x13D3B0u;
    SET_GPR_U32(ctx, 31, 0x13D3B8u);
    ctx->pc = 0x13D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3B0u;
    // 0x13d3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x13D3B0u, 0x13D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3B8u;
label_13d3b8:
    // 0x13d3b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13d3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3bc: 0xc046256  jal         func_118958
    ctx->pc = 0x13D3BCu;
    SET_GPR_U32(ctx, 31, 0x13D3C4u);
    ctx->pc = 0x13D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3BCu;
    // 0x13d3c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x13D3BCu, 0x13D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3C4u;
label_13d3c4:
    // 0x13d3c4: 0xc04f0a8  jal         func_13C2A0
    ctx->pc = 0x13D3C4u;
    SET_GPR_U32(ctx, 31, 0x13D3CCu);
    ctx->pc = 0x13D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3C4u;
    // 0x13d3c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2A0u, 0x13D3C4u, 0x13D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3CCu;
label_13d3cc:
    // 0x13d3cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3d0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13d3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3d8: 0xc045612  jal         func_115848
    ctx->pc = 0x13D3D8u;
    SET_GPR_U32(ctx, 31, 0x13D3E0u);
    ctx->pc = 0x13D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3D8u;
    // 0x13d3dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x13D3D8u, 0x13D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3E0u;
label_13d3e0:
    // 0x13d3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3e4: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13D3E4u;
    SET_GPR_U32(ctx, 31, 0x13D3ECu);
    ctx->pc = 0x13D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3E4u;
    // 0x13d3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13D3E4u, 0x13D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3ECu;
label_13d3ec:
    // 0x13d3ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13d3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d3f0: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x13D3F0u;
    SET_GPR_U32(ctx, 31, 0x13D3F8u);
    ctx->pc = 0x13D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D3F0u;
    // 0x13d3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x13D3F0u, 0x13D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D3F8u;
label_13d3f8:
    // 0x13d3f8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13d3fc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x13d3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13d400: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13d404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d40c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d410: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x13D410u;
    SET_GPR_U32(ctx, 31, 0x13D418u);
    ctx->pc = 0x13D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D410u;
    // 0x13d414: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x13D410u, 0x13D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D418u;
label_13d418:
    // 0x13d418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13d418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13d41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13d420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d424: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13d424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d428: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13d428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d42c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13d42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d430: 0x3e00008  jr          $ra
    ctx->pc = 0x13D430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D430u;
        // 0x13d434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D438u;
}
