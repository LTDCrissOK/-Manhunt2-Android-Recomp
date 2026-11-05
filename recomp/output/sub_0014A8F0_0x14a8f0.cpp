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

// Function: sub_0014A8F0
// Address: 0x14a8f0 - 0x14a9b0
void sub_0014A8F0_0x14a8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A8F0_0x14a8f0");
#endif

    switch (ctx->pc) {
        case 0x14a90cu: goto label_14a90c;
        case 0x14a924u: goto label_14a924;
        case 0x14a938u: goto label_14a938;
        case 0x14a958u: goto label_14a958;
        case 0x14a974u: goto label_14a974;
        case 0x14a984u: goto label_14a984;
        case 0x14a994u: goto label_14a994;
        default: break;
    }

    ctx->pc = 0x14a8f0u;

    // 0x14a8f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a8f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a904: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14A904u;
    SET_GPR_U32(ctx, 31, 0x14A90Cu);
    ctx->pc = 0x14A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A904u;
    // 0x14a908: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14A904u, 0x14A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A90Cu;
label_14a90c:
    // 0x14a90c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14a910: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x14A910u;
    {
        const bool branch_taken_0x14a910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A910u;
        // 0x14a914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a910) {
            ctx->pc = 0x14A998u;
            goto label_14a998;
        }
    }
    ctx->pc = 0x14A918u;
    // 0x14a918: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14a918u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a91c: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14A91Cu;
    SET_GPR_U32(ctx, 31, 0x14A924u);
    ctx->pc = 0x14A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A91Cu;
    // 0x14a920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14A91Cu, 0x14A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A924u;
label_14a924:
    // 0x14a924: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14a924u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a928: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a930: 0xc052ade  jal         func_14AB78
    ctx->pc = 0x14A930u;
    SET_GPR_U32(ctx, 31, 0x14A938u);
    ctx->pc = 0x14A934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A930u;
    // 0x14a934: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB78u, 0x14A930u, 0x14A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A938u;
label_14a938:
    // 0x14a938: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A938u;
    {
        const bool branch_taken_0x14a938 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A938u;
        // 0x14a93c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a938) {
            ctx->pc = 0x14A950u;
            goto label_14a950;
        }
    }
    ctx->pc = 0x14A940u;
    // 0x14a940: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A940u;
    {
        const bool branch_taken_0x14a940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A940u;
        // 0x14a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a940) {
            ctx->pc = 0x14A960u;
            goto label_14a960;
        }
    }
    ctx->pc = 0x14A948u;
    // 0x14a948: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14A948u;
    {
        const bool branch_taken_0x14a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a948) {
            ctx->pc = 0x14A98Cu;
            goto label_14a98c;
        }
    }
    ctx->pc = 0x14A950u;
label_14a950:
    // 0x14a950: 0xc052b38  jal         func_14ACE0
    ctx->pc = 0x14A950u;
    SET_GPR_U32(ctx, 31, 0x14A958u);
    ctx->pc = 0x14A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A950u;
    // 0x14a954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACE0u, 0x14A950u, 0x14A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A958u;
label_14a958:
    // 0x14a958: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14A958u;
    {
        const bool branch_taken_0x14a958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A958u;
        // 0x14a95c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a958) {
            ctx->pc = 0x14A998u;
            goto label_14a998;
        }
    }
    ctx->pc = 0x14A960u;
label_14a960:
    // 0x14a960: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x14a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x14a964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A964u;
    {
        const bool branch_taken_0x14a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a964) {
            ctx->pc = 0x14A97Cu;
            goto label_14a97c;
        }
    }
    ctx->pc = 0x14A96Cu;
    // 0x14a96c: 0xc052b9a  jal         func_14AE68
    ctx->pc = 0x14A96Cu;
    SET_GPR_U32(ctx, 31, 0x14A974u);
    ctx->pc = 0x14A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A96Cu;
    // 0x14a970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AE68u, 0x14A96Cu, 0x14A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A974u;
label_14a974:
    // 0x14a974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14A974u;
    {
        const bool branch_taken_0x14a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A974u;
        // 0x14a978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a974) {
            ctx->pc = 0x14A998u;
            goto label_14a998;
        }
    }
    ctx->pc = 0x14A97Cu;
label_14a97c:
    // 0x14a97c: 0xc052b38  jal         func_14ACE0
    ctx->pc = 0x14A97Cu;
    SET_GPR_U32(ctx, 31, 0x14A984u);
    ctx->pc = 0x14A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A97Cu;
    // 0x14a980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACE0u, 0x14A97Cu, 0x14A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A984u;
label_14a984:
    // 0x14a984: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A984u;
    {
        const bool branch_taken_0x14a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A984u;
        // 0x14a988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a984) {
            ctx->pc = 0x14A998u;
            goto label_14a998;
        }
    }
    ctx->pc = 0x14A98Cu;
label_14a98c:
    // 0x14a98c: 0xc04da5c  jal         func_136970
    ctx->pc = 0x14A98Cu;
    SET_GPR_U32(ctx, 31, 0x14A994u);
    ctx->pc = 0x14A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A98Cu;
    // 0x14a990: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x14A98Cu, 0x14A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A994u;
label_14a994:
    // 0x14a994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a998:
    // 0x14a998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a9a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9A4u;
        // 0x14a9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A9ACu;
    // 0x14a9ac: 0x0  nop
    ctx->pc = 0x14a9acu;
    // NOP
    ctx->pc = 0x14a9b0u;
}
