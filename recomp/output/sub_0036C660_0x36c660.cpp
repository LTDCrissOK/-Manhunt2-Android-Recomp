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

// Function: sub_0036C660
// Address: 0x36c660 - 0x36c6b8
void sub_0036C660_0x36c660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C660_0x36c660");
#endif

    switch (ctx->pc) {
        case 0x36c68cu: goto label_36c68c;
        case 0x36c698u: goto label_36c698;
        case 0x36c6a4u: goto label_36c6a4;
        default: break;
    }

    ctx->pc = 0x36c660u;

    // 0x36c660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c664: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36c664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36c668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c66c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c670: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x36c670u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x36c674: 0x26101f00  addiu       $s0, $s0, 0x1F00
    ctx->pc = 0x36c674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7936));
    // 0x36c678: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x36c678u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C1F08u));
    // 0x36c67c: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x36c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x36c680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36c684: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C684u;
    SET_GPR_U32(ctx, 31, 0x36C68Cu);
    ctx->pc = 0x36C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C684u;
    // 0x36c688: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C684u, 0x36C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C68Cu;
label_36c68c:
    // 0x36c68c: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x36c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x36c690: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C690u;
    SET_GPR_U32(ctx, 31, 0x36C698u);
    ctx->pc = 0x36C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C690u;
    // 0x36c694: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C690u, 0x36C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C698u;
label_36c698:
    // 0x36c698: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x36c698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x36c69c: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36C69Cu;
    SET_GPR_U32(ctx, 31, 0x36C6A4u);
    ctx->pc = 0x36C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C69Cu;
    // 0x36c6a0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36C69Cu, 0x36C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6A4u;
label_36c6a4:
    // 0x36c6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c6a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x36C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C6ACu;
        // 0x36c6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C6B4u;
    // 0x36c6b4: 0x0  nop
    ctx->pc = 0x36c6b4u;
    // NOP
    ctx->pc = 0x36c6b8u;
}
