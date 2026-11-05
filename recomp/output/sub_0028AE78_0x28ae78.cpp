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

// Function: sub_0028AE78
// Address: 0x28ae78 - 0x28aed8
void sub_0028AE78_0x28ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AE78_0x28ae78");
#endif

    switch (ctx->pc) {
        case 0x28aeccu: goto label_28aecc;
        default: break;
    }

    ctx->pc = 0x28ae78u;

    // 0x28ae78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ae7c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28ae80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ae84: 0x2465ac88  addiu       $a1, $v1, -0x5378
    ctx->pc = 0x28ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945928));
    // 0x28ae88: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x28ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BACA0u));
    // 0x28ae8c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28AE8Cu;
    {
        const bool branch_taken_0x28ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE8Cu;
        // 0x28ae90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae8c) {
            ctx->pc = 0x28AECCu;
            goto label_28aecc;
        }
    }
    ctx->pc = 0x28AE94u;
    // 0x28ae94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ae98: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x28ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x28ae9c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x28ae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28aea0: 0xaca60168  sw          $a2, 0x168($a1)
    ctx->pc = 0x28aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 360), GPR_U32(ctx, 6));
    // 0x28aea4: 0xac83a510  sw          $v1, -0x5AF0($a0)
    ctx->pc = 0x28aea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FA510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA510u, _value); } while (0);
    // 0x28aea8: 0xaca3014c  sw          $v1, 0x14C($a1)
    ctx->pc = 0x28aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 3));
    // 0x28aeac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28AEACu;
    {
        const bool branch_taken_0x28aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEACu;
        // 0x28aeb0: 0xaca30148  sw          $v1, 0x148($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aeac) {
            ctx->pc = 0x28AECCu;
            goto label_28aecc;
        }
    }
    ctx->pc = 0x28AEB4u;
    // 0x28aeb4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x28aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x28aeb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x28aeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x28aebc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28aebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28aec0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x28aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x28aec4: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x28AEC4u;
    SET_GPR_U32(ctx, 31, 0x28AECCu);
    ctx->pc = 0x28AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEC4u;
    // 0x28aec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x28AEC4u, 0x28AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AECCu;
label_28aecc:
    // 0x28aecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28aeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aed0: 0x3e00008  jr          $ra
    ctx->pc = 0x28AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AED0u;
        // 0x28aed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AED8u;
}
