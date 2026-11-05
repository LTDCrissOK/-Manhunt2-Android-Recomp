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

// Function: sub_001AA688
// Address: 0x1aa688 - 0x1aa6fc
void sub_001AA688_0x1aa688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA688_0x1aa688");
#endif

    switch (ctx->pc) {
        case 0x1aa6a4u: goto label_1aa6a4;
        default: break;
    }

    ctx->pc = 0x1aa688u;

    // 0x1aa688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa694: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aa694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aa698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa69c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AA69Cu;
    SET_GPR_U32(ctx, 31, 0x1AA6A4u);
    ctx->pc = 0x1AA6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA69Cu;
    // 0x1aa6a0: 0x8e060190  lw          $a2, 0x190($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AA69Cu, 0x1AA6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA6A4u;
label_1aa6a4:
    // 0x1aa6a4: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1aa6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1aa6a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aa6ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aa6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1aa6b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aa6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa6b4: 0x2463ff43  addiu       $v1, $v1, -0xBD
    ctx->pc = 0x1aa6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967107));
    // 0x1aa6b8: 0x2c62001c  sltiu       $v0, $v1, 0x1C
    ctx->pc = 0x1aa6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1aa6bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AA6BCu;
    {
        const bool branch_taken_0x1aa6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6BCu;
        // 0x1aa6c0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6bc) {
            ctx->pc = 0x1AA6FCu;
            return;
        }
    }
    ctx->pc = 0x1AA6C4u;
    // 0x1aa6c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1aa6c8: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x1aa6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1aa6cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aa6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aa6d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aa6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa6d4: 0x800008  jr          $a0
    ctx->pc = 0x1AA6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA6DCu: goto label_1aa6dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA6D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AA6DCu;
label_1aa6dc:
    // 0x1aa6dc: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1aa6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aa6e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa6e4: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1aa6e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1aa6e8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1aa6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1aa6ec: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1aa6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1aa6f0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1aa6f4: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1aa6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1aa6f8: 0xa0450030  sb          $a1, 0x30($v0)
    ctx->pc = 0x1aa6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1aa6fcu;
}
