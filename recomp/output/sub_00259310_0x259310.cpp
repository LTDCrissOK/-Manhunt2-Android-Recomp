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

// Function: sub_00259310
// Address: 0x259310 - 0x259358
void sub_00259310_0x259310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259310_0x259310");
#endif

    ctx->pc = 0x259310u;

    // 0x259310: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x259310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x259314: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x259314u;
    {
        const bool branch_taken_0x259314 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x259314) {
            ctx->pc = 0x259350u;
            goto label_259350;
        }
    }
    ctx->pc = 0x25931Cu;
    // 0x25931c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x25931Cu;
    {
        const bool branch_taken_0x25931c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x259320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25931Cu;
        // 0x259320: 0x3c04004b  lui         $a0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25931c) {
            ctx->pc = 0x259350u;
            goto label_259350;
        }
    }
    ctx->pc = 0x259324u;
    // 0x259324: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x259324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x259328: 0x24823d20  addiu       $v0, $a0, 0x3D20
    ctx->pc = 0x259328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
    // 0x25932c: 0xac803d20  sw          $zero, 0x3D20($a0)
    ctx->pc = 0x25932cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15648), GPR_U32(ctx, 0));
    // 0x259330: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x259330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x259334: 0x24a33d30  addiu       $v1, $a1, 0x3D30
    ctx->pc = 0x259334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    // 0x259338: 0xaca03d30  sw          $zero, 0x3D30($a1)
    ctx->pc = 0x259338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B3D30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D30u, _value); } while (0);
    // 0x25933c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x25933cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B3D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D3Cu, _value); } while (0);
    // 0x259340: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x259340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x259344: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x259344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x259348: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x259348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B3D34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D34u, _value); } while (0);
    // 0x25934c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x25934cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B3D38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D38u, _value); } while (0);
label_259350:
    // 0x259350: 0x3e00008  jr          $ra
    ctx->pc = 0x259350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259358u;
}
