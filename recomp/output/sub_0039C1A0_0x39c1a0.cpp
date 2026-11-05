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

// Function: sub_0039C1A0
// Address: 0x39c1a0 - 0x39c228
void sub_0039C1A0_0x39c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C1A0_0x39c1a0");
#endif

    switch (ctx->pc) {
        case 0x39c1e8u: goto label_39c1e8;
        default: break;
    }

    ctx->pc = 0x39c1a0u;

    // 0x39c1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c1a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c1ac: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39C1ACu;
    {
        const bool branch_taken_0x39c1ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1ACu;
        // 0x39c1b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1ac) {
            ctx->pc = 0x39C1D0u;
            goto label_39c1d0;
        }
    }
    ctx->pc = 0x39C1B4u;
    // 0x39c1b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39c1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c1bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39c1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c1c0: 0x2484b588  addiu       $a0, $a0, -0x4A78
    ctx->pc = 0x39c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948232));
    // 0x39c1c4: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39C1C4u;
    ctx->pc = 0x39C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1C4u;
    // 0x39c1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39C1CCu;
    // 0x39c1cc: 0x0  nop
    ctx->pc = 0x39c1ccu;
    // NOP
label_39c1d0:
    // 0x39c1d0: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x39c1d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x39c1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c1d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39C1D8u;
    {
        const bool branch_taken_0x39c1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1D8u;
        // 0x39c1dc: 0xa6050040  sh          $a1, 0x40($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1d8) {
            ctx->pc = 0x39C1F0u;
            goto label_39c1f0;
        }
    }
    ctx->pc = 0x39C1E0u;
    // 0x39c1e0: 0xc0e6494  jal         func_399250
    ctx->pc = 0x39C1E0u;
    SET_GPR_U32(ctx, 31, 0x39C1E8u);
    ctx->pc = 0x39C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C1E0u;
    // 0x39c1e4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399250u, 0x39C1E0u, 0x39C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C1E8u;
label_39c1e8:
    // 0x39c1e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39C1E8u;
    {
        const bool branch_taken_0x39c1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1E8u;
        // 0x39c1ec: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1e8) {
            ctx->pc = 0x39C1F8u;
            goto label_39c1f8;
        }
    }
    ctx->pc = 0x39C1F0u;
label_39c1f0:
    // 0x39c1f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39c1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c1f4: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x39c1f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_39c1f8:
    // 0x39c1f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x39c1fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39c1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c200: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39c200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39c204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c208: 0x80e5f50  j           func_397D40
    ctx->pc = 0x39C208u;
    ctx->pc = 0x39C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C208u;
    // 0x39c20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D40u, 0x39C208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39C210u;
    // 0x39c210: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c214: 0x0  nop
    ctx->pc = 0x39c214u;
    // NOP
    // 0x39c218: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c21c: 0x0  nop
    ctx->pc = 0x39c21cu;
    // NOP
    // 0x39c220: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39c224: 0x0  nop
    ctx->pc = 0x39c224u;
    // NOP
    ctx->pc = 0x39c228u;
}
