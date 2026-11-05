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

// Function: sub_003C7058
// Address: 0x3c7058 - 0x3c70c0
void sub_003C7058_0x3c7058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7058_0x3c7058");
#endif

    switch (ctx->pc) {
        case 0x3c7080u: goto label_3c7080;
        default: break;
    }

    ctx->pc = 0x3c7058u;

    // 0x3c7058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c7058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c705c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3c705cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7060: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c7064: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c7064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c706c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c706cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7070: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3c7070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7074: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3c7074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c7078: 0xc0f24f0  jal         func_3C93C0
    ctx->pc = 0x3C7078u;
    SET_GPR_U32(ctx, 31, 0x3C7080u);
    ctx->pc = 0x3C707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7078u;
    // 0x3c707c: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C93C0u, 0x3C7078u, 0x3C7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7080u;
label_3c7080:
    // 0x3c7080: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3c7080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c7084: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c7084u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c7088: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7088u;
    {
        const bool branch_taken_0x3c7088 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3c7088) {
            ctx->pc = 0x3C708Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7088u;
            // 0x3c708c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C70A0u;
            goto label_3c70a0;
        }
    }
    ctx->pc = 0x3C7090u;
    // 0x3c7090: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3c7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3c7094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7098: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7098u;
    {
        const bool branch_taken_0x3c7098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7098u;
        // 0x3c709c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7098) {
            ctx->pc = 0x3C70A8u;
            goto label_3c70a8;
        }
    }
    ctx->pc = 0x3C70A0u;
label_3c70a0:
    // 0x3c70a0: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x3c70a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x3c70a4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3c70a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3c70a8:
    // 0x3c70a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c70a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c70ac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c70acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c70b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c70b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c70b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C70B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70B4u;
        // 0x3c70b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C70B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C70BCu;
    // 0x3c70bc: 0x0  nop
    ctx->pc = 0x3c70bcu;
    // NOP
    ctx->pc = 0x3c70c0u;
}
