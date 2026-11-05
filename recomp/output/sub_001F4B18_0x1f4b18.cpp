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

// Function: sub_001F4B18
// Address: 0x1f4b18 - 0x1f4ba8
void sub_001F4B18_0x1f4b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4B18_0x1f4b18");
#endif

    ctx->pc = 0x1f4b18u;

    // 0x1f4b18: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x1f4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
    // 0x1f4b1c: 0x2c62005b  sltiu       $v0, $v1, 0x5B
    ctx->pc = 0x1f4b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)91) ? 1 : 0);
    // 0x1f4b20: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F4B20u;
    {
        const bool branch_taken_0x1f4b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B20u;
        // 0x1f4b24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4b20) {
            ctx->pc = 0x1F4BB8u;
            return;
        }
    }
    ctx->pc = 0x1F4B28u;
    // 0x1f4b28: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f4b30: 0x2442f5c0  addiu       $v0, $v0, -0xA40
    ctx->pc = 0x1f4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964672));
    // 0x1f4b34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4b38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f4b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f4b3c: 0x800008  jr          $a0
    ctx->pc = 0x1F4B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4B44u: goto label_1f4b44;
            case 0x1F4B50u: goto label_1f4b50;
            case 0x1F4B5Cu: goto label_1f4b5c;
            case 0x1F4B68u: goto label_1f4b68;
            case 0x1F4B74u: goto label_1f4b74;
            case 0x1F4B80u: goto label_1f4b80;
            case 0x1F4B8Cu: goto label_1f4b8c;
            case 0x1F4B98u: goto label_1f4b98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F4B44u;
label_1f4b44:
    // 0x1f4b44: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b48: 0x2442f510  addiu       $v0, $v0, -0xAF0
    ctx->pc = 0x1f4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964496));
    // 0x1f4b4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4b50:
    // 0x1f4b50: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b54: 0x2442f520  addiu       $v0, $v0, -0xAE0
    ctx->pc = 0x1f4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964512));
    // 0x1f4b58: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4b5c:
    // 0x1f4b5c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b60: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x1f4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x1f4b64: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4b68:
    // 0x1f4b68: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b6c: 0x2442f548  addiu       $v0, $v0, -0xAB8
    ctx->pc = 0x1f4b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964552));
    // 0x1f4b70: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4b74:
    // 0x1f4b74: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b78: 0x2442f558  addiu       $v0, $v0, -0xAA8
    ctx->pc = 0x1f4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964568));
    // 0x1f4b7c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4b80:
    // 0x1f4b80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b84: 0x2442f570  addiu       $v0, $v0, -0xA90
    ctx->pc = 0x1f4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964592));
    // 0x1f4b88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4b8c:
    // 0x1f4b8c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b90: 0x2442f580  addiu       $v0, $v0, -0xA80
    ctx->pc = 0x1f4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964608));
    // 0x1f4b94: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1f4b98:
    // 0x1f4b98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f4b9c: 0x2442f598  addiu       $v0, $v0, -0xA68
    ctx->pc = 0x1f4b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964632));
    // 0x1f4ba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4BA0u;
    {
        const bool branch_taken_0x1f4ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BA0u;
        // 0x1f4ba4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ba0) {
            ctx->pc = 0x1F4BC0u;
            return;
        }
    }
    ctx->pc = 0x1F4BA8u;
}
