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

// Function: sub_002D3E48
// Address: 0x2d3e48 - 0x2d3ed8
void sub_002D3E48_0x2d3e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3E48_0x2d3e48");
#endif

    switch (ctx->pc) {
        case 0x2d3e94u: goto label_2d3e94;
        case 0x2d3ea8u: goto label_2d3ea8;
        default: break;
    }

    ctx->pc = 0x2d3e48u;

    // 0x2d3e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3e4c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2d3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2d3e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3e54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d3e60: 0x24633dc8  addiu       $v1, $v1, 0x3DC8
    ctx->pc = 0x2d3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15816));
    // 0x2d3e64: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2d3e68: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d3e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2d3e6c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2d3e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2d3e70: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2d3e74: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2d3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2d3e78: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2d3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2d3e7c: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x2d3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x2d3e80: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2d3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2d3e84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d3e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d3e88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d3e8c: 0xc0c9a92  jal         func_326A48
    ctx->pc = 0x2D3E8Cu;
    SET_GPR_U32(ctx, 31, 0x2D3E94u);
    ctx->pc = 0x2D3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3E8Cu;
    // 0x2d3e90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326A48u, 0x2D3E8Cu, 0x2D3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3E94u;
label_2d3e94:
    // 0x2d3e94: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2d3e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3e98: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x2d3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2d3e9c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2d3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2d3ea0: 0x260201bc  addiu       $v0, $s0, 0x1BC
    ctx->pc = 0x2d3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x2d3ea4: 0x0  nop
    ctx->pc = 0x2d3ea4u;
    // NOP
label_2d3ea8:
    // 0x2d3ea8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d3eac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d3eb0: 0x0  nop
    ctx->pc = 0x2d3eb0u;
    // NOP
    // 0x2d3eb4: 0x0  nop
    ctx->pc = 0x2d3eb4u;
    // NOP
    // 0x2d3eb8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D3EB8u;
    {
        const bool branch_taken_0x2d3eb8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3EB8u;
        // 0x2d3ebc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3eb8) {
            ctx->pc = 0x2D3EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3ea8;
        }
    }
    ctx->pc = 0x2D3EC0u;
    // 0x2d3ec0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ec4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d3ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3ECCu;
        // 0x2d3ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3ED4u;
    // 0x2d3ed4: 0x0  nop
    ctx->pc = 0x2d3ed4u;
    // NOP
    ctx->pc = 0x2d3ed8u;
}
