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

// Function: sub_0028DC70
// Address: 0x28dc70 - 0x28dd50
void sub_0028DC70_0x28dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DC70_0x28dc70");
#endif

    switch (ctx->pc) {
        case 0x28dc90u: goto label_28dc90;
        case 0x28dc98u: goto label_28dc98;
        case 0x28dd08u: goto label_28dd08;
        case 0x28dd10u: goto label_28dd10;
        case 0x28dd20u: goto label_28dd20;
        default: break;
    }

    ctx->pc = 0x28dc70u;

    // 0x28dc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28dc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28dc78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28dc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28dc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28dc80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28dc88: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x28DC88u;
    SET_GPR_U32(ctx, 31, 0x28DC90u);
    ctx->pc = 0x28DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC88u;
    // 0x28dc8c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x28DC88u, 0x28DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC90u;
label_28dc90:
    // 0x28dc90: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x28DC90u;
    SET_GPR_U32(ctx, 31, 0x28DC98u);
    ctx->pc = 0x28DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC90u;
    // 0x28dc94: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x28DC90u, 0x28DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC98u;
label_28dc98:
    // 0x28dc98: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x28dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x28dc9c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x28dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x28dca0: 0xfe000038  sd          $zero, 0x38($s0)
    ctx->pc = 0x28dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 0));
    // 0x28dca4: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x28dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x28dca8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x28dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x28dcac: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x28dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x28dcb0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x28dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x28dcb4: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x28dcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x28dcb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x28dcbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcc0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x28dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x28dcc4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x28dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x28dcc8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x28dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x28dccc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x28dcd0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x28dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x28dcd4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x28dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x28dcd8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x28dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x28dcdc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x28dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x28dce0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x28dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x28dce4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x28dce8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x28dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x28dcec: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x28dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x28dcf0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x28dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x28dcf4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x28dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x28dcf8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x28dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x28dcfc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x28dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x28dd00: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x28DD00u;
    SET_GPR_U32(ctx, 31, 0x28DD08u);
    ctx->pc = 0x28DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD00u;
    // 0x28dd04: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x28DD00u, 0x28DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD08u;
label_28dd08:
    // 0x28dd08: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x28DD08u;
    SET_GPR_U32(ctx, 31, 0x28DD10u);
    ctx->pc = 0x28DD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD08u;
    // 0x28dd0c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x28DD08u, 0x28DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD10u;
label_28dd10:
    // 0x28dd10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28dd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd18: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x28DD18u;
    SET_GPR_U32(ctx, 31, 0x28DD20u);
    ctx->pc = 0x28DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DD18u;
    // 0x28dd1c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x28DD18u, 0x28DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DD20u;
label_28dd20:
    // 0x28dd20: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28dd24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28dd24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dd28: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x28dd28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x28dd2c: 0xa2030033  sb          $v1, 0x33($s0)
    ctx->pc = 0x28dd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x28dd30: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x28dd30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x28dd34: 0xa2030031  sb          $v1, 0x31($s0)
    ctx->pc = 0x28dd34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x28dd38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dd38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dd3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28dd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28dd40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28dd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dd44: 0x3e00008  jr          $ra
    ctx->pc = 0x28DD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD44u;
        // 0x28dd48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DD4Cu;
    // 0x28dd4c: 0x0  nop
    ctx->pc = 0x28dd4cu;
    // NOP
    ctx->pc = 0x28dd50u;
}
