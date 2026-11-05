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

// Function: sub_0028A8F8
// Address: 0x28a8f8 - 0x28a9e8
void sub_0028A8F8_0x28a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A8F8_0x28a8f8");
#endif

    switch (ctx->pc) {
        case 0x28a920u: goto label_28a920;
        case 0x28a93cu: goto label_28a93c;
        case 0x28a958u: goto label_28a958;
        case 0x28a968u: goto label_28a968;
        case 0x28a970u: goto label_28a970;
        case 0x28a98cu: goto label_28a98c;
        case 0x28a9a4u: goto label_28a9a4;
        case 0x28a9b8u: goto label_28a9b8;
        case 0x28a9ccu: goto label_28a9cc;
        default: break;
    }

    ctx->pc = 0x28a8f8u;

    // 0x28a8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a8fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a90c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28a910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28a914: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28a918: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A918u;
    SET_GPR_U32(ctx, 31, 0x28A920u);
    ctx->pc = 0x28A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A918u;
    // 0x28a91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A918u, 0x28A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A920u;
label_28a920:
    // 0x28a920: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x28a920u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x28a924: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a928: 0x26314ec0  addiu       $s1, $s1, 0x4EC0
    ctx->pc = 0x28a928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20160));
    // 0x28a92c: 0x24a5af38  addiu       $a1, $a1, -0x50C8
    ctx->pc = 0x28a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946616));
    // 0x28a930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a934: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A934u;
    SET_GPR_U32(ctx, 31, 0x28A93Cu);
    ctx->pc = 0x28A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A934u;
    // 0x28a938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A934u, 0x28A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A93Cu;
label_28a93c:
    // 0x28a93c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a93cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a940: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a944: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a950: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A950u;
    SET_GPR_U32(ctx, 31, 0x28A958u);
    ctx->pc = 0x28A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A950u;
    // 0x28a954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A950u, 0x28A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A958u;
label_28a958:
    // 0x28a958: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a95c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a960: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A960u;
    SET_GPR_U32(ctx, 31, 0x28A968u);
    ctx->pc = 0x28A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A960u;
    // 0x28a964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A960u, 0x28A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A968u;
label_28a968:
    // 0x28a968: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A968u;
    SET_GPR_U32(ctx, 31, 0x28A970u);
    ctx->pc = 0x28A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A968u;
    // 0x28a96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A968u, 0x28A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A970u;
label_28a970:
    // 0x28a970: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x28a970u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x28a974: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a978: 0x2610a4f0  addiu       $s0, $s0, -0x5B10
    ctx->pc = 0x28a978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943984));
    // 0x28a97c: 0x24a5af40  addiu       $a1, $a1, -0x50C0
    ctx->pc = 0x28a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946624));
    // 0x28a980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a984: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A984u;
    SET_GPR_U32(ctx, 31, 0x28A98Cu);
    ctx->pc = 0x28A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A984u;
    // 0x28a988: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A984u, 0x28A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A98Cu;
label_28a98c:
    // 0x28a98c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a990: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28a990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a998: 0x24a5ae98  addiu       $a1, $a1, -0x5168
    ctx->pc = 0x28a998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946456));
    // 0x28a99c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A99Cu;
    SET_GPR_U32(ctx, 31, 0x28A9A4u);
    ctx->pc = 0x28A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A99Cu;
    // 0x28a9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A99Cu, 0x28A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9A4u;
label_28a9a4:
    // 0x28a9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28a9a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28a9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9b0: 0xc0a18c4  jal         func_286310
    ctx->pc = 0x28A9B0u;
    SET_GPR_U32(ctx, 31, 0x28A9B8u);
    ctx->pc = 0x28A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9B0u;
    // 0x28a9b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286310u, 0x28A9B0u, 0x28A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9B8u;
label_28a9b8:
    // 0x28a9b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9c4: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x28A9C4u;
    SET_GPR_U32(ctx, 31, 0x28A9CCu);
    ctx->pc = 0x28A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9C4u;
    // 0x28a9c8: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x28A9C4u, 0x28A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9CCu;
label_28a9cc:
    // 0x28a9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a9d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a9d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a9d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28a9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a9d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28a9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x28A9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9DCu;
        // 0x28a9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A9E4u;
    // 0x28a9e4: 0x0  nop
    ctx->pc = 0x28a9e4u;
    // NOP
    ctx->pc = 0x28a9e8u;
}
