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

// Function: sub_0032F350
// Address: 0x32f350 - 0x32f390
void sub_0032F350_0x32f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F350_0x32f350");
#endif

    ctx->pc = 0x32f350u;

    // 0x32f350: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x32f354: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x32f354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x32f358: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x32f358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x32f35c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32F35Cu;
    {
        const bool branch_taken_0x32f35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F35Cu;
        // 0x32f360: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f35c) {
            ctx->pc = 0x32F384u;
            goto label_32f384;
        }
    }
    ctx->pc = 0x32F364u;
    // 0x32f364: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x32f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x32f368: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32f368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x32f36c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F36Cu;
    {
        const bool branch_taken_0x32f36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32f36c) {
            ctx->pc = 0x32F384u;
            goto label_32f384;
        }
    }
    ctx->pc = 0x32F374u;
    // 0x32f374: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x32f374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x32f378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32f378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f37c: 0x0  nop
    ctx->pc = 0x32f37cu;
    // NOP
    // 0x32f380: 0xe4800378  swc1        $f0, 0x378($a0)
    ctx->pc = 0x32f380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 888), bits); }
label_32f384:
    // 0x32f384: 0x3e00008  jr          $ra
    ctx->pc = 0x32F384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F38Cu;
    // 0x32f38c: 0x0  nop
    ctx->pc = 0x32f38cu;
    // NOP
    ctx->pc = 0x32f390u;
}
