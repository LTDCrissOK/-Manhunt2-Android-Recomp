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

// Function: sub_0016EA18
// Address: 0x16ea18 - 0x16eaa0
void sub_0016EA18_0x16ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EA18_0x16ea18");
#endif

    switch (ctx->pc) {
        case 0x16ea4cu: goto label_16ea4c;
        case 0x16ea78u: goto label_16ea78;
        case 0x16ea90u: goto label_16ea90;
        default: break;
    }

    ctx->pc = 0x16ea18u;

    // 0x16ea18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ea1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ea20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ea24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ea24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea28: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x16ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x16ea2c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x16ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16ea30: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x16ea30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16ea34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EA34u;
    {
        const bool branch_taken_0x16ea34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea34) {
            ctx->pc = 0x16EA44u;
            goto label_16ea44;
        }
    }
    ctx->pc = 0x16EA3Cu;
    // 0x16ea3c: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16EA3Cu;
    {
        const bool branch_taken_0x16ea3c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x16EA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA3Cu;
        // 0x16ea40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea3c) {
            ctx->pc = 0x16EA90u;
            goto label_16ea90;
        }
    }
    ctx->pc = 0x16EA44u;
label_16ea44:
    // 0x16ea44: 0xc05a618  jal         func_169860
    ctx->pc = 0x16EA44u;
    SET_GPR_U32(ctx, 31, 0x16EA4Cu);
    ctx->pc = 0x16EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA44u;
    // 0x16ea48: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16EA44u, 0x16EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA4Cu;
label_16ea4c:
    // 0x16ea4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16ea4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ea50: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16EA50u;
    {
        const bool branch_taken_0x16ea50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA50u;
        // 0x16ea54: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea50) {
            ctx->pc = 0x16EA80u;
            goto label_16ea80;
        }
    }
    ctx->pc = 0x16EA58u;
    // 0x16ea58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16ea58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ea5c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16ea60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ea64: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x16ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16ea68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16EA68u;
    {
        const bool branch_taken_0x16ea68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ea68) {
            ctx->pc = 0x16EA80u;
            goto label_16ea80;
        }
    }
    ctx->pc = 0x16EA70u;
    // 0x16ea70: 0xc04392e  jal         func_10E4B8
    ctx->pc = 0x16EA70u;
    SET_GPR_U32(ctx, 31, 0x16EA78u);
    ctx->pc = 0x10E4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4B8u, 0x16EA70u, 0x16EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA78u;
label_16ea78:
    // 0x16ea78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16EA78u;
    {
        const bool branch_taken_0x16ea78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA78u;
        // 0x16ea7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ea78) {
            ctx->pc = 0x16EA90u;
            goto label_16ea90;
        }
    }
    ctx->pc = 0x16EA80u;
label_16ea80:
    // 0x16ea80: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x16ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x16ea84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16ea84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16ea88: 0xc05bacc  jal         func_16EB30
    ctx->pc = 0x16EA88u;
    SET_GPR_U32(ctx, 31, 0x16EA90u);
    ctx->pc = 0x16EA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EA88u;
    // 0x16ea8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EB30u, 0x16EA88u, 0x16EA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EA90u;
label_16ea90:
    // 0x16ea90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ea90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ea94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ea94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ea98: 0x3e00008  jr          $ra
    ctx->pc = 0x16EA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EA98u;
        // 0x16ea9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EAA0u;
}
