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

// Function: sub_00362A90
// Address: 0x362a90 - 0x362ae8
void sub_00362A90_0x362a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A90_0x362a90");
#endif

    switch (ctx->pc) {
        case 0x362a90u: goto label_362a90;
        case 0x362a94u: goto label_362a94;
        case 0x362a98u: goto label_362a98;
        case 0x362a9cu: goto label_362a9c;
        case 0x362aa0u: goto label_362aa0;
        case 0x362aa4u: goto label_362aa4;
        case 0x362aa8u: goto label_362aa8;
        case 0x362aacu: goto label_362aac;
        case 0x362ab0u: goto label_362ab0;
        case 0x362ab4u: goto label_362ab4;
        case 0x362ab8u: goto label_362ab8;
        case 0x362abcu: goto label_362abc;
        case 0x362ac0u: goto label_362ac0;
        case 0x362ac4u: goto label_362ac4;
        case 0x362ac8u: goto label_362ac8;
        case 0x362accu: goto label_362acc;
        case 0x362ad0u: goto label_362ad0;
        case 0x362ad4u: goto label_362ad4;
        case 0x362ad8u: goto label_362ad8;
        case 0x362adcu: goto label_362adc;
        case 0x362ae0u: goto label_362ae0;
        case 0x362ae4u: goto label_362ae4;
        default: break;
    }

    ctx->pc = 0x362a90u;

label_362a90:
    // 0x362a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_362a94:
    // 0x362a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_362a98:
    // 0x362a98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x362a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_362a9c:
    // 0x362a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_362aa0:
    // 0x362aa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x362aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_362aa4:
    // 0x362aa4: 0xc085d2a  jal         func_2174A8
label_362aa8:
    if (ctx->pc == 0x362AA8u) {
        ctx->pc = 0x362AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AA4u;
        // 0x362aa8: 0x8c4400d0  lw          $a0, 0xD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362AACu;
        goto label_362aac;
    }
    ctx->pc = 0x362AA4u;
    SET_GPR_U32(ctx, 31, 0x362AACu);
    ctx->pc = 0x362AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AA4u;
    // 0x362aa8: 0x8c4400d0  lw          $a0, 0xD0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x362AA4u, 0x362AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AACu;
label_362aac:
    // 0x362aac: 0xc083072  jal         func_20C1C8
label_362ab0:
    if (ctx->pc == 0x362AB0u) {
        ctx->pc = 0x362AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AACu;
        // 0x362ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362AB4u;
        goto label_362ab4;
    }
    ctx->pc = 0x362AACu;
    SET_GPR_U32(ctx, 31, 0x362AB4u);
    ctx->pc = 0x362AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AACu;
    // 0x362ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x362AACu, 0x362AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AB4u;
label_362ab4:
    // 0x362ab4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x362ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_362ab8:
    // 0x362ab8: 0xac500220  sw          $s0, 0x220($v0)
    ctx->pc = 0x362ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 16));
label_362abc:
    // 0x362abc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x362abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_362ac0:
    // 0x362ac0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x362ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362ac4:
    // 0x362ac4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x362ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_362ac8:
    // 0x362ac8: 0x8c860218  lw          $a2, 0x218($a0)
    ctx->pc = 0x362ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_362acc:
    // 0x362acc: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x362accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_362ad0:
    // 0x362ad0: 0x40f809  jalr        $v0
label_362ad4:
    if (ctx->pc == 0x362AD4u) {
        ctx->pc = 0x362AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AD0u;
        // 0x362ad4: 0x8c650104  lw          $a1, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362AD8u;
        goto label_362ad8;
    }
    ctx->pc = 0x362AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362AD8u);
        ctx->pc = 0x362AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AD0u;
        // 0x362ad4: 0x8c650104  lw          $a1, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362AD0u, 0x362AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362AD8u;
label_362ad8:
    // 0x362ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_362adc:
    // 0x362adc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x362adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_362ae0:
    // 0x362ae0: 0x3e00008  jr          $ra
label_362ae4:
    if (ctx->pc == 0x362AE4u) {
        ctx->pc = 0x362AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AE0u;
        // 0x362ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362AE8u;
        goto label_fallthrough_0x362ae0;
    }
    ctx->pc = 0x362AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AE0u;
        // 0x362ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362ae0:
    ctx->pc = 0x362AE8u;
}
