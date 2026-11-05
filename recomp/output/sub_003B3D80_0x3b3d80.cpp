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

// Function: sub_003B3D80
// Address: 0x3b3d80 - 0x3b3e08
void sub_003B3D80_0x3b3d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3D80_0x3b3d80");
#endif

    ctx->pc = 0x3b3d80u;

    // 0x3b3d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b3d84: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3b3d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b3d8c: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3D8Cu;
    {
        const bool branch_taken_0x3b3d8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D8Cu;
        // 0x3b3d90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d8c) {
            ctx->pc = 0x3B3DA8u;
            goto label_3b3da8;
        }
    }
    ctx->pc = 0x3B3D94u;
    // 0x3b3d94: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b3d98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3d9c: 0x248405a0  addiu       $a0, $a0, 0x5A0
    ctx->pc = 0x3b3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    // 0x3b3da0: 0x80ecddc  j           func_3B3770
    ctx->pc = 0x3B3DA0u;
    ctx->pc = 0x3B3DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DA0u;
    // 0x3b3da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3770u;
    sub_003B3770_0x3b3770(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3DA8u;
label_3b3da8:
    // 0x3b3da8: 0x1c800007  bgtz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3DA8u;
    {
        const bool branch_taken_0x3b3da8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x3B3DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DA8u;
        // 0x3b3dac: 0x240302ee  addiu       $v1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3da8) {
            ctx->pc = 0x3B3DC8u;
            goto label_3b3dc8;
        }
    }
    ctx->pc = 0x3B3DB0u;
    // 0x3b3db0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b3db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3db8: 0x248405c8  addiu       $a0, $a0, 0x5C8
    ctx->pc = 0x3b3db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1480));
    // 0x3b3dbc: 0x80ecddc  j           func_3B3770
    ctx->pc = 0x3B3DBCu;
    ctx->pc = 0x3B3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DBCu;
    // 0x3b3dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3770u;
    sub_003B3770_0x3b3770(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3DC4u;
    // 0x3b3dc4: 0x0  nop
    ctx->pc = 0x3b3dc4u;
    // NOP
label_3b3dc8:
    // 0x3b3dc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b3dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3dcc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x3b3dccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b3dd0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B3DD0u;
    {
        const bool branch_taken_0x3b3dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3dd0) {
            ctx->pc = 0x3B3DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3DD0u;
            // 0x3b3dd4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3DD8u;
            goto label_3b3dd8;
        }
    }
    ctx->pc = 0x3B3DD8u;
label_3b3dd8:
    // 0x3b3dd8: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x3b3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x3b3ddc: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x3b3ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3b3de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3de4: 0x1012  mflo        $v0
    ctx->pc = 0x3b3de4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b3de8: 0x28430061  slti        $v1, $v0, 0x61
    ctx->pc = 0x3b3de8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x3b3dec: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x3b3decu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b3df0: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x3b3df0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3b3df4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x3b3df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x3b3df8: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x3b3df8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3b3dfc: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x3b3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x3b3e00: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E00u;
        // 0x3b3e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3E08u;
}
