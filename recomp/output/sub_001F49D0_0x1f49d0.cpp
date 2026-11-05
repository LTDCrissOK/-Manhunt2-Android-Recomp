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

// Function: sub_001F49D0
// Address: 0x1f49d0 - 0x1f4ac4
void sub_001F49D0_0x1f49d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F49D0_0x1f49d0");
#endif

    ctx->pc = 0x1f49d0u;

    // 0x1f49d0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f49d4: 0x24a5ffd8  addiu       $a1, $a1, -0x28
    ctx->pc = 0x1f49d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x1f49d8: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x1f49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x1f49dc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f49dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f49e0: 0x2ca2005c  sltiu       $v0, $a1, 0x5C
    ctx->pc = 0x1f49e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)92) ? 1 : 0);
    // 0x1f49e4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1F49E4u;
    {
        const bool branch_taken_0x1f49e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F49E4u;
        // 0x1f49e8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f49e4) {
            ctx->pc = 0x1F4AD4u;
            return;
        }
    }
    ctx->pc = 0x1F49ECu;
    // 0x1f49ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f49f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f49f4: 0x2442f3a0  addiu       $v0, $v0, -0xC60
    ctx->pc = 0x1f49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964128));
    // 0x1f49f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f49fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4a00: 0x800008  jr          $a0
    ctx->pc = 0x1F4A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4A08u: goto label_1f4a08;
            case 0x1F4A14u: goto label_1f4a14;
            case 0x1F4A24u: goto label_1f4a24;
            case 0x1F4A34u: goto label_1f4a34;
            case 0x1F4A44u: goto label_1f4a44;
            case 0x1F4A54u: goto label_1f4a54;
            case 0x1F4A64u: goto label_1f4a64;
            case 0x1F4A74u: goto label_1f4a74;
            case 0x1F4A84u: goto label_1f4a84;
            case 0x1F4A94u: goto label_1f4a94;
            case 0x1F4AA4u: goto label_1f4aa4;
            case 0x1F4AB4u: goto label_1f4ab4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4A00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F4A08u;
label_1f4a08:
    // 0x1f4a08: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a0c: 0x2442f268  addiu       $v0, $v0, -0xD98
    ctx->pc = 0x1f4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963816));
    // 0x1f4a10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4a14:
    // 0x1f4a14: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a18: 0x2442f280  addiu       $v0, $v0, -0xD80
    ctx->pc = 0x1f4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
    // 0x1f4a1c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F4A1Cu;
    {
        const bool branch_taken_0x1f4a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A1Cu;
        // 0x1f4a20: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a1c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A24u;
label_1f4a24:
    // 0x1f4a24: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a28: 0x2442f298  addiu       $v0, $v0, -0xD68
    ctx->pc = 0x1f4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963864));
    // 0x1f4a2c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1F4A2Cu;
    {
        const bool branch_taken_0x1f4a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A2Cu;
        // 0x1f4a30: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a2c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A34u;
label_1f4a34:
    // 0x1f4a34: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a38: 0x2442f2b0  addiu       $v0, $v0, -0xD50
    ctx->pc = 0x1f4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963888));
    // 0x1f4a3c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1F4A3Cu;
    {
        const bool branch_taken_0x1f4a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A3Cu;
        // 0x1f4a40: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a3c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A44u;
label_1f4a44:
    // 0x1f4a44: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a48: 0x2442f2c8  addiu       $v0, $v0, -0xD38
    ctx->pc = 0x1f4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963912));
    // 0x1f4a4c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F4A4Cu;
    {
        const bool branch_taken_0x1f4a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A4Cu;
        // 0x1f4a50: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a4c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A54u;
label_1f4a54:
    // 0x1f4a54: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a58: 0x2442f2d8  addiu       $v0, $v0, -0xD28
    ctx->pc = 0x1f4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963928));
    // 0x1f4a5c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F4A5Cu;
    {
        const bool branch_taken_0x1f4a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A5Cu;
        // 0x1f4a60: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a5c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A64u;
label_1f4a64:
    // 0x1f4a64: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a68: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x1f4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
    // 0x1f4a6c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F4A6Cu;
    {
        const bool branch_taken_0x1f4a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A6Cu;
        // 0x1f4a70: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a6c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A74u;
label_1f4a74:
    // 0x1f4a74: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a78: 0x2442f308  addiu       $v0, $v0, -0xCF8
    ctx->pc = 0x1f4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963976));
    // 0x1f4a7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F4A7Cu;
    {
        const bool branch_taken_0x1f4a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A7Cu;
        // 0x1f4a80: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a7c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A84u;
label_1f4a84:
    // 0x1f4a84: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a88: 0x2442f328  addiu       $v0, $v0, -0xCD8
    ctx->pc = 0x1f4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964008));
    // 0x1f4a8c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F4A8Cu;
    {
        const bool branch_taken_0x1f4a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A8Cu;
        // 0x1f4a90: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a8c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4A94u;
label_1f4a94:
    // 0x1f4a94: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4a98: 0x2442f340  addiu       $v0, $v0, -0xCC0
    ctx->pc = 0x1f4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964032));
    // 0x1f4a9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F4A9Cu;
    {
        const bool branch_taken_0x1f4a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A9Cu;
        // 0x1f4aa0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a9c) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4AA4u;
label_1f4aa4:
    // 0x1f4aa4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4aa8: 0x2442f350  addiu       $v0, $v0, -0xCB0
    ctx->pc = 0x1f4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964048));
    // 0x1f4aac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F4AACu;
    {
        const bool branch_taken_0x1f4aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AACu;
        // 0x1f4ab0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4aac) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4AB4u;
label_1f4ab4:
    // 0x1f4ab4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4ab8: 0x2442f368  addiu       $v0, $v0, -0xC98
    ctx->pc = 0x1f4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964072));
    // 0x1f4abc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4ABCu;
    {
        const bool branch_taken_0x1f4abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ABCu;
        // 0x1f4ac0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4abc) {
            ctx->pc = 0x1F4ADCu;
            return;
        }
    }
    ctx->pc = 0x1F4AC4u;
}
