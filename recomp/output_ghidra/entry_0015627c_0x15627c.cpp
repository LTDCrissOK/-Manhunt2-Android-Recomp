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

// Function: entry_0015627c
// Address: 0x15627c - 0x1562b8
void entry_0015627c_0x15627c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015627c_0x15627c");
#endif

    switch (ctx->pc) {
        case 0x156288u: goto label_156288;
        default: break;
    }

    ctx->pc = 0x15627cu;

    // 0x15627c: 0x8e030520  lw          $v1, 0x520($s0)
    ctx->pc = 0x15627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x156280: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x156280u;
    SET_GPR_U32(ctx, 31, 0x156288u);
    ctx->pc = 0x156284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156280u;
    // 0x156284: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x156280u, 0x156288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156288u;
label_156288:
    // 0x156288: 0x8e030520  lw          $v1, 0x520($s0)
    ctx->pc = 0x156288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x15628c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x156290: 0x5462002a  bnel        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x156290u;
    {
        const bool branch_taken_0x156290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x156290) {
            ctx->pc = 0x156294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156290u;
            // 0x156294: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15633Cu;
            return;
        }
    }
    ctx->pc = 0x156298u;
    // 0x156298: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x156298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15629c: 0x26439a08  addiu       $v1, $s2, -0x65F8
    ctx->pc = 0x15629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x1562a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1562a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1562a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1562a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1562a8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x1562a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1562ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1562ACu;
    {
        const bool branch_taken_0x1562ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1562ac) {
            ctx->pc = 0x1562B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1562ACu;
            // 0x1562b0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1562BCu;
            return;
        }
    }
    ctx->pc = 0x1562B4u;
    // 0x1562b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1562B4u;
    {
        const bool branch_taken_0x1562b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1562b4) {
            ctx->pc = 0x1562C4u;
            return;
        }
    }
    ctx->pc = 0x1562BCu;
}
