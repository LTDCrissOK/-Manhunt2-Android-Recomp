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

// Function: sub_0014BCC8
// Address: 0x14bcc8 - 0x14bd18
void sub_0014BCC8_0x14bcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BCC8_0x14bcc8");
#endif

    switch (ctx->pc) {
        case 0x14bcecu: goto label_14bcec;
        default: break;
    }

    ctx->pc = 0x14bcc8u;

    // 0x14bcc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14bcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14bccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bcd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14bcd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14bcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcd8: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14bcdc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14BCDCu;
    {
        const bool branch_taken_0x14bcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bcdc) {
            ctx->pc = 0x14BCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BCDCu;
            // 0x14bce0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BD08u;
            goto label_14bd08;
        }
    }
    ctx->pc = 0x14BCE4u;
    // 0x14bce4: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x14BCE4u;
    SET_GPR_U32(ctx, 31, 0x14BCECu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x14BCE4u, 0x14BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BCECu;
label_14bcec:
    // 0x14bcec: 0xae000660  sw          $zero, 0x660($s0)
    ctx->pc = 0x14bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 0));
    // 0x14bcf0: 0xae000664  sw          $zero, 0x664($s0)
    ctx->pc = 0x14bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 0));
    // 0x14bcf4: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x14bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
    // 0x14bcf8: 0x7e000670  sq          $zero, 0x670($s0)
    ctx->pc = 0x14bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), GPR_VEC(ctx, 0));
    // 0x14bcfc: 0xae000684  sw          $zero, 0x684($s0)
    ctx->pc = 0x14bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
    // 0x14bd00: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x14bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x14bd04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bd08:
    // 0x14bd08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14bd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD0Cu;
        // 0x14bd10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BD14u;
    // 0x14bd14: 0x0  nop
    ctx->pc = 0x14bd14u;
    // NOP
    ctx->pc = 0x14bd18u;
}
