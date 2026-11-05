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

// Function: sub_0039A8C0
// Address: 0x39a8c0 - 0x39a980
void sub_0039A8C0_0x39a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A8C0_0x39a8c0");
#endif

    switch (ctx->pc) {
        case 0x39a8c0u: goto label_39a8c0;
        case 0x39a8c4u: goto label_39a8c4;
        case 0x39a8c8u: goto label_39a8c8;
        case 0x39a8ccu: goto label_39a8cc;
        case 0x39a8d0u: goto label_39a8d0;
        case 0x39a8d4u: goto label_39a8d4;
        case 0x39a8d8u: goto label_39a8d8;
        case 0x39a8dcu: goto label_39a8dc;
        case 0x39a8e0u: goto label_39a8e0;
        case 0x39a8e4u: goto label_39a8e4;
        case 0x39a8e8u: goto label_39a8e8;
        case 0x39a8ecu: goto label_39a8ec;
        case 0x39a8f0u: goto label_39a8f0;
        case 0x39a8f4u: goto label_39a8f4;
        case 0x39a8f8u: goto label_39a8f8;
        case 0x39a8fcu: goto label_39a8fc;
        case 0x39a900u: goto label_39a900;
        case 0x39a904u: goto label_39a904;
        case 0x39a908u: goto label_39a908;
        case 0x39a90cu: goto label_39a90c;
        case 0x39a910u: goto label_39a910;
        case 0x39a914u: goto label_39a914;
        case 0x39a918u: goto label_39a918;
        case 0x39a91cu: goto label_39a91c;
        case 0x39a920u: goto label_39a920;
        case 0x39a924u: goto label_39a924;
        case 0x39a928u: goto label_39a928;
        case 0x39a92cu: goto label_39a92c;
        case 0x39a930u: goto label_39a930;
        case 0x39a934u: goto label_39a934;
        case 0x39a938u: goto label_39a938;
        case 0x39a93cu: goto label_39a93c;
        case 0x39a940u: goto label_39a940;
        case 0x39a944u: goto label_39a944;
        case 0x39a948u: goto label_39a948;
        case 0x39a94cu: goto label_39a94c;
        case 0x39a950u: goto label_39a950;
        case 0x39a954u: goto label_39a954;
        case 0x39a958u: goto label_39a958;
        case 0x39a95cu: goto label_39a95c;
        case 0x39a960u: goto label_39a960;
        case 0x39a964u: goto label_39a964;
        case 0x39a968u: goto label_39a968;
        case 0x39a96cu: goto label_39a96c;
        case 0x39a970u: goto label_39a970;
        case 0x39a974u: goto label_39a974;
        case 0x39a978u: goto label_39a978;
        case 0x39a97cu: goto label_39a97c;
        default: break;
    }

    ctx->pc = 0x39a8c0u;

label_39a8c0:
    // 0x39a8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39a8c4:
    // 0x39a8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39a8c8:
    // 0x39a8c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39a8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39a8cc:
    // 0x39a8cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39a8d0:
    // 0x39a8d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a8d4:
    // 0x39a8d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39a8d8:
    // 0x39a8d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_39a8dc:
    // 0x39a8dc: 0xc0e6a60  jal         func_39A980
label_39a8e0:
    if (ctx->pc == 0x39A8E0u) {
        ctx->pc = 0x39A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8DCu;
        // 0x39a8e0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8E4u;
        goto label_39a8e4;
    }
    ctx->pc = 0x39A8DCu;
    SET_GPR_U32(ctx, 31, 0x39A8E4u);
    ctx->pc = 0x39A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8DCu;
    // 0x39a8e0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x39A8DCu, 0x39A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8E4u;
label_39a8e4:
    // 0x39a8e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a8e8:
    // 0x39a8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a8ec:
    // 0x39a8ec: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39a8f0:
    // 0x39a8f0: 0x40f809  jalr        $v0
label_39a8f4:
    if (ctx->pc == 0x39A8F4u) {
        ctx->pc = 0x39A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8F0u;
        // 0x39a8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8F8u;
        goto label_39a8f8;
    }
    ctx->pc = 0x39A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A8F8u);
        ctx->pc = 0x39A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8F0u;
        // 0x39a8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A8F0u, 0x39A8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A8F8u;
label_39a8f8:
    // 0x39a8f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x39a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a8fc:
    // 0x39a8fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39a8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a900:
    // 0x39a900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a904:
    // 0x39a904: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39a908:
    // 0x39a908: 0x40f809  jalr        $v0
label_39a90c:
    if (ctx->pc == 0x39A90Cu) {
        ctx->pc = 0x39A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A908u;
        // 0x39a90c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A910u;
        goto label_39a910;
    }
    ctx->pc = 0x39A908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A910u);
        ctx->pc = 0x39A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A908u;
        // 0x39a90c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A908u, 0x39A910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A910u;
label_39a910:
    // 0x39a910: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x39a910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_39a914:
    // 0x39a914: 0xc0e6a66  jal         func_39A998
label_39a918:
    if (ctx->pc == 0x39A918u) {
        ctx->pc = 0x39A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A914u;
        // 0x39a918: 0xae510044  sw          $s1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A91Cu;
        goto label_39a91c;
    }
    ctx->pc = 0x39A914u;
    SET_GPR_U32(ctx, 31, 0x39A91Cu);
    ctx->pc = 0x39A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A914u;
    // 0x39a918: 0xae510044  sw          $s1, 0x44($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A914u, 0x39A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A91Cu;
label_39a91c:
    // 0x39a91c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x39a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_39a920:
    // 0x39a920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a924:
    // 0x39a924: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x39a924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_39a928:
    // 0x39a928: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x39a928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_39a92c:
    // 0x39a92c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39a930:
    // 0x39a930: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39a930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39a934:
    // 0x39a934: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39a934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39a938:
    // 0x39a938: 0x3e00008  jr          $ra
label_39a93c:
    if (ctx->pc == 0x39A93Cu) {
        ctx->pc = 0x39A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A938u;
        // 0x39a93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A940u;
        goto label_39a940;
    }
    ctx->pc = 0x39A938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A938u;
        // 0x39a93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A940u;
label_39a940:
    // 0x39a940: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39a944:
    // 0x39a944: 0x0  nop
    ctx->pc = 0x39a944u;
    // NOP
label_39a948:
    // 0x39a948: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x39a948u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_39a94c:
    // 0x39a94c: 0x0  nop
    ctx->pc = 0x39a94cu;
    // NOP
label_39a950:
    // 0x39a950: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39a954:
    // 0x39a954: 0x0  nop
    ctx->pc = 0x39a954u;
    // NOP
label_39a958:
    // 0x39a958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39a95c:
    // 0x39a95c: 0x0  nop
    ctx->pc = 0x39a95cu;
    // NOP
label_39a960:
    // 0x39a960: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39a964:
    // 0x39a964: 0x0  nop
    ctx->pc = 0x39a964u;
    // NOP
label_39a968:
    // 0x39a968: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x39a968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
label_39a96c:
    // 0x39a96c: 0x0  nop
    ctx->pc = 0x39a96cu;
    // NOP
label_39a970:
    // 0x39a970: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39a974:
    // 0x39a974: 0x0  nop
    ctx->pc = 0x39a974u;
    // NOP
label_39a978:
    // 0x39a978: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x39a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_39a97c:
    // 0x39a97c: 0x0  nop
    ctx->pc = 0x39a97cu;
    // NOP
    ctx->pc = 0x39a980u;
}
