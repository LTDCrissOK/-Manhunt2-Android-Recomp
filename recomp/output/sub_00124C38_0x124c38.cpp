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

// Function: sub_00124C38
// Address: 0x124c38 - 0x124cb0
void sub_00124C38_0x124c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124C38_0x124c38");
#endif

    switch (ctx->pc) {
        case 0x124c60u: goto label_124c60;
        case 0x124c70u: goto label_124c70;
        case 0x124c8cu: goto label_124c8c;
        default: break;
    }

    ctx->pc = 0x124c38u;

    // 0x124c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x124c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124c40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124c4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x124c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x124c54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x124c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c58: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124C58u;
    SET_GPR_U32(ctx, 31, 0x124C60u);
    ctx->pc = 0x124C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C58u;
    // 0x124c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124C58u, 0x124C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C60u;
label_124c60:
    // 0x124c60: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x124C60u;
    {
        const bool branch_taken_0x124c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C60u;
        // 0x124c64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c60) {
            ctx->pc = 0x124C98u;
            goto label_124c98;
        }
    }
    ctx->pc = 0x124C68u;
    // 0x124c68: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124C68u;
    SET_GPR_U32(ctx, 31, 0x124C70u);
    ctx->pc = 0x124C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C68u;
    // 0x124c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124C68u, 0x124C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C70u;
label_124c70:
    // 0x124c70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124C70u;
    {
        const bool branch_taken_0x124c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C70u;
        // 0x124c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c70) {
            ctx->pc = 0x124C94u;
            goto label_124c94;
        }
    }
    ctx->pc = 0x124C78u;
    // 0x124c78: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x124c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124c7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x124c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x124c80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x124c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x124c84: 0xc042d1a  jal         func_10B468
    ctx->pc = 0x124C84u;
    SET_GPR_U32(ctx, 31, 0x124C8Cu);
    ctx->pc = 0x124C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C84u;
    // 0x124c88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B468u, 0x124C84u, 0x124C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C8Cu;
label_124c8c:
    // 0x124c8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124C8Cu;
    {
        const bool branch_taken_0x124c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C8Cu;
        // 0x124c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c8c) {
            ctx->pc = 0x124C9Cu;
            goto label_124c9c;
        }
    }
    ctx->pc = 0x124C94u;
label_124c94:
    // 0x124c94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124c98:
    // 0x124c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124c9c:
    // 0x124c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124ca4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x124ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x124CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CA8u;
        // 0x124cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124CB0u;
}
