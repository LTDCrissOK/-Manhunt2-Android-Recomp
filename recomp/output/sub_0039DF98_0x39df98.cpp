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

// Function: sub_0039DF98
// Address: 0x39df98 - 0x39e018
void sub_0039DF98_0x39df98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DF98_0x39df98");
#endif

    switch (ctx->pc) {
        case 0x39dfbcu: goto label_39dfbc;
        case 0x39dff8u: goto label_39dff8;
        case 0x39e00cu: goto label_39e00c;
        default: break;
    }

    ctx->pc = 0x39df98u;

    // 0x39df98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39df98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39df9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39df9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39dfa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39dfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dfa4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39dfa8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39dfac: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x39DFACu;
    {
        const bool branch_taken_0x39dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dfac) {
            ctx->pc = 0x39DFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFACu;
            // 0x39dfb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E024u;
            return;
        }
    }
    ctx->pc = 0x39DFB4u;
    // 0x39dfb4: 0xc0e6e40  jal         func_39B900
    ctx->pc = 0x39DFB4u;
    SET_GPR_U32(ctx, 31, 0x39DFBCu);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x39DFB4u, 0x39DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DFBCu;
label_39dfbc:
    // 0x39dfbc: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x39DFBCu;
    {
        const bool branch_taken_0x39dfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dfbc) {
            ctx->pc = 0x39DFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFBCu;
            // 0x39dfc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E024u;
            return;
        }
    }
    ctx->pc = 0x39DFC4u;
    // 0x39dfc4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x39dfc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x39dfc8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x39dfc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x39dfcc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x39DFCCu;
    {
        const bool branch_taken_0x39dfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dfcc) {
            ctx->pc = 0x39DFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFCCu;
            // 0x39dfd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E024u;
            return;
        }
    }
    ctx->pc = 0x39DFD4u;
    // 0x39dfd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x39dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39dfd8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x39dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x39dfdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39dfe0: 0x8c63bc20  lw          $v1, -0x43E0($v1)
    ctx->pc = 0x39dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949920)));
    // 0x39dfe4: 0x600008  jr          $v1
    ctx->pc = 0x39DFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39DFF0u: goto label_39dff0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DFE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39DFECu;
    // 0x39dfec: 0x0  nop
    ctx->pc = 0x39dfecu;
    // NOP
label_39dff0:
    // 0x39dff0: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x39DFF0u;
    SET_GPR_U32(ctx, 31, 0x39DFF8u);
    ctx->pc = 0x39DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DFF0u;
    // 0x39dff4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x39DFF0u, 0x39DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DFF8u;
label_39dff8:
    // 0x39dff8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39dffc: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39DFFCu;
    {
        const bool branch_taken_0x39dffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39dffc) {
            ctx->pc = 0x39E000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFFCu;
            // 0x39e000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E024u;
            return;
        }
    }
    ctx->pc = 0x39E004u;
    // 0x39e004: 0xc0e6054  jal         func_398150
    ctx->pc = 0x39E004u;
    SET_GPR_U32(ctx, 31, 0x39E00Cu);
    ctx->pc = 0x39E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E004u;
    // 0x39e008: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398150u, 0x39E004u, 0x39E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E00Cu;
label_39e00c:
    // 0x39e00c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39E00Cu;
    {
        const bool branch_taken_0x39e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E00Cu;
        // 0x39e010: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e00c) {
            ctx->pc = 0x39E024u;
            return;
        }
    }
    ctx->pc = 0x39E014u;
    // 0x39e014: 0x0  nop
    ctx->pc = 0x39e014u;
    // NOP
    ctx->pc = 0x39e018u;
}
