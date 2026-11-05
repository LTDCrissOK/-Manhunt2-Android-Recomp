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

// Function: sub_003C7140
// Address: 0x3c7140 - 0x3c71a8
void sub_003C7140_0x3c7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7140_0x3c7140");
#endif

    switch (ctx->pc) {
        case 0x3c7168u: goto label_3c7168;
        default: break;
    }

    ctx->pc = 0x3c7140u;

    // 0x3c7140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c7140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c7144: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3c7144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7148: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c714c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c714cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c7154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c7154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7158: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c7158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c715c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3c715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c7160: 0xc0f24d8  jal         func_3C9360
    ctx->pc = 0x3C7160u;
    SET_GPR_U32(ctx, 31, 0x3C7168u);
    ctx->pc = 0x3C7164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7160u;
    // 0x3c7164: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9360u, 0x3C7160u, 0x3C7168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7168u;
label_3c7168:
    // 0x3c7168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c7168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c716c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7170: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7170u;
    {
        const bool branch_taken_0x3c7170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7170u;
        // 0x3c7174: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7170) {
            ctx->pc = 0x3C7180u;
            goto label_3c7180;
        }
    }
    ctx->pc = 0x3C7178u;
    // 0x3c7178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7178u;
    {
        const bool branch_taken_0x3c7178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7178u;
        // 0x3c717c: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7178) {
            ctx->pc = 0x3C7190u;
            goto label_3c7190;
        }
    }
    ctx->pc = 0x3C7180u;
label_3c7180:
    // 0x3c7180: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3c7180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c7184: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c7184u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c7188: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3c7188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3c718c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3c718cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3c7190:
    // 0x3c7190: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c7190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c7194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c7194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7198: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c7198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c719c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c719cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c71a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C71A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C71A0u;
        // 0x3c71a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C71A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C71A8u;
}
