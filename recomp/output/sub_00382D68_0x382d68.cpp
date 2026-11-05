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

// Function: sub_00382D68
// Address: 0x382d68 - 0x382de0
void sub_00382D68_0x382d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382D68_0x382d68");
#endif

    switch (ctx->pc) {
        case 0x382d68u: goto label_382d68;
        case 0x382d6cu: goto label_382d6c;
        case 0x382d70u: goto label_382d70;
        case 0x382d74u: goto label_382d74;
        case 0x382d78u: goto label_382d78;
        case 0x382d7cu: goto label_382d7c;
        case 0x382d80u: goto label_382d80;
        case 0x382d84u: goto label_382d84;
        case 0x382d88u: goto label_382d88;
        case 0x382d8cu: goto label_382d8c;
        case 0x382d90u: goto label_382d90;
        case 0x382d94u: goto label_382d94;
        case 0x382d98u: goto label_382d98;
        case 0x382d9cu: goto label_382d9c;
        case 0x382da0u: goto label_382da0;
        case 0x382da4u: goto label_382da4;
        case 0x382da8u: goto label_382da8;
        case 0x382dacu: goto label_382dac;
        case 0x382db0u: goto label_382db0;
        case 0x382db4u: goto label_382db4;
        case 0x382db8u: goto label_382db8;
        case 0x382dbcu: goto label_382dbc;
        case 0x382dc0u: goto label_382dc0;
        case 0x382dc4u: goto label_382dc4;
        case 0x382dc8u: goto label_382dc8;
        case 0x382dccu: goto label_382dcc;
        case 0x382dd0u: goto label_382dd0;
        case 0x382dd4u: goto label_382dd4;
        case 0x382dd8u: goto label_382dd8;
        case 0x382ddcu: goto label_382ddc;
        default: break;
    }

    ctx->pc = 0x382d68u;

label_382d68:
    // 0x382d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x382d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_382d6c:
    // 0x382d6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x382d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_382d70:
    // 0x382d70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x382d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_382d74:
    // 0x382d74: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x382d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_382d78:
    // 0x382d78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x382d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_382d7c:
    // 0x382d7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x382d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382d80:
    // 0x382d80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x382d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_382d84:
    // 0x382d84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x382d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_382d88:
    // 0x382d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_382d8c:
    // 0x382d8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x382d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_382d90:
    // 0x382d90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x382d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_382d94:
    // 0x382d94: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x382d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_382d98:
    // 0x382d98: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x382d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_382d9c:
    // 0x382d9c: 0x40f809  jalr        $v0
label_382da0:
    if (ctx->pc == 0x382DA0u) {
        ctx->pc = 0x382DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D9Cu;
        // 0x382da0: 0x8d040030  lw          $a0, 0x30($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382DA4u;
        goto label_382da4;
    }
    ctx->pc = 0x382D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382DA4u);
        ctx->pc = 0x382DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D9Cu;
        // 0x382da0: 0x8d040030  lw          $a0, 0x30($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382D9Cu, 0x382DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382DA4u;
label_382da4:
    // 0x382da4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_382da8:
    if (ctx->pc == 0x382DA8u) {
        ctx->pc = 0x382DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DA4u;
        // 0x382da8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382DACu;
        goto label_382dac;
    }
    ctx->pc = 0x382DA4u;
    {
        const bool branch_taken_0x382da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382da4) {
            ctx->pc = 0x382DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382DA4u;
            // 0x382da8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382DC4u;
            goto label_382dc4;
        }
    }
    ctx->pc = 0x382DACu;
label_382dac:
    // 0x382dac: 0xa0510010  sb          $s1, 0x10($v0)
    ctx->pc = 0x382dacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 17));
label_382db0:
    // 0x382db0: 0xa0520011  sb          $s2, 0x11($v0)
    ctx->pc = 0x382db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17), (uint8_t)GPR_U32(ctx, 18));
label_382db4:
    // 0x382db4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x382db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_382db8:
    // 0x382db8: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x382db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_382dbc:
    // 0x382dbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x382dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_382dc0:
    // 0x382dc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x382dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_382dc4:
    // 0x382dc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x382dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_382dc8:
    // 0x382dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x382dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382dcc:
    // 0x382dcc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x382dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382dd0:
    // 0x382dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382dd4:
    // 0x382dd4: 0x3e00008  jr          $ra
label_382dd8:
    if (ctx->pc == 0x382DD8u) {
        ctx->pc = 0x382DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DD4u;
        // 0x382dd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382DDCu;
        goto label_382ddc;
    }
    ctx->pc = 0x382DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382DD4u;
        // 0x382dd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382DDCu;
label_382ddc:
    // 0x382ddc: 0x0  nop
    ctx->pc = 0x382ddcu;
    // NOP
    ctx->pc = 0x382de0u;
}
