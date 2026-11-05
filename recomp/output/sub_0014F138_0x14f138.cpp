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

// Function: sub_0014F138
// Address: 0x14f138 - 0x14f1a8
void sub_0014F138_0x14f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F138_0x14f138");
#endif

    switch (ctx->pc) {
        case 0x14f184u: goto label_14f184;
        default: break;
    }

    ctx->pc = 0x14f138u;

    // 0x14f138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14f13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14f144: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x14f144u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f14c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f150: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14f154: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14f154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14f158: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14f15c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x14f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x14f160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f164: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f168: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14f168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14f16c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14f170: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x14f170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x14f174: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F174u;
    {
        const bool branch_taken_0x14f174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f174) {
            ctx->pc = 0x14F178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F174u;
            // 0x14f178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F198u;
            goto label_14f198;
        }
    }
    ctx->pc = 0x14F17Cu;
    // 0x14f17c: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x14F17Cu;
    SET_GPR_U32(ctx, 31, 0x14F184u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x14F17Cu, 0x14F184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F184u;
label_14f184:
    // 0x14f184: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f188: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x14f188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14f18c: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x14f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x14f190: 0xac6204f8  sw          $v0, 0x4F8($v1)
    ctx->pc = 0x14f190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1272), GPR_U32(ctx, 2));
    // 0x14f194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14f194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14f198:
    // 0x14f198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14f198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f19c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1A0u;
        // 0x14f1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F1A8u;
}
