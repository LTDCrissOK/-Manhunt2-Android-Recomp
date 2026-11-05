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

// Function: sub_001572B8
// Address: 0x1572b8 - 0x157300
void sub_001572B8_0x1572b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001572B8_0x1572b8");
#endif

    switch (ctx->pc) {
        case 0x1572dcu: goto label_1572dc;
        default: break;
    }

    ctx->pc = 0x1572b8u;

    // 0x1572b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1572bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1572bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1572c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1572c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1572c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1572c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1572c8: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1572c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1572cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1572CCu;
    {
        const bool branch_taken_0x1572cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1572cc) {
            ctx->pc = 0x1572D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1572CCu;
            // 0x1572d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1572F0u;
            goto label_1572f0;
        }
    }
    ctx->pc = 0x1572D4u;
    // 0x1572d4: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x1572D4u;
    SET_GPR_U32(ctx, 31, 0x1572DCu);
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x1572D4u, 0x1572DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572DCu;
label_1572dc:
    // 0x1572dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1572e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1572e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1572e4: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x1572e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x1572e8: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1572e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x1572ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1572ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1572f0:
    // 0x1572f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1572f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1572f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1572F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1572F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572F4u;
        // 0x1572f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1572F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1572FCu;
    // 0x1572fc: 0x0  nop
    ctx->pc = 0x1572fcu;
    // NOP
    ctx->pc = 0x157300u;
}
