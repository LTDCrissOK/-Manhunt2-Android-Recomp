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

// Function: sub_00165EA0
// Address: 0x165ea0 - 0x165f18
void sub_00165EA0_0x165ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165EA0_0x165ea0");
#endif

    switch (ctx->pc) {
        case 0x165ee0u: goto label_165ee0;
        case 0x165ef8u: goto label_165ef8;
        default: break;
    }

    ctx->pc = 0x165ea0u;

    // 0x165ea0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x165ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x165ea4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165ea8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x165ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x165eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165eb0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x165eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x165eb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165eb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165ebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165ec4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x165ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ec8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x165ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x165ecc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x165eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x165ed0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x165ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x165ed4: 0x8c510308  lw          $s1, 0x308($v0)
    ctx->pc = 0x165ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 776)));
    // 0x165ed8: 0xc0597c6  jal         func_165F18
    ctx->pc = 0x165ED8u;
    SET_GPR_U32(ctx, 31, 0x165EE0u);
    ctx->pc = 0x165EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165ED8u;
    // 0x165edc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F18u, 0x165ED8u, 0x165EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EE0u;
label_165ee0:
    // 0x165ee0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x165EE0u;
    {
        const bool branch_taken_0x165ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ee0) {
            ctx->pc = 0x165EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165EE0u;
            // 0x165ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165EFCu;
            goto label_165efc;
        }
    }
    ctx->pc = 0x165EE8u;
    // 0x165ee8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x165ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x165eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ef0: 0xc0597c6  jal         func_165F18
    ctx->pc = 0x165EF0u;
    SET_GPR_U32(ctx, 31, 0x165EF8u);
    ctx->pc = 0x165EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165EF0u;
    // 0x165ef4: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F18u, 0x165EF0u, 0x165EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165EF8u;
label_165ef8:
    // 0x165ef8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x165ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_165efc:
    // 0x165efc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165f00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165f04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165f04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165f08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x165F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165F0Cu;
        // 0x165f10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165F14u;
    // 0x165f14: 0x0  nop
    ctx->pc = 0x165f14u;
    // NOP
    ctx->pc = 0x165f18u;
}
