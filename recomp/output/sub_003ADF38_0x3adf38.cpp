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

// Function: sub_003ADF38
// Address: 0x3adf38 - 0x3adfd8
void sub_003ADF38_0x3adf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADF38_0x3adf38");
#endif

    ctx->pc = 0x3adf38u;

    // 0x3adf38: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3adf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3adf3c: 0x948c009a  lhu         $t4, 0x9A($a0)
    ctx->pc = 0x3adf3cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x3adf40: 0x8c8f003c  lw          $t7, 0x3C($a0)
    ctx->pc = 0x3adf40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3adf44: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x3adf44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3adf48: 0x8c8e0040  lw          $t6, 0x40($a0)
    ctx->pc = 0x3adf48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x3adf4c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3adf4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3adf50: 0x8c8d0044  lw          $t5, 0x44($a0)
    ctx->pc = 0x3adf50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x3adf54: 0x3407bb80  ori         $a3, $zero, 0xBB80
    ctx->pc = 0x3adf54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x3adf58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3adf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3adf5c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3adf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3adf60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3adf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3adf64: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x3adf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3adf68: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3adf68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3adf6c: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x3adf6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3adf70: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x3adf70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x3adf74: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x3adf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x3adf78: 0xa083000e  sb          $v1, 0xE($a0)
    ctx->pc = 0x3adf78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x3adf7c: 0xa085000d  sb          $a1, 0xD($a0)
    ctx->pc = 0x3adf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x3adf80: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x3adf80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x3adf84: 0xa086000f  sb          $a2, 0xF($a0)
    ctx->pc = 0x3adf84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 6));
    // 0x3adf88: 0xa48c0098  sh          $t4, 0x98($a0)
    ctx->pc = 0x3adf88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 12));
    // 0x3adf8c: 0xac880050  sw          $t0, 0x50($a0)
    ctx->pc = 0x3adf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
    // 0x3adf90: 0xac890054  sw          $t1, 0x54($a0)
    ctx->pc = 0x3adf90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 9));
    // 0x3adf94: 0xac8b0058  sw          $t3, 0x58($a0)
    ctx->pc = 0x3adf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 11));
    // 0x3adf98: 0xac8f005c  sw          $t7, 0x5C($a0)
    ctx->pc = 0x3adf98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 15));
    // 0x3adf9c: 0xac8e0060  sw          $t6, 0x60($a0)
    ctx->pc = 0x3adf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 14));
    // 0x3adfa0: 0xac8d0064  sw          $t5, 0x64($a0)
    ctx->pc = 0x3adfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 13));
    // 0x3adfa4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x3adfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x3adfa8: 0xac8b0010  sw          $t3, 0x10($a0)
    ctx->pc = 0x3adfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 11));
    // 0x3adfac: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x3adfacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x3adfb0: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x3adfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x3adfb4: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x3adfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x3adfb8: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x3adfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x3adfbc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3adfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3adfc0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3adfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3adfc4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3adfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x3adfc8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3adfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3adfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFCCu;
        // 0x3adfd0: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADFD4u;
    // 0x3adfd4: 0x0  nop
    ctx->pc = 0x3adfd4u;
    // NOP
    ctx->pc = 0x3adfd8u;
}
