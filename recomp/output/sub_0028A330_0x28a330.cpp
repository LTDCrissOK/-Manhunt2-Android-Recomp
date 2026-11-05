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

// Function: sub_0028A330
// Address: 0x28a330 - 0x28a420
void sub_0028A330_0x28a330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A330_0x28a330");
#endif

    switch (ctx->pc) {
        case 0x28a358u: goto label_28a358;
        case 0x28a374u: goto label_28a374;
        case 0x28a390u: goto label_28a390;
        case 0x28a3a0u: goto label_28a3a0;
        case 0x28a3a8u: goto label_28a3a8;
        case 0x28a3c4u: goto label_28a3c4;
        case 0x28a3dcu: goto label_28a3dc;
        case 0x28a3f0u: goto label_28a3f0;
        case 0x28a404u: goto label_28a404;
        default: break;
    }

    ctx->pc = 0x28a330u;

    // 0x28a330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a334: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a348: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28a34c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28a350: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A350u;
    SET_GPR_U32(ctx, 31, 0x28A358u);
    ctx->pc = 0x28A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A350u;
    // 0x28a354: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A350u, 0x28A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A358u;
label_28a358:
    // 0x28a358: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x28a358u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x28a35c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a360: 0x26314ec0  addiu       $s1, $s1, 0x4EC0
    ctx->pc = 0x28a360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20160));
    // 0x28a364: 0x24a5aee0  addiu       $a1, $a1, -0x5120
    ctx->pc = 0x28a364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946528));
    // 0x28a368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a36c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A36Cu;
    SET_GPR_U32(ctx, 31, 0x28A374u);
    ctx->pc = 0x28A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A36Cu;
    // 0x28a370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A36Cu, 0x28A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A374u;
label_28a374:
    // 0x28a374: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a378: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a37c: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a388: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A388u;
    SET_GPR_U32(ctx, 31, 0x28A390u);
    ctx->pc = 0x28A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A388u;
    // 0x28a38c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A388u, 0x28A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A390u;
label_28a390:
    // 0x28a390: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a394: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a398: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A398u;
    SET_GPR_U32(ctx, 31, 0x28A3A0u);
    ctx->pc = 0x28A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A398u;
    // 0x28a39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A398u, 0x28A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3A0u;
label_28a3a0:
    // 0x28a3a0: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A3A0u;
    SET_GPR_U32(ctx, 31, 0x28A3A8u);
    ctx->pc = 0x28A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3A0u;
    // 0x28a3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A3A0u, 0x28A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3A8u;
label_28a3a8:
    // 0x28a3a8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x28a3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x28a3ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a3b0: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x28a3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x28a3b4: 0x24a5aee8  addiu       $a1, $a1, -0x5118
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946536));
    // 0x28a3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3bc: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A3BCu;
    SET_GPR_U32(ctx, 31, 0x28A3C4u);
    ctx->pc = 0x28A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3BCu;
    // 0x28a3c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A3BCu, 0x28A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3C4u;
label_28a3c4:
    // 0x28a3c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a3c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28a3c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3d0: 0x24a5ae98  addiu       $a1, $a1, -0x5168
    ctx->pc = 0x28a3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946456));
    // 0x28a3d4: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A3D4u;
    SET_GPR_U32(ctx, 31, 0x28A3DCu);
    ctx->pc = 0x28A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3D4u;
    // 0x28a3d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A3D4u, 0x28A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3DCu;
label_28a3dc:
    // 0x28a3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28a3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28a3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3e8: 0xc0a18c4  jal         func_286310
    ctx->pc = 0x28A3E8u;
    SET_GPR_U32(ctx, 31, 0x28A3F0u);
    ctx->pc = 0x28A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3E8u;
    // 0x28a3ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286310u, 0x28A3E8u, 0x28A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3F0u;
label_28a3f0:
    // 0x28a3f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3fc: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x28A3FCu;
    SET_GPR_U32(ctx, 31, 0x28A404u);
    ctx->pc = 0x28A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3FCu;
    // 0x28a400: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x28A3FCu, 0x28A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A404u;
label_28a404:
    // 0x28a404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a40c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28a40cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a410: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28a410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28a414: 0x3e00008  jr          $ra
    ctx->pc = 0x28A414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A414u;
        // 0x28a418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A41Cu;
    // 0x28a41c: 0x0  nop
    ctx->pc = 0x28a41cu;
    // NOP
    ctx->pc = 0x28a420u;
}
