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

// Function: sub_0028A828
// Address: 0x28a828 - 0x28a8f8
void sub_0028A828_0x28a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A828_0x28a828");
#endif

    switch (ctx->pc) {
        case 0x28a84cu: goto label_28a84c;
        case 0x28a868u: goto label_28a868;
        case 0x28a884u: goto label_28a884;
        case 0x28a894u: goto label_28a894;
        case 0x28a89cu: goto label_28a89c;
        case 0x28a8b8u: goto label_28a8b8;
        case 0x28a8ccu: goto label_28a8cc;
        case 0x28a8e0u: goto label_28a8e0;
        default: break;
    }

    ctx->pc = 0x28a828u;

    // 0x28a828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a82c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a82cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a838: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a83c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a844: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A844u;
    SET_GPR_U32(ctx, 31, 0x28A84Cu);
    ctx->pc = 0x28A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A844u;
    // 0x28a848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A844u, 0x28A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A84Cu;
label_28a84c:
    // 0x28a84c: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x28a84cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x28a850: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a854: 0x26314ec0  addiu       $s1, $s1, 0x4EC0
    ctx->pc = 0x28a854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20160));
    // 0x28a858: 0x24a5af30  addiu       $a1, $a1, -0x50D0
    ctx->pc = 0x28a858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946608));
    // 0x28a85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a860: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A860u;
    SET_GPR_U32(ctx, 31, 0x28A868u);
    ctx->pc = 0x28A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A860u;
    // 0x28a864: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A860u, 0x28A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A868u;
label_28a868:
    // 0x28a868: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a86c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a870: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a87c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A87Cu;
    SET_GPR_U32(ctx, 31, 0x28A884u);
    ctx->pc = 0x28A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A87Cu;
    // 0x28a880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A87Cu, 0x28A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A884u;
label_28a884:
    // 0x28a884: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a888: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a88c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A88Cu;
    SET_GPR_U32(ctx, 31, 0x28A894u);
    ctx->pc = 0x28A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A88Cu;
    // 0x28a890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A88Cu, 0x28A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A894u;
label_28a894:
    // 0x28a894: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A894u;
    SET_GPR_U32(ctx, 31, 0x28A89Cu);
    ctx->pc = 0x28A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A894u;
    // 0x28a898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A894u, 0x28A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A89Cu;
label_28a89c:
    // 0x28a89c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x28a89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x28a8a0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a8a4: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x28a8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x28a8a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8ac: 0x24a5ae98  addiu       $a1, $a1, -0x5168
    ctx->pc = 0x28a8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946456));
    // 0x28a8b0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A8B0u;
    SET_GPR_U32(ctx, 31, 0x28A8B8u);
    ctx->pc = 0x28A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8B0u;
    // 0x28a8b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A8B0u, 0x28A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8B8u;
label_28a8b8:
    // 0x28a8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28a8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28a8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8c4: 0xc0a18c4  jal         func_286310
    ctx->pc = 0x28A8C4u;
    SET_GPR_U32(ctx, 31, 0x28A8CCu);
    ctx->pc = 0x28A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8C4u;
    // 0x28a8c8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286310u, 0x28A8C4u, 0x28A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8CCu;
label_28a8cc:
    // 0x28a8cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8d8: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x28A8D8u;
    SET_GPR_U32(ctx, 31, 0x28A8E0u);
    ctx->pc = 0x28A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8D8u;
    // 0x28a8dc: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x28A8D8u, 0x28A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8E0u;
label_28a8e0:
    // 0x28a8e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a8e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28A8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8ECu;
        // 0x28a8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A8F4u;
    // 0x28a8f4: 0x0  nop
    ctx->pc = 0x28a8f4u;
    // NOP
    ctx->pc = 0x28a8f8u;
}
