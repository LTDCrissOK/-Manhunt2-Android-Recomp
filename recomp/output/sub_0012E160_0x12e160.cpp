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

// Function: sub_0012E160
// Address: 0x12e160 - 0x12e200
void sub_0012E160_0x12e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E160_0x12e160");
#endif

    switch (ctx->pc) {
        case 0x12e184u: goto label_12e184;
        case 0x12e194u: goto label_12e194;
        case 0x12e1a0u: goto label_12e1a0;
        case 0x12e1b0u: goto label_12e1b0;
        case 0x12e1bcu: goto label_12e1bc;
        case 0x12e1c4u: goto label_12e1c4;
        case 0x12e1d0u: goto label_12e1d0;
        case 0x12e1e4u: goto label_12e1e4;
        default: break;
    }

    ctx->pc = 0x12e160u;

    // 0x12e160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e16c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e178: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e17c: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E17Cu;
    SET_GPR_U32(ctx, 31, 0x12E184u);
    ctx->pc = 0x12E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E17Cu;
    // 0x12e180: 0x240503f3  addiu       $a1, $zero, 0x3F3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1011));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E17Cu, 0x12E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E184u;
label_12e184:
    // 0x12e184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e188: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12e188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e18c: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E18Cu;
    SET_GPR_U32(ctx, 31, 0x12E194u);
    ctx->pc = 0x12E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E18Cu;
    // 0x12e190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E18Cu, 0x12E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E194u;
label_12e194:
    // 0x12e194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e198: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E198u;
    SET_GPR_U32(ctx, 31, 0x12E1A0u);
    ctx->pc = 0x12E19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E198u;
    // 0x12e19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E198u, 0x12E1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1A0u;
label_12e1a0:
    // 0x12e1a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x12e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1a8: 0xc046044  jal         func_118110
    ctx->pc = 0x12E1A8u;
    SET_GPR_U32(ctx, 31, 0x12E1B0u);
    ctx->pc = 0x12E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1A8u;
    // 0x12e1ac: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12E1A8u, 0x12E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1B0u;
label_12e1b0:
    // 0x12e1b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1b4: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12E1B4u;
    SET_GPR_U32(ctx, 31, 0x12E1BCu);
    ctx->pc = 0x12E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1B4u;
    // 0x12e1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12E1B4u, 0x12E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1BCu;
label_12e1bc:
    // 0x12e1bc: 0xc0460e4  jal         func_118390
    ctx->pc = 0x12E1BCu;
    SET_GPR_U32(ctx, 31, 0x12E1C4u);
    ctx->pc = 0x12E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1BCu;
    // 0x12e1c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x12E1BCu, 0x12E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1C4u;
label_12e1c4:
    // 0x12e1c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1c8: 0xc0460c4  jal         func_118310
    ctx->pc = 0x12E1C8u;
    SET_GPR_U32(ctx, 31, 0x12E1D0u);
    ctx->pc = 0x12E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1C8u;
    // 0x12e1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x12E1C8u, 0x12E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1D0u;
label_12e1d0:
    // 0x12e1d0: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12e1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e1d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e1d8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12e1dc: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E1DCu;
    SET_GPR_U32(ctx, 31, 0x12E1E4u);
    ctx->pc = 0x12E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E1DCu;
    // 0x12e1e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E1DCu, 0x12E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E1E4u;
label_12e1e4:
    // 0x12e1e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e1e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e1e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e1e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e1ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e1ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e1f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1F4u;
        // 0x12e1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E1FCu;
    // 0x12e1fc: 0x0  nop
    ctx->pc = 0x12e1fcu;
    // NOP
    ctx->pc = 0x12e200u;
}
