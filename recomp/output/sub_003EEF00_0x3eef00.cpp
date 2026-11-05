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

// Function: sub_003EEF00
// Address: 0x3eef00 - 0x3eefa8
void sub_003EEF00_0x3eef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EEF00_0x3eef00");
#endif

    switch (ctx->pc) {
        case 0x3eef14u: goto label_3eef14;
        case 0x3eef1cu: goto label_3eef1c;
        case 0x3eef24u: goto label_3eef24;
        case 0x3eef2cu: goto label_3eef2c;
        case 0x3eef34u: goto label_3eef34;
        case 0x3eef3cu: goto label_3eef3c;
        case 0x3eef44u: goto label_3eef44;
        case 0x3eef4cu: goto label_3eef4c;
        case 0x3eef54u: goto label_3eef54;
        default: break;
    }

    ctx->pc = 0x3eef00u;

    // 0x3eef00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3eef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3eef04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eef08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3eef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3eef0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF0Cu;
    SET_GPR_U32(ctx, 31, 0x3EEF14u);
    ctx->pc = 0x3EEF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF0Cu;
    // 0x3eef10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF0Cu, 0x3EEF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF14u;
label_3eef14:
    // 0x3eef14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF14u;
    SET_GPR_U32(ctx, 31, 0x3EEF1Cu);
    ctx->pc = 0x3EEF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF14u;
    // 0x3eef18: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF14u, 0x3EEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF1Cu;
label_3eef1c:
    // 0x3eef1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF1Cu;
    SET_GPR_U32(ctx, 31, 0x3EEF24u);
    ctx->pc = 0x3EEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF1Cu;
    // 0x3eef20: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF1Cu, 0x3EEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF24u;
label_3eef24:
    // 0x3eef24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF24u;
    SET_GPR_U32(ctx, 31, 0x3EEF2Cu);
    ctx->pc = 0x3EEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF24u;
    // 0x3eef28: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF24u, 0x3EEF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF2Cu;
label_3eef2c:
    // 0x3eef2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF2Cu;
    SET_GPR_U32(ctx, 31, 0x3EEF34u);
    ctx->pc = 0x3EEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF2Cu;
    // 0x3eef30: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF2Cu, 0x3EEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF34u;
label_3eef34:
    // 0x3eef34: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF34u;
    SET_GPR_U32(ctx, 31, 0x3EEF3Cu);
    ctx->pc = 0x3EEF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF34u;
    // 0x3eef38: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF34u, 0x3EEF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF3Cu;
label_3eef3c:
    // 0x3eef3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF3Cu;
    SET_GPR_U32(ctx, 31, 0x3EEF44u);
    ctx->pc = 0x3EEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF3Cu;
    // 0x3eef40: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF3Cu, 0x3EEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF44u;
label_3eef44:
    // 0x3eef44: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF44u;
    SET_GPR_U32(ctx, 31, 0x3EEF4Cu);
    ctx->pc = 0x3EEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF44u;
    // 0x3eef48: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF44u, 0x3EEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF4Cu;
label_3eef4c:
    // 0x3eef4c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3EEF4Cu;
    SET_GPR_U32(ctx, 31, 0x3EEF54u);
    ctx->pc = 0x3EEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEF4Cu;
    // 0x3eef50: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3EEF4Cu, 0x3EEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF54u;
label_3eef54:
    // 0x3eef54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3eef54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eef58: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x3eef58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x3eef5c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x3eef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x3eef60: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x3eef60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x3eef64: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3eef64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3eef68: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x3eef68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x3eef6c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x3eef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x3eef70: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x3eef70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x3eef74: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3eef74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x3eef78: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x3eef78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x3eef7c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x3eef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x3eef80: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3eef80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3eef84: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3eef84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x3eef88: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x3eef88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x3eef8c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x3eef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x3eef90: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x3eef90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x3eef94: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x3eef94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x3eef98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eef98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eef9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3eef9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eefa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFA0u;
        // 0x3eefa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEFA8u;
}
