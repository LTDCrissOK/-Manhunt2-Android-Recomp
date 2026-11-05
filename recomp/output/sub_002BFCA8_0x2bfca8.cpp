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

// Function: sub_002BFCA8
// Address: 0x2bfca8 - 0x2bfd08
void sub_002BFCA8_0x2bfca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFCA8_0x2bfca8");
#endif

    switch (ctx->pc) {
        case 0x2bfcbcu: goto label_2bfcbc;
        case 0x2bfcd0u: goto label_2bfcd0;
        case 0x2bfcf0u: goto label_2bfcf0;
        default: break;
    }

    ctx->pc = 0x2bfca8u;

    // 0x2bfca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfcac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfcb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bfcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bfcb4: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFCB4u;
    SET_GPR_U32(ctx, 31, 0x2BFCBCu);
    ctx->pc = 0x2BFCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCB4u;
    // 0x2bfcb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFCB4u, 0x2BFCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCBCu;
label_2bfcbc:
    // 0x2bfcbc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bfcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bfcc0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bfcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bfcc4: 0x246339e8  addiu       $v1, $v1, 0x39E8
    ctx->pc = 0x2bfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14824));
    // 0x2bfcc8: 0xc0b004e  jal         func_2C0138
    ctx->pc = 0x2BFCC8u;
    SET_GPR_U32(ctx, 31, 0x2BFCD0u);
    ctx->pc = 0x2BFCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCC8u;
    // 0x2bfccc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0138u, 0x2BFCC8u, 0x2BFCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCD0u;
label_2bfcd0:
    // 0x2bfcd0: 0x24034020  addiu       $v1, $zero, 0x4020
    ctx->pc = 0x2bfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16416));
    // 0x2bfcd4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2bfcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bfcd8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bfcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bfcdc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bfcdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfce0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bfce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfce4: 0x24845188  addiu       $a0, $a0, 0x5188
    ctx->pc = 0x2bfce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20872));
    // 0x2bfce8: 0xc0f9ea8  jal         func_3E7AA0
    ctx->pc = 0x2BFCE8u;
    SET_GPR_U32(ctx, 31, 0x2BFCF0u);
    ctx->pc = 0x2BFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCE8u;
    // 0x2bfcec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AA0u, 0x2BFCE8u, 0x2BFCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCF0u;
label_2bfcf0:
    // 0x2bfcf0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bfcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bfcf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfcf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfcf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bfcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfcfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfcfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfd00: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD00u;
        // 0x2bfd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFD08u;
}
