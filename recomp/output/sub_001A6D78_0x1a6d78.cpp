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

// Function: sub_001A6D78
// Address: 0x1a6d78 - 0x1a6de0
void sub_001A6D78_0x1a6d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6D78_0x1a6d78");
#endif

    switch (ctx->pc) {
        case 0x1a6d94u: goto label_1a6d94;
        case 0x1a6dccu: goto label_1a6dcc;
        default: break;
    }

    ctx->pc = 0x1a6d78u;

    // 0x1a6d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6d7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6d84: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x1a6d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a6d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a6d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a6d8c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A6D94u);
    ctx->pc = 0x1A6D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D8Cu;
    // 0x1a6d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6D8Cu, 0x1A6D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D94u;
label_1a6d94:
    // 0x1a6d94: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a6d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a6d98: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1a6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1a6d9c: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A6D9Cu;
    {
        const bool branch_taken_0x1a6d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6d9c) {
            ctx->pc = 0x1A6DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6D9Cu;
            // 0x1a6da0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6DD0u;
            goto label_1a6dd0;
        }
    }
    ctx->pc = 0x1A6DA4u;
    // 0x1a6da4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1a6da8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6DA8u;
    {
        const bool branch_taken_0x1a6da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DA8u;
        // 0x1a6dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6da8) {
            ctx->pc = 0x1A6DD0u;
            goto label_1a6dd0;
        }
    }
    ctx->pc = 0x1A6DB0u;
    // 0x1a6db0: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1a6db0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1a6db4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a6db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a6db8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6DB8u;
    {
        const bool branch_taken_0x1a6db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DB8u;
        // 0x1a6dbc: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6db8) {
            ctx->pc = 0x1A6DD4u;
            goto label_1a6dd4;
        }
    }
    ctx->pc = 0x1A6DC0u;
    // 0x1a6dc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6dc4: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1A6DC4u;
    SET_GPR_U32(ctx, 31, 0x1A6DCCu);
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1A6DC4u, 0x1A6DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DCCu;
label_1a6dcc:
    // 0x1a6dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6dd0:
    // 0x1a6dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a6dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6dd4:
    // 0x1a6dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DD4u;
        // 0x1a6dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6DDCu;
    // 0x1a6ddc: 0x0  nop
    ctx->pc = 0x1a6ddcu;
    // NOP
    ctx->pc = 0x1a6de0u;
}
