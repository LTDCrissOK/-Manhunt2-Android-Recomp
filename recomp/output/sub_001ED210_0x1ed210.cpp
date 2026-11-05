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

// Function: sub_001ED210
// Address: 0x1ed210 - 0x1ed294
void sub_001ED210_0x1ed210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED210_0x1ed210");
#endif

    ctx->pc = 0x1ed210u;

    // 0x1ed210: 0x2523ffd8  addiu       $v1, $t1, -0x28
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967256));
    // 0x1ed214: 0x2c62005c  sltiu       $v0, $v1, 0x5C
    ctx->pc = 0x1ed214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1ed218: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED218u;
    {
        const bool branch_taken_0x1ed218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED218u;
        // 0x1ed21c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed218) {
            ctx->pc = 0x1ED2ACu;
            return;
        }
    }
    ctx->pc = 0x1ED220u;
    // 0x1ed220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed224: 0x2442da70  addiu       $v0, $v0, -0x2590
    ctx->pc = 0x1ed224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957680));
    // 0x1ed228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ed228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed22c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ed22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed230: 0x800008  jr          $a0
    ctx->pc = 0x1ED230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED238u: goto label_1ed238;
            case 0x1ED248u: goto label_1ed248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED230u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ED238u;
label_1ed238:
    // 0x1ed238: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed23c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ed23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ed240: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1ED240u;
    {
        const bool branch_taken_0x1ed240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED240u;
        // 0x1ed244: 0x2442da38  addiu       $v0, $v0, -0x25C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed240) {
            ctx->pc = 0x1ED2A0u;
            return;
        }
    }
    ctx->pc = 0x1ED248u;
label_1ed248:
    // 0x1ed248: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ed248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ed24c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1ed24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1ed250: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ed254: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ed254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ed258: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ed258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ed25c: 0x2442da38  addiu       $v0, $v0, -0x25C8
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957624));
    // 0x1ed260: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ed264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ed264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed268: 0x2463da48  addiu       $v1, $v1, -0x25B8
    ctx->pc = 0x1ed268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957640));
    // 0x1ed26c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ed26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ed270: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1ed270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1ed274: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x1ed274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x1ed278: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x1ed278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x1ed27c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1ed27cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1ed280: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x1ed280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1ed284: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ed284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ed288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ed28c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ED28Cu;
    {
        const bool branch_taken_0x1ed28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED28Cu;
        // 0x1ed290: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed28c) {
            ctx->pc = 0x1ED2B4u;
            return;
        }
    }
    ctx->pc = 0x1ED294u;
}
