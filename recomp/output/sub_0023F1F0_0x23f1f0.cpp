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

// Function: sub_0023F1F0
// Address: 0x23f1f0 - 0x23f250
void sub_0023F1F0_0x23f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F1F0_0x23f1f0");
#endif

    switch (ctx->pc) {
        case 0x23f210u: goto label_23f210;
        case 0x23f218u: goto label_23f218;
        case 0x23f224u: goto label_23f224;
        case 0x23f23cu: goto label_23f23c;
        default: break;
    }

    ctx->pc = 0x23f1f0u;

    // 0x23f1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f1f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23f1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f1fc: 0x24840718  addiu       $a0, $a0, 0x718
    ctx->pc = 0x23f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1816));
    // 0x23f200: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23f204: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x23f204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23f208: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23F208u;
    SET_GPR_U32(ctx, 31, 0x23F210u);
    ctx->pc = 0x23F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F208u;
    // 0x23f20c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23F208u, 0x23F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F210u;
label_23f210:
    // 0x23f210: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x23F210u;
    SET_GPR_U32(ctx, 31, 0x23F218u);
    ctx->pc = 0x23F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F210u;
    // 0x23f214: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x23F210u, 0x23F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F218u;
label_23f218:
    // 0x23f218: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f21c: 0xc076934  jal         func_1DA4D0
    ctx->pc = 0x23F21Cu;
    SET_GPR_U32(ctx, 31, 0x23F224u);
    ctx->pc = 0x23F220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F21Cu;
    // 0x23f220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4D0u, 0x23F21Cu, 0x23F224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F224u;
label_23f224:
    // 0x23f224: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F224u;
    {
        const bool branch_taken_0x23f224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f224) {
            ctx->pc = 0x23F228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F224u;
            // 0x23f228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F240u;
            goto label_23f240;
        }
    }
    ctx->pc = 0x23F22Cu;
    // 0x23f22c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f230: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x23f230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x23f234: 0xc076950  jal         func_1DA540
    ctx->pc = 0x23F234u;
    SET_GPR_U32(ctx, 31, 0x23F23Cu);
    ctx->pc = 0x23F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F234u;
    // 0x23f238: 0x34a57210  ori         $a1, $a1, 0x7210 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA540u, 0x23F234u, 0x23F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F23Cu;
label_23f23c:
    // 0x23f23c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23f23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23f240:
    // 0x23f240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23f244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f248: 0x3e00008  jr          $ra
    ctx->pc = 0x23F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F248u;
        // 0x23f24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F250u;
}
