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

// Function: sub_0013F148
// Address: 0x13f148 - 0x13f1a8
void sub_0013F148_0x13f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F148_0x13f148");
#endif

    switch (ctx->pc) {
        case 0x13f16cu: goto label_13f16c;
        case 0x13f178u: goto label_13f178;
        case 0x13f184u: goto label_13f184;
        case 0x13f194u: goto label_13f194;
        default: break;
    }

    ctx->pc = 0x13f148u;

    // 0x13f148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f154: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13f154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13f15c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f160: 0xae260468  sw          $a2, 0x468($s1)
    ctx->pc = 0x13f160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 6));
    // 0x13f164: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x13F164u;
    SET_GPR_U32(ctx, 31, 0x13F16Cu);
    ctx->pc = 0x13F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F164u;
    // 0x13f168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x13F164u, 0x13F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F16Cu;
label_13f16c:
    // 0x13f16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f170: 0xc046002  jal         func_118008
    ctx->pc = 0x13F170u;
    SET_GPR_U32(ctx, 31, 0x13F178u);
    ctx->pc = 0x13F174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F170u;
    // 0x13f174: 0xae220620  sw          $v0, 0x620($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x13F170u, 0x13F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F178u;
label_13f178:
    // 0x13f178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f17c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x13F17Cu;
    SET_GPR_U32(ctx, 31, 0x13F184u);
    ctx->pc = 0x13F180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F17Cu;
    // 0x13f180: 0xae220624  sw          $v0, 0x624($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x13F17Cu, 0x13F184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F184u;
label_13f184:
    // 0x13f184: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13f184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13f188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f18c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x13F18Cu;
    SET_GPR_U32(ctx, 31, 0x13F194u);
    ctx->pc = 0x13F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F18Cu;
    // 0x13f190: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x13F18Cu, 0x13F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F194u;
label_13f194:
    // 0x13f194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f19c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1A0u;
        // 0x13f1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F1A8u;
}
