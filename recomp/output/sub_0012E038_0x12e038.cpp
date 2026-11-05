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

// Function: sub_0012E038
// Address: 0x12e038 - 0x12e0e8
void sub_0012E038_0x12e038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E038_0x12e038");
#endif

    switch (ctx->pc) {
        case 0x12e05cu: goto label_12e05c;
        case 0x12e06cu: goto label_12e06c;
        case 0x12e078u: goto label_12e078;
        case 0x12e088u: goto label_12e088;
        case 0x12e094u: goto label_12e094;
        case 0x12e09cu: goto label_12e09c;
        case 0x12e0a8u: goto label_12e0a8;
        case 0x12e0b0u: goto label_12e0b0;
        case 0x12e0bcu: goto label_12e0bc;
        case 0x12e0d0u: goto label_12e0d0;
        default: break;
    }

    ctx->pc = 0x12e038u;

    // 0x12e038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e03c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e040: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e044: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e048: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e050: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e054: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E054u;
    SET_GPR_U32(ctx, 31, 0x12E05Cu);
    ctx->pc = 0x12E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E054u;
    // 0x12e058: 0x240503d0  addiu       $a1, $zero, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E054u, 0x12E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E05Cu;
label_12e05c:
    // 0x12e05c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e060: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x12e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12e064: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E064u;
    SET_GPR_U32(ctx, 31, 0x12E06Cu);
    ctx->pc = 0x12E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E064u;
    // 0x12e068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E064u, 0x12E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E06Cu;
label_12e06c:
    // 0x12e06c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e070: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E070u;
    SET_GPR_U32(ctx, 31, 0x12E078u);
    ctx->pc = 0x12E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E070u;
    // 0x12e074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E070u, 0x12E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E078u;
label_12e078:
    // 0x12e078: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x12e078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12e07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e080: 0xc046002  jal         func_118008
    ctx->pc = 0x12E080u;
    SET_GPR_U32(ctx, 31, 0x12E088u);
    ctx->pc = 0x12E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E080u;
    // 0x12e084: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x12E080u, 0x12E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E088u;
label_12e088:
    // 0x12e088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e08c: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x12E08Cu;
    SET_GPR_U32(ctx, 31, 0x12E094u);
    ctx->pc = 0x12E090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E08Cu;
    // 0x12e090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x12E08Cu, 0x12E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E094u;
label_12e094:
    // 0x12e094: 0xc046272  jal         func_1189C8
    ctx->pc = 0x12E094u;
    SET_GPR_U32(ctx, 31, 0x12E09Cu);
    ctx->pc = 0x12E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E094u;
    // 0x12e098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x12E094u, 0x12E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E09Cu;
label_12e09c:
    // 0x12e09c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0a0: 0xc046256  jal         func_118958
    ctx->pc = 0x12E0A0u;
    SET_GPR_U32(ctx, 31, 0x12E0A8u);
    ctx->pc = 0x12E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0A0u;
    // 0x12e0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x12E0A0u, 0x12E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0A8u;
label_12e0a8:
    // 0x12e0a8: 0xc0460e4  jal         func_118390
    ctx->pc = 0x12E0A8u;
    SET_GPR_U32(ctx, 31, 0x12E0B0u);
    ctx->pc = 0x12E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0A8u;
    // 0x12e0ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x12E0A8u, 0x12E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0B0u;
label_12e0b0:
    // 0x12e0b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0b4: 0xc0460c4  jal         func_118310
    ctx->pc = 0x12E0B4u;
    SET_GPR_U32(ctx, 31, 0x12E0BCu);
    ctx->pc = 0x12E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0B4u;
    // 0x12e0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x12E0B4u, 0x12E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0BCu;
label_12e0bc:
    // 0x12e0bc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e0c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0c4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12e0c8: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E0C8u;
    SET_GPR_U32(ctx, 31, 0x12E0D0u);
    ctx->pc = 0x12E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E0C8u;
    // 0x12e0cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E0C8u, 0x12E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0D0u;
label_12e0d0:
    // 0x12e0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e0d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e0d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e0dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12E0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0E0u;
        // 0x12e0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E0E8u;
}
